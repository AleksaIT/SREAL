# SREAL
1) Napisati c aplikaciju koja vrši parsiranje unetog stringa. String koji treba parsirati prima se
prilikom pokretanja programa, što je ilustrovano u nastavku (13 bodova):
Pokretanje programa u linux terminalu:
./parsiranje nestoveliko nestomalo uzaludno opcija

Iz prethodnog primera se vidi da program može da primi više stringova koji će u zavisnosti od
parametra "opcija" biti obrađeni na sledeći način:
● opcija = 1 - sva slova iz string-a prebaciti u velika slova. (3 boda)
● opcija = 2 - sortirati slova iz stringa po abecednom redu. (4 boda)
● opcija = 3 - izbaciti iz stringa sve brojeve (3 boda)
● opcija = 4 - proveriti da li je string palindrom (3 boda)

Parametar opcija se uvek nalazi na poslednjem mestu prilikom pokretanja programa. Rezultat
obrade ispisati u terminalu.
2) Za svaku od opcija implementirati posebnu funkciju u posebnom .c fajlu, takođe sve funkcije
deklarisati u jednom .h fajlu (slično kao u zadatku 1 sa vežbi 2). U zavisnosti od parametra
"opcija" u main programu pozvati određenu funkciju.

**Izgled header fajla**
int all_caps (int *str_array); // sva slova pretvoriti u velika slova
int most_common_leter (char * str_array); // pronaći slovo koje se najviše puta
ponavlja int no_letters (char * str_array); // iz string-a izbaciti sva slova
int palindrom_check (char * std_array) // proveriti da li je uneti string palindrom

Napisati Makefile pomoću koga bi se izvršilo kompajliranje. Napisati makefile tako da se prilikom
rekompajliranja kompajliraju samo oni fajlovi u kojima su izvršene promene (7 bodova)