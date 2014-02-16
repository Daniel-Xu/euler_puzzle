#include <cmath>
#include <iostream>
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
    int start = 3;
    int count = 2;

    while(count < 10001){
        start++;
        if(isPrime(start))
            count++;
    }

    cout << "the result is: " << start << endl;
    return 0;

}
