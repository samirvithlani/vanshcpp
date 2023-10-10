#include<iostream>

using namespace std;

class A{

    public:
    A(){

        cout<<"default constructor of A"<<endl;
    }
};

class B:public A{

public:
    B(){

        cout<<"default constructor of B"<<endl;
    }
};

int main(){

    B b1;


}