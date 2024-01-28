// function scope(){
//     var a = 7
//     if(true){
//         let b = 4
//        const c = 5 
//        console.log(b);
//        console.log(c);
//     }
//     console.log(a);
// }
// scope()


//hoisting

// console.log(a);
// var a = 10
// console.log(a);

// console.log(b);
// var b = 4
// console.log(b);



//NaN property

// let a = 10/"abc"
// console.log(a);

// let b = parseInt("abjbaja")
// console.log(b)



//self or immedietly invoked functions
// (function(){
//     console.log("hello");
// })()


//higher order functions
//the function that take another fn as a parameter or return another fucntions

// function hello(ji){
//     ji()
// }

// var a = hello(function(){console.log("higher order functions");})

//case - 2

// function hello(){
//     console.log("hello");
//    return function andar(){
//     console.log("hiiiii");
//    }
// }
//  var x = hello()
//  x()


//call()-- used to borrow a function and use it somewhere else

//one way
// const obj = {
//     name:"Prashant",
//     age:24,
//     printing : function(){
//         console.log(this.name);
//         console.log(this.age);
//     }
// }
// obj.printing()
// const obj2 = {
//     name:"ravi",
//     age:21
// }
// obj.printing.call(obj2)

//secod way

// const obj = {
//     name:"Prashant",
//     age:24,
    
// }
 
// const obj2 = {
//     name:"ravi",
//     age:21
// }

// let answer =  function(){
//     console.log(this.age);
//     console.log(this.name);

// }

// answer.call(obj)
// answer.call(obj2)


//apply()
//suppose we have more parameters
// let answer =  function(address , email){
//     console.log(this.age + ", " + this.name + ", " + address + " ,"+ email);
     

// }
//then instead of passing each parameter individually ,we can pass  a list of parameters using apply()
// answer.apply(obj , ["UP" , "p@gmail"])

//bind()
// let answer =  function(address , email){
//     console.log(this.age + ", " + this.name + ", " + address + " ,"+ email)
// }

//suppose i want to use this function and use somewhere else and invoke later
//then we use bind

// let answer2 = answer.bind(obj2 , "MP" , "r@gmail")

// answer2()




//filter() -- is used when we want to filter elements based on a condition
const arr = [45  , 5 ,7 , 10 , 8 , 6]
const answe = arr.filter((num)=>num>6)
console.log(answe);

//map() --  is used to perform operation on every element of an array
const answe2 = arr.map((num)=> num*10)
console.log(answe2);


//reduce() -- is used to perform operation on array elements and return a single value
//it revcieves two params as a callback , accumulator as initial value from where we need to start operation 
//and a current value which is array elemt
//both the parameters are updated in each operation or we can say with the each iteration of increasing index
const answe3 = arr.reduce((accumulator , currentValue)=> accumulator + currentValue , 0)
console.log(answe3);