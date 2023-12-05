//callback function in cpp....using function pointer

#include<iostream>
using namespace std;

void processValues(int (*process)(int),int a, int b){


    cout<<"\n"<<process(a)<<" "<<process(b);

}

int rectangle(int x){

    return x*2;
}

int square(int x){

    return x*x;
}


int main(){

   // processValues(square,10,20);
   processValues(rectangle,10,20);
}

