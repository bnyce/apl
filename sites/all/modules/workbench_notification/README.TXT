/**
 * @file
 * README file for Workbench Notification.
 */

<h1>Workbench Notification</h1>
<p>Lightweight approval notification system.</p>

<h2>CONTENTS</h2>
--------
1.  Introduction
2.  Installation
2.1  Requirements
3.  Configuration
3.3.1  Recommended permissions
4.  Using the module
5.  Troubleshooting
6.  Developer notes
6.1  Database schema
6.2  Views integration
7.  Feature roadmap

----
<h2>1.  Introduction</h2>
<p>
The Workbench Notification module was designed to assist decentralized 
organizations in reviewing and publishing web content. This solution
leverages the existing email platform and allows the author/publisher to 
determine when and whom to seek approval from.
</p>
<p>
A typical workflow:
</p>
<ol>
<li>The Author creates the original version of the content item.</li>
<li>The Author (using WB Moderation) moves the content from DRAFT to NEEDS REVIEW
   state.</li>
<li>The Author then has the option to select one or more Reviewers that should be
   notified.</li>
<li>The Author enters (optionally) additional review request text and "DUE BY" 
   date, and presses SAVE.</li>
<li>The saving of the notification request fires a trigger, which automatically 
   emails an HTML formatted messages to each of the selected reviewers.</li>
<li>Each of the Reviewers receives an email which contains a preview of the 
   content. They can then select a hyperlink in the email message and be taken 
   to the content on the site to review.</li>
<li>At the top of the content page there is a "Single-Click Approval Form". They 
   can enter a comment and press COMMENT or APPROVE. Approvals and comments are 
   saved to the Node's log. Alternatively, privileged users can select EDIT to 
   edit the content directly.</li>
<li>Another trigger is fired and the original Author is emailed with the 
   Reviewer's comment and approval (if given).</li>
<li>As additional Reviewers review content additional emails are automatically 
   sent. Each email contains a tally.</li>
<li>At any time the Author or Reviewers can visit the Moderation tab of the Node 
    to view review and approval comments chronologically.</li>
<li>At any time in the process, if the Author has been granted publication 
    rights, they can move the content from NEEDS REVIEW to PUBLISHED state.</li>
<li>Another trigger is fired and an HTML formatted email messages is sent to the 
    Author and each of the Reviewers advising them that the content has been 
    published.</li>
</ol>
<p>
The module creates custom triggers and actions, which can be configured through 
the Triggers and Actions administrative interface. The module was designed to 
enable quick review and approvals using email enabled smartphones.
</p>
<p>
The custom module leverages the following contrib and core modules: 
Workbench Access, Entity API, Token, Actions and Triggers. 
</p>
<hr>
<h2>2.  Installation</h2>
<ol>
<li>Download and install Workbench Notification.</li>
<li>Configure permissions for roles.  The permissions are:
<ul>
  <li>Submit Workbench Notification Requests - Allow users to submit notification requests.<li>
  <li>Receive Workbench Notification Requests - Adds users to option list of notification request recipients.<li>  
  <li>Access Workbench Notification's Approval Form - Allow users to access one-click approval form.<li>
</ul>


</ol>


primary author: chris luther, chris@agileid.com

