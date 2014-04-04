(function ($) {
	$(document).ready(function () {
	// calculating width of parent for the placement of navigation div
	var rightParentWid = parseInt($('#rightButton').parent().outerWidth());
	var rightWid = parseInt($('#rightButton').outerWidth()) / 1.2;
	// positioning right navigation div
	$('#rightButton').css({ 'left': rightParentWid - rightWid + 'px' });
	// Code to run on mouse hover on parent div
	$('#ParentDiv').hover(function () {
		$('#leftButton,#rightButton').animate({ 'opacity': '0.5' }, { duration: 500, queue: true });
	}, function () {
		$('#leftButton,#rightButton').animate({ 'opacity': '0' }, { duration: 500, queue: true });
	});
// variables to hold id of set Interval so we can call clear Interval for those IDs
var rightVar, leftVar;
// setting interval for starting animation again on while mouse is over right div
$('#rightButton').stop(true, true).hover(function () {
rightVar = setInterval(rightHover, 1000);
}, function () {
clearInterval(rightVar);
});
// setting interval for starting animation again on while mouse is over left div
$('#leftButton').stop(true, true).hover(function () {
leftVar = setInterval(leftHover, 1000);
}, function () {
clearInterval(leftVar);
});


	// function for right div mouse hover
	function rightHover() {
		// here we are checking the left of child so we can run our animation until it reaches to last image
		// if two gets equal then this will reverse the image back to start position so animation can run from beginning
		if (parseInt($('#ChildDiv').css('left')) != ($('#ChildDiv').parent().width() - $('#ChildDiv').width())) {
		// to move images to left we will set left property of child div to negative direction
		$('#ChildDiv').stop(true).animate({ 'left': '-=' + $('#ChildDiv img').width() }, 500, 'easeOutBounce');
		} else {
		$('#ChildDiv').stop(true).animate({ 'left': 0 }, 500, 'easeOutBounce');
		}
	}
 
function leftHover() {
if ((parseInt($('#ChildDiv').css('left')) != 0) && ($('#ChildDiv').css('left') != 'auto')) {
// to move images to right we will set left property of child div to positive direction
$('#ChildDiv').stop(true).animate({ 'left': '+=' + $('#ChildDiv img').width() }, 500, 'easeOutBounce');
}
else {
$('#ChildDiv').stop(true).animate({ 'left': $('#ChildDiv').parent().width() - $('#ChildDiv').width() }, 500, 'easeOutBounce');
}
}
});
});