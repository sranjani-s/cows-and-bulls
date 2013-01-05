//Cows and bulls

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
    char A[]="LUCK";
    char B[5];
    int cow=0,bull=0;
    
    cout<<"Enter your guess:";
    cin>>B;
   
    while(strcmp(A,B)!=0)
    {
                  for(int i=0;i<4;i++)
                  for(int j=0;j<4;j++)
                  {
                          if(A[i]==B[j])
                          {
                                        if(i==j)
                                        ++bull;
                                        
                                        else
                                        ++cow;
                          }
                  }
                  
                  cout<<"\nCow:"<<cow<<"\nBull:"<<bull;
                  cow=0;bull=0;
                  cout<<"\nEnter your guess:";
                  cin>>B;
    }
    
    cout<<"You got it right!";
    getch();
}       
