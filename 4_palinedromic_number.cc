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
    for (int i = 999; i >= 100; --i)
    {
        for (int j = 999; j >= i; --j)
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
