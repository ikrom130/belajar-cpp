#include <fstream>
#include "crud.h"

using namespace std;
using namespace crud;

int getOption();

void checkDatabase(fstream &data);
void writeData(fstream &data, int posisi, Mahasiswa &inputMahasiswa);
int getDataSize(fstream &data);
Mahasiswa readData(fstream &data, int posisi);
void addDataMahasiswa(fstream &data);
void displayDataMahasiswa(fstream &data);
void updateRecord(fstream &data);
void deleteRecord(fstream &data);

int main() {

    fstream data;

    checkDatabase(data);

    char is_continue;

    int pilihan = getOption();

    enum option {CREATE = 1, READ, UPDATE, DELETE, FINISH};

    while (pilihan != FINISH) {
        switch (pilihan) {
            case CREATE:
                cout << "Menambahkan data mahasiswa " << endl;
                addDataMahasiswa(data);
                break;
            case READ:
                cout << "Menampilkan data mahasiswa " << endl;
                displayDataMahasiswa(data);
                break;
            case UPDATE:
                cout << "Mengubah data mahasiswa " << endl;
                displayDataMahasiswa(data);
                updateRecord(data);
                cout << " updatedata " << endl;
                displayDataMahasiswa(data);
                break;
            case DELETE:
                cout << "Menghapus data mahasiswa " << endl;
                displayDataMahasiswa(data);
                deleteRecord(data);
                cout << "Delete Data " << endl;
                displayDataMahasiswa(data);
                break;
            default:
                cout << "Pilihan tidak ada" << endl;
                break;
        }

        label_continue:
        cout << "Lanjutkan? (y/n): ";
        cin >> is_continue;
        if ((is_continue == 'y') || (is_continue == 'Y')) {
            pilihan = getOption();
        } else if ((is_continue == 'n') || (is_continue == 'N')) {
            break;
        } else {
            goto label_continue;
        }
    }

    cout << "Program selesai!" << endl;

    cin.get();
    return 0;
}
