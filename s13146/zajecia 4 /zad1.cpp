#include <iostream> 
using namespace std; 

int main() { 
	char zgoda;
	int suma=0;
	while (true) {
		cout<< "Czy chcesz wprowadzic nastepna liczbe ?" << endl;
		cin>> zgoda; 
	if (zgoda == 'T' ) { 
		int liczba; 
		cout<<"Podaj liczbe"<< endl; 
		cin>> liczba;
		suma += liczba;
		cout<< "Obecna suma wynosi:" << suma <<endl; 
	} else {
		break;
	} 
}
	return 0;
}	

//g++ -Wall -ansi -pedantic -o zad_1 zad_1.cpp    ? kompiluje to w lini polecen  TYLKO ? d
//						plik wynikowy/ pilk cpp
