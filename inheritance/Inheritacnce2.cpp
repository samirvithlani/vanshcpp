//#multilevel inheritance
//#1 --> child class --> child class
//# --> ---> --->

#include<iostream>
using namespace std;


class Country{

    public:
    int grant=10000;

};

class State : public Country{

    public:
    int stateTax = 12000;

    void getStateData(){

        cout<<"\n grant : "<<grant;
        cout<<"\n state tax : "<<stateTax;
    }

};

class City : public State{


public:

    int population = 100000;

    void getCityData(){

        cout<<"\n grant : "<<grant;
        cout<<"\n state tax : "<<stateTax;
        cout<<"\n population : "<<population;
    }

};



int main(){



}


