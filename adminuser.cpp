#include<iostream>
using namespace std;
int main(){
    string adminemail = "hello@uni";                           //Declaaring variables
    string adminpass = "hello321";
    int totalstudentsCS = 300;
    int totalstudentsAI = 240;
    string program1= "CS";
    string program2= "AI";
    int maxseats1=2,maxseats2=3;
    float mincriteria1=65,mincriteria2=60;
    cout<<"1. Admin login\n";
    cout<<"2. Student login\n";
    int choice;
    cout<<"Choose your login preference\n";                          //Choosing Login preference
    cin>>choice;
    if(choice==1){                                                 //Admin Workflow
    string adminclaimedemail;                               //declaring variables for admin workflow
    string adminclaimedpass;
    cout<<"admin email\n";
    cin>>adminclaimedemail;
    cout<<"admin pass\n";
    cin>>adminclaimedpass;
    if(adminclaimedemail==adminemail && adminclaimedpass==adminpass){
    cout<<"Admin Login successful\n";
    cout<<"1st Program"<<program1<<"\n";
    cout<<"1st program available seats="<<maxseats1<<"\n";
    cout<<"1st prorgram minimum eligibility criteria="<<mincriteria1<<"\n";
    cout<<"2nd Program"<<program2<<"\n";
    cout<<"2nd program available seats="<<maxseats2<<"\n";
    cout<<"2nd prorgram minimum eligibility criteria="<<mincriteria2<<"\n";
    }
    else{
    cout<<"Admin Login Failed\n";
    }
    }
    else if(choice==2){                                       //Student Workflow
    cout<<"Application Form\n";
    string name,email,cnic;                             //Variables for student workflow
    int option;
    short tmarks=100;
    float marks,studentpercent;
    cout<<"student name\n";
    cin>>name;
    cout<<"student email\n";
    cin>>email;
    cout<<"student CNIC\n";
    cin>>cnic;
    cout<<"Enter marks\n";
    cin>>marks;
    cout<<program2<<"\n";
    cout<<"Choose program option 1 or 2\n";
    cin>>option;
    if(option=1){                                       //Student chooses program option
    if(maxseats1>0){
    if(studentpercent>=mincriteria1){             //Eligibility check and using -- and ++ operator
    cout<<"CONGRATULATIONS You are selected for"<<program1<<"\n";
    maxseats1--;
    totalstudentsCS++;
    }
    else
    cout<<"You are not eligible\n";
    }
    else
    cout<<"Seats not Available\n";
    }
    else if(option=2){
    if(maxseats2>0){
    if(studentpercent>=mincriteria2){
    cout<<"CONGRATULATIONS You are selected for"<<program2<<"\n";
    maxseats2--;
    totalstudentsAI++;
    }
    else
    cout<<"You are not eligible\n";
    }
    else
    cout<<"Seats not Available\n";
    }
    else{
    cout<<"Invalid option\n";                      //Invalid option for choosing program
    return 0;
    }
    }
    else{
    cout<<"Inavlid Choice\n";              //Invalid choice while selecting admin or student login
            return 0;
    }

    return 0;
}
