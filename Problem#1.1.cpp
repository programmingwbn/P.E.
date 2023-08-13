#include <iostream>
using namespace std;

int main() {
int y;
int x = 1000;
    
   for(x < 1000; x--;) {
       if(x % 3 == 0) {
           y+=x;
       }
       else if(x % 5 == 0) {
           y+=x;
       }
       else {
           y=y;
       }
   }
cout << y;
    return 0;
}
