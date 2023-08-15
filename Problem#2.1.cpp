#include <iostream>
using namespace std;
int main() {
int first_value, second_value, third_value, answer, x;
first_value = 1;
second_value = 2;
x = 0;
for (x < 4000000; x;){
   
    third_value = first_value + second_value;
   if (x > 4000000) {
       break;
   }
   
    else if (third_value % 2 == 0) {
        answer += third_value;
        third_value = x;
        
    }
    else if (third_value % 2 != 0) {
        answer = answer;
        third_value = x;
    }

}
cout << answer;
return 0; }
