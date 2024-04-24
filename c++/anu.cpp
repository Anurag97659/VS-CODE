#include<iostream>
using namespace std;
class Emp{
   public:
   char location;
   string name;
   int id;
   void mdetails(string name){
      cout<<name<<endl;}
   void mdetails(int id){
      cout<<id<<endl;}
   void mdetails(char location){
      cout<<location<<endl;}
   void mdetails(string name,int id,char loctaion){
       cout<<name<<endl;
       cout<<id<<endl;
       cout<<location<<endl;
       cout<<"Regular checking"<<endl;
       cout<<"Regular checking"<<endl;
   }
};
int main(){
   Emp a;
   a.mdetails("Anurag");
   a.mdetails(174);
   a.mdetails('d');
   a.mdetails("Anurag",174,'d');
}