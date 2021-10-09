#include<iostream>
#include<fstream>
using namespace std;
// function prototype                     -- like fomula
double luassegi3(double tapak , double tinggi);                // like declare
double luasbulatan(double radius);
void displayLuas(double luassegi3 , double luasbulatan);
int main(void)
{
// function cell
    
    int pilih;
    double tapak , tinggi , radius;
	cout<<endl<<"Sila pilih ";
	cout<<endl<<"---------------------";
	cout<<endl<<"1) Segi Tiga";
	cout<<endl<<"2) Bulatan";
	cout<<endl<<"---------------------";
	cout<<endl<<"Enter ur pilihan = ";
	cin>>pilih;
	
	if(pilih == 1){
	cout<<endl<<"----Segi Tiga----";
	cout<<endl<<"Please enter tapak = ";
	cin>>tapak;
	cout<<endl<<"Please enter tinggi = ";
	cin>>tinggi;
	cout<<endl<<"Luas = "<<luassegi3(tapak,tinggi);
	
   }else{
   	cout<<endl<<"----Bulatan----";
	cout<<endl<<"Please enter radius = ";
	cin>>radius;
	cout<<endl<<"Luas = "<<luasbulatan(radius);
  }
	
	return 0 ;

}
//function implementation 
double luassegi3(double tapak, double tinggi)
{
	double luas ;
	 luas = 0.5*tapak*tinggi;
	 
	 
	 return luas;
}
double luasbulatan(double radius)
{
	double luas ;
	 luas = 3.142*radius*radius;
	 
	 
	 return luas;
}
void displayLuas(double luassegi3 , double luasbulatan)
{
	cout<<"Area : ";
}
