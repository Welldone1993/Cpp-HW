#include <iostream>
using namespace std;

int main(){
	
	int collectionA[5] = {1,2,6,2,7};
	int collectionB[5] = {3,4,5,6,3};
	int diff[5];
	int counter = 0;
	for(int i=0;i<5;i++){
		int flag=0;
		for(int j=0;j<5;j++){
			if(collectionA[i]==collectionB[j]){
				flag=1;
			}else{
				for(int k=0;k<counter;k++){
					if(diff[k]==collectionA[i]){
						flag=1;
					}
				}
			}
		}
		if(flag==0){
				diff[counter]=collectionA[i];
				counter++;
		}
	}
	for(int i=0;i<counter;i++){
		cout<<diff[i]<<"\n";
	}
}
