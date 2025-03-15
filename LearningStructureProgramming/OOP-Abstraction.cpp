#include <bits/stdc++.h>

using namespace std;

class Account{
    private:
        int balance=0;
    public:
        int getBalance(){ //getter method
            return balance;
        }

        void setBalance(int b){ //setter method
            balance+=b;
        }
};

int main(void){

    Account ac1;

    cout<<"The Balance : "<<ac1.getBalance()<<endl;
    cout << "Add 100Tk to Balance " << endl;
    ac1.setBalance(100);
    cout << "The Balance after update : " << ac1.getBalance() << endl;

    return 0;
}