#include <iostream>
# include<algorithm>
using namespace std;
int main(){
   int start;
   cout<<"Enter the starting number: ";
    cin>>start;
    int end;
    cout<<"Enter the ending number: ";
    cin>>end;
    int gap;
    cout<<"Enter the gap: ";
    cin>>gap;
    if(gap==1){
        for(int i=start;i<=end;i+=2){
            cout<<i<<endl;
        }

    }
    else if (gap==2){
        for(int i=start;i<=end;i+=3){
            cout<<i<<endl;
        }
    }
    else{
        cout<<"Gap should be either 1 or 2"<<endl;
    }
    
}