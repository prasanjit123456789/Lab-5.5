//hollow triangle
//include library
#include<iostream>
using namespace std;
//define function
int main(){
	//define variable
	int a;	
	//ask the user about rows of stars
	cout<<"what is the no of rows of stars"<<endl;
	cin>>a;
	//upper point of the triangle
	for(int s=0;s<a;s++){cout<<" ";}	
	cout<<"*"<<endl;
	//the sides of the triangle other than the base
	for(int i=0;i<a-2;i++){
		//first space
		for(int j=0;j<a-2-i;j++){cout<<" ";}
		cout<<"*";
		//second space
		for(int k=0;k<=1+(2*i);k++){cout<<" ";}
		cout<<"*"<<endl;
	}
	//base line
	for(int b=0;b<2*a;b++){cout<<"*";}
	return 0;
}
