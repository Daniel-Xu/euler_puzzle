#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int i = 1;    

    while(i <= 100) {
        if(i%3 == 0 && i%5 == 0) 
            cout << "CracklePop" <<endl; 
        else if(i%3 == 0)
            cout << "Crackle"  <<endl;
        else if(i%5 == 0)
            cout << "Pop" << endl;
        else 
            cout << i << endl;
    
        i++;
    }
    return 0;
}
