#include<iostream>
//for dynamic memory allocation maanagement
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


    //uniqe smart pointer
    //-> this is used to access the member of the class
    unique_ptr<Rectangle> p1(new Rectangle(10,5));
    cout<<p1->area()<<endl;
    //unique_ptr<Rectangle> p2(p1); //error: use of deleted function ‘std::unique_ptr<_Tp, _Dp>::unique_ptr(const std::unique_ptr<_Tp, _Dp>&) [with _Tp = Rectangle; _Dp = std::default_delete<Rectangle>]’
    unique_ptr<Rectangle> p2;
    p2=move(p1); //p1 is empty now and p2 is pointing to the object
    cout<<p2->area()<<endl;


}

