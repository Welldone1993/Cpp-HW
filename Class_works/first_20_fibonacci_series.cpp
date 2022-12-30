#include <iostream>
using namespace std;

main(){
		int firstNumber=0,secondNumber=1,sum=0,i=0;
		
		cout<<"these are first 20 numbers of fibonacci series :\n";
		cout<<firstNumber<<"\n"<<secondNumber<<endl;
	
		while(i<18){
	
			sum=firstNumber+secondNumber;
			firstNumber=secondNumber;
			secondNumber=sum;
			
			cout<<sum<<endl;
			
			i++;
		}
	
	return 0;
}
