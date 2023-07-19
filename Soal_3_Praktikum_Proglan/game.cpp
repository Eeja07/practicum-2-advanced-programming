#include <iostream>
#include <cstdlib>
#include <ctime>
#include "include/game.hpp"

using namespace std;

void Game::core() {
    srand(time(0));
    secretNumber = rand() % 10 + 1;
}

void Game::rule(){
    int input, i;
    while (input<=1||input>=1000)
    {
        cin >> input;
        if (input<=1||input>=1000) {}
        else
        {
            break;
        }
    }
    for (int i = 0; i < input; i++)
    {
        cout << "Kunci ke- " << i + 1 << endl;
        play();
    }
}
void Game::play(){
    int guess;

    while (guess!=secretNumber)
    {
        cin >> guess;
        if (guess < secretNumber)
        {
            cout << "Angka terlalu kecil, ulangi!" << endl;
        } 
        else if (guess > secretNumber)
        {
            cout << "Angka terlalu besar, ulangi!" << endl;
        } else
        {
            cout << "Selamat, anda menebak angka dengan benar!" << endl;
            break;
        }
    }
}


// 3
// Kunci ke-1:
// (Input angka yang akan ditebak) 
// // Jika benar :
// Selamat, anda menebak angka dengan benar!
// // Jika salah dan terlalu besar :
// Angka terlalu besar, ulangi!
// // Jika salah dan terlalu kecil :
// Angka terlalu kecil, ulangi!
// Kunci ke-2:
// dst.