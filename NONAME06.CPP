#include <iostream.h>

int main()
 { int n, m;
 	float l;
   cout<<"Masukkan tanggal kelahiran anda (n) :"; cin>>n;
   cout<<"Masukkan bulan kelahiran anda (m) :"; cin>>m;
   cout<<"Masukkan tahun lahir anda (1), isi 2 digit akhir: ";
   cin>>l;

   n +=m;
   cout<<"Nilai n+=m "<<n<<endl;
   n -=m;
   cout<<"Nilai n-=m "<<n<<endl;
   n %=m;
   cout<<"Nilai n%=m "<<n<<endl;
   n *=m;
   cout<<"Nilai n*=m "<<n<<endl;
   l /=m;
   cout<<"Nilai 1/=m "<<n<<endl;
   return (0);
 }




