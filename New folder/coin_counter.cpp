#include <iostream>
using namespace std;

main( ){ 
	int money,coin100,coin50,coin25,coin10,coin5,coin1;
	
	cout<<"How much money do you have?";
	cin>>money;
	
		coin100=money/100;
		money=money%100;
		coin50=money/50;
		money=money%50;
		coin25=money/25;
		money=money%25;
		coin10=money/10;
		money=money%10;
		coin5=money/5;
		money=money%5;
		coin1=money;
	
			if(coin100!=0){
				cout<<coin100<<"	:	number of 100 coin\n";
			}
		
			if(coin50!=0){
				cout<<coin50<<"	:	number of 50 coin\n";
			}

			if(coin25!=0){
				cout<<coin25<<"	:	number of 25 coin\n";
			}
	
			if(coin10!=0){
				cout<<coin10<<"	:	number of 10 coin\n"; 
			}
	
			if(coin5!=0){
				cout<<coin5<<"	:	number of 5 coin\n";
			}
	
			if(coin1!=0){
				cout<<coin1<<"	:	number of 1 coin\n";
			}
			
	return 0;
}
