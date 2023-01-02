#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int AsciiChanger(string number){
	
	int ascii=0;
	int num=0;
	int n=1;
	int numlenght=number.length();
	
	for(int i=numlenght-1;i>=0;i--){
		ascii=int (number[i])-48;
		num=(ascii*n)+num;
		n=n*10;	
	}
	
	return num;
}

int main(){
	string number1;
	char  operation;
	string  number2;
	
	cout<<"Enter first number\n";
	cin>>number1;
	int numlenght1=number1.length();
	cout<<"What is your operation? (+,-,*,/)\n";
	cin>>operation;
	cout<<"Enter Second number\n";
	cin>>number2;
	
	int num1=0;
	int num2=0;
	
	num1=AsciiChanger(number1);
	num2=AsciiChanger(number2);
	
	switch(operation){
		case '+':
			cout << num1+num2;
			break;
		case '-':
			cout << num1-num2;
			break;
		case '*':
			cout << num1*num2;
			break;
		case'/':
			cout << num1/num2;
			break;
		default : 
			cout<< "invalid Operation";
			break;
	}
}
