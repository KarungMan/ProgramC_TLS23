//Program Untuk Mengetahui Indeks Massa Tubuh (BMI)

#include <iostream>

using namespace std;

int main (){
    int beratBadan;
    double tinggiBadan;
    double BMI = 0.0;

    //Input Berat Badan dan Tinggi Badan
    cout << "Masukkan berat badan anda (kg):" << endl;
    cin >> beratBadan;
    cout << "Masukkan tinggi badan anda (cm):" << endl;
    cin >> tinggiBadan;

    //Menghitung BMI
    BMI = (beratBadan/(tinggiBadan*tinggiBadan));

    //Mengkategorikan Indeks Massa Tubuh Berdasarkan Hasil Perhitungan BMI
    if (BMI < 17.0) {
        cout << "Anda kurus dan kekurangan berat badan. Anda seharusnya makan lebih banyak." << endl;
    }

    else if (BMI > 17.0 && BMI <= 18.4) {
        cout << "Anda kurus dan ringan. Anda disarankan untuk makan lebih banyak." << endl;
    }

    else if (BMI >= 18.5 && BMI <= 25.0){
        cout << "Berat badan anda normal. Pertahankan." << endl;
    }

    else if (BMI >= 25.1 && BMI <= 27.0){
        cout << "Anda gemuk dan kelebihan berat badan tingkat ringan. Anda disarankan untuk mengurangi makan." << endl;
    }

    else {
        cout << "Anda gemuk dan kelebihan berat badan tingkat berat. Anda diharuskan diet dan rutin berolahraga." << endl;
    }
}