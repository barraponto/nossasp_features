(function ($) {
  Drupal.behaviors.NossaspOrganizationNodeForm = function (context) {
    $('.cadastro #edit-primaryterm-wrapper + p', context).click(function(event){
      $(this).next('.form-item').toggle('slow'); 
      event.preventDefault();
    });

    var $addressfields = $('#edit-field-street-0-value-wrapper, #edit-field-street-0-value-wrapper', context);

    $('#edit-field-tipo-value', context).change(function(){
      if ($(this).val() == '22') {
        $addressfields.hide('slow');
      }
      else {
        $addressfields.show('slow');
      }
    }).change();
  }
} )(jQuery);
