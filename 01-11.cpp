//01_cpp.cpp
#include "stdafx.h"
#include<iostream>


using namespace	std;
int main()
{// susikuriamas kintamasis a sveikas skaicius, jam peiskiriamas reiksme 10.
	int	a = 10;
	cout <<	"kintamojo a reiksme "<< a << endl;//spausdinama a reiksme, siuo atveju 10
	cout <<"kintamojo a adresas "<< &a << endl;/*spausdinamas kintamojo adresas kompiuteryje. 
	  (atminties srities kompiuteryje, skirtos saugoti
	 kintamajam, pirmojo baito adresas)*/
	system(	"pause");
	return
		0;
}
//02_cpp.cpp 
#include "stdafx.h"
#include <iostream>


using namespace std;/*programa labai panasi i pirmaja. skiriasi tuo,
					kad spausdina nebe vieno elemento(kintamojo) adresa,
					o visos funkcijos adresa kompiuteryje*/
void asmuo()
{
	cout << "Vytautas Barzdaitis" << endl;
	cout << "\n         VDU " << endl;
}
int main()
{
	cout << "Funkcijos adresas " << &asmuo << endl;
	system("pause");
	return	0;
}


//03_cpp.cpp
#include "stdafx.h"
#include<iostream>

using namespace	std;
int main()
{/*si programa atspausdina kintamojo reiksme ,
 kreipdamasi i ja ne per kintamaji, o jo adresa,
 tam reikia pati adresa deklaruoti kaip kintamaji.
 Norint uzrasyti adresa kaip kintmaji,
 pries pasirenkamo kintamojo pavadinima
 reikia parasyti zvaigzdute "*" */
	int kintamasis = 24;// sukuriamas kintamasis, jam priskiriama reiksme(24)	
	int *rodykle;/*deklaruojamas kintamasis rodykle,
				 i kuri bus irasytas kintamojo "kintamasis" adresas.*/
	rodykle = &kintamasis;//sioje vietoje kintamojo adresas irasomas i rodykle
	cout << "Kintamojo reikšm÷ " << *rodykle << endl;/* atspausdinama reiksme kintamojo,
							 i kurio adresa yra nukreipta rodykle.
							siuo atveju ekrane matysime 24 */
	system("pause");
	return 0;
}

//04_cpp.cpp
#include "stdafx.h"
#include <iostream>

using namespace	std;
int main()
{/*si programa yra beveik identiskai tokia pati kaip 03,
 tik pabaigoje, spausdinant kintamojo reiksme pries kintamojo
 pavadinima "rodykle" nera padetos zvaigzdute, todel gauname
 visai kitoki rezultata. atspausdinama ne kintamojo reiksme, o jo adresas.*/

	int kintamasis = 24;// sukuriamas kintamasis, jam priskiriama reiksme(24)	
	int *rodykle;/*deklaruojamas kintamasis rodykle,
				 i kuri bus irasytas kintamojo "kintamasis" adresas.*/
	rodykle = &kintamasis;//sioje vietoje kintamojo adresas irasomas i rodykle
	cout << "Kintamojo reikšm÷ " << rodykle << endl;/* atspausdinama ne kintamojo reiksme ,
							o adresas, i kuri nukreipta rodykle.
							Rodykle nukreipta i kintamojo "kintamasis" adresa */
	system("pause");
	return 0;
}
/ 05_cpp.cpp
#include "stdafx.h"
#include <iostream>
/
using namespace	std;
int main()
{/*sioje programoje sukuriamas paprastas  kintamasis sveikasis skaicius a, jam priskiriama reiksme 24.
 Sukuriamas kintamasis sveikasis skaicius p, i kuri bus irasomas pirmojo a kintamojo adresas. Kintamasis,
 saugojantis kito kintamojo adresa vadinamas rodykle. sakoma, jog rodykle nukreipiama i ta kintamaji.
 siuo atveju rodkle bus nukreipta i a.
 */
	int a = 24, *p;
	p = &a;   // rodykle p rodo  i kintamojo a adres? 

	cout << "Kintamojo a reikšm÷ " << a << endl;//spausdinama a reiksme (24)
	cout << "Kintamojo a adresas " << &a << endl;/* spausdinamas a adresas
							(kiekviename kompiuteryje tai yra skirtinga reiksme,
							gali kisti kiekviena karta paleidus programa*/
	cout << "----------------------------------\n\n"
		;

	cout << "rodykles  p reikšm÷ " << p << endl;//spausdina ta pati a adresa, tik jau pasitelkdamas p (rodykle)
	cout << "rodykles  p adresas " << &p << endl;//cia atspausdinamas pacios rodykles p adresas
	cout << "Rodykles *p rodomas turinys " << *p << endl;// spausdinama reiksme kintamojo, i kuri rodo rodykle p,tai yra a reiksme, kuri lygi 24
	system("pause");
	return	0;
}

// 06_cpp.cpp
#include "stdafx.h"
#include <iostream>
 
using namespace	std;
int main()
{/*programa sukuria kinamaji a, priskiria jam reiksme 99.
 sukuria antra kintamaji-rodykle p, i kuria bus irasomas a adresas.
 tuomet naudojant rodykle, o ne pati kintamaji a,
 prie a reiksmes pridedame vieneta.
 */
	int	a;// kintamas a  - sveikasis sk. 
	int *p;// kintamasis p - rodykle 
	a = 99;//prisikiriama reiksme
	p = &a;//nurodoma, kad p saugo a kintamojo adresa

	(*p)++;// prie kintamojo, kurio adresa saugo p rodykle, pridedamas vienetas (99+1)
	cout << "Rodykles *p rodomas turinys " << *p << endl;//atspausdinama padidinta reiksme (100)
	system("pause");
	return 0;
}

// 07_cpp.cpp 
#include "stdafx.h"
#include <iostream>

using namespace	std;
int main()
{/*programa parasyta beveik taip pat kaip 06,
 tik pridedant vieneta prie rodykles p,
 kintamasis su zvaigzdute pries pavadinima p, nera apskliaustas .
 tai sis veiksmas igauna visai kitokia prasme.
 dabar vienetas pridedamas nebe prie a reiksmes, bet prie a adreso.
 tokiu budu dviem baitais padidiname rofykle, paslenkame ja i prieki,
 ir ji dabar saugo nebe a adresa, o kazkoki kita esanti dviem baitais toliau.
 todel atspausdinama nezinoma reiksme
 */
	int a;// kintamas a  - sveikasis sk. 
	int *p;// kintamasis p - rodykl÷ 
	a = 99;
	p = &a;

	*p++;//rodykles rodomas adresas padidinamas  
	cout << "Rodykles *p rodomas turinys " << *p << endl;/*cia turetu atsispausdinti tai,
							 kas yra yra naujajame adrese,
							 siek tiek toliau nei a kintamasis.
						         kadangi siuo atveju ten nieko nera,
							kompiuteris spausdina nesamoninga reiksme*/
	cout << "Kintamojo a reikšm÷ " << a << endl;//tuo tarpu a reiksme nepakinta, atspausdinama 99
	system("pause");
	return 0;
}

// 08_cpp.cpp 
#include "stdafx.h"
#include <iostream>

using namespace	std;
int main()/*programasukuria masyva is penkiu skaiciu, iraso skaicius i masyva,
		  o veliau ji atspausdina naudodamas for cikla */
{
	int i;
	int sk[5] = { 10, 20, 30, 40, 50 };
	for
		(i = 0; i < 5; i++)
		cout << sk[i] << endl;
	// ?ptrastinis masyvo elem. spausdinimas
	system("pause");
	return 0;
}

// 09_cpp.cpp 
#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{/*programa, kaip ir 08 spausdina masyvo elmentus,
 taciau dabar spausdinama pasitelkiant rodykles.
 atspausdinama rodykles rodomo adreso reiksme. */
	int	i;
	int sk[5] = { 10, 20, 30, 40, 50 };
	for (i = 0; i < 5; i++)
		cout << *(sk + i) << endl;/*programa, nuo man iprastos, skiriasi sioje vietoje.
								  rasoma nebe sk[i], o *(sk+i)
								  */
	system("pause");
	return 0;
}

// 10_cpp.cpp 
#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{/*programa, kaip ir 09, 08 spausdina masyvo elmentus,
 spausdinama pasitelkiant rodykles. */
	int	i;
	int sk[5] = { 10, 20, 30, 40, 50 };
	int *p;//sukuriama rodykle p
	p = sk;//p saugo masyvo adresa
	for (i = 0; i < 5; i++)/* todykle rodo i pirma masyvo elementa, atspausdina ji,
						   tuomet i sekanti, nes plius vienas. ir taip kol atspausdina visus penkis
						   elementus, tiesiogiai nesikreipdamas i juos, tik i ju adresus */
						   cout << *(p + i) << endl;
	system("pause");
	return 0;
}

// 11_cpp.cpp 
#include "stdafx.h"
#include <iostream>

using namespace	std;
int main()/*programa, kaip ir 10, 09, 08 spausdina masyvo elmentus,
		  spausdinama pasitelkiant rodykles. */
{
	int i;
	int sk[] = { 10, 20, 30, 40, 50 }; //sukuriamas masyvas su konkreciomis reiksmemis
	int *p;//sukuriama rodykle p
	p = sk;//p saugo masyvo adresa
	for (i = 0; i < 5; i++)
		cout << *p++ << endl;/*viskas vyksta tokiu pat budu, kaip ir praeitoje programoje,
							 tiesiog kitaip uzrasyta. taciau spauzdinama rodykles rodoma reiksme ,
							 vis pereinant prie tolimesnio elemento, kol atspausdinami visi penki,
							 nesikreipiant i juos tiesiogiai.*/
	system("pause");
	return 0;
}
