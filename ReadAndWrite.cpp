#include "ReadAndWrite.h"

using namespace std;

/*int x, y;
file >> x >> y;

cout << "Num 1: " << x << endl;
cout << "Num 2: " << y << endl;*/

void ReadAndWrite::nacitajZoSuboru()
{
	ifstream file;
	file.open("list.txt");
	//check for error
	if (file.fail())
	{
		cerr << "Subor nenajdeny, alebo sa neda otvorit." << endl;
		exit(1);
	}
	//Read a file until you`re reached the end
	while (!file.eof())
	{
		file >> item;
		count++;
		fruit.push_back(item);
	}
	file.close();
}

void ReadAndWrite::nacitajZKonzoly()
{
	cout << "Zadajte prosim nazov ovocia" << endl << "alebo pre ukoncenie programu zadajte 0." << endl;

	while (item != "0") {
		cin >> item;
		if (item == "0")
		{
			break;
		}
		count++;
		fruit.push_back(item);
	}
}

void ReadAndWrite::zapisDoSuboru()
{
	ofstream subor;
	subor.open("zoradeny.txt");
	for (int i = 0; i < count; i++)
	{
		subor << fruit.at(i) << endl;
	}
	subor.close();
}

void ReadAndWrite::zoradAVypis()
{
	sort(fruit.begin(), fruit.end());
	cout << count << " items found." << endl;

	for (int i = 0; i < count; i++)
	{
		cout << fruit.at(i) << endl;
	}
}
