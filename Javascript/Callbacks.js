//callback funtions are the functions which are used as paramter of another functions and excuted once a specific task is done
//they are used to achieve asynchronous functionality of javascript

function displayResult(n1 , n2 , operation){
    var sum = n1+n2;
    console.log("result of first function that will be excuted and sum is : " , sum);
    operation(sum);
    console.log("callback function got excuted");
}

function sum(a){
     console.log(a*2);
}

displayResult(4 , 5, sum)