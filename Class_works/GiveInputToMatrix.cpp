#include <iostream>
using namespace std;

int main(){
	
	int matrix[3][3];
	int row=0;
	int col=0;
	
		while(row<3){
			col=0;
			while(col<3){
				
				cout<<"Enter ("<<row<<","<<col<<") cell:\t";
				cin>>matrix[row][col];
				cout<<"\n";
				col++;
			}
			row++;
		}
		
		row=0;
		col=0;
		
		while(row<3){
			col=0;
			while(col<3){
				
				cout<<matrix[row][col]<<"\t";
				col++;
			}
			cout<<"\n";
			row++;
		}
		
		
	return 0;
}
	
