#include <iostream>
using namespace std;

main( ){
	int num=3;
	cout<<"1\n--\n2\n--\n";
	while(num<1000){
		int i=2,j=1;
		while(i<num){
			if((num%i)==0){
			j=0;
			break;
			}
			i++;
		}
		if(j==1){
			cout<<num<<"\n"<<"--"<<"\n";
		}
		
		num++;
}
	return 0;
}
