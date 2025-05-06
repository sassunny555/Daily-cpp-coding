#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct Student
{
	string name;
	double marks1;
	double marks2;
	double marks3;
	double total() const{
	    return marks1+marks3+marks2;
	}
	
};
int main(){
    const int num =2;
    Student student[num];
    
    for(int i=0;i<num;i++){
        if (i > 0) cin.ignore();
        cout<<"Enter Student name :";
        getline(cin,student[i].name);
        
        cout<<"Enter Mark 1,2,3 ;";
        cin>>student[i].marks1>>student[i].marks2>>student[i].marks3;
    }
    if(student[0].total()>student[1].total()){
        cout<<student[0].name<<" got the highest marks :"<<student[0].total()<<endl;
    }else if(student[0].total() < student[1].total()){
        cout<<student[1].name<<" got the highest marks :"<<student[1].total()<<endl;
    }else{
        cout<<"Both marks are the same";
    }
    
    return 0;
    
}
