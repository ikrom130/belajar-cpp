#include <fstream>
#include <iostream>
#include <limits>
#include <string>

using namespace std;

struct Mahasiswa{
    int pk;
    char nim[15];
    char nama[20];
    char jurusan[15];
};

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

int getOption() {
    int input;
    system("cls");
    cout << "Program CRUD data mahasiswa" << endl;
    cout << "============================" << endl;
    cout << "1. Tambah data mahasiswa " << endl;
    cout << "2. Tampilkan data mahasiswa " << endl;
    cout << "3. Ubah data mahasiswa " << endl;
    cout << "4. Hapus data mahasiswa " << endl;
    cout << "5. Selesai " << endl;
    cout << "============================" << endl;
    cout << "Masukkan pilihan: ";
    cin >> input;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return input;
}

void checkDatabase(fstream &data) {
    data.open("data.bin", ios::out | ios::in | ios::binary);

    if (data.is_open()) {
        cout << "database ditemukan" << endl;
    } else {
        cout << "database tidak ditemukan" << endl;
        data.close();
        data.open("data.bin", ios::trunc | ios::out | ios::binary);
    }
}

void writeData(fstream &data, int posisi, Mahasiswa &inputMahasiswa) {
    data.seekp((posisi-1)*sizeof(inputMahasiswa), ios::beg);
    data.write(reinterpret_cast<char*>(&inputMahasiswa),sizeof(Mahasiswa));
};

int getDataSize(fstream &data) {
    int start, end;
    data.seekg(0, ios::beg);
    start = data.tellg();
    data.seekg(0, ios::end);
    end = data.tellg();
    return (end-start)/sizeof(Mahasiswa);
}

Mahasiswa readData(fstream &data, int posisi) {
    Mahasiswa readMahasiswa;
    data.seekg((posisi-1)*sizeof(Mahasiswa), ios::beg);
    data.read(reinterpret_cast<char*>(&readMahasiswa),sizeof(Mahasiswa));
    return readMahasiswa;
}

void addDataMahasiswa(fstream &data) {
    Mahasiswa  input_mahasiswa, lastMahasiswa;

    input_mahasiswa.pk = 1;
    int size = getDataSize(data);

    cout << "ukuran data: " << size << "\n";

    if (size == 0) {
        input_mahasiswa.pk = 1;
    } else {
        lastMahasiswa = readData(data,size);
        cout <<"pk = " << lastMahasiswa.pk << "\n";
        input_mahasiswa.pk = lastMahasiswa.pk + 1;
    }

    cout << "NIM: ";
    cin.getline(input_mahasiswa.nim, 15);
    cout << "nama: ";
    cin.getline(input_mahasiswa.nama, 20);
    cout << "jurusan: ";
    cin.getline(input_mahasiswa.jurusan, 15);

    writeData(data, size+1, input_mahasiswa);
};

void displayDataMahasiswa(fstream &data) {
    int size = getDataSize(data);
    Mahasiswa showMahasiswa;
    cout << "No.\tPK.\tNIM\tNama\tJurusan\n";
    for (int i=1; i<=size; i++) {
        showMahasiswa = readData(data,i);
        cout << i << "\t";
        cout << showMahasiswa.pk << "\t";
        cout << showMahasiswa.nim << "\t";
        cout << showMahasiswa.nama << "\t";
        cout << showMahasiswa.jurusan << "\n";

    }
}

void updateRecord(fstream &data){
    int nomor;
    Mahasiswa updateMahasiswa;
    cout << "pilih nomer: ";
    cin >> nomor;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    updateMahasiswa = readData(data, nomor);

    cout << "\n\n Pilihan data: " << endl;
    cout << "NIM: " << updateMahasiswa.nim << endl;
    cout << "Nama: " << updateMahasiswa.nama << endl;
    cout << "Jurusan: " << updateMahasiswa.jurusan << endl;

    cout << "Merubah data: " << endl;
    cout << "NIM: ";
    cin.getline(updateMahasiswa.nim, 15);
    cout << "Nama: ";
    cin.getline(updateMahasiswa.nama, 20);
    cout << "Jurusan: ";
    cin.getline(updateMahasiswa.jurusan, 15);

    writeData(data, nomor, updateMahasiswa);
}

void deleteRecord(fstream &data){
    int nomer, size, offset;
    Mahasiswa blankMahasiswa, tempMahasiswa;
    fstream dataSementara;

    size = getDataSize(data);
    cout << "pilih nomor data: ";
    cin >> nomer;

    writeData(data, nomer, blankMahasiswa);
    dataSementara.open("temp.dat", ios::trunc|ios::out|ios::in|ios::binary);

    offset = 0;

    for(int i=1; i <= size; i++){
        tempMahasiswa = readData(data, i);
        //if(!tempMahasiswa.nama.empty()){
        if(tempMahasiswa.nama[0] != '\0'){
            writeData(dataSementara, i-offset, tempMahasiswa);
        } else {
            offset++;
            cout << "Delete Item " << endl;
        }
    }
    size = getDataSize(dataSementara);
    data.close();
    data.open("data.bin", ios::trunc|ios::out|ios::in|ios::binary);
    data.close();
    data.open("data.bin", ios::out|ios::in|ios::binary);

    for (int i=1; i <= size; i++) {
        tempMahasiswa = readData(dataSementara, i);
        writeData(data, i, tempMahasiswa);
    }
};
