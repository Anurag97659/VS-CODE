#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

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
int main(){
    int a=13;
    cout<<decToBin(a)<<endl; 
    cout<<binToDec("1101")<<endl; 
    cout<<BinToDec("1101");
    
}
