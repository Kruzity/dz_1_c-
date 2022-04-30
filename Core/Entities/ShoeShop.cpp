#include"ShoeShop.h"

ShoeShop* ini(int array_size)
{
	ShoeShop* array = new ShoeShop[array_size];
	for (int i = 0; i < array_size; i++)
	{
		cout << "Enter name of shop n." << i+1 << ": "; getline(cin, array[i].shopsName);
		cout << "Enter address of shop n." << i+1 << ": "; getline(cin, array[i].shopsAddress);
		cout << "Enter seller of shop n." << i+1 << ": "; getline(cin, array[i].shopsSaller);
		cout << "Enter amount of shoes in shop: "; cin >> array[i].amountShoes; 
		array[i].shoes = new string[array[i].amountShoes];
		cin.ignore();
		for (int j = 0; j < array[i].amountShoes; j++)
		{
			cout <<"\t"<< j+1 << ")";
			getline(cin, array[i].shoes[j]);
		}
		cout << "|-----------------------------#" << endl;
	}
	return array;
}

void printShop(ShoeShop a)
{
	cout << "\tShop's Name: " << a.shopsName << endl;
	cout << "\tShop's address: " << a.shopsAddress << endl;
	cout << "\tShop's seller: " << a.shopsSaller << endl;
	cout << "\tShoes on sale: " << endl;;
	for (int i = 0; i < a.amountShoes; i++)
		cout << "\t\t" << i+1 << ")" << a.shoes[i] << endl;
}

void printShopsForName(ShoeShop* array, int array_size)
{
	string tmp;
	bool isFind = false;
	cout << "Enter shop name: "; getline(cin, tmp);
	cout << "|--------------------------------------|" << endl << endl;
	for (int i = 0; i < array_size; i++)
	{
		if (array[i].shopsName == tmp)
		{
			printShop(array[i]);
			cout << endl;
			isFind = true;
		}
	}
	if (isFind == false) cout << "Shop doesn't find :(" << endl << endl;
	else cout << endl;
	cout << "|--------------------------------------|" << endl;
}

void printShopsForAddress(ShoeShop* array, int array_size)
{
	string tmp;
	bool isFind = false;
	cout << "Enter shop address: "; getline(cin, tmp);
	cout << "|--------------------------------------|" << endl << endl;
	for (int i = 0; i < array_size; i++)
	{
		if (array[i].shopsAddress == tmp)
		{
			printShop(array[i]);
			cout << endl;
			isFind = true;
		}
	}
	if (isFind == false) cout << "Shop doesn't find :(" << endl << endl;
	else cout << endl;
	cout << "|--------------------------------------|" << endl;
}

void searchSeller(ShoeShop* array, int array_size)
{
	string tmp;
	bool isFind = false;
	cout << "Enter shop seller: "; getline(cin, tmp);
	cout << "|--------------------------------------|" << endl << endl;
	for (int i = 0; i < array_size; i++)
	{
		if (array[i].shopsSaller == tmp)
		{
			printShop(array[i]);
			cout << endl;
			isFind = true;
		}
	}
	if (isFind == false) cout << "Seller doesn't find :(" << endl << endl;
	else cout << endl;
	cout << "|--------------------------------------|" << endl;
}

void searchShoes(ShoeShop* array, int array_size)
{
	string tmp;
	bool isFind = false;
	cout << "Enter shop seller: "; getline(cin, tmp);
	cout << "|--------------------------------------|" << endl << endl;
	for (int i = 0; i < array_size; i++)
	{
		for (int j = 0; j < array[i].amountShoes; j++)
		{
			if (array[i].shoes[j] == tmp)
			{
				printShop(array[i]);
				cout << endl;
				isFind = true;
			}
		}
	}
	if (isFind == false) cout << "Shoes doesn't find :(" << endl << endl;
	else cout << endl;
	cout << "|--------------------------------------|" << endl;
}

void deliverShoes(ShoeShop*& array, int array_size)
{
	string shoesName;
	int numShop;
	for (int i = 0; i < array_size; i++)
	{
		cout << i + 1 << ")";
		printShop(array[i]);
		cout << endl;
	}
	cout << "Choose shop: "; cin>>numShop;
	cin.ignore();
	cout << "Enter shoes: "; getline(cin, shoesName);
	
	string* tmp_Shoes = new string[array[numShop - 1].amountShoes+1];
	for (int i = 0; i < array[numShop - 1].amountShoes; i++)
		tmp_Shoes[i] = array[numShop - 1].shoes[i];
	tmp_Shoes[array[numShop - 1].amountShoes] = shoesName;
	array[numShop - 1].shoes = tmp_Shoes;
	array[numShop - 1].amountShoes++;
}