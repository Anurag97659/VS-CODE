//STACK ======================================================
// it is a primitive data type and it makes the copy of the value so it does not change the original value
let a = 5;
let b = a;
console.log(a) //5;
console.log(b) //5
//now changing the value of b
 b = 10;
console.log(b) //10
console.log(a) //5    the value of a is not changed


// HEAP =======================================================
// it is a reference data type and it does not make the copy of the value so it changes the original value
// it is a non primitive data type and it stores the value in the memory. ex = array, object, function
let arr = [1,2,3,4,5];
let arr1 = arr;
console.log(arr); //[1,2,3,4,5]
console.log(arr1); //[1,2,3,4,5]
//now changing the value of arr1
arr1[0] = 10;
console.log(arr1); //[10,2,3,4,5]
console.log(arr); //[10,2,3,4,5]    the value of arr is changed

