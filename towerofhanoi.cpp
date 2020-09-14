#include<bits/stdc++.h>
using namespace std;

void move(int n, char source, char helper, char destination){
	//base case
	if(n == 0)
		return;	

	//recursive case
	//move n-1 disks from source to helper
	move(n-1, source, destination, helper);
	cout << "Shift disk " << n << " from " << source << " to " << destination << endl;
	move(n-1, helper, source, destination);

}
int main(int argc, char){
	int n;	cin >> n; // TAKES INPUT
	move(n, 'A', 'B', 'C');
	return 0;
}