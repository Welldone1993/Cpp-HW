#include <iostream>
#include <cmath> 
using namespace std;

main( ){ 
	int num, root,i=2;
	cout<<"Enter the number:";
	cin>>num;
	root=sqrt(num);
	
	while(i<=root){
		if((num%i)==0){
			cout<<num<<" : is not prime number!";
			return 0;
		}
			i++;
	}
		cout<<num<<" :  is prime!";
}
