#include<iostream>
using namespace std;
class Bank{

    public:

    void withdraw(){
        cout<<"\n withdraw from bank";
    }


};

//signature ---> returntype + name + parameter list
class ICICI:public Bank{

public:
void withdraw(){
        cout<<"\n withdraw from ICICI bank";
    }
};

int main(){


    ICICI i;
    i.withdraw();

}