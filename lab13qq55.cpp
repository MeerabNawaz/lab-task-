#include<iostream>
using namespace std;
int main(){
    int number;                                     //declaring variables
    int sumOfNumber=0 ;                     
    cout<<"Enter the number = "<<endl;              //input the random number
    cin>>number;
    while(number > 0){                              // using while loop to get the sun of the number
       sumOfNumber += number%10;
       number/=10;
       }
       cout<<"the sumOfNumber = "<<endl;
       if(sumOfNumber%3==0){                        //if else statement to check if the number is divisible by 3 or not
        cout<<"your number divisible by 3"<<endl;
       } else{
        cout<<"your number is not divisible by 3"<<endl;
       }

    return 0;
}