#include"ShoeShop.h"

ShoeShop* ini(int array_size)
{
	ShoeShop* array = new ShoeShop[array_size];
	for (int i = 0; i < array_size; i++)
	{
		cout << "Enter name of shop n." << i << ": "; getline(cin, array[i].shopsName);
		cout << "Enter address of shop n." << i << ": "; getline(cin, array[i].shopsAddress);
		cout << "Enter seller of shop n." << i << ": "; getline(cin, array[i].shopsSaller);
		cout << "Enter amount of shoes in shop: "; cin >> array[i].amountShoes; 
		cin.ignore();
		for (int j = 0; j < array[i].amountShoes; j++)
		{
			cout << i << ")";
			getline(cin, array[i].shoes[j]);
		}
		cout << "|--------------|" << endl;
	}
}

void printShop(ShoeShop a)
{
	cout << "\tShop's Name: " << a.shopsName << endl;
	cout << "\tShop's address: " << a.shopsAddress << endl;
	cout << "\tShop's seller: " << a.shopsSaller << endl;
	cout << "\tShoes on sale: ";
	for (int i = 0; i < a.amountShoes; i++)
		cout << "\t\t" << i << ")" << a.shoes[i] << endl;
}

void printShopsForName(ShoeShop* array, int array_size)
{
	string tmp;
	int isFind = 0
	cout << "Enter shop name: "; getline(cin, tmp);
	cout << "|--------------------------------------|" << endl << endl;
	for (int i = 0; i < array_size; i++)
	{
		if (array[i].shopsName == tmp)
		{
			printShop(array[i]);
			cout << endl;
			isFind++;
		}
	}
	if (isFind == 0) cout << "Shop doesn't find :(" << endl << endl;
	else cout << endl;
	cout << "|--------------------------------------|" << endl;

	
}