#include<iostream>
#include<list>

using namespace std;


int add(int a,int b){
    
        return a+b;
}

int sub(int a,int b){
    
        return a-b;
}

int main(){

    //vector pointer to function

    list<int (*)(int,int)> func = {add,sub};
    
    

}