 #include  <iostream>
#include  <stdio.h>
#include  <stdlib.h>
#include  <time.h>
using namespace std;

int main()
{
  int guss,x;
  char a;
  srand(time(0));
  
do{

  x= rand()%(1000)+1;
  
  cout<<"I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess."<<endl;
  do{
   cin>>guss;
   if(x>guss)    
    cout<<"Too low. Try again."<<endl;
   if(x<guss)
       cout<<"Too high. Try again."<<endl;
  }
  while(guss!=x);
  
  cout<<"Excellent! You guessed the number!"<<endl;
  
  do{
  cout<<"Would you like to play again (y or n)?"<<endl;
  cin>>a;
    }while(a!='y'&&a!='n');
}while(a=='y');
    return 0;
}
