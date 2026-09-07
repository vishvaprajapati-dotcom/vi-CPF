#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

    string stu_name,enroll_id,branch;
    int sem,mobile_no,marks[10],total_marks=0,i,no_of_sub,choice;
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
        {   l:cout<<"enter the total number of subject.";
            cin>>no_of_sub;
            for(i=0;i<no_of_sub;i++)
            {
               cout<<"enter marks of subject"<<i+1;
               cin>>marks[i];
               total_marks=total_marks+marks[i];

            }
             avg_marks=total_marks/no_of_sub;
            percentage=total_marks/no_of_sub;
            cout<<"**********************************************"<<endl;
            cout<<"ACADEMIC SUMMARY"<<endl;
            cout<<"**********************************************"<<endl;
            cout<<left<<setw(25)<<"Total marks"<<":"<<total_marks<<endl;
            cout<<left<<setw(25)<<"Average marks"<<":"<<avg_marks<<endl;
            cout<<left<<setw(25)<<"percentage"<<":"<<percentage<<"%"<<endl;

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
    case 4:
        {
            goto l;
            break;
        }
    case 5 :
        {
            return 0;
        }
    default :
        {
            cout<<"invalid choice";
        }

        }
}
