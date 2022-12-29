#include <iostream>
using namespace std;

main( ){
 
	char charachter1; 
    char charachter2;
	int x,x2;
	int result;
	
		cout<<"Enter first number:";
		cin>>charachter1;
		cout<<"Enter second number:";
		cin>>charachter2;
	
		x=(int) charachter1-48; 
		x2=(int) charachter2-48;
		result=x+x2;
		
		cout<<charachter1<<" + "<<charachter2<<" = "<<result;

    return 0;
}
