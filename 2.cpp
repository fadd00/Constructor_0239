#include<iostream>
#include<string>
using namespace std;

class mahasiswa{
    private:
    static int nim;

    public:
    int id;
    string nama;

    void setID();
    void printAll();
    static void setNim(int pNim){nim = pNim;}
    static int getNim(){return nim;}

    mahasiswa(string pnama){
        nama = pnama;
        setID();
    }
};
int mahasiswa::nim = 239;
void mahasiswa::setID(){
    id = ++nim;
}
void mahasiswa::printAll() {
    cout << "ID : " << id << endl;
    cout << "Nama : " << nama << endl;
    cout << endl;
}
int main(){

}