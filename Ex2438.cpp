#include <iostream>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<"*";
		}
		cout<<"\n";
	}


	return 0;
}