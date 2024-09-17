#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int salary;
    int net_salary;
    int bonus;

    cout<< "enter a salary:" << endl;

    cin>>salary;

    if(salary > 20000 && salary < 25000){
        cout<<"bonus is 15%"<< endl;
        bonus= salary * 0.15;
        }
        else if(salary< 20000){
            cout<<"bonus is 10%"<<endl;
            bonus= salary * 0.10;
        }
        else{
                cout<<"bonus is 5%"<<endl;
                bonus= salary * 0.05;
        }
        net_salary =salary +  bonus;
        cout<<"The net salary is"<< net_salary<<std::endl;
        
        
    return 0;
}