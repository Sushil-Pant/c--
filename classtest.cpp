#include <iostream> 
using namespace std; 
class Test 
{ 
   private: 
     int mark; 
     float spi; 
   public: 
     void SetData() 
     { 
       mark = 270; 
       spi = 6.5; 
     } 
     void DisplayData() 
     { 
       cout << "Mark= "<<mark<<endl; 
       cout << "spi= "<<spi;  
     }
} ;
int main(){
    Test t1;
    t1.SetData();
    t1.DisplayData();
    return 0;
}