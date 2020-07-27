#include <iostream>
#include <string>
using namespace std;

int main()
{
	string eingabe;
	char vergleich;
	char ersatz;
	unsigned int anz = 0;
	cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
	getline(cin, eingabe);
	cout << "Bitte den zu ersetzenden Buchstaben eingeben: ? ";
	cin >> vergleich;
	cout << "Bitte den Ersatz-Buchstaben eingeben: ? ";
	cin >> ersatz;
	for (int i = 0; i < eingabe.size(); i++)
	{
		if (eingabe.at(i) == vergleich)
		{
			eingabe.at(i) = ersatz;
		}
	}
	cout << "Der Text nach der Ersetzung: " << eingabe << endl;
	system("PAUSE");
	return 0;
}