#include<iostream>
using namespace std;


void swap(int *a,int *b){

    cout<<"\n value of a = "<<*a;
    cout<<"\n value of b = "<<*b;

    cout<<"\n address of a = "<<a;
    cout<<"\n address of b = "<<b;


        int c = *a;
        *a = *b;
        *b = c;

    cout<<"\n after swap in swap function value of a = "<<*a;
    cout<<"\n after swap in swap function value of b = "<<*b;

    cout<<"\n after swap in swap function address of a = "<<a;
    cout<<"\n after swap in swap function address of b = "<<b;


}


int main(){


    int a =10,b=20;

    cout<<"\n value of a in main before call swap = "<<a;
    cout<<"\n value of b in main before call swap = "<<b;

    cout<<"\n address of a in main before call swap = "<<&a;
    cout<<"\n address of b in main before call swap = "<<&b;

    swap(&a,&b);

    cout<<"\n after swap in main function value of a = "<<a;
    cout<<"\n after swap in main function value of b = "<<b;

    cout<<"\n after swap in main function address of a = "<<&a;
    cout<<"\n after swap in main function address of b = "<<&b;


}