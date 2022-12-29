#include <iostream>
#include <cmath>
using namespace std;

		// solving ax^2+bx+c=0
int main(){
	int a,b,c;
	float x,delta;
	
		cout<< "this is your equation:ax^2+bx+c=0\n";
		cout<<"entar a:\n";
		cin>>a;
	
		cout<<"enter b\n";
		cin>>b;
		cout<<"enter c\n";
		
		cin>>c;
		
			delta=(b*b)-(4*a*c);
			delta=sqrt(delta);
			
			x= delta-b;
			x=x/2;
			x=x/a;
			
			cout<<x; //first answer
			cout<<"	 &	";
			
			delta=(b*b)-(4*a*c);
			delta=sqrt(delta);
			
			x= -b-delta;
			x=x/2;
			x=x/a;
			
			cout<<x; // second answer
	
	return 0;
}
