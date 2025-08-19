//
// Created by User on 8/16/2025.
//

#ifndef CRUD_H
#define CRUD_H

#include <fstream>
#include <iostream>
#include <limits>
#include <string>

using namespace std;

namespace crud {
    struct Mahasiswa{
        int pk;
        char nim[15];
        char nama[20];
        char jurusan[15];
    };

}

#endif //CRUD_H
