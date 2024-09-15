// function===================================

// function sum(a, b) {  // no need to define the datatype of the parameter
//     return a + b;
// }
// console.log(sum(2,3)) //5

// -------------function can be assigned to variable----------------
// let x= function multiply(a,b){
//              return a*b;
//         }
// console.log(x(2,3)) //6
// console.log(typeof x) //function
// // console.log(multiply(2,3)) //error: multiply is not defined

// //--------------methods of return -------------------------
// function hello(username){
//     // return "Hello"+username;//or
//     return `Hello ${username}`;// this is called template string
// }
// console.log(hello("Rahul")) //Hello Rahul

// //------------------for unknow parametrs (rest operator)-----------------
// // the common confusion is ... (rest operator) is also use as spread operator 
// function unknow(...num){
//     return num;
// }
// console.log(unknow(200,300,400,500))//[200,300,400,500]
// //for practice
// function cart(...items){
//     let total=0;
//     for(let i=0;i<items.length;i++){
//         total+=items[i];
//     }
//     return total;
// }
// console.log(cart(100,200,300,400))//1000


// //--------------------------OBJECTS IN FUNCTION-------------------------
// let user = {
//     name: "Rahul",
//     age: 20,
// }
// function userdetails(details){
//     return `The user name is ${details.name} and his age is ${details.age}`;
// }
// console.log(userdetails(user))//The user name is Rahul and his age is 20
// // you can directly pass object in the function no need of pre defining the object like :-
// console.log(userdetails({name:"Anurag",age:19}))//The user name is Rahul and his age is 20


// //-------------------------------ARROW FUNCTION--------------------------------
// //normal syntax
// let sum = function (a, b) {
//     return a + b;
// }
// console.log(sum(2, 3)) //5
// //arrow function
// let sum0 = (a, b) => {
//     return a + b;
// }// it can be written as :-
// let sum1 = (a, b) => a + b;  //if only one line of code then no need of return keyword
// //what if there is object in the function
// let sum3 = (a, b) => ({ a: a, b: b }) //if you want to return object then you have to wrap the object in the ()


// //---------------------------------IIFF--------------------------------
// //IIFF - Immediately Invoked Function Expression
// //normal function
// function hello() {
//     console.log("Hello");
// }
// hello(); // the con it will be available in the global scope and you have to manually call the function

// //IIFF
// (function hellow () {// no need to call the function it will automatically and no need to name the function but if u want u can.
//     console.log("Hello")
// })(); 

// (function (name) {// if you want to pass the parameter then
//     console.log(name)
// })("Anurag");  
// NOTE :- USE ; AT THE END OF THE IIFF FUNCTION IF YOU ARE USING IIFF MORE THAN ONE TIME IN THE CODE 


