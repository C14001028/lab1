#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	while(1){
		cout << n << ' ';
		if(n==1) break;
		n = (n%2==0)? n/2 : 3*n+1; 
	}
	cout << endl;
	return 0;
}
