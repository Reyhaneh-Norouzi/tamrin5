#include<iostream>
#include<stdio.h> 

using namespace std;
main()
{

	int i = 0, word = 1;
	char str[100], ch;

	cout << "enter a string: " << endl;

	gets(str);
	while (true) {
		ch = str[i];
		if (ch == ' ')
			word++;
		else if (ch >= '0' && ch <= '9')

			break;
		i++;
	}
	cout << "\n" << "word=" << word;


	return 0;
}
