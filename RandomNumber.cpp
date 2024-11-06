#include <iostream>
#include <ctime>
using namespace std;
int main(void){

    srand(time(NULL)); // initialize Random number generator

    int number1=rand(); //any random number
    int number2=rand()%6; // random number between 0 to 5
    int number3=(rand()%6)+1; //random number between 1 to 6

    cout<<number1<<endl;
    cout<<number2<<endl;
    cout<<number3<<endl;

    return 0;
}