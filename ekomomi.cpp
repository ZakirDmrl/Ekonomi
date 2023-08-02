// Ekonomi Similasyonu Programı:
// n kişi ve her kişi de p para olacak rastgele seçilen 2 kişi içinden yapılan
// 1000 tane işlem sonucunda para miktarına göre kaç kişi olduğunu gösteren grafiği yapan kod:

#include <iostream>
#include <ctime>
#include <fstream>
#include "kisi.h"
using namespace std;
void alisveris(Kisi *,int);
void dosyayaYaz(Kisi *,int);
int main()
{
srand(time(NULL));
int n;
cout<<"Similasyon icin kisi sayisini belirle: ";
cin>>n;
Kisi dizin[n];
for(int i = 0; i < n;i++){
	Kisi k1;
	dizin[i] = k1;
}

for(int a = 0; a < n; a++){
alisveris(dizin,n);
}

for(int a = 0; a < n; a++){
	cout<<dizin[a].getPara()<<endl;
}
dosyayaYaz(dizin,n);
	return 0;
}

void alisveris( Kisi *ptr,int n){
int a = (rand()%n);
int b = (rand()%n);	
//cout<<ptr->getPara()<<endl;
(ptr+a)->setPara((ptr+a)->getPara()+100);
(ptr+b)->setPara((ptr+b)->getPara()-100);
//cout<<(ptr+a)->getPara()<<endl;
//cout<<(ptr+b)->getPara()<<endl;

}
void dosyayaYaz(Kisi *ptr,int n){
ofstream Dyazdir("file.txt",ios::out);
	for(int a = 0; a < n; a++){
	Dyazdir<<(ptr+a)->getPara()<<endl;
	}

}