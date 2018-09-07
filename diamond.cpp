//DIAMOND STAR PATTERN
//include library
#include<iostream>
using namespace std;
//define function
int main(){
	//loop for upper half
	for(int i=0;i<5;i++){
		//loop for space
		for(int j=0;j<4-i;j++){cout<<" ";}
		//loop for star 
		for(int l=0;l<(2*i)+1;l++){cout<<"*";}
		cout<<endl;
	}
	//looping for lower half
	for(int m=0;m<4;m++){
		//loop for space
		for(int n=0;n<m+1;n++){cout<<" ";}
		//loop for star
		for(int p=0;p<9-(2*(m+1));p++){cout<<"*";}
		cout<<endl;
	}
	return 0;
}
