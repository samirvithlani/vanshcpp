#include<iostream>
#include<memory>
using namespace std;

int main(){


    shared_ptr<int> sharedint1 = make_shared<int>(10);
    cout<<*sharedint1<<endl; //10
    shared_ptr<int> sharedint2 = sharedint1; 
    shared_ptr<int> sharedint3(sharedint1);
    sharedint1.reset(); //sharedint1 is empty now
    cout<<"after reset..."<<*sharedint1<<endl; //10
    cout<<*sharedint2<<endl; //10
    cout<<*sharedint3<<endl; //10
    cout<<sharedint1.use_count()<<endl; //2


}