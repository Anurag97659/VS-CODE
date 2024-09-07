// // object==================================

// // objects can be declare in two ways 
// // 1. object literals
// // 2. object constructor

// //============================================= 1 Object literals=============================================
// let myobj = {
//     name: "anurag",
//     age: 19,
//     "class": "12th",
// }


// // -----------types of printing the object-----------
// console.log(myobj); // { name: 'anurag', age: 19 }
// console.log(myobj.name); // anurag
// console.log(myobj.age); // 19
// console.log(myobj["name"]); // anurag //this is used when the key is a variable or a string                                                                                                                                                                                                                 
// console.log(myobj["class"]); // 19


// //-------------------get the keys and vlaues of object------------------
// // its return the array of the keys or values of the object
// console.log(Object.keys(myobj)); // [ 'name', 'age', 'class' ] // it will give the keys of the object
// console.log(Object.values(myobj)); // [ 'anurag', 19, '12th' ] // it will give the values of the object
// console.log(Object.entries(myobj)); // [ [ 'name', 'anurag' ], [ 'age', 19 ], [ 'class', '12th' ] ] // it will give the key value pair of the object
// console.log(myobj.hasOwnProperty("name")); // true // its check if the key is present in the object or not


// // ----------change or update the value of the object-------
// myobj.name = "nidhi";
// console.log(myobj); // { name: 'nidhi', age: 19 }// the value of the name key is updated


// // --------freezing the value of the object so tha further changes cannot be made--------
// Object.freeze(myobj);// it will freeze the object and no further changes can be made
// myobj.name = "anurag";
// console.log(myobj); // { name: 'nidhi', age: 19 }// the value of the name key is not updated


// //----------- makeing a function for object--------------
//  myobj.greet = function(){// it may give error if obeject is freeze 
//     console.log("Hellow ", this.name)//it can be written as -
//     console.log(`hi ,${this.name}`)
// }
// console.log(myobj.greet())


// // =============================================2 Object constructor=============================================

// let myobj2= {} // or it can be written as let myobj2 = new Object();
// myobj2.name = "anurag";
// myobj2.age = 19;
// myobj2.class = "12th";  
// console.log(myobj2); // { name: 'anurag', age: 19, class: '12th' }
// // rest of the things are same as object literals


// //---------------------------what if there if a object inside a object---------------------
// let myobj3 = {
//     name: "anurag",
//     age: 19,
//     class: "12th",
//     address: { //it can be go to anu level of depth and can be as complex as we want
//         city: "kanpur",
//         state: "UP",
//         country: "India"
//     }
// }
// console.log(myobj3); // { name: 'anurag', age: 19, class: '12th', address: { city: 'kanpur', state: 'UP', country: 'India' } }
// console.log(myobj3.address); // { city: 'kanpur', state: 'UP', country: 'India' }
// console.log(myobj3.address.city); // kanpur


// //---------------------------combine two objects-------------------------------
// let obj1 = {
//     name: "anurag",
//     age: 19,
//     class: "12th",
// }
// let obj2 = {
//     city: "kanpur",
//     state: "UP",
//     country: "India"
// }
// // let obj3 = Object.assign(obj1, obj2);
// // console.log(obj3); // { name: 'anurag', age: 19, class: '12th', city: 'kanpur', state: 'UP', country: 'India' }
// // ------------------or it can be written as----------------
// let obj3 = {...obj1, ...obj2};// its a spread operator
// console.log(obj3); // { name: 'anurag', age: 19, class: '12th', city: 'kanpur', state: 'UP', country: 'India' }


// //----------------------- when ever you get the data from the database------------------
// let user =[   // its a array of object, this is how the data is stored in the database
//     {
//         name: "anurag",
//         age: 19,
//         class: "12th",
//     },
//     {
//         name: "nidhi",
//         age: 19,
//         class: "12th",
//     },
//     {
//         name: "anu",
//         age: 19,
//         class: "12th",
//     },
// ]
// console.log(user)// it will print the whole array
// console.log(user[0]); // { name: 'anurag', age: 19, class: '12th' }
// console.log(user[0].name);// anurag

