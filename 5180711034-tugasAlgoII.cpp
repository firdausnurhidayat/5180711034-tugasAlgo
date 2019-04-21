#include <iostream>
using namespace ::std;
float pangkat(float angka, float nilai){
if(nilai==0)
return 1;
else if(nilai<0)
return 1/angka*pangkat(angka,nilai+1);
else
return angka*pangkat(angka,nilai-1);
}

main (){
    int angka,pemangkat;
    char i;
do{
    cout<<"Masukan Nilai \t:";cin>>angka;
    cout<<"MASUKAN NILAI pemangkat KE DUA\t:";cin>>pemangkat;
    cout<<pangkat(angka,pemangkat);
    cout<<"\nULANGI (Y/T)\t:";cin>>i;}
    while (i=='y');
}


