#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
            
    int start = 2;
    long n = 600851475143;

    vector<int> factor;

    while(n > 1) {
        if(n%start == 0) {
            n /= start;
            factor.push_back(start);
        } else {
            start += 1;
        }
    }

    cout << *(factor.end()-1) << endl;
    return 0;
}
