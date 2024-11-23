#include <iostream>

using namespace std;

int main()
{
	cout<<"Carnigie mellon"<<endl;

	cout<<"this is a newline\n";

	// we can also used to store the string in an variable

	string target="ivy league and to be good";


	cout<<target<<endl;

	// functions were like variables its like we store the values in the variables 
	// but with the function we can store the code snippets which can be reused just like the variables

	// we can use many functions to use with the string

	// length function  number of charecters in the string

	cout<<"the length of the function is "<<target.length()<<endl;


	// we can acces the individual char

	cout<<"the charecter "<<target[0]<<endl;
	// stirng indexing stars from the zero to n-1

	cout<<target[2]<<endl;

	target[0]='a';
	cout<<target<<endl;
	// we can actually change the string

	target[0]='i';

	// to find the specific charecter

	cout<<target.find("i")<<endl;
	cout<<target.find("league")<<endl;
	// we can pass the char or stirng in the find function/method

	cout<<target.substr(0,3)<<endl;
	// first included and second was the length of the substring from the starting index


	cout<<target.substr(4)<<endl;

	cout<<target.substr(2,4)<<endl;

	




}