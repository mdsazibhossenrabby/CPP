#include <iostream>
using namespace std;

enum Days{
    saturday=1,
    sunday=2,
    monday=3,
    tuesday=4,
    wednesday=5,
    thursday=6,
    friday=7
};

int main(void){

    /*
    enum = is an userdefine data type that consists
            of paired named-integer constant
    */


    Days today=saturday;

    switch(today){
        case saturday :
            cout<<"Today is Saturday !"<<endl;
            break;
        case sunday :
            cout<<"Today is Sunday !"<<endl;
            break;
        case monday :
            cout<<"Today is Monday !"<<endl;
            break;
        case tuesday :
            cout<<"Today is Tuesday !"<<endl;
            break;
        case wednesday :
            cout<<"Today is Wednesday !"<<endl;
            break;
        case thursday :
            cout<<"Today is Thursday !"<<endl;
            break;
        case friday :
            cout<<"Today is Friday !"<<endl;
            break;
        default  :
            cout<<"Worng!"<<endl;
            break;
    }


    int inputDay;

    cout << "Enter a day (1 for Saturday, 2 for Sunday, ... 7 for Friday): ";
    cin >> inputDay;

    // Convert integer to enum
    today = static_cast<Days>(inputDay);


    switch(today){
        case 1 :
            cout<<"Today is Saturday !"<<endl;
            break;
        case 2 :
            cout<<"Today is Sunday !"<<endl;
            break;
        case 3 :
            cout<<"Today is Monday !"<<endl;
            break;
        case 4 :
            cout<<"Today is Tuesday !"<<endl;
            break;
        case 5 :
            cout<<"Today is Wednesday !"<<endl;
            break;
        case 6 :
            cout<<"Today is Thursday !"<<endl;
            break;
        case 7 :
            cout<<"Today is Friday !"<<endl;
            break;
        default  :
            cout<<"Worng!"<<endl;
            break;
    }

    cout << "Enter a day (1 for Saturday, 2 for Sunday, ... 7 for Friday): ";
    cin >> inputDay;

    // Convert integer to enum
    today = static_cast<Days>(inputDay);


    switch(today){
        case saturday :
            cout<<"Today is Saturday !"<<endl;
            break;
        case sunday :
            cout<<"Today is Sunday !"<<endl;
            break;
        case monday :
            cout<<"Today is Monday !"<<endl;
            break;
        case tuesday :
            cout<<"Today is Tuesday !"<<endl;
            break;
        case wednesday :
            cout<<"Today is Wednesday !"<<endl;
            break;
        case thursday :
            cout<<"Today is Thursday !"<<endl;
            break;
        case friday :
            cout<<"Today is Friday !"<<endl;
            break;
        default  :
            cout<<"Worng!"<<endl;
            break;
    }

    return 0;
}