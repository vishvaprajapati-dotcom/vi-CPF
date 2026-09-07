#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    string stu_name,enroll_id,branch;
    int sem,mobile_no,marks_maths,marks_cpf,marks_physics,total_marks,choice;
    float percentage,avg_marks;
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"MENU"<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"1.register a student"<<endl;
    cout<<"2.display student record"<<endl;
    cout<<"3.enter student marks"<<endl;
    cout<<"4.display result"<<endl;
    cout<<"5.exit"<<endl;
    cout<<"**************************************************************"<<endl;
    cout<<"enter your choice from given menu.1or 2or 3or 4or 5"<<endl;
    cin>>choice;
    switch(choice)
    {
    case 1 :
        {
            m:cout<<"enter your name";
            cin>>stu_name;
            cout<<"enter your enrollment id";
            cin>>enroll_id;
            cout<<"enter your branch";
            cin>>branch;
            cout<<"enter your semester";
            cin>>sem;
            cout<<"enter your mobile no";
            cin>>mobile_no;
            if (choice==2)
            {
                goto n;
            }
            else
            {
                break;
            }



        }
    case 2 :
        { goto m;

           n: cout<<left<<setw(25)<<"Student name"<<":"<<stu_name<<endl;
            cout<<left<<setw(25)<<"Enrollment id"<<":"<<enroll_id<<endl;
            cout<<left<<setw(25)<<"Branch"<<":"<<branch<<endl;
            cout<<left<<setw(25)<<"Sem"<<":"<<sem<<endl;
            cout<<left<<setw(25)<<"Mobile no"<<":"<<mobile_no<<endl;
            break;

        }
    case 3 :
        {
           l: cout<<"enter your maths marks";
            cin>>marks_maths;
            cout<<"enter your cpf marks";
            cin>>marks_cpf;
            cout<<"enter your physics marks";
            cin>>marks_physics;
            if((marks_maths!='\0'||marks_cpf!='\0'||marks_physics!='\0'))
            {
                cout<<"marks enterd succsefully"<<endl;
            }
            else
            {
                cout<<"please enter your marks properly."<<endl;
            }
            if (choice==4)
            {
                goto t;
            }
            else
            {
                break;
            }
    case 4:
        {
            goto l;
           t: total_marks=marks_maths+marks_cpf+marks_physics;
            avg_marks=total_marks/3;
            percentage=total_marks/3;
            cout<<"**********************************************"<<endl;
            cout<<"ACADEMIC SUMMARY"<<endl;
            cout<<"**********************************************"<<endl;
            cout<<left<<setw(25)<<"Total marks"<<":"<<total_marks<<endl;
            cout<<left<<setw(25)<<"Average marks"<<":"<<avg_marks<<endl;
            cout<<left<<setw(25)<<"percentage"<<":"<<percentage<<"%"<<endl;
            cout<<"----------------------------------------------------------"<<endl;
            cout<<"ACADEMIC STATUS"<<endl;
            cout<<"----------------------------------------------------------"<<endl;

            if(percentage>=45)
            {
                cout<<left<<setw(25)<<"Result"<<":"<<"pass"<<endl;
            }
            else
            {
                cout<<left<<setw(25)<<"Result"<<":"<<"fail"<<endl;
            }
            if(percentage>90)
            {
                cout<<left<<setw(25)<<"Grade"<<":"<<"O"<<endl;
                cout<<left<<setw(25)<<"Performance"<<":"<<"outstanding";
            }
            else if(percentage>80)
            {
                cout<<left<<setw(25)<<"Grade"<<":"<<"A+"<<endl;
                cout<<left<<setw(25)<<"Performance"<<":"<<"exellent";

            }
            else if(percentage>70)
            {
               cout<<left<<setw(25)<<"Grade"<<":"<<"A"<<endl;
                cout<<left<<setw(25)<<"Performance"<<":"<<"very good";
            }
            else if(percentage>60)
            {
                cout<<left<<setw(25)<<"Grade"<<":"<<"B+"<<endl;
                cout<<left<<setw(25)<<"Performance"<<":"<<"good";
            }
            else if(percentage>50)
            {
                cout<<left<<setw(25)<<"Grade"<<":"<<"B"<<endl;
                cout<<left<<setw(25)<<"Performance"<<":"<<"satisfactory";
            }
            else if(percentage>40)
            {
                cout<<left<<setw(25)<<"Grade"<<":"<<"c"<<endl;
                cout<<left<<setw(25)<<"Performance"<<":"<<"needs improvement";
            }

            else
            {
                cout<<left<<setw(25)<<"Grade"<<":"<<"F"<<endl;
                cout<<left<<setw(25)<<"Performance"<<":"<<"fail";
            }

           break;
        }
    case 5:
        {
            return 0;
            break;
        }



    default:
        {
            cout<<"Invalid choice";
        }
    }
}
}
