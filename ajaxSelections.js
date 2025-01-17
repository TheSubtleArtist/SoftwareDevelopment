$(document).ready(function(){
    console.log('Doucment is Ready');
    
    var muskSpaceData="https://api.spacexdata.com/v2/launches"
    var randomPerson="https://randomuser.me/api"
    var localEndpoint="file://formOutput.json"

/*
    $('.buttonClass').click(function(){
        $('h2').text($(this).val());
    })

    $('.buttonClass:first').click(function(){
        $('h2').text('First Test');
    })
    $('.buttonClass:last').click(function(){
        $('h2').text('Last Test');
    })
*/
    // different option but much trickier
    $('.buttonClass:nth-child(0)').click(function(){
        $('h2').text('Child One');
    })

    $('.buttonClass:nth-child(1)').click(function(){
        $('h2').text('Child Two');
    })

    $('.buttonClass:nth-child(2)').click(function(){
        $('h2').text('Child Three');
    })

    $('.buttonClass:nth-child(3)').click(function(){
        $('h2').text('Child Four');
    })
})