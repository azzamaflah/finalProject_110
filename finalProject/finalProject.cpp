#include <iostream>
using namespace std;

class Matakuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;

public:
	Matakuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}

	virtual float hitungNilaiAkhir() { return 0; } // untuk menghitung
	virtual void cekKelulusan() { return ;} // untuk menerima dan mengirim input
	virtual void input() {return ;}

	void setPresensi(float nilai) {
		this->presensi = nilai;
	}

	float getPresensi() {
		return presensi;
	}

};

class Pemrograman : public Matakuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;

public:
	float hitungNilaiAkhir() {
		
	}

	void cekKelulusan() {
		float nilaiAkhir = hitungNilaiAkhir();
		if (nilaiAkhir > 75) {
			cout << "Selamat, Anda lulus!" << endl;
		}
		else {
			cout << "Maaf, Anda tidak lulus." << endl;
		}
	}

	void input() {
		float p, a, e, ua;
		cout << "Masukkan nilai presensi (0-100): ";
		cin >> p;
		setPresensi(p);

		cout << "Masukan nilai activity (0-100): ";
		cin >> a;
		this -> activity = a;

		cout << "Masukan nilai exercise (0-100): ";
		cin >> e;
		this->exercise = e;

		cout << "Masukkan nilai ujian akhir (0-100): ";
		cin >> ua;
		this->tugasAkhir = ua;

	}

};

int main() {
	Pemrograman pemrograman;
	pemrograman.input();
	pemrograman.cekKelulusan();
	return 0;
}