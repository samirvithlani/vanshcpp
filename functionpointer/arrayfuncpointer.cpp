//array of function pointers
#include<iostream>
using namespace std;

int add (int a,int b){

    return a+b;
}

int sub (int a,int b){

    return a-b;
}

//array of function pointers

//switch case...menu driven program

int main(){

    int (*func[2])(int,int)={add,sub};
    cout<<"add = "<<func[0](10,20);


}