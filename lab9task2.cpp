#include<iostream>
using namespace std;
int main(){
    int number1,number2;
    cout<<"Enter the number 1"<<endl;
    cin>>number1;
    cout<<"Enter the number 2"<<endl;
    cin>>number2;
    if(number1>number2){
       cout<<"number1 is larger"<<endl;
    }
    else if(number1<number2){
        cout<<"number2 is larger"<<endl;

    }
    else{
        cout<<"both are equal"<<endl;
    }
    return 0;
}
    