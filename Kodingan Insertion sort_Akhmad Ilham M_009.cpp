//insertion sort
#include <iostream>

using namespace std;

int main()
{
    int Jumlah;
    //Input pertama jumlah dalam array
    //inisialisasi variabel
    cout << "Masukan Jumlah array yang di inginkan : ";
    cin >> Jumlah;
    //array akan mengikuti jumlah array yang di inputkan
    //array dinamis
    int array[Jumlah];
    //Input kedua isi array
    // Fungsi ini digunakan untuk mendisplay sebuah array
    for (int loop=0;loop<Jumlah;loop++){
        cout << " Masukkan Isi array " << loop << " : ";
        cin >> array[loop];
        cout << endl;
    }
    //----proses sorting dimulai----
    for(int loop=1; loop<Jumlah; loop++){
        int temp = array[loop];
        int j = loop-1;
        //jika nilai j lebih dari sama dengan 0 dan
        //array j lebih besar dari temp maka akan ditukar
        while(j>=0 && array[j] > temp){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = temp;
    }
    //-----Proses sorting berakhir-----
    //Output hasil sorting
    cout << "hasil array yang sudah di sorting" << endl;
        for (int m=0;m<Jumlah;m++){
    cout << "[" << array[m] << "]" << " ";
    }
    return 0;
}
