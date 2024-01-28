//callback
// function calcSum(a, b) {
//     console.log(a + b);
// }

// function getResult(a, b, getSum) {
//     getSum(a, b);
// }

// getResult(3, 4, calcSum)

//understanding callbackhell
//we wnat to prit the id and if one id is printed after that another one is printed and so on...

// function getId(data, getData) {
//     setTimeout(() => {
//         console.log("data : ", data);
//         if (getData) {
//             getData()
//         }
//     }, 3000)
// }

// getId(1, () => {
//     console.log("waiting for next");
//     getId(2, () => {
//         console.log("waiting for next");

//         getId(3, () => {
//             console.log("waiting for next");

//             getId(4);
//         })
//     })
// })

//this is now a callback hell 
//to get rid of this we use promises


// function getPromise(data){
//     return new Promise((resolve , reject)=>{
//         setTimeout(()=>{
//             console.log(data);
//             console.log("Promise done");
//             resolve()
//             // reject()
//         }  , 2000)
//     })
// }


// function getPromise2(data){
//     return new Promise((resolve , reject)=>{
//         setTimeout(()=>{
//             // console.log("Another promise");
//             console.log(data);
//             resolve()
//         },2000)
//     })
// }

// getPromise2("hii")
// .then(()=> getPromise("fulfilling promise one and then moving to promise 2") .then(()=>getPromise2("mar jao") .then(()=>getPromise2("ho paaye to"))))
// .then(()=>getPromise2("kaise ho"))

//above here ,we did promise chaining



// getPromise(1)
// .then(()=>getPromise(2))
// .then(()=>getPromise(3))
// .then(()=>getPromise(4))
// .catch(()=>console.log("got error"))



//to get rid off promise chainign we use async await

function getData(data){
    return new Promise((resolve , reject)=>{
        setTimeout(()=>{
            console.log(data);
            resolve("promise resolved")
        },2000)
    })
}

//using async function and putiing await before every call that will be done one after anothr
// async function answer(){
//     await getData(1)
//     await getData(2)
//     await getData(3)
// }
// answer()

//as u saw above we had to make a new function to use async await and then call
//we can replace it with IIFE-immediatly invoked functions

// (async function(){
//     await getData(1)
//     await getData(2)
//     await getData(3)
// })()
 
//or


// (async ()=>{
//     await getData(1)
//     await getData(2)
//     await getData(3)
// })()

//--callback hell

// getId(1, () => {
//     console.log("waiting for next");
//     getId(2, () => {
//         console.log("waiting for next");

//         getId(3, () => {
//             console.log("waiting for next");

//             getId(4);
//         })
//     })
// })



//promise chainig
// .then(()=> getPromise("fulfilling promise one and then moving to promise 2") 
//.then(()=>getPromise2("mar jao") 
//.then(()=>getPromise2("ho paaye to"))))