// #include <iostream>
// using namespace std;
// void selectionsorting(int arr[], int n){
//     int stepcount=0;
//     for(int i=0;i<n;i++){
//         for(int j =i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 swap(arr[i],arr[j]);
//                 stepcount++;
//             }
//         }
//     }
//     cout<<endl<<"Step count = "<<stepcount<<endl;
// }

// void bubblesort(int arr[],int n){
//     int stepcount =0;
//     for(int i=n-1;i>=0;i--){
//         for(int j=0;j<=i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 stepcount++;
//             }
//         }
//     }
//         cout<<endl<<"Step count = "<<stepcount<<endl;
// }

// void insertionsort(int arr[],int n){
//     int stepcount =0;
//     for (int i=0; i<=n-1;i++){
//         for(int j=i;j>0;j--){
//             if(arr[j - 1] > arr[j]){
//                  swap(arr[j],arr[j-1]);
//                  stepcount++;
//             }
//         }
//     }
//         cout<<endl<<"Step count = "<<stepcount<<endl;
// }

// int main(){
//     int temp[5]={5,70,0,2,6};
//     int temp1[5]={50,7,110,12,6};
//     int temp2[5]={52,720,1110,12,600};
//     selectionsorting(temp,5);
//     bubblesort(temp1,5);
//     insertionsort(temp2,5);
//     for(int i=0;i<5;i++){
//         cout<<temp[i]<<" ";
//     }cout<<endl;
//     for(int i=0;i<5;i++){
//         cout<<temp1[i]<<" ";
//     }cout<<endl;
//     for(int i=0;i<5;i++){
//         cout<<temp2[i]<<" ";
//     }cout<<endl;
// }




#include <iostream>
using namespace std;
int main(){
    int arr[10]={10,0,20,2,23,1,0,2,1,0};
    int count=0;
    int arraysize = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<arraysize;i++){
        if(arr[i]<3){
            count++;
        }
    }
    int dutch[count]={};
    int flag=0;
    for(int i=0;i<arraysize;i++){
        if(arr[i]<3){
            dutch[flag]=arr[i];
            flag++;
        }
    }
    int right = count-1;
    cout<<count<<endl;
    int left = 0;
    int mid = 0;
    while(mid<=right){
         if (dutch[mid] == 0) {
            swap(dutch[left], dutch[mid]);
            left++;
            mid++;
        } else if (dutch[mid] == 2) {
            swap(dutch[mid], dutch[right]);
            right--;
        } else { 
            mid++;
        }
    }
    for(int i=0;i<count;i++){
        cout<<dutch[i]<<" ";
    }
}
