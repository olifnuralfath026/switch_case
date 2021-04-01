#include <iostream>
using namespace std;

int main()
{
   	float pilih, a, t, r, p, l,s;
 	float sisiKubus; 
 	float panjangBalok, lebarBalok, tinggiBalok; 
 	float tinggiTabung, tinggiKerucut;
 	float hasil;
 	int menu;
 	
   
   
   	cout<<"MENGHITUNG LUAS BANGUN DATAR DAN MENGHITUNG VOLUME BANGUN RUANG\n";
   	cout<<"1. Persegi\n";
	cout<<"2. Persegi Panjang\n";
	cout<<"3. Segitiga\n";
	cout<<"4. Lingkaran\n";
	cout<<"5. Kubus\n";
	cout<<"6. Balok\n";
	cout<<"7. Tabung\n";
	cout<<"8. Kerucut\n";
	cout<<"Pilih Nomor : "; 
	cin>>menu;
	
	
	switch(menu){
	
		case 1:
		cout<<"Rumus Luas Persegi\n";
		cout<<"L = s*s\n";
		cout<<"Masukan sisi (cm) : ";
		cin>>p;
		hasil=p*p;
		cout<<"Luas = ";cout<<hasil;
		cout<<" cm\n";
		break;
		case 2:
		cout<<"Rumus Luas Persegi Panjang\n";
		cout<<"L = p*l\n";
		cout<<"Masukan panjang (cm) : ";
		cin>>p;
		cout<<"Masukan lebar (cm) : ";
		cin>>l;
		hasil=p*l;
		cout<<"Luas = ";cout<<hasil;
		cout<<" cm\n";
		 break;
		case 3:
		cout<<"Rumus Luas Segitiga\n";
		cout<<"L = 1/2*a*t\n";
		cout<<"Masukan alas (cm) : ";
		cin>>p;
		cout<<"Masukan tinggi (cm) : ";
		cin>>t;
		hasil=p*t/2;
		cout<<"Luas = ";cout<<hasil;
		cout<<" cm\n";
		break;
		case 4:
		cout<<"Rumus Luas Lingkaran\n";
		cout<<"L = phi*r*r\n";
		cout<<"Masukan jari-jari (cm) : ";
		cin>>r;
		hasil=3,14*r*r;
		cout<<"Luas = ";cout<<hasil;
		cout<<" cm\n";
		break;
		case 5:
		cout<<"Rumus Volume Kubus\n";
		cout<<"V = s*s*s\n";
		cout<<"masukan sisi kubus : ";
    	cin>>s;
		hasil=s*s*s;
		cout<<"Volume = ";cout<<hasil;
		cout<<" cm\n";
		break;
		case 6:
		cout<<"Rumus Volume Balok\n";
		cout<<"V = p*l*t\n";
		cout<<"Masukan Panjang Balok : "; 
    	cin>>p;
    	cout<<"Masukan Lebar Balok   : ";
    	cin>>l;
    	cout<<"Masukan Tinggi Balok : ";
    	cin>>t;
		hasil=p*l*t;
		cout<<"Volume = ";
		cout<<hasil;
		cout<<" cm\n";
		break;
		case 7:
		cout<<"Rumus Volume Tabung\n";
		cout<<"V = 3.14*r*r*tinggiTabung\n";
		cout <<" Masukan Jari-jari : ";
     	cin >> r;
     	cout <<" Masukan Tinggi Tabung : ";
     	cin >> t;
		hasil=3.14*r*r*t;
		cout<<"Volume = ";
		cout<<hasil;
		cout<<" cm\n";
		break;
		case 8:
		cout<<"Rumus Volume Kerucut\n";
		cout<<"V = 1/(float)3 * 3,14 * rusuk * rusuk * tinggi\n";
		cout << " Masukkan Rusuk  : ";
		cin>>r;
    	cout<< " Masukkan Tinggi : "; 
		cin>>t;
		hasil=1/(float)3*3.14*r*r*t;
		cout<<"Volume = ";
		cout<<hasil;
		cout<<" cm\n";
		}
		
		return 0;
}
