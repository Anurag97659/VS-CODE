
let a = [1,2,3,4,5]
let b= [6,7,8,9,10]

//Method===========================================

// a.push(6) //adds 6 to the end of the array
// console.log(a)

// a.pop() //removes the last element of the array
// console.log(a)

// a.unshift(10) //adds 0 to the beginning of the array
// console.log(a)

// a.shift() //removes the first element of the array
// console.log(a)

// let check = a.includes(3) //returns true if 3 is present in the array and false if it is not
// console.log(check)

// let c= a.join() //converts the array into a string
// console.log(c)

// //SLICE METHOD
// console.log("a = ",a)
// let arr =a.slice(0,3) //returns the elements from index 1 to 3
// console.log("arr = ",arr)// slice does not change the original array
// console.log("a =",a)

// //SPLICE METHOD
// console.log("a = ",a)
// let arr1 =a.splice(0,3)//removes the elements from index 1 to 3 
// console.log("arr1 = ",arr1)// splice changes the original array
// console.log("a =",a)//returns the remaining elements of the array

// //CONCAT METHOD
// a.push(b) //adds the array b as an element to the array a instead of concatenating the two arrays
// console.log(a)//that is why we use the concat method
// let com=a.concat(b) //concatenates two arrays
// console.log(com)

// //spread operator
// let spread = [...a,...b] //spread operator  is used to concatenate two arrays
// console.log(spread)// it is another way to concatenate two arrays

// //flat method
// let x = [1,2,[3,4,[5,6]]]
// let y= x.flat(Infinity) //flattens the array to the specified depth
// console.log(y)// you can use any number instead of infinity to flatten the array to that depth, its depend on the complexity of the array

// console.log(Array.isArray("Hitesh"))// chrecks if the given element is an array or not
// console.log(Array.from("Hitesh"))//converts the string into an array

// let score1 = 100
// let score2 = 200
// let score3 = 300
// console.log(Array.of(score1, score2, score3));//converts the given elements into an array

