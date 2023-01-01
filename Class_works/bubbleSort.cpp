#include <iostream>
using namespace std;

int main(){
	
	int bsArray[5] = {4,6,2,5,1};
	int swap=0;
	
		for(int i=0;i<5;i++){
			for(int j=i+1;j<5;j++){
				
				if (bsArray[i]>bsArray[j]){
			
				swap=bsArray[i];
				bsArray[i]=bsArray[j];
				bsArray[j]=swap;
	
				}
			}
		}
			for(int j=0;j<5;j++){
				cout<<bsArray[j]<<"\n";
			}
	return 0;
}
