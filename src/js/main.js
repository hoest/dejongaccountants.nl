$(function() {
  $('.menu-link').off('click').on('click', function() {
    $('aside').slideToggle();
  });
});
