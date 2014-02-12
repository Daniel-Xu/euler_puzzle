#include <iostream>
using namespace std;

//4, 000,0 00

int main(int argc, char const *argv[])
{
    int a = 1;
    int b = 1;
    int c = a+ b;

    int n;  
    int sum = 0;

    //original method
    //while( n < 4000000) {
        //n = a + b;     
        //a = b;
        //b = n;
        //if(n%2 == 0)
            //sum += n;
    //}
    


    //refine funciton
    

    // 1  1 2 3 5 8 13 21 34 
    // a  b c a b c a  b  c
    // so the third number must be even
    
    while( c < 4000000) {
        sum = sum + c;
        a = b + c;
        b = a + c;
        c = a + b;
    }

    cout << "the final resutl is: " << sum << endl;
    return 0;
}
