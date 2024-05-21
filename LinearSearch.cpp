//Linear Search

#include<iostream>
using namespace std;
int LinearSearch(int Arr[],int N,int key){
	for(int i=0;i<N;i++){
		if(Arr[i]==key){
			return i;
		}
	}
}

int main(){
	int Arr[10] = {9,8,7,6,5,4,3,2,1,0};
	int key = 4;
	int LOC = LinearSearch(Arr,10,key);
	cout<<key<<" is found at "<<LOC<<endl;
}
