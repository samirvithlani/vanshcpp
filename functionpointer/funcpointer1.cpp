#include<iostream>
using namespace std;

int multiply(int a,int b){

    return a*b;
}
int add(int a,int b){

    return a+b;
}

int main(){


    //function pointer declaration
    int (*func)(int,int);

    func = multiply; //func () multiply

    int ans = func(100,2); //multiply(100,2)
    cout<<"\n ans = "<<ans;

    func = add; //func () add
    cout<<"\n ans = "<<func(100,2); //add(100,2)


}