#include<iostream>
#include<memory>

using namespace std;

int main(){

    shared_ptr<int> sharedint = make_shared<int>(10);
    //weak_ptr<int> weakint(sharedint);
    weak_ptr<int> weakint ;

    if(auto locked = weakint.lock()){

        cout<<*locked<<endl; //10
    }
    else{
            
            cout<<"weakint is empty"<<endl;
    }

}
