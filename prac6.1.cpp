#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    string participant_id[20],participant_name[20],temp2,temp3;
    int score[20],total_score=0;
    /*avg_score=average score*/
    float avg_score;
    short int no_of_participants,i,j,temp1;
    cout<<"enter the number of participants";
    cin>>no_of_participants;
    for(i=0;i<no_of_participants;i++)
    {
        cout<<"enter participants id";
        cin>>participant_id[i];
        cout<<"enter the name of participants";
        cin>>participant_name[i];
        cout<<"enter your score";
        cin>>score[i];
        total_score=total_score+score[i];
    }
    avg_score=total_score/no_of_participants;
    for(i=0;i<no_of_participants;i++)
    {
        for(j=i+1;j<no_of_participants;j++)
        {
            if(score[i]>score[j])
            {
                temp1=score[i];
                score[i]=score[j];
                score[j]=temp1;

                temp2=participant_id[i];
                participant_id[i]=participant_id[j];
                participant_id[j]=temp2;

                temp3=participant_name[i];
                participant_name[i]=participant_name[j];
                participant_name[j]=temp3;

            }
        }
    }

    cout<<"-------------------------------------------------"<<endl;
    cout<<"SPORTS EVENT SCORE ANALYSIS"<<endl;
    cout<<"-------------------------------------------------"<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"participant performance"<<endl;
    cout<<"------------------------------"<<endl;
    for(i=0;i<no_of_participants;i++)
    {
        cout<<participant_id[i]<<"\t";
        cout<<participant_name[i]<<"\t";
        cout<<score[i];
        cout<<endl;
    }
    cout<<"------------------------------------------------"<<endl;
    cout<<left<<setw(15)<<"total score"<<":"<<total_score<<endl;
    cout<<left<<setw(15)<<"average score"<<":"<<avg_score<<endl;
    for(i=0;i<no_of_participants;i++)
    {
        for(j=i+1;j<no_of_participants;j++)
        {
            if(score[i]>score[j])
            {
                temp1=score[i];
                score[i]=score[j];
                score[j]=temp1;

                temp2=participant_id[i];
                participant_id[i]=participant_id[j];
                participant_id[j]=temp2;

                temp3=participant_name[i];
                participant_name[i]=participant_name[j];
                participant_name[j]=temp3;

            }
        }
    }

    cout<<left<<setw(15)<<"highest score"<<":"<<score[(no_of_participants-1)]<<endl;
    cout<<left<<setw(15)<<"lowest score"<<":"<<score[0];

}
