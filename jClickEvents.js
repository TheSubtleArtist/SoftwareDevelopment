$(document).ready(function(){
    console.log('Doucment is Ready');


    $('#pageHeaderDiv').click(function(){
        alert("You clicked the Header");
        $('.pageHeaderClass').text('Clicking the Header Changed the Text');
    });


    // working with only an active item among many
    $('li').click(function(){
        alert('Clicked')
        $(this).text("Differnt Text");
        $(this).toggleClass('red');
    })



    // MOUSE EVENTS

    $('h2').hover(function(){
        $(this).toggleClass('blue')
    })

    $('h2').mouseenter(function(){
        $(this).addClass('bold')
    }).mouseout(function(){
        $(this).removeClass('bold')
    })


    // KEYBOARD EVENTS
    $("#textareaId").keydown(function(evenVariable){
        console.log('Key Code: ',eventVariable.keyCode);
        console.log('Entire Event: ', eventVariable);
        if(eventVariable.keyCode === 13){
            alert('Secret Key Pressed');
        }
    })

    //"On" Event Listener
    $('#imagesAndForms').on('click', function(){
        alert('ON event listener')
    })
    $('#imagesAndForms').on('mouseenter', function(){
        $(this).addClass('blue')
    })
    $('#imagesAndForms').on('mouseleave', function(){
        $(this).removeClass('blue')
    })


})