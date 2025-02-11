#include <iostream>
#include <sstream>
#include "adder.h"
using namespace std;
int main(int argc, char* argv[])
{   
    int a, b, c;
	if (argc != 3) return 1; //checks the program has been run with the correct number of parameters 
	string sa(argv[1]); //takes the first argument and stores it in a string
	string sb(argv[2]); //takes the second argument and stores it in a string
	stringstream ssa(sa); //creates a stringstream object from the first string called ssa
	stringstream ssb(sb); //creates a stringstream object from the second string called ssb

	ssa >> a; //takes the first argument and stores it in an integer called a
	ssb >> b; //takes the second argument and stores it in an integer called b
	c = add(a, b); //calls the add function with the two integers as arguments and stores the result in c
	cout << c << endl; //prints the result
	return 0;
}
