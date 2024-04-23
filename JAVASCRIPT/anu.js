const prompt = require('prompt-sync')();
let b= prompt('num = ')
let a=[]
for(let i=0;i<=b;i++){
  a[i]=i;
 
}
function fibonacci(c,d) {
  return c+d;
}
let f=a.reduce(fibonacci)
console.log(f)