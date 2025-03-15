#include <bits/stdc++.h>

using namespace std;

class Cars{
    public:
        string Name;
        string Model;

        Cars(string n){
            this->Name=n;
        }

        Cars(string n, string m){
            this->Name=n;
            this->Model=m;
        }


};

int main(void){

    Cars car1("Toyota");
    cout<<"Name of Car 1 : "<<car1.Name<<endl;

    Cars car2("RolseRoyal","RS23L");
    cout << "Name of Car 2 : " << car2.Name << endl;
    cout << "Model of Car 2 : " << car2.Model << endl;

    return 0;
}