#include<iostream>
using namespace std;

class Zomato{

    public:
    void search(){
        cout<<"\n searching for food";
    }
    void search(string food){
        cout<<"\n searching for "<<food;
    }
    void search(string food, string location){
        cout<<"\n searching for "<<food<<" in "<<location;
    }
    void search(string food,int price){
        cout<<"\n searching for "<<food<<" in "<<price;
    }
    void search(string food,long price){
        cout<<"\n searching for long..."<<food<<" in "<<price;
    }
    void search(string food,float price){
        cout<<"\n searching for floating... "<<food<<" in "<<price;
    }
    //No coompile error..
    // void search(int price,string food){
    //     cout<<"\n searching for "<<food<<" in "<<price;
    // }

    void search(string food,int price,string location){
        cout<<"\n searching for "<<food<<" in "<<price<<" in "<<location;
    }
};



int main(){

//    float f =20;
    Zomato z;
    //z.search();
   // z.search("Pizza");
   // z.search("Pizza","Delhi");
   z.search("Pizza",123.0f);



}