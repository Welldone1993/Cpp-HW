#include <iostream>
using namespace std;

int main(){
	
	int bnsArray[10] = {1,2,3,4,5,6,7,8,9,10};
	int input;
	cin>>input;
	int first=0,last=9;
	int middle=0;
	int i=0;
	int index=0;
	middle=(first+last)/2;
	int flag=0;
	
	while(i<10){
		
	if(bnsArray[middle]==input){
				
	 flag=1;
	 
	}else if(bnsArray[middle]<input){
		
		first=middle+1;
		middle=(first+last)/2;
		
	}else if(bnsArray[middle]>input){
		
		last=middle-1;
		middle=(first+last)/2;
		}
	i++;	
}
	if(flag==1){
		cout<<middle;
	}
	return 0;
}
	
	
