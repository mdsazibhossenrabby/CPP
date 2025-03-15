#include <iostream>
using namespace std;

class Human{
    public: //access modifier
    string name;
    string address;
    int age;

    void habit(){
        cout<<"Playing Football"<<endl;
    }

    int AnnualSalary(int monthlySalary){
        return monthlySalary*12;
    }
};

class Cars{
    public:

        string Brand;
        string Model;
        int Price;
        
        //Constructor
        Cars(string Brand,string model,int price){
            this->Brand=Brand;
            this->Model=model;
            this->Price=price;
        }
};

int main(void){

    Human person1;
    person1.name="Hasan Kazi";
    person1.address="Bhola, Barishal";
    person1.age=25;

    cout<<"Name : "<<person1.name<<endl;
    cout<<"Address : "<<person1.address<<endl;
    cout<<"Age : "<<person1.age<<endl;

    person1.habit();
    cout<<"Annual Salary : "<<person1.AnnualSalary(15000)<<endl;


    Cars c1("Toyota","TA231",120000);

    cout<<"Brand Name : "<<c1.Brand<<endl;
    cout<<"Model : "<<c1.Model<<endl;
    cout<<"Pice : "<<c1.Price<<endl;


    return 0;
}