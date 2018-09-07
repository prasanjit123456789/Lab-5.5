//hollow right angle triangle
//include library
#include<iostream>
using namespace std;
//define function
int main(){
	//looping
	for(int i=1;i<6;i++){
		//condition for 1st, 2nd and5th line
		if(i==1){cout<<"*"<<endl;}
		else if(i==2){cout<<"**"<<endl;}
		//condition for 3rd and 4th line
		else if(i==5){cout<<"*****";}
		else{	for(int n=1;n<2;n++){
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
