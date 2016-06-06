#include <iostream>
using namespace std;
int main() {
	int testcase;
	cin>>testcase;
	while(testcase--){
		int no;
		cin>>no;
		cout<<(no*(no-1))/2<<endl;
	}
	return 0;
}
