#include <iostream>
using namespace std;

bool isPaline(int src)
{
    int num = src;
    int sum = 0;
    while(num > 0) {
        sum = sum * 10 + num%10;
        num /= 10;
    }
    if(sum == src)
        return true;
    else 
        return false;
}

int main(int argc, char const *argv[])
{
    int result = 0;
    int max = 0;
    int intervel = 0;
    int init = 0;
    for (int i = 999; i >= 100; --i)
    {
        if(i % 11 == 0) {
            intervel = 1;
            init = 999;
        } else {
            intervel = 11;
            init = 990;
        }

        for (int j = init; j >= i; j -= intervel)
        {
            result = i * j;
            if(isPaline(result)) {
                if(max < result) {
                    max = result;
                }
            }
        }
        
    }
    
    cout << max << endl;
    return 0;
}
