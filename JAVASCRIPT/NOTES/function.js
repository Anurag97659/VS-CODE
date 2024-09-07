//function===================================

function sum(a, b) {  // no need to define the datatype of the parameter
    return a + b;
}
console.log(sum(2,3)) //5



// --------function can be assigned to variable----------------
let x= function multiply(a,b){
             return a*b;
        }
console.log(x(2,3)) //6
console.log(typeof x) //function
// console.log(multiply(2,3)) //error: multiply is not defined