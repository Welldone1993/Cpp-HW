#include <iostream>
using namespace std;

main( ){
	int fib1=0,fib2=1,fib3,i;
	
	
	cout<<"These are fibonacci sseries less than 1000:\n"<<fib1<<endl;
	
	for(i=0;i<1000;i++){
		
		fib3=fib1+fib2;
 		fib2=fib1;
 		fib1=fib3;
 		
		if(fib3>1000){
			break;
		}
		
		cout<<fib3<<endl;
		
	}
	return 0;
}
