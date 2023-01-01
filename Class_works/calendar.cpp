#include <iostream>
using namespace std;

main( ){
   
   int month = 1 ,  dayNumbersOfMonth=31 , startDayOfMonth = 0 ;
  
   cout<<"please enter the start day of year :";
   cin>>startDayOfMonth;
  
   startDayOfMonth=  startDayOfMonth % 7;
  
  	while(month<=12){
  	 	
     	if(month>6 && month<12){
   		dayNumbersOfMonth = 30;
   		}
	 	else if(month ==12){ 
	 	dayNumbersOfMonth = 29;
	 	}
   	 		cout<<"---------------------------------------------------";
   			 cout<<"\n"<<"sat\tsun\tmon\ttue\twed\tthu\tfri"<<"\n";
   			 cout<<"---------------------------------------------------"<<"\n";
   
   		int day = 1 , dayOfWeek = day;

		while(day<=dayNumbersOfMonth){
	 		
			 	if(dayOfWeek < startDayOfMonth && day < startDayOfMonth){
	 				cout<<"\t";	
	 			}
				else{
	    			cout<<" "<<day<<"\t";
					if(dayOfWeek % 7 == 0 ){
		 			cout<<"\n";
		 			}
		 	day++;	
				}
		 	dayOfWeek ++;
		}
		
	 		cout<<"\n";
	 		
			 startDayOfMonth = ((startDayOfMonth + dayNumbersOfMonth) % 7);
	
		if(startDayOfMonth == 0){
	 	startDayOfMonth = 7;
		}
   	 	
		month++;
   	}
}
