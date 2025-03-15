#include <iostream>
using namespace std;

namespace second{
    int x=2;
}

namespace third
{
    int x=3;
} 


int main(void){

    int x=1;

    cout<<x<<endl; //1
    cout<<second::x<<endl; //2
    cout<<third::x<<endl; //3

    /* Namespace provides a solution for preventing variable name conflicts in larger 
        projects. Since each entity needs an unique name, namespace allows for identically
        named entities as long as the namespace are differents.
    */

    return 0;
}