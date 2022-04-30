#include"../Libs/Libs.h"

struct ShoeShop
{
	string shopsName;
	string shopsAddress;
	string shopsSaller;
	string* shoes;
	int amountShoes;
};

ShoeShop* ini(int array_size);
void printShop(ShoeShop a);
void printShopsForName(ShoeShop* array, int array_size);
void printShopsForAddress(ShoeShop* array, int array_size);
void searchSeller(ShoeShop* array, int array_size);
void searchShoes(ShoeShop* array, int array_size);
void deliverShoes(ShoeShop*& array, int array_size);
