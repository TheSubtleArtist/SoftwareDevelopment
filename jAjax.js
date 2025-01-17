$(document).ready(function(){
    console.log('Doucment is Ready');
    
    var muskSpaceData="https://api.spacexdata.com/v2/launches"

    var ajaxEndpoint="https://randomuser.me/api"


    $('#ajaxButtonOne').click(function(){
        $.get(ajaxEndpoint,function(response){
            console.log(response);
            $('#ajaxHeaderOne').text(response.results[0].email);
            
        })
    })

    $('#ajaxButtonTwo').click(function(){
        $.get(ajaxEndpoint,function(response){
            console.log(response);
            //$('#ajaxTextareaId').load(response.results[0].email);
            
        })
    })

$('#ajaxFormButtonOne').submit(function(e){
    e.preventDefault()
    console.log('submit');
    var urlOne = "file://formOutput.json";
    var myData = $('#formOneId').serialize();
    $.post(urlOne, myData).done(function(data){
        console.log(data)
    });

})

})