#include<iostream>
//Binary Search
using namespace std;
int Binary_Search(int Arr[],int N,int key){
	int LB = 0;
	int UB = N-1;
	while(LB<UB){
		int mid = (LB+UB)/2;
		
		if(Arr[mid]==key){
			return mid;
		}
		if( Arr[mid]>key){
			LB=mid+1;
		}
		else{
			UB=mid-1;
		}
	}
}



int main(){
	int Arr[10] = {9,8,7,6,5,4,3,2,1,0};
	int key = 2;
	int LOC = Binary_Search(Arr,10,key);
	cout<<key<<" is found at "<<LOC<<endl;
}
