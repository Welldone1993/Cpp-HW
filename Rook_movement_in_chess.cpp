#include <iostream>
using namespace std;

int main() {
  		int x,y,i,j;
  		cout<<"enter horizental cell\n";
  		cin>>x;
  		
  		cout<<"enter vertical cell\n";
 		cin>>y;
 		
  		cout<<"-----------------\n";
  		
  	//start of calculation
		for (int i=1; i < 9; i++) { //start of line
  	
  			if (i==x){ //vertical line checkup
  				for (int j=1; j < 9; j++) {
  					if (j==y){ //check if horizental line movment avavilable
  							for (int k=1; k < 9; k++) { // draw full horizental movement
  								cout<<"|";
								cout<<"*";	
	  						}
	  				}	
				}
				
				  cout<<"|\n"; // end of line
				  
	  		}else{ //check if horizental line movment avavilable
	  			for (int j=1; j < 9; j++) { 
  					if (j==y){ 
  					cout<<"|";
  						cout<<"*";
  					}else{
						cout<<"|";
							cout<<" ";
  					}
				}
		  cout<<"|\n";
  			}
		}

		cout<<"-----------------";
		
  		return 0;
}


