#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num)
{
    int i = 2;
    //only 1 factor > sqrt(n)
    int j = 0;
    while(i < num && j < 2) {
        if(num%i == 0)
            return false;
        else {
            if(i > sqrt(num))
                j++;
            i++;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    
    int sum = 2;
    int i = 3;

    while(1) {
        if(isPrime(i)) {
            int sum2 = sum + i;
            if(sum2 < 2000000) {
                sum = sum2;
            } else {
                cout << "sum is: " << sum << endl;
                return sum;
            }
        }

        i += 2;
    }

    return 0;
}
