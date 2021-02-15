#include<iostream>
#include<string>

using namespace std ;

int main()
{
	string input, to_find;
	bool exist = false;
	int index = -1;
	cout << "Enter String: " ;
	getline(cin, input);
	
	cout << "Enter string to find: " ;
	getline(cin, to_find);
	
	for(int i = 0; i < input.size(); i++)
	{
		exist = false;
		if(input[i] == to_find[0])
		{
			exist = true;
			
			for(int j = 0; j < to_find.size(); j++)
			{
				if(input[i+j] != to_find[j])
				{
					exist = false;
					break;
				}
			}
		}
		if(exist)
		{
			index  = i;
		}
	}
	cout << index << endl;
	
	return 0;
}
