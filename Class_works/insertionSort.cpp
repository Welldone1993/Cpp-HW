#include <iostream>
using namespace std;

int main(){
	
	int isArray[5] = {4,6,2,5,1};
	int temp;
	
	for(int i=1;i<5;i++){
		
		for(int j=i;j>0;j--){
			
			if(isArray[j]<isArray[j-1]){
				
				temp=isArray[j];
				isArray[j]=isArray[j-1];
				isArray[j-1]=temp;
			}
		}
	}
	for(int x=0;x<5;x++){
				cout<<isArray[x]<<"\n";
			}
	return 0;
}
