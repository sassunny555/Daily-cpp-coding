//Define and Display Student Details with Struc

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct Student
{
	string name;
	int age;
	double marks;
	
};
int main(){
	Student student1;
	cout<<"Enter student name :";
	getline(cin,student1.name);
	cout<<"Enter age :";
	cin>>student1.age;
	cout<<"Enter marks :";
	cin>>student1.marks;
	cout<<"\n" <<setfill('-')<<setw(10)<<""<<"Student Details"<<
	setw(10)<<""<<endl;
	cout<<"Name  :"<<student1.name<<endl;
	cout<<"Age   :"<<student1.age<<endl;
	cout<<"Marks :"<<student1.marks<<endl;
	return 0;
}
