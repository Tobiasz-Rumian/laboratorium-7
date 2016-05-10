#include "stdafx.h"
#include "magicItem.h"
#include "hero.h"
#include "chestStorage.h"
#include "bagpackStorage.h"
#include <iostream>
using namespace std;
int magicItem::basicMagicAttack = 10;
int main()
{
	hero hero;
	cout << "budzisz sie w opuszczonym ciemnym pokoju, przed soba widzisz skrzynie." << endl;
	char otworzyc;
		cout << "Chcesz ja otworzyc?(T/N)" << endl;
		cin >> otworzyc;
		if (otworzyc == 'T')
		{
			chestStorage chest("ciemny pokoj",5);
			if (chest.getLocked())
			{
				cout << "cholera,zamknieta. Otworze ja.";
				chest.openChest();
				cout << "w skrzyni znajduja sie:" << endl;
				for (int i = 0; i < chest.getSize(); i++)
				{
					cout << i+1 << ") " << chest.content[i]->getName() << endl;
				}
				cout << "zabieram wszystkie!" << endl;
				bagpackStorage bagpack(hero,10);
				bagpack.content = chest.content;
				cout << "Zobaczmy co teraz mam w plecaku" << endl;
				for (int i = 0; i < chest.getSize(); i++)
				{
					cout << i + 1 << ") " << bagpack.content[i]->getName() << endl;
				}
				
			}
		}
	system("pause");
    return 0;
}