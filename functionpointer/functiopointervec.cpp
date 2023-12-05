#include<iostream>
#include<vector>

using namespace std;


int add(int a,int b){
    
        return a+b;
}

int sub(int a,int b){
    
        return a-b;
}

int main(){

    //vector pointer to function

    vector<int (*)(int,int)> func = {add,sub};
    cout<<"add = "<<func[0](10,20);

}