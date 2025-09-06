#include<iostream>
using namespace std;
class Car 
{
    char company[20];
    int top_speed;
    public:
    void SetData(){
        cout<<"Enter Company:";
        cin>>company;
        cout<<"Enter Top Speed:";
        cin>>top_speed;
    }
    void DisplayData(){
        cout<<"\nCompany:"<<company;
        cout<<"\nTop speed:"<<top_speed;
    }
};
int main (){
    Car c1;
    c1.SetData();
    c1.DisplayData();
    return 0;
}