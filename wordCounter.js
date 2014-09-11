var e = jQuery.Event("keyup");
e.which = 32; // # Some key code value

$('#inputfield').trigger('keyup');

for(var counter = 0; counter < 344; counter++) {
    var word = $('#row1 span[wordnr=' + counter + ']').html();
    $('#inputfield').val(word);

    $("#inputfield").trigger(e);

}