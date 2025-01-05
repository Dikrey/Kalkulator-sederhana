#include <iostream>
#include <iomanip>
#include <cstdlib> // untuk fungsi system("CLS")
using namespace std;

void showMenu() {
    cout << "=============================\n";
    cout << "|         KALKULATOR        | \n";
    cout << "|         SEDERHANA         |\n";
    cout << "=============================\n";
    cout << "Pilih operasi:\n";
    cout << "  1. Penjumlahan (+)\n";
    cout << "  2. Pengurangan (-)\n";
    cout << "  3. Perkalian (*)\n";
    cout << "  4. Pembagian (/)\n";
    cout << "  5. Keluar\n";
    cout << "Masukkan pilihan (1/2/3/4/5): ";
}

int main() {
    float num1, num2, result;
    int choice;

    do {
        system("CLS"); // Clear screen
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan dua bilangan:\n";
                cin >> num1 >> num2;
                result = num1 + num2;
                cout << fixed << setprecision(2);
                cout << "Hasil penjumlahan: " << num1 << " + " << num2 << " = " << result << endl;
                break;
            case 2:
                cout << "Masukkan dua bilangan:\n";
                cin >> num1 >> num2;
                result = num1 - num2;
                cout << fixed << setprecision(2);
                cout << "Hasil pengurangan: " << num1 << " - " << num2 << " = " << result << endl;
                break;
            case 3:
                cout << "Masukkan dua bilangan:\n";
                cin >> num1 >> num2;
                result = num1 * num2;
                cout << fixed << setprecision(2);
                cout << "Hasil perkalian: " << num1 << " * " << num2 << " = " << result << endl;
                break;
            case 4:
                cout << "Masukkan dua bilangan:\n";
                cin >> num1 >> num2;
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << fixed << setprecision(2);
                    cout << "Hasil pembagian: " << num1 << " / " << num2 << " = " << result << endl;
                } else {
                    cout << "Error: Pembagian dengan nol tidak diperbolehkan!" << endl;
                }
                break;
            case 5:
                cout << "Terima kasih telah menggunakan kalkulator ini.\n";
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }

        if (choice != 5) {
            cout << "\nTekan Enter untuk kembali ke menu...\n";
            cin.ignore();
            cin.get(); // Wait for Enter to proceed
        }
    } while (choice != 5);

    cout << "=============================\n";
    return 0;
}

