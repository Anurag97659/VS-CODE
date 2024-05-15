#include <iostream>
using namespace std;

class School{
	public:
	string schoolname;
	string location;
	School(string name, string loc){
		this-> schoolname = name;
		this-> location=loc;}
};
class Class{
		public:
		int classnumber;
		string section;
		Class(int num, string sec){
			this-> classnumber = num;
			this-> section=sec;
		}
};
class Student{
	public:
	string name;
	int rollno;
	Student(string name, int rollno){
		this-> name = name;
		this-> rollno=rollno;
	}
	void display(School &s, Class &c){
		cout<<"Name: "<<name<<endl;
		cout<<"Roll No: "<<rollno<<endl;
		cout<<"Class: "<<c.classnumber<<endl;
		cout<<"Section: "<<c.section<<endl;					
		cout<<"School Name: "<<s.schoolname<<"  ";
		cout<<"Location: "<<s.location<<endl;
	}
};
int main(){
	School s("APS","Dk");
	Class c(12,"C");
	Student st("Anurag",10);
	st.display(s,c);
}