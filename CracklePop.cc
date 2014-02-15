#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int i = 1;
    while(i <= 100) {
        if(i%15 == 0)
            cout << "CracklePop" <<endl; 
        else if(i%3 == 0)
            cout << "Crackle"  <<endl;
        else if(i%5 == 0)
            cout << "Pop" << endl;
        else 
            cout << i << endl;
    
        i++;
    }

    //int pattern[6] = {2, 1, 2, 1, 2}:
    return 0;
}
