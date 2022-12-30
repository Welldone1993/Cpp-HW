#include <iostream>
using namespace std;

main( ){
	int line,y=0;
	cout<<"Enter line numbers for butterfly:";
	cin>>line;
	line=(line/2);
	cout<<"\n";
	int x=line;
	int i;
	
	while(x>0){
		int j=x;
		while(j<line+1){
			cout<<"*";
			j++;
		} 
		int i=x;
		while(i>1){
			cout<<" ";
			i--;	
		}
		int k=x;
		while(k>1){
			cout<<" ";
			k--;	
		}
		int r=x;
		while(r<line+1){
			cout<<"*";
			r++;
		} 
		x--;
		cout<<"\n";
	}
	
	x=line-1;
	i=1;
	while(x>0){
		int j=x;
		while(j>0){
			cout<<"*";
			j--;
		} 
		int r=x;
		while(r<line){
			cout<<" ";
			r++;
		}
		int k=x;
		while(k<line){
			cout<<" ";
			k++;	
		}
		int i=0;
		while(i<x){
			cout<<"*";
			i++;	
		}
		x--;
		cout<<"\n";
	}
	
	return 0;
}
