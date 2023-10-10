#include<iostream>
using namespace std;

class Bank{

public:

    // Bank(){
    //     cout<<"default constructor of Bank"<<endl;
    // }
    Bank(); //defining outside the class

    void test(){

        cout<<"test function of Bank"<<endl;
    }
    void demo();

};
Bank::Bank(){

    cout<<"default constructor of Bank"<<endl;
}
void Bank::demo(){

    cout<<"demo function of Bank"<<endl;
}


int main(){


    Bank b1; //default constructor
    Bank b2; //default constructor
    Bank b3; //default constructor
    b1.test();
    //b1.Bank(); error....

}