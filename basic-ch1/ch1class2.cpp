/*
    Class with function and scope resulation operator example...

*/
#include<iostream>
using namespace std;


class Student{

    //private..
    int rollno;
    char name[20];

    public:

    // function.... 
    //function is collection of code which perform specific task
    //type of functions : 1. user define function 2. system define function
    //4 type of function 1) no return type and no argument
    //2) no return type and with argument
    //3) with return type and no argument
    //4) with return type and with argument
    void setStudentData(){

        cout<<"enter roll no :";
        cin>>rollno;
        cout<<"enter name :";
        cin>>name;
    }

    void getStudentData(); //defination of function

};
//using scope resulation operator :: we can define function outside the class
//:: scope resulation operator
void Student :: getStudentData(){

    //object is not required to access the param...
    cout<<"roll no :"<<rollno<<endl;
    cout<<"name :"<<name<<endl;
}

int main(){

    Student s1;
    s1.setStudentData();
    s1.getStudentData();

}