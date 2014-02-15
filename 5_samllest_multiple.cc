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
    int i = 2520;
    while(1) {
        if(div(i)){
            cout << "result is: "  << i << endl;
            return i;
        }
        else 
            i++;
    }

    return 0;
}
