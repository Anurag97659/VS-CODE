// async function getAllUsers(){
//     try {
//         const response = await fetch('https://jsonplaceholder.typicode.com/users')

//         const data = await response.json()
//         console.log(data);
//     } catch (error) {
//         console.log("E: ", error);
//     }
// }

// getAllUsers()

fetch('https://api.github.com/users/yuvraj7773786')
.then((response) => {
    return response.json()
})
.then((data) => {
    console.log(data.name);
})
.catch((error) => console.log(error))

// class User{
//     constructor(name, email){
//         this.name = name
//         this.email = email
//     }
//     get email(){
//         return this._email.toUpperCase()
//     }
//     set email(email){
//         this._email = email
//     }
// }
// let a = new User('Anurag','anurag.nidhi2005@gamil.com')
// let b = new User('Anu','jfklfjlkadn')
// let c = new User('An','jfklfj12454lkadn')
// let d = new User('A','jfklfjdfjkdfjlkadn')
// // console.log(a.email)
// console.table([a.email,b.email,c.email,d.email])
