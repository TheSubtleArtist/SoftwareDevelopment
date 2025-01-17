$('#attributesList').addClass('red');
$('h1').html("I Changed the Text").addClass("red");


console.log($(".textInputClass").attr("type"));

$(".textInputClass").attr('type', 'radio');
//$(".textInputClass").attr('type', 'text');

console.log($('h1').hasClass());
$('#formHeaderID').addClass('red');
console.log($('h1').hasClass('red'));
$('#formHeaderID').removeClass('red');
console.log($('h1').hasClass('red'));

console.log($('.jImage').attr("src")) // only returns the attributes of the first occurrence
$('#jImageTwo').attr('src', 'https://placehold.co/400?text=ChangedText')


var temptext = $('#jImageOne').val();
console.log("jImageOne Value: ", temptext);

var tempSelect=$('#dropdownId').val();
console.log(tempSelect);
$('#dropdownId').val('Two')