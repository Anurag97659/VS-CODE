#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

/*
  How does computer store sign + or - of a number?
  ANS:=>
   In case of int it takes 32 bits for storing the number 
   only 31 bits are used for storing the number and 1 bit is used for storing the sign
   if the sign bit is 0 then the number is positive and if the sign bit is 1 then the number is negative
  
   for example :
                int a = 12 (binary 00000000 00000000 00000000 00001100) 
                         postion of sign bit is 32nd bit from the right side

                int b = -12 (binary 11111111 11111111 11111111 11110100) 
                         for negative number is obtained by taking 2's complement of the positive number
                         like in this case we take 2's complement of 12
                         1's complement of 12 is 11111111 11111111 11111111 11110011
                         and then we add 1 to it to get 2's complement which is 11111111 11111111 11111111 11110100
                        so in this case also the position of sign bit is 32nd bit from the right side
*/

string decToBin(int a){
    string ans="";
    while(a!=1){
        if(a%2==1)ans+="1";
        else ans+="0";
        a=a/2;
    }
    ans+="1"; 
    reverse(ans.begin(), ans.end());
    return ans;
}

int binToDec(string a){ 
    int ans=0;
    for(int i=0;i<a.size();i++){
        ans=ans*2+(a[i]-'0');
    }
    return ans;
}

int BinToDec(string a){
    int ans=0;
    int size=a.length()-1;
    for(int i=0;i<=size;i++){
        if(a[i]=='1'){cout<<i<<" "<<ans<<endl;
            ans+=pow(2,size-i);
        }
    }
    return ans;
}

string compliment_1s(string a){
    // 1's complement of a binary number
    // 1's complement is obtained by flipping all bits
    // 0s to 1s and 1s to 0s
    // Example: 1100 -> 0011
    for(int i=0;i<a.length();i++){
        if(a[i]=='1')a[i]='0';
        else a[i]='1';
    }
    return a;
}

string complient_2s(string b){
    // 2's complement of a binary number
    // 2's complement is obtained by adding 1 to the 1's complement
    // Example: | 1100   -> |      0011    -> |    0100
    // Example: |binary  -> | 1s complement-> | 2s complement
    string a = compliment_1s(b);
    int n = a.length();
    int carry = 1;
    for(int i =n;i>=0;i--){
        if(a[i] == '1' && carry==1){
            a[i] ='0';
        } 
        else if(carry == 1 && a[i] == '0'){
            a[i] ='1';
            carry =0;
            break;
        }
    }
    if(carry ==1) a ="1"+a;
    return a;
}

string AND(string a, string b){
    // Bitwise AND operation on two binary strings
    // Example: 1100 AND 1010 = 1000
    // all true = ture 
    // one false = false
    // basically A*B
    string ans = "";
    for(int i=a.length()-1;i>=0;i--){
        if(a[i]=='1' && b[i]=='1') ans+='1';
        else ans+='0';
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

string OR(string a, string b){
    // Bitwise OR operation on two binary strings
    // Example: 1100 OR 1010 = 1110
    // all false = false
    // one true = true
    string ans = "";
    for(int i=a.length()-1;i>=0;i--){
        if(a[i]=='1' || b[i]=='1') ans+='1';
        else ans+='0';
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

string XOR(string a, string b){
    // Bitwise XOR operation on two binary strings
    // Example: 1100 XOR 1010 = 0110
    // all false = false
    // all true = false
    // one true = true 
    // even no of 1s= 0
    // odd no of 1s = 1
    string ans = "";
    for(int i=a.length()-1;i>=0;i--){
        if(a[i]=='1' && b[i]=='0') ans+='1';
        else if(a[i]=='0' && b[i]=='1') ans+='1';
        else ans+='0';
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

string NOT(string a){
    // Bitwise NOT operation on a binary string
    // Example: 1100 NOT = 0011
    //  NOT operation flips all bits
    // 0s to 1s and 1s to 0s
    // then its check wether its  negative or positive by checking the sign bit
    // if sign bit is 1 then its negative and if sign bit is 0 then its positive
    // if its  negative then we take 2's complement of the number
    // if its positive then we return the number as it is
    /*FOR example:
    1) 1100 NOT = 0011
    process: 1100 -> 0011 -> 1's complement
    then we check the sign bit which is 0 so its positive
    hence we return the number as it is
    2) 0001 NOT = 0010
    process: 0001 -> 1110 -> 1's complement
    then we check the sign bit which is 1 so its negative
    hence we take 2's complement of the number
                            1110 -> 0001 (1's complement)
                            then we add 1 to it to get 2's complement which is 0010
    */
    // only checking the first index of string a to check the sign bit but computer checks the 32nd bit for sign
    string b= compliment_1s(a);
    if(b[0]=='1')return complient_2s(b);
    else return b;
 return 0;
}

string rightShift(string a, int n){
    // Right shift operation on a binary string
    // Example: 1100 >> 2 = 11
    /*
     basically divide by 2^n PROVE
     =====>
     lets say a = 1100(12) ans right shift by n = 2
     we get 0011 (3)
     if we divide 12 by 2^2 = 3
     we get 3 
     hence proved 
    */
    int b = a.length()-1;
    if(n>=a.length()) return "0"; 
    for(int i=n;i>0;i--){
        a.erase(a.end()-1); 
    }

    return a;
}

string leftShift(string a, int n){
    // Left shift operation on a binary string
    // Example: 1100 << 2 = 110000
    /*
     basically multiply by 2^n PROVE
     =====>
     lets say a = 1100(12) ans left shift by n = 2
     we get 110000 (48)
     if we multiply 12 by 2^2 = 48
     we get 48
     hence proved
    */
   int b = a.length();
   int diff = 32 - b;
    if(n>diff) return "0"; 
    else{
        for(int i=0;i<n;i++){
            a+='0';
        }
    }
    return a;
}

int SwapWithXor(int a, int b){
    // Swapping two numbers without using a third variable
    // Example: a = 5, b = 3
    // After swapping: a = 3, b = 5
    // Using XOR operation to swap the numbers
    // a = a ^ b;
    // b = a ^ b;
    // a = a ^ b;
    // example: a = 5(101), b = 3(011)
                //a = a^b = 110(6)
                //b = a^b = 101(5)
                //a = a^b = 011(3)
                // hence after swapping: a = 3, b = 5
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    return 0;
}

int check_if_the_ith_bit_is_set_or_not(int a,int i){
   
// "set" means that the bit at position i is 1 (not 0).
// Example:
// Suppose you have n = 13 (binary: 1101):
// The 0th bit (from right) is 1 (set)
// The 1st bit is 0 (not set)
// The 2nd bit is 1 (set)
// The 3rd bit is 1 (set)
// T(O(1) time complexity to check if the ith bit is set or not)

// || METHOD 1 LEFT SHIFT ====>>>
    if((a&(1<<i))!=0)cout<<"The "<<i<<"th bit is set"<<endl;
    else cout<<"The "<<i<<"th bit is not set"<<endl;

// || METHOD 2 RIGHT SHIFT ====>>>
    // if((a>>i)&1)cout<<"The "<<i<<"th bit is set"<<endl;
    // else cout<<"The "<<i<<"th bit is not set"<<endl;

    return 0;
}

int set_ith_bit(int a, int i){
    // example a=9(1001), i=2
    // we want to set the 2nd bit of 'a' to 1
    //a=a|(1<<i); which is a=1101=13
    a=a|(1<<i);
    cout<<"After setting the "<<i<<"th bit, a = "<<a<<endl;
    return a;
}

int clear_ith_bit(int a,int i){
    // example a= 13(1101) i=2
    // then it should be a= 1001;
    // clear ith bit means turn 1 to 0 at 2nd index from right
    // optimal aproach take 1(...0001)then make it ~(not operator) then left shift it by i
    // then use & operator
    // final formula = a & ~(1<<i)
    a=a&(~(1<<i));
    cout<< "After clearing the "<<i<<"th bit, a = "<<a<<endl;
    return a;
}

int toggle_ith_bit(int a,int i){
    //convert 1 to 0 and 0 to 1 at ith bit
    a=a^(1<<i);
    cout<<"After toggling the "<<i<<"th bit, a = "<<a<<" and binary = "<<decToBin(a)<<endl;
}

int remove_last_set_bit_rightmost(int a){
    // example a= 13(1101)
    // then it should be a= 12(1100)
    // remove last set bit means turn 1 to 0 at rightmost index
    // final formula = a & (a-1)
    a=a&(a-1);
    cout<<"After removing the last set bit, a = "<<a<<" and binary = "<<decToBin(a)<<endl;
    return a;
}

int check_if_num_is_power_of_2(int a){
    // example a= 16(10000), a= 8(1000),4(100), 2(10),32(100000)
    if((a&(a-1))==0)cout<<a<<" is a power of 2"<<endl;
    else cout<<a<<" is not a power of 2"<<endl;
    return 0;
}

int count_set_bits_bruteforce(int a){
    // for example a=13(1101) count =3
    // time complexity is O(log n)
    // space complexity is O(1)
    int count=0;
    while(a>1){
        // if(a%2==1)count++;
        // a=a/2;
        // or
        count+=a&1;
        a=a>>1;
    }
    if(a==1)count++;
    cout<<"Number of set bits in the number is "<<count<<endl;
    return count;
}

int count_set_bits_optimal(int a){
    // optimal approach is to use Brian Kernighan's algorithm
    // it works by turning off the rightmost set bit one by one
    // and counting how many times we do this until the number becomes 0
    // for example a=13(1101) count =3
    // 1st iteration: a=1101(13) -> a=1100(12) count=1
    // 2nd iteration: a=1100(12) -> a=1000(8) count=2
    // 3rd iteration: a=1000(8) -> a=0000(0) count=3
    // hence count=3
    // time complexity is O(no of set bits)
    // space complexity is O(1)
    int count=0;
    while(a!=0){
        a=a&(a-1);
        count++;
    }
    cout<< "Number of set bits in the number is "<<count<<endl;
    return count;
}

void check_Odd_OR_Even(int a){
    if((a&1)==0)cout<<"Even\n";
    else cout<<"odd\n";
}

int main(){
    count_set_bits_optimal(13);
    count_set_bits_bruteforce(13);
}
