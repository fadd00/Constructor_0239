#include<iostream>
using namespace std;

class mahasiswa{
    public:
        static int nim;
        int id;
        string nama;
    
    void setID();

    void printAll();
    mahasiswa(string pnama){
        nama = pnama;
        setID();
    }
};

int mahasiswa::nim = 239;

void mahasiswa::setID(){
    id = ++nim;
}
void mahasiswa::printAll(){
    cout<<"id   = "<< id <<endl;
    cout<<"nama = "<< nama <<endl;
    cout<<endl;
}

int main(){
    mahasiswa mhs1("Ilam Compas");
    mahasiswa mhs2("hapis samba");
    mahasiswa mhs3("uno 13");
    mahasiswa mhs4("farhad 15");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();
    return 0;
}