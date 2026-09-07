#include<iostream>
using namespace std;
int main()
{
    int i,j,n,temp;
    cout<<"enter a number";
    cin>>n;
    /*--------------------------------------*/
   cout<<" /*----------------1--------------------*/";
    for(i=0;i<n;i++)
    {
       for(j=0;j<i;j++)
       {
           cout<<j+1;
       }
       cout<<endl;
    }
     /*--------------------------------------*/
     cout<<" /*---------------2---------------------*/";
     for(i=0;i<n;i++)
    {
       for(j=0;j<i;j++)
       {
           cout<<char(97+j);
       }
       cout<<endl;
    }
    /*--------------------------------------*/
     cout<<" /*----------------3--------------------*/";
     for(i=0;i<n;i++)
    {
       for(j=0;j<i;j++)
       {
           cout<<char(65+j);
       }
       cout<<endl;
    }
     /*--------------------------------------*/
     cout<<" /*-------------------4------------------*/"<<endl;
     for(i=1;i<n;i++)
     {  temp=0;
         for(j=i+1;j<=n;j++)
         {
             cout<<" ";
         }
         for(j=1;j<=i;j++)
         {   temp=temp+1;
             cout<<temp;
         }
         cout<<endl;
     }
     /*--------------------------------------*/
     cout<<" /*-------------------5------------------*/"<<endl;
     for(i=1;i<n;i++)
     {
         temp=0;
         for(j=i+1;j<=n;j++)
         {
             cout<<" ";
         }
         for(j=1;j<=i;j++)
         {   temp=temp+1;
             cout<<temp;
         }

         for(j=1;j<i;j++)
         {
            temp=i-j;
            cout<<temp;

         }
         cout<<endl;
     }
     /*--------------------------------------*/
     cout<<" /*-------------------6------------------*/"<<endl;
     for(i=1;i<n;i++)
     {
         temp=0;
         for(j=i+1;j<=n;j++)
         {
             cout<<" ";
         }
         for(j=1;j<=i;j++)
         {
             cout<<char(64+j);
         }

         for(j=1;j<i;j++)
         {
            cout<<char(64+(i-j));

         }
         cout<<endl;
     }




}
