$(document).ready(function(){
    console.log('Doucment is Ready');

    // Display Effect
    $('#effectsButtonOne').on('click',function(){
        $('#effectsHeaderOne').show();
    })
    $('#effectsButtonTwo').on('click',function(){
        $('#effectsHeaderOne').hide();
    })
    $('#effectsButtonThree').on('click',function(){
        $('#effectsHeaderOne').toggle();
    })


    // FADE EFFECT
    $('#fadeButtonOne').on('click', function(){
        $('#effectsHeaderTwo').fadeIn('slow');
    })
    $('#fadeButtonTwo').on('click', function(){
        $('#effectsHeaderTwo').fadeOut('slow');
    })
    $('#fadeButtonThree').on('click', function(){
        $('#effectsHeaderTwo').fadeToggle(1500, function(){
            alert('Toggle Complete');
        });
    })

    // SLIDE EFFECT
    $('#slideButtonOne').on('click', function(){
        $('#effectsHeaderThree').slideUp('slow');
    })
    $('#slideButtonTwo').on('click', function(){
        $('#effectsHeaderThree').slideDown('slow');
    })
    $('#slideButtonThree').on('click', function(){
        $('#effectsHeaderThree').slideToggle(3000, function(){
            alert('Toggle Complete');
        });
    })

    // ANIMATION EFFECTS
    $('#animeButtonOne').click(function(){
        $('#effectsHeaderOne').animate({
            right:'200px',
            width:'100px'
        })
    })

    $('#animeButtonTwo').click(function(){
        $('#effectsHeaderTwo').animate({
            right:'400px',
            width:'+=20',
            fontSize:'40px'
        }, 1000,function(){
            alert('Button Two Animation complete.')
        })
    })

})