//hollow triangle
//include library
#include<iostream>
using namespace std;
//define function
int main(){
	//upper point of the triangle
	for(int s=0;s<11;s++){cout<<" ";}	
	cout<<"*"<<endl;
	//the sides of the triangle other than the base
	for(int i=0;i<9;i++){
		//first space
		for(int j=0;j<9-i;j++){cout<<" ";}
		cout<<"*";
		//second space
		for(int k=0;k<=1+(2*i);k++){cout<<" ";}
		cout<<"*"<<endl;
	}
	//base line
	for(int b=0;b<22;b++){cout<<"*";}
	return 0;
}
