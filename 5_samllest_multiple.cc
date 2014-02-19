#include <cmath>
#include <iostream>
using namespace std;

bool div(int num)
{
    bool a = true;

    for (int i = 1; i <=20; ++i)
    {
        if(num % i != 0){
            a = false;
            return a;
        }
    }

    return a;
}


int main(int argc, char const *argv[])
{

    //result = 2^4 * 3^2 * 5^1 * 7^1 * 
    //prime factor that less than 20 should all be contained
    

    //the exponent of 2, 3, 5, should match the express:   x^num < 20
    //for example 2^4 < 20, 2^5>20, so num = 4
    //a[i] = floor( log(k) / log(p[i]) ).

    //x^2 > 20 ---> x <= sqrt(20)
    //pow

    //int i = 2520;
    //while(1) {
        //if(div(i)){
            //cout << "result is: "  << i << endl;
            //return i;
        //}
        //else 
            //i++;
    //}

    //int p = {2, 3, 5, 7, 9, 11, 13, 17, 19};
    //              ->limit

    int k = 20;
    int p[] = {2, 3, 5, 7, 11, 13, 17, 19};
    int i = 0;
    int limit = sqrt(k);
    int result = 1;
    int exp = 1;
    bool flag =true;

    while(i < 8) {
        exp = 1;

        if(flag) {
            if(p[i] <= limit){
                exp = floor(log(k)/log(p[i]));
            } else {
                flag = false;
            }
        } 

        result = result* pow(p[i], exp);
        i++;
    }
    cout << result << endl;
    return 0;
}
