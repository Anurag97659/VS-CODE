// -----------------------------------------------ARRAY LOOPS------------------------------------------------//


// let num = [3, 5, 1, 2, 4]

// // for(let i=0; i<num.length;i++){
// //   console.log(num[i])
// // }

// // ForEach Loop
// num.forEach((element) => {
//   console.log(element * element)
// })

// // Array.from 
// let name = "Harry"
// let arr = Array.from(name)
// console.log(arr)

// // for...of 
// for (let item of num){
//   console.log(item)
// }

// // for...in
// for (let i in num){
//   console.log(num[i])
// }



// ----------------------------------------------MAP FILTER REDUCE -----------------------------------------//


// let arr = [45, 23, 21]
// // Array map method ---- > creates a new array based on some condition
// let a = arr.map((value, index, array) => {
//   // console.log(value, index, array)
//   return value + index
// })
// // console.log(arr)

// // Array filter method ---> checks condition for each element and returns elements which pass the condition
// let arr2 = [45, 23, 21, 0, 3, 5]
// let a2 = arr2.filter((a) => {
//   return a < 10
// })
// // console.log(a2, arr2)

// // Array reduce method    --------> basically it takes a callback function which reduces to one value
// let arr3 = [1, 2, 3, 5, 2, 1]
// const reduce_func = (h1, h2) => {
//   return h1 + h2
// }
// let newarr3 = arr3.reduce(reduce_func)
// console.log(newarr3)




// -------------------------------------------------CONSOLE-------------------------------------------------//


// console.log("log")
// console.info("info")
// console.warn("warn")
// console.error("err")
// console.assert("err" != false)
// console.assert("err" == false)

// console.time("forLoop")

// for (let i = 0; i < 500; i++) {
//   console.log(233)
// }

// console.timeEnd("forLoop")

// console.time("whileLoop")

// let i = 0;
// while (i < 500) {
//   console.log(233)
//   i++;
// }

// console.timeEnd("whileLoop")



// -----------------------------------------alert, prompt & confirm-----------------------------------------//


// alert("Enter the value of a!")
// let a = prompt("Enter a here", "578") //"578" is a default value in case you leave it blank it can be changed.
// a = Number.parseInt(a)           //To save the value in integer because upper line only save it as a string.
// alert("You entered a of type " + (typeof a))
// let write = confirm("Do you want to write it to the page")
// if (write) {
//   document.write(a)
// }
// else {
//   document.write("Please allow me to write")
// }

//----------------------------------------- DOM, BOM & Window Object----------------------------------------//


// window.console.log(window)
// console.log(document.body)
// document.body.style.background = "yellow"


// ----------------------------------------       hi i AM anurag                            ----------------------------//




