using namespace std;
#include<iostream>
 
int main () 
{
int n1,n2,n3,n4,n5;
double sum=0;
double avg=0;
    cout<<"\nEnter the first number";
    cin>>n1;
    cout<<"\nEnter the second number";
    cin>>n2;
    cout<<"\nEnter the third number";
    cin>>n3;
    cout<<"\nEnter the fourth number";
    cin>>n4;
    cout<<"\nEnter the fifth number";
    cin>>n5;
    sum = n1+n2+n3+n4+n5;
    avg = sum/5;
    
    cout<<"\nAvg of numbers : "<<avg;
    return 0;
}
