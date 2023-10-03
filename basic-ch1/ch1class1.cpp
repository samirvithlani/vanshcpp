#include<iostream>
using namespace std;

class Vehicle{

//thease prop belongs to class...
//all prop of class is by default private
//and private prop can not be access out side of class
//we have to make it public to access out side of class

        public:
        int makeyear;
        char vehname[20];
        

};


int main(){


//if you need to access class prop out side of class 
//refernce of class is required... refernce  == object..
//how to create object...

    //v1 is refernce variable / object of class Vehicle
    //using v1 we can access all prop of class which is accessible 
    Vehicle v1; //object of class Vehicle

    cout<<"enter vehicle name :";
    cin>>v1.vehname;
    cout<<"enter make year :";
    cin>>v1.makeyear;

    cout<<"vehicle name :"<<v1.vehname<<endl;
    cout<<"make year :"<<v1.makeyear<<endl;
}