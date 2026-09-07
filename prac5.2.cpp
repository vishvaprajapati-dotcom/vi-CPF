#include<iostream>
using namespace std;
int main()
{
    string stu_name,enroll_id,branch;
    int sem,mobile_no,choice;
    do
    {       cout<<"----------------------------------------------------"<<endl;
            cout<<"STUDENT REGISTRATION"<<endl;
            cout<<"----------------------------------------------------"<<endl;

            cout<<"enter your name";
            cin>>stu_name;
            cout<<"enter your enrollment id";
            cin>>enroll_id;
            cout<<"enter your branch";
            cin>>branch;
            cout<<"enter your semester";
            cin>>sem;
            cout<<"enter your mobile no";
            cin>>mobile_no;
            cout<<"do you want to register a new student?1-yes & 2-no";
            cin>>choice;
    }while(choice==1);


}
