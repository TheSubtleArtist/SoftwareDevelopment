$(document).ready(function(){
    console.log('Doucment is Ready');
    
    var muskSpaceData="https://api.spacexdata.com/v2/launches"
    var randomPerson="https://randomuser.me/api/"
    var localEndpoint="file://formOutput.json"

    $('.button').click(function(){
        var num=$('#myNum').val();
        console.log(num);
        $.get(randomPerson,{
            "results":num
        }).done(function(data){
            output(data.results);
        })
    })



    function output(data){
        var html =''
        $.each(data,function(key,value){
            html+= '<img src="'+value.picture.medium+'">'
            html+= '<div>'+value.name.last+", "+value.name.first+"</div>"


        })

        $('#output').html(html);
    }





})