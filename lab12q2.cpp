#include<iostream>
using namespace std;
int main(){
    int mathsMarks, englishMarks;                           //declaring variables
    cout<<"enter marks in maths subject"<<endl;
    cin>> mathsMarks;
    cout<<"enter marks in enlish subject"<<endl;
    cin>>englishMarks;
    float percentage;                                       //percentage variable
    cout<<"enter percentage"<<endl;
    cin>>percentage;
    if( mathsMarks == 85 && englishMarks == 80 && percentage>=90){      //if - else statement
        cout<<"you are eligible"<<endl;
    }else{
        cout<<"you are not eligible"<<endl;
    }

return 0;

}   