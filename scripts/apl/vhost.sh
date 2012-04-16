#!/bin/bash

    if [ -n "$1" ]
    then
    DOMAIN=$1
    else
    echo “You must provide a full domain name for this site, i.e. ‘example.com’ ”
    echo -n “Run this script like ./script example.com .”
    exit
    fi
    
    VHOST_CONF=/etc/apache2/sites-available/
    ROOT_UID=0
    NOTROOT=87
    WWW_ROOT=/home/quickstart/websites/droopy/

    DOC_ROOT=$WWW_ROOT$DOMAIN/austin-go
    
SHARED='/home/quickstart/Desktop/vbox-shared/mysql/'

cd $SHARED

SQL=$(ls | tail -1)   

# Check if is root
#    if [ "$UID" -ne "$ROOT_UID" ]
#    then
#    echo “You must be root to run this script.”
#    exit $NOTROOT
#    fi



# Create document root site folder

mkdir -p $DOC_ROOT

CONF='<VirtualHost *:80>\n
  ServerName '$DOMAIN'\n
  ServerAlias *.'$DOMAIN'\n
  DocumentRoot '$DOC_ROOT'\n
  <Directory '$DOC_ROOT'>\n
    Options Indexes FollowSymLinks MultiViews\n
    AllowOverride All\n
    Order allow,deny\n
    allow from all\n
  </Directory>\n
</VirtualHost>\n
<IfModule mod_ssl.c>\n
  <VirtualHost *:443>\n
    ServerName '$DOMAIN'\n
    ServerAlias *.'$DOMAIN'\n
    DocumentRoot '$DOC_ROOT'\n
    <Directory '$DOC_ROOT'>\n
      Options Indexes FollowSymLinks MultiViews\n
      AllowOverride All\n
      Order allow,deny\n
      allow from all\n
    </Directory>\n
    SSLEngine on\n
    SSLCertificateFile    /etc/ssl/certs/ssl-cert-snakeoil.pem\n
    SSLCertificateKeyFile /etc/ssl/private/ssl-cert-snakeoil.key\n
  </VirtualHost>\n
</IfModule>'

    echo -e $CONF > $VHOST_CONF/$DOMAIN
       
    chmod 777 $VHOST_CONF/$DOMAIN
    chmod 777 $DOC_ROOT
    
    echo "127.0.0.1  $DOMAIN" >> /etc/hosts
    
foo=$DOMAIN
string='.'
replace='_'

DB=${DOMAIN//$string/$replace}


 mysql -uroot -pquickstart -v -e "CREATE DATABASE $DB"
 mysql -uroot -pquickstart -v -e "USE $DB"

 mysql -uroot -pquickstart -v $DB < $SQL    

cd $DOC_ROOT
cd ..

git clone git@coaaustingodev.austintexas.gov:austin-go.git
cd austin-go
git checkout lib_dev    
git branch    
git pull
    
wait
    
cp ~/Desktop/settings.php $DOC_ROOT/sites/default/settings.php   
chmod 755 ~/Desktop/settings.php $DOC_ROOT/sites/default/settings.php  


vi $DOC_ROOT/sites/default/settings.php +208s/changeme/$DB/ +wq
# sudo chgrp www-data $DOC_ROOT/sites/default/setings.php


#sudo chown -R www-data:www-data $DOC_ROOT   
#sudo chown -R quickstart:quickstart $DOC_ROOT/.git

mkdir $DOC_ROOT/sites/default/files
sudo chmod 777 $DOC_ROOT/sites/default/files
    
cd $DOC_ROOT 
drush cc all
    
sudo a2ensite $DOMAIN

sudo apachectl restart

/usr/bin/firefox http://$DOMAIN
    
exit 0

