#include <iostream>
using namespace std;

int main() {
	int i,j;
	int x,y;
	
		cout<<"enter horizental row : ";
		cin>>x;
		cout<<"\n"<<"enter vertical column : ";
		cin>>y;
		int row=x;
		int column=y;
	
		string chess[8][8]={
		{" "," "," "," "," "," "," "," ",},
		{" "," "," "," "," "," "," "," ",},
		{" "," "," "," "," "," "," "," ",},
		{" "," "," "," "," "," "," "," ",},
		{" "," "," "," "," "," "," "," ",},
		{" "," "," "," "," "," "," "," ",},
		{" "," "," "," "," "," "," "," ",},
		{" "," "," "," "," "," "," "," ",}
		};
		
		x=row-1;
		y=column-1;
		while(x<8){
			if(y<8){
			chess[x][y]="*";
			y++;
			x++;
			}
		}
		
		x=row-1;
		y=column-1;
		while(x>=0){
			if(y>=0){
			chess[x][y]="*";
			y--;
			x--;
			}
		}
		
		x=row-1;
		y=column-1;
		while(y<8){
			if(x>=0){
			chess[x][y]="*";
			y++;
			x--;
			}
		}
		
		x=row-1;
		y=column-1;
		while(y>=0){
			if(x<8){
			chess[x][y]="*";
			y--;
			x++;
			}
		}
		
		i=0;	
		while(i<8){
			j=0;			
			while(j<8){
				cout<<chess[i][j]<<"|";
				j++;
			}
			i++;
			cout<<"\n";
		}
		
		return 0;
}
	
