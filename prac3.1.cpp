#include<iostream>
using namespace std;
int main()
{   string name,id,branch;
    int sem,mobile_no,mmaths,mcpf,mphysics,total;
    float per,avg;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"STUDENT REGISTRATION"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"enter your name";
    cin>>name;
    cout<<"enter your enrollment id";
    cin>>id;
    cout<<"enter your branch";
    cin>>branch;
    cout<<"enter your semester";
    cin>>sem;
    cout<<"enter your mobile no";
    cin>>mobile_no;

    cout<<"------------------------------------------------"<<endl;
    cout<<"ACADEMIC INFORMATION"<<endl;
    cout<<"------------------------------------------------"<<endl;
    cout<<"enter your maths marks";
    cin>>mmaths;
    cout<<"enter your cpf marks";
    cin>>mcpf;
    cout<<"enter your physics marks";
    cin>>mphysics;
    total=mmaths+mcpf+mphysics;
    avg=total/3;
    per=total/3;

    cout<<"*********************************************************"<<endl;
    cout<<"STUDENT RECORD MANAGEMENT SYSTEM"<<endl;
    cout<<"*********************************************************"<<endl;
    cout<<"softwear version:1.1"<<endl;
    cout<<"institute:CHARUSAT University"<<endl;
    cout<<"Academic year:2026-27"<<endl;
    cout<<"------------------------------------------------------------"<<endl;


    cout<<"student name:"<<name<<endl;
    cout<<"enrollment id:"<<id<<endl;
    cout<<"branch:"<<branch<<endl;
    cout<<"semester:"<<sem<<endl;
    cout<<"mobile no:"<<mobile_no<<endl;


    cout<<"*********************************************************"<<endl;
    cout<<"ACADEMIC SUMMRAY"<<endl;
    cout<<"*********************************************************"<<endl;

    cout<<"Total marks:"<<total<<endl;
    cout<<"Average marks:"<<avg<<endl;
    cout<<"percentage:"<<per<<"%"<<endl;


}
