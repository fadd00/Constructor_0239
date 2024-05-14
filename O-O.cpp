#include<iostream>
#include<string>
using namespace std;

class mahasiswa{
    public:
    int nim;
    string nama;

    public:
    mahasiswa(){
        nim = 0;
        nama = "";
    };
    mahasiswa(int inim){
            nim = inim;
        }
    mahasiswa(string inama){
            nama = inama;
    };
    mahasiswa(int inim, string inama){
            nim = inim;
            nama = inama;
        };
void cetak(){
    cout << "NIM = " << nim << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
};
};
int main(){

}