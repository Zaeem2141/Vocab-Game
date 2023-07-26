#include<iostream>
#include <fstream>
#include<string>
#include<windows.h>
#include<dos.h>
using namespace std;
void display(int a)
{
	Sleep(1000);
	system("clear");
	cout << "\t\t\t\t\t VOCABULARY TEST " << endl;
	cout << "\t\t\t\t\t    MIND GRILL " << endl << endl << endl;
	cout << "\t\tWrite down as many words as you can make using thr letters" << endl;

	cout << "\t\t\t\t\t" << "|H|" << "  " << "|G|" << "  " << "|I|" << endl << endl;
	cout << "\t\t\t\t\t" << "|M|" << "  " << "|L|" << "  " << "|O|" << endl << endl;
	cout << "\t\t\t\t\t" << "|R|" << "  " << "|A|" << "  " << "|T|" << endl;
	cout << "\t\t\t\t\t\t\t" << "Here is your result !" << endl;
	cout << "\t\t\t\t\t\t\t\t" << "-------" << endl;
	cout << "\t\t\t\t\t\t\t\t" << "|     |" << endl;
	cout << "\t\t\t\t\t\t\t\t" << "|  " << a << "  |" << endl;
	cout << "\t\t\t\t\t\t\t\t" << "|     |" << endl;
	cout << "\t\t\t\t\t\t\t\t" << "-------" << endl;
	cout << "\t\t\t\t\t\t\t\t" << "|     |" << endl;
	cout << "\t\t\t\t\t\t\t\t" << "|  45 |" << endl;
	cout << "\t\t\t\t\t\t\t\t" << "|     |" << endl;
	cout << "\t\t\t\t\t\t\t\t" << "-------" << endl;

}
void data(string arr[], int s)
{
	fstream out ("data.txt", ios::in); // it will read the possible words from the file
	for (int i = 0; i < s; i++)
	{
		out>>arr[i];
	}
	out.close();

}
int main()
{
	cout << endl << endl << endl << endl << endl << endl << endl;
	string name, edu;
	cout << "\t\t\t\tEnter your name : " << endl;
	cout << "\t\t\t\t"; getline(cin, name);
	cout << "\t\t\t\tEnter your Qualification: " << endl;
	cout << "\t\t\t\t"; getline(cin, edu);

	system("CLS");

	const int l = 45;
	int flag = 1;
	int a = 0, c = 0, d = 0;
	string arr[l], b;

	data(arr, l);
	int m = 0, s = 0;
	
	display(a);
	string z[45];
	int k = 0;

	

	while (flag)
	{
		d = 0;
		cout << "Enter a word from above letters or Quit to shut the game " << endl;
		getline(cin, z[k]);
		if (z[k] == "quit")
		{
			cout << endl << endl << "Oops!! you just lose "<<endl<<"your score is : "<<a << endl << endl;
			flag = 0;
			break;
		}
		if (flag) {
		for (int i = 0; i <k; i++)
		{	
				while (z[k] == z[i])
				{
					cout << "Ooops !The word is already entered!" << endl<<endl;
					cout << "Enter a word from above letters or Quit to shut the game " << endl;
					getline(cin, z[k]);
				}
			
		}
	
			for (int i = 0; i < 45; i++)
			{

			if (z[k] == arr[i])
			{
				cout << "Congrats ! You Got one point " << endl;
				a++;
					c++;
					d++;
					break;

			}
			}
			if (d == 0)
		{
			cout << "Oops! wrong word. We haven't such word " << endl;
			c++;
		}
			if (c == 45)
		{
			display(a);
				flag = 0;
			cout << "Sorry!!Your turns are over " << endl << endl;
			cout << "Your right Answers are  : " << a << " out of " << "45" << endl;
				break;
			}
			else
			{

			display(a);

		}
		if (a == 45)
		{
			cout << "CONGRATS !! YOU HAVE GOOD VOCABULARY !!" << endl << endl;
				cout << "Your right Answers are  : " << a << " out of " << "45" << endl;
			}
		}
		k++;
	}

	fstream data("Result.txt", ios::out | ios::app);
	data << "Name : " << name << endl;
	data << "Qualification : " << edu << endl;
	data << "Score out of 45 : " << a << endl;
	data << "Percentage : " << (a *100) /45 << "%" << endl;

	system("pause");
	return 0;
}