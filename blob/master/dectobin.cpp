#include <iostream>
using namespace std;
int bintodec(int no){
	int x;
	if(no){
		x=no%2;
		cout<<x;
		bintodec(no/2);
		
	}
}
int main() {
	int testcase;
	cin>>testcase;
	while(testcase--){
		int no;
		cin>>no;
		bintodec(no);
		cout<<endl;
	}
	return 0;
}
