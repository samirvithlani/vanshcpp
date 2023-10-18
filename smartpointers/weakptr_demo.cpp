#include<iostream>
#include<memory>
using namespace std;

class Rectangle{

    int length;
    int breadth;

    public:
    Rectangle(int l,int b){

        length=l;
        breadth=b;
    }
    int area(){

        return length*breadth;
    }

};

int main(){

    shared_ptr<Rectangle> p1(new Rectangle(10,5));
    //weak pointer
    weak_ptr<Rectangle> p2(p1);
    cout<<p1->area()<<endl; //50
    //cout<<p2->area()<<endl; //50
    cout<<p2.lock()->area()<<endl; //50

}