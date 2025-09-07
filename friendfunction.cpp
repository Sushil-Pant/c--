#include<iostream>
using namespace std;
class numbers {
    int num1,num2;
    public:
    void SetData(int a, int b);
    friend int add(numbers N);
};
void numbers ::SetData(int a, int b){
    num1=a;
    num2=b;
}
int add(numbers N){
    return(N.num1+N.num2);
}
int main(){
    numbers n1;
    n1.SetData(10,20);
    cout<<"Sum:"<<add(n1);
    return 0;
}