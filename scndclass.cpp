#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int num;
    
    cout<< "enter a number:" << endl;

    cin>>num;

    if(num % 2 == 0){
        std::cout<<"it is even"<< endl;
        }
        else{
            std::cout<<"it is odd"<<endl;
        }

        
    return 0;
}