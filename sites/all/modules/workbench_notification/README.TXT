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
1.  Introduction

The Workbench Notification module was designed to assist decentralized 
organizations in reviewing and publishing web content. This solution
leverages the existing email platform and allows the author/publisher to 
determine when and whom to seek approval from.

A typical workflow:
1. The Author creates the original version of the content item.
2. The Author (using WB Moderation) moves the content from DRAFT to NEEDS REVIEW
   state.
3. The Author then has the option to select one or more Reviewers that should be
   notified.
4. The Author enters (optionally) additional review request text and "DUE BY" 
   date, and presses SAVE.
5. The saving of the notification request fires a trigger, which automatically 
   emails an HTML formatted messages to each of the selected reviewers.
6. Each of the Reviewers receives an email which contains a preview of the 
   content. They can then select a hyperlink in the email message and be taken 
   to the content on the site to review.
7. At the top of the content page there is a "Single-Click Approval Form". They 
   can enter a comment and press COMMENT or APPROVE. Approvals and comments are 
   saved to the Node's log. Alternatively, privileged users can select EDIT to 
   edit the content directly.
8. Another trigger is fired and the original Author is emailed with the 
   Reviewer's comment and approval (if given).
9. As additional Reviewers review content additional emails are automatically 
   sent. Each email contains a tally.
10. At any time the Author or Reviewers can visit the Moderation tab of the Node 
    to view review and approval comments chronologically.
11. At any time in the process, if the Author has been granted publication 
    rights, they can move the content from NEEDS REVIEW to PUBLISHED state.
12. Another trigger is fired and an HTML formatted email messages is sent to the 
    Author and each of the Reviewers advising them that the content has been 
    published.

The module creates custom triggers and actions, which can be configured through 
the Triggers and Actions administrative interface. The module was designed to 
enable quick review and approvals using email enabled smartphones.

The custom module leverages the following contrib and core modules: 
Workbench Access, Entity API, Token, Actions and Triggers. 

<2.  Installation

1. Download and install Workbench Notification.
2. Configure permissions for roles and add users to roles.  
   The permissions are:
   - Submit Workbench Notification Requests - This enables users to submit 
       notification requests.
  - Receive Workbench Notification Requests - This adds users to the option list 
       of possible notification request recipients. 
  - Access Workbench Notification's Approval Form - This allows users to access 
      the one-click approval form.
3. Configure Actions (admin/config/system/actions).  
   3a. From the CREATE AN ADVANCED ACTION menu select "Send HTML mail to all 
   recipients of a workbench notification" and press CREATE. You may customize 
   the label, subject and message for the action message and press SAVE.
   3a. From the CREATE AN ADVANCED ACTION menu select "Send email in standard
   format to creator of a workbench notification" and press CREATE. You may 
   customize the label, subject and message for the action message and press 
   SAVE.
   NOTE: Workbench Notification tokens are not currently working.
4. Configure Triggers (dmin/structure/trigger/node).
   3a. From the WORKBENCH NOTIFICATION tab assign "Send HTML mail to all 
   recipients of a workbench notification" to the A NEW WORKBENCH NOTIFICATION
   MESSAGE HAS BEEN CREATED.
   3a. From the WORKBENCH NOTIFICATION tab assign "Send email in standard
   format to creator of a workbench notification" to the "WORKBENCH NOTIFICATION
   MESSAGE WAS UPDATED."
5. In the workbench_notification.module file add any custom content type to the
   $TYPES global. NOTE: An administrative UI will eventually be provided.
   Only WORKBENCH MODERATED types of content are supported.
 6.In Blocks (/structure/blocks) verify that the "Workbench Notificaiton One-
   Click Approval Form Block" is placed in an appropriate area (default is 
   Above Content).





primary author: chris luther, chris@agileid.com

