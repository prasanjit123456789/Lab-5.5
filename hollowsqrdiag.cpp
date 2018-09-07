//hollow squre diagonal
//include library
#include<iostream>
using namespace std;
//define function
int main(){
//define variable
	
//looping
	for(int i=1;i<6;i++){
		bool p=(i-1)%4==0;
		//condition for 1st and 5th line		
		if(p==1){
			cout<<"*****"<<endl;
			}
	
		//condition for 2nd and 4th line		
		else if(p==0 && i%2==0){
				cout<<"** **"<<endl;
			}
		//condition for 3rd line	
		else{
				cout<<"* * *"<<endl;
			}
			
	}

	return 0;
}
