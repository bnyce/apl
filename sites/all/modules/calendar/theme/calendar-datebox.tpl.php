<?php
/**
 * @file 
 * Template to display the date box in a calendar.
 *
 * - $view: The view.
 * - $granularity: The type of calendar this box is in -- year, month, day, or week.
 * - $mini: Whether or not this is a mini calendar.
 * - $class: The class for this box -- mini-on, mini-off, or day.
 * - $day:  The day of the month.
 * - $date: The current date, in the form YYYY-MM-DD.
 * - $link: A formatted link to the calendar day view for this day.
 * - $url:  The url to the calendar day view for this day.
 * - $selected: Whether or not this day has any items.
 * - $items: An array of items for this day.
 */
// workaround for youth calendar //
// the url in the day view is y2, but it's difficult to override its view //
$link = str_replace('/y2/','/y/', $link);
$link = str_replace('/recycled-reads2/','/recycled-reads/', $link);
$link = str_replace('/events2/','/events/', $link);
$link = str_replace('/rooms2/','/rooms/', $link);

?>
<div class="<?php print $granularity ?> <?php print $class; ?>"> <?php print !empty($selected) ? $link : $day; ?> </div>
