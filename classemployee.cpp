#include<iostream>
using namespace std;
class Employee {
    char name[20];
    int salary;
    int age;
    public:
    void SetData(){
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Salary:";
        cin>>salary;
        cout<<"Enter Age:";
        cin>>age;

    }
    void DisplayData(){
        cout<<"Name:"<<name<<endl;
        cout<<"Salary:"<<salary<<endl;
        cout<<"Age:"<<age<<endl;
    }
};
int main(){
     Employee e1;
     e1.SetData();
     e1.DisplayData();
     return 0;
}