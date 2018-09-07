//x pattern
//include library
#include<iostream>
using namespace std;
//define function
int main(){
	//looping
	for(int i=0;i<4;i++){
		//for upper part of 
		for(int j=0;j<i;j++){cout<<" ";}
		cout<<"*";
		for(int l=0;l<=6-(2*i);l++){cout<<" ";}
		cout<<"*"<<endl;
	}
	//the midpoint 
	cout<<"    *    "<<endl;
	for(int k=0;k<4;k++){
		//lower part
		for(int m=0;m<3-k;m++){cout<<" ";}
		cout<<"*";
		for(int n=0;n<1+(2*k);n++){cout<<" ";}
		cout<<"*"<<endl;
	}
	

	return 0;
}
