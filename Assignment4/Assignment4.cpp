#include <iostream>
#include "Entities.h"
#include "Warriors.h"
#include "Derick.h"
#include "Chichonne.h"
#include "Grid.h"
using std::cin;
using std::cout;
int main()
{
    //Derick* derick = new Derick();
    int edge;
    while (true) {
        cout << "Edge:";
        cin >> edge;
        Grid::printEmptyGrid(edge);
    }
    //std::cout << "Hello World!\n";
}
