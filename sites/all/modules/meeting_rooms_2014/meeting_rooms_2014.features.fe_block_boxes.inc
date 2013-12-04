<?php
/**
 * @file
 * meeting_rooms_2014.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function meeting_rooms_2014_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Meeting Rooms pages announcement';
  $fe_block_boxes->format = 'truly_unfiltered_html';
  $fe_block_boxes->machine_name = 'mr_2014';
  $fe_block_boxes->body = '<div class="messages warning">
<h2>Meeting Rooms for 2014</h2>
<a href="http://library.austintexas.gov/basic-page/meeting-room-reservations-how-guide-group-representatives">Meeting Room Reservations--How to Guide for Group Representatives</a>
<p>Please follow the instructions above for requesting a Meeting Room for 2014.</p></div>

<div class="messages error">If you are requesting a room for 2014, please <a href="http://library.austintexas.gov/basic-page/meeting-room-reservations-how-guide-group-representatives">follow these guidelines</a>.</div>';

  $export['mr_2014'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Instructions for registering a new account';
  $fe_block_boxes->format = 'truly_unfiltered_html';
  $fe_block_boxes->machine_name = 'mr_step_0';
  $fe_block_boxes->body = '<div class="messages status">
	<ol>
		<li class="this_step">Register a New Account for yourself ...or Log In</li>
   		<li>Create a New Group ...or Choose a Group that you represent</li>
		<li>Request a meeting room for your group</li>
       </ol>
	<em>Please allow 5 business days for Austin Public Library staff to confirm your request.</em>
</div>';

  $export['mr_step_0'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Instructions for logging in';
  $fe_block_boxes->format = 'truly_unfiltered_html';
  $fe_block_boxes->machine_name = 'mr_step_0b';
  $fe_block_boxes->body = '<div class="messages status">
	<ol>
		<li class="this_step">Register a New Account for yourself ...or Log In</li>
   		<li>Create a New Group ...or Choose a Group that you represent</li>
		<li>Request a meeting room for your group</li>
       </ol>
	<em>Please allow 5 business days for Austin Public Library staff to confirm your request.</em>
</div>';

  $export['mr_step_0b'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Instructions for choosing a group';
  $fe_block_boxes->format = 'truly_unfiltered_html';
  $fe_block_boxes->machine_name = 'mr_step_2b';
  $fe_block_boxes->body = '<div class="messages status">
	<ol>
		<li>Register a New Account for yourself ...or Log In</li>
   		<li class="this_step">Create a New Group ...or Choose a Group that you represent</li>
		<li>Request a meeting room for your group</li>
       </ol>
	<em>Please allow 5 business days for Austin Public Library staff to confirm your request.</em>
</div>';

  $export['mr_step_2b'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Instructions for requesting a meeting room';
  $fe_block_boxes->format = 'truly_unfiltered_html';
  $fe_block_boxes->machine_name = 'mr_step_3';
  $fe_block_boxes->body = '<div class="messages status">
	<ol>
		<li>Register a New Account for yourself ...or Log In</li>
   		<li>Create a New Group ...or Choose a Group that you represent</li>
		<li class="this_step">Request a meeting room for your group</li>
       </ol>
	<em>Please allow 5 business days for Austin Public Library staff to confirm your request.</em>
</div>';

  $export['mr_step_3'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Instructions for registering a new group';
  $fe_block_boxes->format = 'truly_unfiltered_html';
  $fe_block_boxes->machine_name = 'mr_step_two';
  $fe_block_boxes->body = '<div class="messages status">
  <ol>
  <li>Register a New Account for yourself ...or Log In</li>
  <li class="this_step">Create a New Group ...or Choose a Group that you represent</li>
  <li>Request a meeting room for your group</li>
  </ol>
</div>';

  $export['mr_step_two'] = $fe_block_boxes;

  return $export;
}
