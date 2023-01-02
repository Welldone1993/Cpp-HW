#include <iostream>
using namespace std;

int main(){
	
	int collectionA[5] = {1,5,3,2,5};
	int collectionB[5] = {3,4,5,6,3};
	int uni[10] = {0};
	int i,j;
	uni[0]=collectionA[0];
	int k=1;

	for(i=1;i<5;i++){
		int flag = 0;
		for(j=0;j<k;j++){
			if(uni[j]==collectionA[i]){
				flag=1;
			}
		}
		if(flag==0){
				uni[k]=collectionA[i];
				k++;
		}
	}
	
	for(i=0;i<5;i++){
		int flag = 0;
		for(j=0;j<k;j++){
			if(uni[j]==collectionB[i]){
				flag=1;
			}
		}
		if(flag==0){
				uni[k]=collectionB[i];
				k++;
		}
	}

	for(i=0;i<k;i++){
		cout<<uni[i]<<"\n";
	}
	return 0;	
	
}	
