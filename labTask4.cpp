#include<iostream>
using namespace std;
int main(){
    int orignalPrice,appliedDiscount = 0;
    cout<<"Enter the orignal price"<<endl;
    cin>>orignalPrice;
    if(orignalPrice=5000){
        cout<<"appliedDiscount = 15"<<endl;
    }else{
        cout<<"appliedDiscount = 30"<<endl;
    }
    float discount = orignalPrice * appliedDiscount/100;

    return 0;
}