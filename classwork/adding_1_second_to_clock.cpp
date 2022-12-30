#include <iostream>
using namespace std;

main( ){
		int hour,minute,second;
		
		cout<<"enter hour : ";
		cin>>hour;
		
		cout<<"enter minute : ";
		cin>>minute;

		cout<<"enter second : ";
		cin>>second;
	
		if(hour>23){
			cout<<"!!!wrong input for hour!!!";
			return 0;
		}
		
		if(minute>60){
			cout<<"!!!wrong input for minute!!!";
			return 0;
		}
		
		if(second>60){
			cout<<"!!!wrong input for second!!!";
			return 0;
		}
		
	
			hour=hour*3600;
			minute=minute*60;
			second=hour+minute+second;
			second=second+1;
			hour=second/3600;
			minute=second%3600;
			second=minute%60;
		    minute=minute/60;
	    
		 	    if(hour==24){
	 		   	hour=0;
				}
	
		cout<<hour;
		cout<<":";
		cout<<minute;
		cout<<":";	
		cout<<second;
		
	return 0;
}
