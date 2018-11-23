/*
SingleLoopMAXSortAlgorithm
This C++ Program is used to sort the array using the my own SingleLoopMAX way of sorting the items. 
This is my first algorithm on sorting the items please do check the efficiency of program.
*/
#include<iostream.h>
#include<conio.h>
int main()
{
int A[20],B[20],i,n,MAX=0,k=0,temp,count=0;
clrscr();
cout<<"\nEnter How Many Number You Input : ";
cin>>n;
temp=n;
cout<<"\nEnter The Elements One After Another\n";
for(i=0;i<n;i++)
{
cout<<"\nEnter Element No."<<i+1<<":";
cin>>A[i];
}
cout<<"\n\nList Before Arrangements\n";
for(i=0;i<n;i++)
{
cout<<"\nElement No."<<i+1<<":"<<A[i];
}
for(i=0;i<n;i++)
{
if(A[i]>MAX)
{
MAX=A[i];
k=i;
}
if(i==n-1)
{
B[temp-1]=MAX;
A[k]=0;
i=0;
count++;
temp--;
MAX=0;
}
if(count==n)
{
break;
}
}
cout<<"\n\nList After Arrangements\n";
for(i=0;i<n;i++)
{
cout<<"\nElement No."<<i+1<<":"<<B[i];
}
getch();
return 0;
}
/*
Created And Designed By: Debajyoti Bhattacharjee(MCA),INDIA
Contact:7002858345
EmailID:bdebajyoti@hotmail.com/debajyoti29th@gmail.com
Please Do Check The Efficiency Of This Program
Modified Version Will Be Uploaded By Few Days....Thank You
*/