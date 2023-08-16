#include <iostream>
using namespace std;
int main() {
int t1,t2,new_term, n,x;
t1 = 1;
t2 = 2;
new_term = t1+t2;
n = 4000000;
while (new_term <= n) {
    if (new_term % 2 == 0){
        x+=new_term;
        
    }

    t1 = t2;
    t2 = new_term;
    new_term = t1+t2;
    
}
cout << x+2;


return 0; }
