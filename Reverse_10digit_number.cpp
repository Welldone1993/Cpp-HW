#include <iostream>
#include <conio.h>
using namespace std;

main( ){
	int num,i;
	cout<<"Enter 0-10 digit number:";
	cin>>num;
	cout<<"\n"<<"reverse number is: ";

	while(num>0){
		i=num%10;
		num=num/10;
		cout<<i;
	}
	return 0;
}
