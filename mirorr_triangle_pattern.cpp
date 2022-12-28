#include <iostream>
using namespace std;

main( ){
	int line;
	cout<<"Enter line numbers for reverse triangle:";
	cin>>line;
	cout<<"\n";
	int x=line;
	
	while(x>0){
	int i=x;
		while(i>1){
			cout<<" ";
			i--;	
		}
	int j=x;
		while(j<line+1){
			cout<<"*";
			j++;
		} 
		x--;
		cout<<"\n";
	}

	return 0;
}

/* exit should be like this for 5
      *
     **
    ***
   ****
  *****
  */  
