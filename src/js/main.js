$(function() {
  $('.menu-link').off('click').on('click', function() {
    $('aside').slideToggle();
  });

  $('.widget_rss a, .menu-item-object-custom a').attr('target', '_blank');
});
