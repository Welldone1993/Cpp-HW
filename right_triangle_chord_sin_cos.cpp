#include <iostream>
#include <cmath>
using namespace std;

main( ){
	float a,b,c;
	float sint,cost;
		cout<<"vertical side lenght:	";
		cin>>a;
	
		cout<<"horizental side lenght:	";
		cin>>b;
	
			a=a*a;
			b=b*b;
			c=a+b;
	
			c=sqrt(c);
			b=sqrt(b);
			a=sqrt(a);
	
			sint=a/c;
			cost=b/c;
			
			cout<<"chord lenght = "<<c;
			cout<<"\nSin t = "<<sint;
			cout<<"\nCos t = "<<cost;
	
	return 0;
}
