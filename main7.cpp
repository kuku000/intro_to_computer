#include <iostream>
#include <cstdlib>
 
using namespace std;
int main( ) {
	float pass=0;
	int failture=0;
	int studentcounter=1;
	int result;
	float total;


	
	cout<<"enter how many student";
	cin>>total;
			
	
	while(studentcounter<=total)
	{
		cout<<"Enter result(1=pass 2=fail)";
		cin>>result;
		
		if (result==1)
		 {
		 pass=pass+1;
		  studentcounter=studentcounter+1;
		   } 
		else if (result==2)
		  {
		  failture=failture+1;
		  studentcounter=studentcounter+1;
		   } 
		else
		   cout<<"NOway you cant enter it"<<endl;
		  
	}
	cout<<"passd"<<pass<<"\nfailed"<<failture<<endl;
	
	
		float coco=pass/total;
	
	if(coco>0.8)
	  cout<<"yeah very good"<<endl;	 	  
		  
	}

