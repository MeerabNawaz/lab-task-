#include<iostream>
using namespace std;
int main(){
    int sideA;                             // declaring variables
    int sideB;
    int sideC;
    cout<<"sideA = "<<endl;             //input the values of sides
    cin>>sideA;
    cout<<"sideB = "<<endl;
    cin>>sideB;
    cout<<"sideC = "<<endl;
    cin>>sideC;
    if  (sideA==sideB && sideC==sideA && sideC==sideB){             //equilateral triangle
        cout<<"the triangle is equilateral"<<endl;
    
    }else{
        cout<<"this is not the equilateral triangle"<<endl;
    }
    if( sideA==sideB && sideA+sideB>sideC ){                        //isoceles triangle
        cout<<"the triangle is isoceles"<<endl;
    }else{
        cout<<"the triangle is not isoceles"<<endl;
    }
    if( sideA!=sideB && sideA+sideB>sideC){                         //scalene triangle
        cout<<"the triangle is scalene"<<endl;
    }else{
        cout<<"the triangle is not scalene"<<endl;
    }if( sideA!=sideB && sideA+sideB<sideC ){                       // validity of the triangle
        cout<<"this is not a triangle"<<endl;
    }if( sideA=0 && sideB!=sideA && sideA+sideB<sideC){
        cout<<"this is invalide triangle no side should be equal to 0"<<endl;

    }
     return 0;
}
