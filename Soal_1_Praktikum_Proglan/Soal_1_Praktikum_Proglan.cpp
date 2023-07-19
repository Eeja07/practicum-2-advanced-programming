#include <iostream>
#include <string>

using namespace std;

class Karyawan {
  public:
    int input1;
    string input2, input3, input4;

    void inputLooping(){
        cin >> input1;
        cin.ignore();
    }

    void inputData(){
        getline(cin, input2);
        getline(cin, input3);
        getline(cin, input4);
    }

    void hasilData(){
        cout << "Nama: " << input2 << endl << "Jabatan: " << input3 << endl << "Gaji: " << input4 << endl;
    }
    
    void looping(){
        Karyawan data[input1];
        for (int i = 0; i < input1; i++) {
            data[i].inputData();
        }
        cout << "\nData Karyawan \n" << endl ;
        for (int i = 0; i < input1; i++) {
            cout << "\nKaryawan " << i + 1 << endl;
            data[i].hasilData();
        }
    }
};

int main() {
    Karyawan data;
    data.inputLooping();
    data.looping();
  return 0;
}
