#include<iostream>
using namespace std;
int main()
{   string stu_name,enroll_id,branch;
    int sem,mobile_no,marks_maths,marks_cpf,marks_physics,total_marks;
    float percentage,avg_marks;
    cout<<"----------------------------------------------------"<<endl;
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

    cout<<"------------------------------------------------"<<endl;
    cout<<"ACADEMIC INFORMATION"<<endl;
    cout<<"------------------------------------------------"<<endl;
    cout<<"enter your maths marks";
    cin>>marks_maths;
    cout<<"enter your cpf marks";
    cin>>marks_cpf;
    cout<<"enter your physics marks";
    cin>>marks_physics;
    total_marks=marks_maths+marks_cpf+marks_physics;
    avg_marks=total_marks/3;
    percentage=total_marks/3;

    cout<<"*********************************************************"<<endl;
    cout<<"STUDENT RECORD MANAGEMENT SYSTEM"<<endl;
    cout<<"*********************************************************"<<endl;
    cout<<"softwear version:1.1"<<endl;
    cout<<"institute:CHARUSAT University"<<endl;
    cout<<"Academic year:2026-27"<<endl;
    cout<<"------------------------------------------------------------"<<endl;


    cout<<"student name:"<<stu_name<<endl;
    cout<<"enrollment id:"<<enroll_id<<endl;
    cout<<"branch:"<<branch<<endl;
    cout<<"semester:"<<sem<<endl;
    cout<<"mobile no:"<<mobile_no<<endl;


    cout<<"*********************************************************"<<endl;
    cout<<"ACADEMIC SUMMRAY"<<endl;
    cout<<"*********************************************************"<<endl;

    cout<<"Total marks:"<<total_marks<<endl;
    cout<<"Average marks:"<<avg_marks<<endl;
    cout<<"percentage:"<<percentage<<"%"<<endl;


}
