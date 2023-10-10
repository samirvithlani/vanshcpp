#include<iostream>
using namespace std;

class Uni{

public:

    //param constructor
    Uni(int x){
        cout<<"parameterized constructor of Uni"<<endl;
        cout<<"x = "<<x<<endl;
    }
    Uni(){
        cout<<"default constructor of Uni"<<endl;
    }

};


int main(){

      Uni u(100);
      Uni u1;


}