#include <iostream> 
using namespace std; 
class Test 
{ 
   private: 
     int mark; 
     float spi; 
   public: 
     void setData() 
     { 
       mark = 270; 
       spi = 6.5; 
     } 
     void displayData() 
     { 
       cout << "Mark= "<<mark<<endl; 
       cout << "spi= "<<spi;  
     }
} ;
int main(){
    Test t1;
    t1.setData();
    t1.displayData();
    return 0;
}