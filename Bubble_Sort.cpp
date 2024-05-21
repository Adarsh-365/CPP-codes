#include<iostream>
using namespace std;

void Print_Array(int Arr[],int N){
		for(int i=0;i<10;i++){
		cout<<Arr[i]<<" ";
	}
	cout<<endl;
	cout<<"END OF PASS "<<N<<endl;
}


void Bubble_Sort(int Arr[],int N){

	int Total_swap=0;
	for(int j=0;j<N-1;j++){
	
		Print_Array(Arr,j);
		for(int i=0;i<N-j-1;i++){
			if (Arr[i]>Arr[i+1]){
			
				swap( Arr[i],Arr[i+1]);
				Total_swap+=1;
				}
			
		}
	
	
	}
	cout<<endl;
	cout<<"TOTAL SWAPS ARE "<<Total_swap<<endl;
	

}



int main(){
	int Arr[10] = {9,8,7,6,5,4,3,2,1,0};
	Bubble_Sort(Arr,10);
	
	//to print Array
	for(int i=0;i<10;i++){
		cout<<Arr[i]<<" ";
	}
	return 0;
	
}
