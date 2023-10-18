#include<iostream>
#include<memory>
#include<string>

using namespace std;

class Student{

    private:
    string name_;
    int age_;

    public:

    //param const...
    Student(const string& name, int age):name_(name),age_(age){
        cout<<"Student "<<name_<<" is created"<<endl;
    }

    void DisplayInfo()const{

        cout<<"Name: "<<name_<<", Age: "<<age_<<endl;
    }
    ~Student(){

        cout<<"Student "<<name_<<" is destroyed"<<endl;
    }

};

int main(){

    //using unique_ptr
    unique_ptr<Student> uniqueStudent = make_unique<Student>("John", 21);
    uniqueStudent->DisplayInfo();

    //using shared_ptr
    shared_ptr<Student> sharedStudent = make_shared<Student>("John", 21);
    sharedStudent->DisplayInfo();
    shared_ptr<Student> sharedStudent1 = make_shared<Student>("Bob", 22);
    sharedStudent1->DisplayInfo();

    //

    Student *rwoStudent = new Student("John", 21);
    rwoStudent->DisplayInfo();
    delete rwoStudent;



}