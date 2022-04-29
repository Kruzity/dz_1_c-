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
void printShopsForName();	
void printShopsForAddress();
void searchSeller();
void searchShoes();
void deliverShoes();
