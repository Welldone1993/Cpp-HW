#include <iostream>
using namespace std;

int main(){
	
	int collectionA[5] = {4,6,2,5,2};
	int collectionB[5] = {3,2,4,3,6};
	int common[5];
	int flag;
	int i;//first array
	int j;//second array
	int index,x=0;
	for(int i=0; i<5;i++){
		
		for(int j=0;j<5;j++){
			
			if(collectionA[i]==collectionB[j]){
				flag=0;
				
				for(int index=0;index<x;index++){
					
					if(common[index]==collectionA[i]){
					flag=1;	
					}
				}
					if(flag==0){
					common [x] = collectionA[i];
					x++;
					}
						
			}
		}
	}
		for(int i=0;i<x;i++){
		
		cout<<common[i]<<"|";
	}
}
