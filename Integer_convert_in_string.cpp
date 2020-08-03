#include<bits/stdc++.h>
#include<sstream>

using namespace std;
int main()
{
	int n=2345;
	// declear output  string stream
	ostringstream str1;
	
//	sending integer as a stream into ostringstream

	str1<<n;

//	declare string variable 

	string s = str1.str();
	
//	output of the string 

	cout<<"our new string is : "<<s<<endl;
	
	return 0;
}
