#include <iostream>
#include <ctime>
using namespace std;
int main(void){
    srand(time(NULL));
    cout<<"<<<<<<Lottery's Givaway>>>>>>>>>>>\n"
        "0. Samsung S23 Ultra\n"
        "1. Iphone 16 Pro MAX\n"
        "2. SMART TV 20``\n"
        "3. Washing Machine\n"
        "4. MUG\n";
    cout<<"Enter a number 0 to 4 and Check Your Luck : ";
    int n; 
    cin>>n; 

    int luck=rand()%5;

    if(n==luck){
        switch(n){
            case 0:
                cout<<"WOW, You Win Samsung S23 Ultra"<<endl;
                break;
            case 1:
                cout<<"WOW, You Win Iphone 16 Pro MAX"<<endl;
                break;
            case 2:
                cout<<"WOW, You Win SMART TV 20``"<<endl;
                break;
            case 3:
                cout<<"WOW, You Win Washing Machine"<<endl;
                break;
            case 4:
                cout<<"WOW, You Win MUG"<<endl;
                break;
        }
    }else{
        cout<<"Oho :( !  Batter Luck Next Time !"<<endl;
    }


    return 0;
}