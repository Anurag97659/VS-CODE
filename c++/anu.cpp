/*Problem 1: Sum of Even Numbers
Write a Java program to calculate the sum of all even numbers between 1 and 100 using a 
for loop.
Requirements:
- Use a for loop to iterate through numbers from 1 to 100.
- Check if a number is even, and if so, add it to a running total.
- Print the sum at the end.*/
#include <iostream>
using namespace std;
int main(){
    int sum =0;
    for(int i=0;i<101;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    cout<<sum<<endl;
}

