#include<iostream>
using namespace std;
int main(){
	int n,m;
	int arr[100];
	cin>>m>>n;
	for(int i=1;i<=n;i++){
		for(int j=0;j<m;j++){
		cin>>arr[j];
	}
	}
	int max=INT_MIN;
	for(int i=0;i<m;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	cout<<max<<endl;
	

	return 0;
}