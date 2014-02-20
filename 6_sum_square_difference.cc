#include <cmath>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // the mehtod will casues trouble when i become larger
    //int result = 0;
    //for (int i = 1; i < 100; ++i)
    //{
        //int tmp = 0;
        //for (int j = i+1; j < 101; ++j)
        //{
            //tmp += j;
        //}
        //result = result + i*tmp; 
    //}         
    //cout << "result is: " << result *2 << endl;


    //we have some equation for the sum of 1^2 + 2^2 + ...+ n^2
    //we need to find equation for the sum of (1+2+...+n)^2
    //so we will never get in the same trouble like before
    //Through math induction and prove f(n+1), we get
    //f(n) =  (n/6)(2n+1)(n+1)


    int limit = 100;

    int sum = limit * (limit+1)/2;
    int sum2 = limit*(2*limit+1)*(limit+1)/6;
    int result = pow(sum, 2) - sum2;


    cout << "result is: " << result  << endl;
    return 0;
}
