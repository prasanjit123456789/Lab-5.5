//include library
#include<iostream>
using namespace std;
//define function
int main(){
	//define variable
	int n;
	//ask the user about the value of n
	cout<<"	Give the value (rows-3)?"<<endl;
	cin>>n;
	//start looping
	for(int i=0;i<(2*n)+3;i++){
		//for upper lower and middle part of 8
		if(i==0||i==n+1||i==n+n+2){
			cout<<" ";
			for(int j=0;j<n;j++){cout<<"*";}
			cout<<endl;
		}
		//the sides of 8
		else{cout<<"*";
			for(int p=0;p<n;p++){cout<<" ";}
			cout<<"*"<<endl;
		}
	}
	return 0;
}
