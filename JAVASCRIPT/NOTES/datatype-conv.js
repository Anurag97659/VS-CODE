let a= "8"
console.log(a)
console.log(typeof a) //string
let b = Number(a) // datatype of b is number but a is still string, this is type conversion
console.log(a)
console.log(typeof b)
console.log(typeof a)

// what if it is "8abc"

let c = "8abc"
console.log(c)
console.log(typeof c) //string
let d = Number(c) // datatype of d is number but c is still string, this is type conversion
console.log(typeof c)
console.log(typeof d)// it will show number but its value is NaN (Not a Number)
console.log(d) //NaN
// NaN is a special value in js which apperars when improper conversion is done