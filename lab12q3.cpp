#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter a number"<<endl;
    cin>>number;
   string result=(number%2 == 0)?"this  number is even":"this is odd number";
        cout<< result <<endl;
return 0;

}
