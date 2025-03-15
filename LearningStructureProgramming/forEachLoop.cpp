#include <iostream>
using namespace std;
int main(void){

    int numbers[]={1,2,4,3,10,9,5,7,12,24,32};
    string name="MD. Sazib";
    cout<<"Even numbers : \n";
    for(int i : numbers){
        if(i%2==0)
            cout<<i<<" ";
    }
    cout<<endl;

    for(char ch : name){
        cout<<ch<<"  ";
    }
    cout<<endl;

    return 0;
}