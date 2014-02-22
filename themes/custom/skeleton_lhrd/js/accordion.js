(function($){$(document).ready(function(){
  $('.expanded').click(function(event){
    if($(event.target).parent().hasClass('expanded')){
      accordionSlide(this);
      return false;
    }
  });
  function accordionSlide(target){
    $(target).find('ul').stop(true,true).slideToggle();
    $(target).toggleClass('accordion');
  }
  accordionSlide($('.expanded'));
})})(jQuery);
