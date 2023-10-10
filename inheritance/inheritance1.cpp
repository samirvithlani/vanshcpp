#include<iostream>
using namespace std;

class Vehicle{

    public:
    int maxSpeed;
    int weight;
    int fuelCapacity;
    char name[30];
    char color[20];

};

//vehicle is parent class of car class....
class Car : public Vehicle{

    public:

    //defination....
    void getCarData();
    void showCarData();

};

void Car :: getCarData(){

    cout<<"\n enter car name : ";
    cin>>name;
    cout<<"\n enter car color : ";
    cin>>color;
    cout<<"\n enter car max speed : ";
    cin>>maxSpeed;
    cout<<"\n enter car weight : ";
    cin>>weight;
    cout<<"\n enter car fuel capacity : ";
    cin>>fuelCapacity;

}

void Car :: showCarData(){

    cout<<"\n car name : "<<name;
    cout<<"\n car color : "<<color;
    cout<<"\n car max speed : "<<maxSpeed;
    cout<<"\n car weight : "<<weight;
    cout<<"\n car fuel capacity : "<<fuelCapacity;

}


class Bike:public Vehicle{

    public:

    //defination....
    void getBikeData();
    void showBikeData();

};

void Bike :: getBikeData(){

    //get
    cout<<"\n enter car name : ";
    cin>>name;
    cout<<"\n enter car color : ";
    cin>>color;
    cout<<"\n enter car max speed : ";
    cin>>maxSpeed;
    cout<<"\n enter car weight : ";
    cin>>weight;
    cout<<"\n enter car fuel capacity : ";
    cin>>fuelCapacity;
}
void Bike :: showBikeData(){

    //show
}


int main(){

    Car c1;
    c1.getCarData();
    c1.showCarData();

    return 0;


}

