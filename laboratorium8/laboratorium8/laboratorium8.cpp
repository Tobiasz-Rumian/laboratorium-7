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
			chestStorage chest("ciemny pokoj",4);
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
				cout << "chyba powinienem sprawdzic wlasciwosci moich przedmiotow!" << endl;
				cout << "tylko od ktorego zaczac?" << endl;
				int zacz;
				cin>> zacz;
				cout << "DANE PRZEDMIOTU: " << bagpack.content[zacz - 1]->getName() << endl;
				cout << bagpack.content[zacz - 1]->getValue() << endl;
				cout << bagpack.content[zacz - 1]->getCondition() << endl;
				cout << bagpack.content[zacz - 1]->getWeight() << endl;
				cout << bagpack.content[zacz - 1]->getTyp() << endl;
				cout << bagpack.content[zacz - 1]->getCondition() << endl;
				cout << bagpack.content[zacz - 1]->getHandedness() << endl;
				//cout << bagpack.content[zacz - 1]->get << endl;
				//cout << bagpack.content[zacz - 1]->getCondition() << endl;
				/*if (bagpack.content[zacz - 1]->getTyp == "unikatowa bron")
				{

				}
				if (bagpack.content[zacz - 1]->getTyp == "unikatowa zbroja")
				{

				}
				if (bagpack.content[zacz - 1]->getTyp == "zwoj")
				{

				}
				if (bagpack.content[zacz - 1]->getTyp == "runa")
				{

				}
				cout << bagpack.content[zacz - 1]-> << endl;
				cout << bagpack.content[zacz - 1]-> << endl;*/
			}
		}
	system("pause");
    return 0;
}