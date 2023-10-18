#include<iostream>
#include<memory>
using namespace std;

int main(){


    unique_ptr<int> uniqeInt = make_unique<int>(10);
    cout<<*uniqeInt<<endl;
    unique_ptr<int> uniqeInt2(uniqeInt); //error: use of deleted function ‘std::unique_ptr<_Tp, _Dp>::unique_ptr(const std::unique_ptr<_Tp, _Dp>&) [with _Tp = int; _Dp = std::default_delete<int>]’
    unique_ptr<int> uniqeInt2 = move(uniqeInt);
    cout<<*uniqeInt2<<endl;


}