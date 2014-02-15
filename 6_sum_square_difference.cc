#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int result = 0;
    for (int i = 1; i < 100; ++i)
    {
        int tmp = 0;
        for (int j = i+1; j < 101; ++j)
        {
            tmp += j;
        }
        result = result + i*tmp; 
    }         

    cout << "result is: " << result *2 << endl;
    return 0;
}
