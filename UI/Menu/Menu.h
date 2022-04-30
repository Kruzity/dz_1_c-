#include"../../Core/Entities/ShoeShop.h"

void menu()
{
	int array_size = 2;
	ShoeShop* array = ini(array_size);
	char a;
	do
	{ 
		for (int i = 0; i < array_size; i++)
		{
			printShop(array[i]);
			cout << endl;
		}
		cout << "1)printShop" << endl;
		cout << "2)printShopsForName" << endl;		
		cout << "3)printShopsForAddress" << endl;
		cout << "4)searchSeller" << endl;
		cout << "5)searchShoes" << endl;
		cout << "6)deliverShoes" << endl;
		cout << "\nPress button...";
		a = _getch();
		system("cls");
		switch (a)
		{
			case '2':
				printShopsForName(array, array_size);
				break;
			case '3':
				printShopsForAddress(array, array_size);
				break;
			case '4':
				searchSeller(array, array_size);
				break;
			case '5':
				searchShoes(array, array_size);
				break;
			case '6':
				deliverShoes(array, array_size);
				break;
			default:
				cout << "Unknown func" << endl;
				break;
		}
		cout << "\nPress any button yo contionue: ";
		_getch();
		system("cls");
	}
	while (a != '0');
}