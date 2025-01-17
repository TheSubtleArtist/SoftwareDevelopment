$("li").css({
    color: "red",
    border: "1px solid blue",
    fontSize: "26px",
    backgroundColor: "yellow"
});

$('#firstOne').css({
    color: "green"
})

$('#replaceMe').text("This is New Text");
$('.classOne').html("Hello<br>World");
$('.classTwo').append("<p>Here is the append</p> ");
$('.red').prepend('<p>Here is the Prepend</p>');
$(' #attributes div').addClass('red');

