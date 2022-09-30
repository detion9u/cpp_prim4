//part1:C03:ex3.5.cpp
#include <iostream>
#include <string>
#include <cstring>

const int BUFSIZE = 40;
int main(void)
{
	using namespace std;

	string line;
	char word[BUFSIZE];
	cout << "Enter some charcters:\n";
	/* method one: -- read a line from input.
	while(getline(cin,line))
	{	if (line.empty())
			break;
		cout << line << endl;
	} */

	/*read a word from input*/ 
	//while (cin.get(word,BUFSIZE).get() && (strlen(word) != 0))
	while (cin.get(word,BUFSIZE).get() && (strcmp(word,"") != 0))
	{
		
		cout << word << endl;	
	}
	cout << "Bye!\n";
	return 0;
}

