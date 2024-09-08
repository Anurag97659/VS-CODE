// DOM ==================
// DOM = Document Object Model
// DOM is a programming interface for web documents. 
// It represents the document as nodes and objects.
// DOM is a tree structure of nodes and objects created by the browser.
 

//getElementById() 
// Returns the element that has the ID attribute with the specified value.
// Example: document.getElementById('myId')

//getElementsByTagName()
// Returns a collection of all elements in the document with the specified tag name.
// Example: document.getElementsByTagName('div')

//getElementsByClassName()
// Returns a collection of all elements in the document with the specified class name.
// Example: document.getElementsByClassName('myClass')

//querySelector()
// Returns the first element that matches a specified CSS selector(s) in the document.
// Example: document.querySelector('div')

//querySelectorAll()
// Returns a static NodeList representing a list of the document's elements that match the specified group of selectors.
// you will have to convert it to an array to use array methods on it.
// Example: Array.from(document.querySelectorAll('div'))

//createElement()
// Creates an Element node with the specified name. 
// You can create any element using this method.
// Example: document.createElement('div')