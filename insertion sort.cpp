//insertion sort
#include <iostream>

using namespace std;

int main()
{
    int y;
    //inisialisasi variabel
    cout << "Masukan Jumlah array yang di inginkan : ";
    cin >> y;
    //array akan mengikuti jumlah array yang di inputkan
    //array dinamis
    int array[y];
    //perintah untuk looping atau mengulang
    for (int loop=0;loop<y;loop++){
        cout << " Masukkan Isi array " << loop << " : ";
        cin >> array[loop];
        cout << endl;
    }
    //----proses sorting dimulai----
    for(int loop=1; loop<y; loop++){
        int key = array[loop];
        int j = loop-1;
        //jika nilai j lebih dari sama dengan 0 dan
        //array j lebih besar dari key mka akan ditukar
        while(j>=0 && array[j] > key){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }
    //-----Proses sorting berakhir-----
    //hasil sorting
    cout << "hasil array yang sudah di sorting" << endl;
    for (int m=0;m<y;m++){
        cout << array[m] << " ";
    }
    return 0;
}
