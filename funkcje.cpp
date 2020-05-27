#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;


void wypiszJSON (int a)
{
	cout<< " {  \"liczba\ :2} " <<endl;
	cout<< " {  \"liczba\ :6} " <<endl;
	cout<< " {  \"liczba\ :43} " <<endl;
}

 

void wypiszLosowyJSON(int max)
{
	srand( time( NULL ) );
	cout << "Losowanie: " <<(( rand() % 100 ) + 0 ) <<endl;
	
}

void totolotek (int b)
{
	srand( time( NULL ) );
	cout << "Gratulacje ! Wygrales: " <<(( rand() % 10000 ) + 0 ); cout << "|zlotych";

}




int main ()

{

wypiszJSON(2);

wypiszJSON(6);

wypiszJSON(43);

wypiszLosowyJSON(100);

totolotek (10000);

    

return 0;
}


