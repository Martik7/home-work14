#include <iostream>
#include <fstream>
#include <string>
#include <clocale>
using namespace std;

int Kolvo_Slov(char *s);

int main()
{
	setlocale(LC_ALL, "RUS");
	//8
	/*
	Дан текстовый файл.
	Найти длину самой длинной строки.
	*/
	/*ifstream ifs("Text.txt");
	string cur_str, max_str;

	while (std::getline(ifs, cur_str))
	{
		if (cur_str.size() > max_str.size())
			max_str = cur_str;
	}
	
	cout << "Max size: " << max_str.size() << " - " << max_str << endl;*/

	//9
	/*
	Дан текстовый файл. 
	Подсчитать количество слов, начинающихся с символа, который задаёт пользователь.
	*/
	/*char s[500];
	cin.getline(s, 500);
	int k = Kolvo_Slov(s);

	cout << s << "\n";
	cout << "Количество слов начинающиеся на букву е: " << k << "\n";*/


	system("pause");
	return 0;
}

//9
int Kolvo_Slov(char * s)
{
	char *r = new char[strlen(s) + 1];
	strcpy(r, s);
	int k = 0;
	char *delim = '\0';
	char *t = strtok(r, delim);

	while (t) {
		if (t[0] == 'e') k++;
		t = strtok(0, delim);
	}
	return k;
}
