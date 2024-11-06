#include <iostream>
using namespace std;
int main(void){

    int age;
    string name,city;

    cout<<"Enter your First Name : ";
    getline(cin,name); //String with spaces, takes newline or white spaces from previos cin

    cout<<"Enter your Last Name : ";
    getline(cin >> ws ,name); //String with spaces, takes no newline or white spaces from previos cin


    cout<<"Enter Your Age : ";
    cin>>age;

    cout<<"Enter your City : ";
    cin>>city; //string with single token

    cout<<"Name : "<<name<<" Age : "<<age<<" City : "<<city<<endl;

    return 0;
}