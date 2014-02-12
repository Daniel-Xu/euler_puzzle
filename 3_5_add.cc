#include <iostream>
using namespace std;


//this mehthod can reduce the size of the num
int sum(int n, int end){
    return n * end * (1+ end)/2;
}


int main(int argc, char const *argv[])
{
    int num = 0; 
    //this mehtod  may need around 5 seconds
    //for (int i = 0; i < 1000000000; ++i)
    //{
        //if(i % 3 == 0 || i % 5 == 0) {
            //num += i;
        //}
    //}

    //sum(3) + sum(5) - sum(15)
    int end = 1000000000;

    //num =  sum(3, (end-1)/3) + sum(5, (end-1)/5) - sum(15, (end-1)/15);
    //and this is so fast
    num =  sum(3, end/3) + sum(5, end/5) - sum(15, end/15);

    cout << "final result is: " << num << endl;
    return 0;

}
