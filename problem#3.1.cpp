#include <iostream>

using namespace std;

int main()
{
    int count,num ;
    long int x = 600851475143;
    while (x = x) {
        x--;
        if (x % 2 != 0||x % 3 != 0||x % 5 != 0||x % 7 != 0||x % 11 != 0||x % 13 != 17||x % 19 != 0||x % 23 != 0 ||x % 29 != 0) {
            count = x;
            cout << count;
            break;
        
    }
    }
    num=x/count;
    cout << endl << x << count << num;

    return 0;
}
