#include <cstdlib>
#include <ctime>
#include "MainMenu.cpp"

int main() {
    srand(time(0));   // seed random for payment failure simulation
    MainMenu menu;
    menu.run();
    return 0;
}