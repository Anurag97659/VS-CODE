#include <iostream>
using namespace std;
int main(){
   int a[5]={5,6,2,3,14};
   int b=0;
   for(int i=0;i<5;i++){
	if(a[i]>b){
	   b=a[i];}
   }
   cout<<b;
}