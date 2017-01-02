//ACCEPTED
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int  main()
{
	string s , newStr; 
	cin >> s;
	int n = 0;
	
	//while(n != -1)
	//{
	   /* n = s.find("WUB");
		s.erase(n,3);
		cout << s << " ";
	//}

	//cout << s << endl;
	return 0;*/

	while ( (n = s.find("WUB")) >= 0)
	{
		s.replace(n, 3, " ");
	}

	string str = "";
	bool flag = true; 
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != ' ')
		{
			str += s[i];
			flag = false;
		}
		else if (!flag)
		{
			str += " ";
			flag = true;
		}
	}
	cout << str << endl;
	return 0;

}



//the simplest way
/*char str[205];

int main()
{
	int i, len;

	while (scanf("%s", str) != EOF)
	{
		len = strlen(str);
		i = 0;
		while (i<len)
		{
			if (str[i] == 'W'&&str[i + 1] == 'U'&&str[i + 2] == 'B')
				i = i + 3;
			else
			{
				printf("%c", str[i]);
				if (str[i + 1] == 'W'&&str[i + 2] == 'U'&&str[i + 3] == 'B')
					printf(" ");
				i++;
			}

		}
		printf("\n");
	}
	return 0;
}*/