//passing param funciton as function pointer

#include<iostream>
using namespace std;

int multiply(int a,int b){

    return a*b;
}

void display(int (*func)(int,int)){

    cout<<"\n"<<func(100,2);
}

int main(){
    
        display(multiply); //multiply()
}