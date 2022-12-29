#include <iostream>
using namespace std;

main( ){
	float celsius,kelvin,fahrenheit;
		cout<<"Enter temprature in celsius:	";
		cin>>celsius;
 	
		kelvin=celsius+273.15;
 		fahrenheit=(celsius*9.5)+32;
 	
 		cout<<"\n temp in Kelvin:	"<<kelvin;
 		cout<<"\n temp in Fahrenheit:	"<<fahrenheit;
 	
	return 0;

}
