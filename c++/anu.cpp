// ====================================finding hcf and gcd==========================
// #include <bits/stdc++.h>
// #include<vector>
// using namespace std;
// int main(){
//     int a=12;
//     int b=24;
// // <======finding factors of a=====>
//    vector <int> arr({});
//     for(int i=1;i<=a;i++){
//         if(a%i==0){arr.push_back(i);}
//     }
//     cout<<"values stored in arr factors of "<<a<<endl;
//    for(auto it = arr.begin();it!=arr.end();it++){
//     cout<<*it<<" ";
//    }
//    cout<<endl;
// // <======finding factors of b======>
//     vector <int> brr({});
//     for(int i=1;i<=b;i++){
//         if(b%i==0){brr.push_back(i);}
//     }
//     cout<<"values stored in brr factors of "<<b<<endl;
//    for(auto it = brr.begin();it!=brr.end();it++){
//     cout<<*it<<" ";
//    }
//    cout<<endl;
// // <======now finding common factors ======>
//    int sizea,sizeb;
//    sizea=arr.size();
//    sizeb=brr.size();
//    int loop1,loop2;
//    if(sizea<sizeb){
//     loop1=sizea;
//     loop2=sizeb;
//    } 
//    else {
//     loop1=sizeb;
//     loop2=sizea;}
//    vector <int> cf({});
//     // for(int i=0;i<=loop1;i++){
//    //          vector <int>:: iterator it=arr.begin();
//    //          it=it+i;
//    //          vector <int>:: iterator it2=brr.begin();
//    //          it2=it2+i;
//    //          int x= (*it);
//    //          int y= (*it2);
//    //          if(x==y){
//    //              // cout<<arr.begin()+i;
//    //              // it=it+i;
//    //              cf.push_back(y);
//    //          }
//    //      }    or 
//     for(int i=0;i<loop2;i++){
//             for(int j=0;j<loop1;j++){
//                 if(brr[i]==arr[j]){
//                     cf.push_back(brr[i]);
//                 }
//         }   }
//     cout<<"COMMON factors are = ";
//     for(auto it = cf.begin();it!=cf.end();it++){
//     cout<<*it<<" ";
//    }
//    cout<<endl;
// // <======now finding highest common factor ======>
//    sort(cf.begin(),cf.end(),greater<int>());
//    cout<<"HIGHEST COMMON FACTOR IS = "<<cf[0]<<endl; 
// }
// lavnish one ============> hcf and gcd
// #include <bits/stdc++.h>
// int main(){
// // brute force method
// int n1, n2;
// std::cin>>n1>>n2;
// int high_limit = std::min(n1, n2);
// while (high_limit > 0) {
// if (n1 % high_limit == 0 && n2 % high_limit == 0) {
//     std::cout << high_limit << std::endl;
//    break;
//   }
//  high_limit--;
//  } }

// ====================================selection sorting============================
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n]={};
//     for(int i=0;i<6;i++){cin>>arr[i];}
//     for(int i=0;i<6;i++){cout<<arr[i]<<" ";}
//         cout<<endl;
//     for(int i=0;i<6;i++){
//         for(int j=i;j<6;j++){
//             if(arr[j]<arr[i]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     for(int i=0;i<6;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// ====================================bubble sorting==============================
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n]={};
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"current array = \n" ;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     for(int i=n-1;i>0;i--){
//         for(int j=0;j<=i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp =arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
//             }
//         }
//     }
//     cout<<"sorted array = ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// ====================================insetion short================================
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n]={};
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"current array = " ;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     for(int i=0;i<n;i++){
//         int j=i;
//         while(j>0 && arr[j-1]>arr[j]){
//             int temp= arr[j-1];
//             arr[j-1]=arr[j];
//             arr[j]=temp;
//             j--;
//         }
//     }
//     cout<<"sorted array = ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";

//Find the Largest and second largest element in an array
// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     int arr[a]={};
//     for(int i=0;i<a;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<a;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<"\nmax in array arr is = ";
//     int b=1;
//     for(int i=0;i<a;i++){
//         if(arr[i]>b){b=arr[i];}
//     }
//     cout<<b<<endl;
//     for(int i=0;i<a;i++){
//         if(arr[i]==b){
//             arr[i]=0;}
//     }
//     for(int i=0;i<a;i++){
//         cout<<arr[i]<<" ";
//     }
//     int c=0;
//     for(int i=0;i<a;i++){
//         if(arr[i]>c){c=arr[i];}
//     }
//     cout<<"\nSecond max in array arr is = "<<c;
// }

// check array sorted or not
// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     int arr[a]={};
//     for(int i=0;i<a;i++){
//         cin>>arr[i];
//     }
//     cout<<"array = ";
//     for(int i=0;i<a;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int b=0;
//     for(int i=0;i<a-1;i++){
//         if(arr[i]>arr[i+1]){
//             b++;
//         }  
//     }
//     if(b==0){cout<<"sorted\n";}
//     else cout<<"not  sroted\n";
// }

//remove dublicate from array ;
// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     int arr[a]={};
//     for(int i=0;i<a;i++){
//         cin>>arr[i];
//     }
//     cout<<"array = ";
//     for(int i=0;i<a;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=0;i<a;i++){
//         for(int j=i+1;j<=a-1;j++){
//             if(arr[i]==arr[j]){
//                 arr[j]=0;   
//             }
//         }
//     }
//     for(int i=0;i<a;i++){
//         for(int j=i+1;j<=a-1;j++){
//             if(arr[i]>arr[j]){
//                 int  temp =arr[j];
//                 arr[j]=arr[i];
//                 arr[i]=temp;
//             }
//         }
//     }
//     int count=0;                            
//     for(int i=0;i<a;i++){
//         if(arr[i]==0){
//             for(int j=i;j<a-i;j++){
//                 arr[j]=arr[j+1];
//             }
//                 a--;
//                 i--;
//         }
//     }
//     for(int i=0;i<a;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//shifting left by one;
// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     int arr[a];
//     for(int i=0;i<a;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<a;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int b=arr[0];
//     for(int i=0;i<a;i++){
//         arr[i]=arr[i+1];
//     }
//     arr[a-1]=b;
//     for(int i=0;i<a;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//shifting left by n number;
// #include <iostream>
// using namespace std;
// int main(){
//     int a,s;
//     cin>>a;
//     cin>>s;
//     int arr[a],temp[s];
//     for(int i=0;i<a;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<a;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
//     for(int i=0;i<s;i++){
//         temp[i]=arr[i];
//     }
//     for(int i=0;i<a;i++){
//         arr[i]=arr[i+s];
//     }
//     for(int i=1;i<=s;i++){
//         arr[a-i]=temp[s-i];
//     }
//      for(int i=0;i<a;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//moving all zeros to end;
//method 1 ================>
// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     int num=0,c=0;
//     cin>>a;
//     int arr[a];
//     for(int i=0;i<a;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<a;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=0;i<a;i++){
//         if(arr[i]!=0){num++;}
//     }
//     int temp[num];
//     for(int i=0;i<a;i++){
//         if(arr[i]!=0){
//             temp[c]=arr[i];
//             c++;
//         }
//     }
//     for(int i=0;i<a;i++){arr[i]=0;}
//     for(int i=0;i<num;i++){arr[i]=temp[i];}
//     for(int i=0;i<a;i++){
//         cout<<arr[i]<<" ";
//     }
// }
//method 2 ===========================>
// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     int b=0;
//     int count=0;
//     cin>>a;
//     int arr[a];
//     for(int i=0;i<a;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<a;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=0;i<a;i++){
//         if(arr[i]==0){
//             count++;}
//     }
//     int temp[count];
//     for(int i=0;i<a;i++){
//         if(arr[i]==0){
//             temp[b]=arr[i];
//             b++;
//             for(int j=i;j<a;j++){
//                 arr[j]=arr[j+1];}        
//         }
//     }
//     for(int i=1;i<=count;i++){
//         arr[a-i]=temp[count-i];
//     }
//     for(int i=0;i<a;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// 345
