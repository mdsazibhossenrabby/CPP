#include <iostream>
using namespace std;
int main(void){

    int x=3.5; //implicit 3
    cout<<x<<endl;

    char y=64; //implicit coversion using ASCII code  @
    cout<<y<<endl;

    int z='A'; //implicit coversion using ASCII code  65
    cout<<z<<endl;

    //explicit
    cout<<(char)125<<endl; // }
    cout<<(int)'H'<<endl; // 72
    cout<<(int)50.87<<endl; // 50



    return 0;
}