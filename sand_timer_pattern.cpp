#include <iostream>
using namespace std;

main( ){
	int line;
	cout<<"Enter line number for Sand Timer:";
	cin>>line;
	line=line/2;
	cout<<"\n";
	int x=line;
	
	while(x>0){
		int i=x;
	while(i<line){
		cout<<" ";
		i++;
	}
	int j=x;
	while(j>0){
		cout<<"*";
		j--;
	}
	int k=0;
	while(k<x){
		cout<<"*";
		k++;
	}
	x--;
	cout<<"\n";
	
	}
	
	x=line;
	while(x>0){
		int i=x;
		while(i>1){
			cout<<" ";
			i--;
		}	

		int j=x;
		while(j<=line){
			cout<<"*";
			j++;
		}
		
		int k=x;
		while(k<=line){
			cout<<"*";
		k++;
		}
		
		x--;
		cout<<"\n";
	}
	return 0;
}
