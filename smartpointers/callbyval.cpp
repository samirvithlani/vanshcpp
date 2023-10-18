#include<iostream>
using namespace std;

class Admin{

public:

    //call by value
    void swap(int no1,int no2){

        cout<<"Before swapping: inside swap function.... "<<endl;
        cout<<"no1: "<<no1<<"address "<<endl;
        cout<<"address of no1 - "<<&no1<<endl;
        cout<<"no2: "<<no2<<"address"<<endl;
        int temp=no1;
        no1=no2;
        no2=temp;
        cout<<"After swapping: inside swap function "<<endl;
        cout<<"no1: "<<no1<<endl;
        cout<<"no2: "<<no2<<endl;

    }

};

int main(){



    Admin admin;
    int a=10;
    int b=20;
    cout<<"Before swapping: inside main function.... "<<endl;
    cout<<"a: "<<a<<"address"<<&a<<endl;
    cout<<"b: "<<b<<"adderess of b = "<<&b<<endl;

    admin.swap(10,20);

    cout<<"After swapping: inside main function "<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;

}