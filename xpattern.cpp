//x pattern
//include library
#include<iostream>
using namespace std;
//define function
int main(){
	int a;
	cout<<"What is the value of rows in upper part?"<<endl;
	cin>>a;
	//looping
	for(int i=0;i<a-1;i++){
		//for upper part of space
		for(int j=0;j<i;j++){cout<<" ";}
		cout<<"*";
		for(int l=0;l<=(2*a)-4-(2*i);l++){cout<<" ";}
		cout<<"*"<<endl;
	}
	//the space before midpoint 
	for(int y=0;y<a-1;y++){cout<<" ";}
	//midpoint
	cout<<"*"<<endl;
	for(int k=0;k<a-1;k++){
		//lower part of space
		for(int m=0;m<a-2-k;m++){cout<<" ";}
		cout<<"*";
		for(int n=0;n<1+(2*k);n++){cout<<" ";}
		cout<<"*"<<endl;
	}
	

	return 0;
}
