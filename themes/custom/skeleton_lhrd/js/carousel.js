(function($){$(window).load(function(){

// edit to change target element
var target = '#pane-lhrd-indexpanels-img';

if($(target).length>0){
// add images here, img[0] is default background of target
var img=[
  $(target).css('background-image'),
  'url(' + Drupal.settings.basePath + Drupal.settings.themePath + '/images/home_inlib_girlread_grey.jpg)',
];

// edit to change speeds, in milliseconds
var speed_change = 6400;
var speed_fade   =  300;

var e=img[0];var t=true;(function r(e){var i=img[e];if(t==false){$(target).fadeOut(speed_fade,function(){$(target).css('background-image',i)});$(target).fadeIn(speed_fade)}else{t=false}delete img[e];img.push(i);setTimeout(function(){r(e+1)},speed_change)})(0)}})})(jQuery);
