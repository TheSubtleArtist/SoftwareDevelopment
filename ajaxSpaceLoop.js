$(document).ready(function(){
    console.log('Doucment is Ready');
    
    var muskSpaceData="https://api.spacexdata.com/v2/launches"
    var randomPerson="https://randomuser.me/api"
    var localEndpoint="file://formOutput.json"

    $('#spaceButtonOne').click(function(){
        $.get(muskSpaceData,output);

    })
    function output(data){
        var html =''
        $.each(data,function(key,value){
            html += '<h3> Flight Number:'+value.flight_number+'</h3>';
            html += '<p> Details: <br>' + value.details+ '</p>';
        })

        $('#output').html(html);
    }
})