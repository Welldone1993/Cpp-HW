#include <iostream>
using namespace std;

int main() {
	int line,i,j; //line numbers
	
	cout<<"Enter line numbers :	";
	cin>>line; 
	cout<<"\n";
	
	for(int i=1; i < line+1 ; i++) { //for every line
		
		for(int j=1; j < i+1 ; j++){ //number of stars in line
			cout<<"*";
		}
		
		cout<<"\n";
	}
	return 0;
}
	
