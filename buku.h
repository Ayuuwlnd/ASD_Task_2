/**
    KELAS     : IF 40-02
    KELOMPOK  : 8
    NAMA(NIM) : Ayu Wulandari (1301164104),Andaresta Fauzan(1301164189), Mahendrawan Idris (1301164461), M Hanur Yoga (1301164153)
**/

#ifndef BUKU_H_INCLUDED
#define BUKU_H_INCLUDED

#include "tanggal.h"


struct buku {
    //=================================================
    // YOUR CODE STARTS HERE
    string judul;
    string pengarang;
    tanggal terakhir_dipinjam;
    bool status_dipinjam;

    // YOUR CODE ENDS HERE
    //=================================================
};

buku create_buku(string judul, string pengarang);
void pinjam_buku(buku &b, int tgl, int bln, int thn);
int kembalikan_buku(buku &b, int tgl, int bln, int thn);
void tampil_buku(buku b);


#endif // BUKU_H_INCLUDED
