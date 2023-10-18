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


    //shared pointer
    shared_ptr<Rectangle> p1(new Rectangle(10,5));
    cout<<p1->area()<<endl; //50

    shared_ptr<Rectangle> p2;
    p2 = p1; //p1 and p2 are pointing to the same object

    shared_ptr<Rectangle> p3(p2); //p3 is pointing to the same object

    cout<<p2->area()<<endl; //50    

    cout<<p1->area()<<endl; //50



    cout<<p1.use_count()<<endl; //2


}