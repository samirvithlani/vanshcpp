#include<iostream>
#include<memory>

using namespace std;
class Double{

    public:
    //double dValue; instance variable
    Double (double d=0):dValue(d){
        cout<<"Double constructor called"<<dValue<<endl;
    }
    ~Double(){
        cout<<"Double destructor called"<<dValue<<endl;
    }

    void setDouble(double d){
        dValue=d;
    }
    private:
    double dValue;
};

int main(){

    //Double d(3.14)
    auto_ptr<Double> ptr(new Double(3.14));
    (*ptr).setDouble(6.28);
    
    return 0;

}