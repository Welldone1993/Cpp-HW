#include <iostream>
using namespace std;

main( ){
	int i = 1;
	
	while(i<=10){
		
		cout<<"\n";
		int j = 0;
		
		while(j<=10){
			cout<<j<<"*"<<i<<"="<<i*j<<"\t";
			j++;
		}
		
		i++;
	}
	
	return 0;
}
