#include <iostream>
#include <iomanip>
#include <array>
#include <string>
using namespace std;

int main() {
    /* assign nilai kouta dan peminat dari masing-masing Universitas/Institut */
    float 
    kouta[9] = {90, 95, 84, 73, 26, 24, 26, 56, 28},
    peminat[9] = {3848, 1174, 2577, 845, 1740, 1220, 576, 948, 102},
    keketatanNumerator[9], // assign panjang array numerator
    keketatanDenominator[9];// assign panjang array denominator
    
    // assign nama Universitas/Institut dan nama Prodi //
    string 
    nama[9] = {"ITB", "ITB", "ITS", "ITS", "UGM", "UGM", "UGM", "UNMUL", "UNMUL"},
    prodi[9] = {"STEI-K", "STEI-R", "Teknik Informatika", "Teknik Elektro", "Teknologi Informasi", "Ilmu Komputer", "Teknik Elektro", "Informatika", "Teknik Elektro"};
    
    /* Fungsi perulangan untuk mencetak keketatan masing-masing prodi dari masing-masing Universitas/Institut */
   for(int i = 0;i<end(kouta)-begin(kouta);i++) {
       int presisi = 2; // assign nilai presisi awal
       keketatanNumerator[i] = kouta[i]/kouta[i];
       keketatanDenominator[i] = peminat[i]/kouta[i];
       if (keketatanDenominator[i]<10) {
           presisi = 1;
       }
       cout<<"Keketatan "<<nama[i]<<" Prodi "<<prodi[i]<<" Tahun 2024 adalah "<<keketatanNumerator[i]<<setprecision(presisi)<<":"<<keketatanDenominator[i]<<setprecision(presisi)<<"\n"<<endl;
   }
    return 0;
}
