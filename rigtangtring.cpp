//hollow right angle triangle
//include library
#include<iostream>
using namespace std;
//define function
int main(){
	//define variable
	int a;
	//ask the user abou the rows
	cout<<"What is the no of rows?"<<endl;
	cin>>a;
	//looping
	for(int i=1;i<a+1;i++){
		//condition for 1st, 2nd and5th line
		if(i==1){cout<<"*"<<endl;}
		else if(i==2){cout<<"**"<<endl;}
		//condition for the last line
		else if(i==a){
			for(int m=0;m<a;m++)
			cout<<"*";
		}
		//condition for the lines between last and 2nd
		else{	
			for(int n=1;n<2;n++){
				//print * first
				for(int j=1;j<2;j++){
					cout<<"*";
				}
				//print space
				for(int p=1;p<=i-2;p++){
					cout<<" ";
				}
				//print last star
				for(int l=1;l<2;l++){
					cout<<"*";
				}
				cout<<endl;
			}
		}
				
	}
	return 0;
}
