#include <iostream>
#include <fstream>
#include <windows.h>
#include <ctime>

using namespace std;


void wypiszLosowyJSON(int los)
{
	srand( time( NULL ) );
	cout << "Losowanie: " <<(( rand() % 5 ) + 0 ) <<endl;
	
}

int main ()
{
	HANDLE hOut;
	
	hOut = GetStdHandle( STD_OUTPUT_HANDLE );
    int tab[100];
    
 
    string linia;
    fstream plik;
 
    plik.open("a.txt", ios::in);
    if(plik.good() == true)
    {
        while(!plik.eof())
        {
            getline(plik, linia);
            cout << linia << endl;
        }
        plik.close();
	}                  
	{
     SetConsoleTextAttribute( hOut, BACKGROUND_GREEN);
	int max, tab[]={1, 3, 2, 4, 2, 2, 3, 5}; 
	
	max = tab[0]; 
	
	for(int i=1;i<8;i++) 
		if(max<tab[i])
		
		
			max = tab[i];
	SetConsoleTextAttribute( hOut, BACKGROUND_RED);
	cout<<"Najwieksza wczytana liczba jest "<<max<<endl;
	
   

    ofstream plik2;              
    plik2.open("d.txt",ios::out); 
	plik2<<"[  \n { \n \"MAKSIMUM\" : \" ";       
    plik2<<max ;
	plik2<<endl;    
	plik2<<"LOSOWA LICZBA:";
	plik2<<wypiszLosowyJSON;

}
	wypiszLosowyJSON(100);
	return 0;

}
	
