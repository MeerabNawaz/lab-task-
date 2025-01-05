#include <iostream>
using namespace std;
     int main(){
        string  name, email, age;
        int marks;
        int seatsavailable = 10;
        float average;
        cout<<"name"<<endl;
        cin>>name;
        cout<<"email"<<endl;
        cin>>email;
        cout<<"age"<<endl;
        cin>>age;
        cout<<"marks"<<endl;
        cin>>marks;
        cout<<"eligibility criteria"<<endl;
        cout<<"CS >= 70"<<endl;
        cout<<"SE >= 65"<<endl;
        cout<<"student average"<<endl;
        cin>>average;
        if (average >= 70){
            cout<<"you are eligible for admission in CS"<<endl;
        }
        else {
            cout<<"you are not eligible for admission in CS"<<endl;
        }
        if (average >= 65){ 
            cout<<"you are eligible for admission in SE"<<endl;
        }
        else{
            cout<<"you are not eligible for admission in SE"<<endl;
        }
        if(seatsavailable>0){
            cout<<"admission given"<<endl;
        }
        else{
            cout<<"admission not given"<<endl;
        }
        return 0;
     }

