#include<iostream>
using namespace std;

const int a =10;
const int b =2;


int multiply(){

    return a*b;
}

void display(int (*func)()){

    cout<<"\n"<<func();
}

int main(){


    display(multiply); //multiply()


}


