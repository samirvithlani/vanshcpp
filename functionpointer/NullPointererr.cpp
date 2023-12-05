//NUll pointers and error handing in function pointers

#include<iostream>
using namespace std;

int add(int a,int b){
    
        return a+b;
}

int main(){


    int (*func)(int,int) = NULL;

    if(func!=NULL){
        cout<<"add = "<<func(10,20);
    }
    else{
        cout<<"function pointer is null";
    }



}