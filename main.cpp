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

int mahasiswa::nim=239;

void mahasiswa::setID(){
    ++nim;
}
void mahasiswa::printAll(){
    cout<<"id   = "<< id <<endl;
    cout<<"nama = "<< nama <<endl;
    cout<<endl;
}

int main(){
    
}