#include<iostream>
using namespace std;
int main(){
    string studentname;
    float percentage;
    string income;

    cout<<"Enter the studentname"<<endl;
    cin>>studentname;
    cout<<"Enter the percentage"<<endl;
    cin>>percentage;
    cout<<"Enter the family income"<<endl;
    cin>>income;

    if (percentage = 80){
        
        cout<<"the student is eligible"<<endl;
    }else{
        cout<<"the student is not eligible"<<endl;

    }

    if (percentage > 90) {
            cout<<"the student gets scholorship"<<endl;
        }else {
            cout<<"the student doesnot get scholorship"<<endl;

        }
        
    }
return 0;
}