#include <bits/stdc++.h>

using namespace std;

class Animal{
    public :
        bool alive=true;

        void eat(){
            cout<<"The Animal is eating"<<endl;
        }
};

class Cat : public Animal{
    public :
        void sound(){
            cout<<"Meow Meow"<<endl;
        }
};

int main(void){

    Cat cat1;

    cat1.eat();
    cat1.sound();

    return 0;
}