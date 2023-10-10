#include<iostream>
using namespace std;

class Phone{

    public:
    Phone(int a){

        cout<<"param constructor of Phone"<<endl;
        cout<<"a = "<<a<<endl;
    }
    Phone(){
            
            cout<<"default constructor of Phone"<<endl;
    }

};

class Android:public Phone{

public:

    // Android():Phone(100){
    //     cout<<"default constructor of Android"<<endl;
    // }  
    //  Android(int x):Phone(x){
    //     cout<<"pram constructor of Android"<<endl;
    // }   

    Android():Phone(100){

        cout<<"default constructor of Android"<<endl;
    }

};

int main(){


    //Android a1(200);
    Android a1;


}