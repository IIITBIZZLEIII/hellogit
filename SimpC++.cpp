#include <iostream>;
using namespace std;

int main()
{
	int age(0);
	string choice="";
	string name="";
	cout << " What is your name ? " << endl;
	cin >> name;
	cout<< " How old are you ? " << endl;
	cin >> age;
	cout << " Do chickens lay eggs... y/n? " << endl;
	cin >> choice;
	
	if (choice = "y" )
	{
		cout << "Correct !" << endl;
	}
	else if (choice = "n")
	{
		cout << "Incorrect !" << endl;
	}
	
	return 0;
}
