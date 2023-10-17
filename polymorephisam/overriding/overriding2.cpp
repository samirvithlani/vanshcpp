#include<iostream>
using namespace std;


class TRAI{

    public:

    virtual void call()=0; //pure virtual function
    virtual void msg(int p)=0; //pure virtual function
    virtual int data()=0; //pure virtual function
        

};

class JIO : public TRAI{

    public:
    void call(){
        cout<<"\n calling from JIO";
    }
    void msg(int x){
        cout<<"\n msg from JIO";
    }
    int data(){
        cout<<"\n data from JIO";
        return 0;
    }

};

int main(){


    JIO j;
    j.call();



}