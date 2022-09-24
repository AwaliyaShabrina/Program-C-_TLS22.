//Program Konversi Satuan Panjang SI ke USCS//

#include<iostream>
using namespace std;
int main() {

  int meter, inch, yard, feet, mph, pilihan;

  cout<<"***TUGAS PEMROGRAMAN TLS***" ;

  cout<<"\n==Konversi satuan panjang SI ke USCS ==" ;
  cout<<"\n1. meter  (m) – inch  (in)" ;
  cout<<"\n2. meter  (m) – yard  (yd)" ;
  cout<<"\n3. meter  (m) – feet  (ft) " ;
  cout<<"\n4. meter  (m) – mph        " ;
  cout<<"\n Masukan nomor pilihan satuan " ;
  cin>>pilihan;

  if (pilihan==1) {
    cout<<"Masukan nilai meter = " ;
    cin>>meter;
    inch = meter*39.37;
    cout<<"Nilai inch = "<<inch;
    }
  else if (pilihan==2) {
    cout<<"Masukan nilai meter = " ;
    cin>>meter;
    yard = meter*1.09361 ;
    cout<<"Nilai yard = "<<yard;
    }
  else if (pilihan==3) {
    cout<<"Masukan nilai meter = " ;
    cin>>meter;
    feet = meter*3.28084 ;
    cout<<"Nilai feet = "<<feet;
    }
    else if (pilihan==4) {
    cout<<"Masukan nilai meter = " ;
    cin>>meter;
    mph = meter*2.23694 ;
    cout<<"Nilai mph = "<<mph;
    }
    return 0;
 }