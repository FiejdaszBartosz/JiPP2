//
// Created by Bartek on 07.12.2021.
//

#include <iostream>
#include <vector>
#include "Stop.h"
#include "Line.h"

using namespace std;

int main() {
  vector<Stop> stops;
  stops.reserve(10);
  stops.emplace_back(1, "Politechnika", 50.1, 50.2);
  stops.emplace_back(2, "Nowy Kleparz", 50.2, 50.2);
  stops.emplace_back(3, "Plac Inwalidow", 50.2, 50.2);
  stops.emplace_back(4, "Urzednicza", 50.2, 50.2);
  stops.emplace_back(5, "Biprostal", 50.2, 50.2);
  stops.emplace_back(6, "Uniwersytet Pedagogiczny", 50.2, 50.2);

  Line l1("P", "Podchorazych");

  l1.addStop(&stops[0]);
  l1.addStop(&stops[1]);
  l1.addStop(&stops[2]);
  l1.addStop(&stops[3]);
  l1.addStop(&stops[4]);
  l1.addStop(&stops[5]);

  cout << "---------------------------------------" << endl;
  stops.emplace_back(7, "Bratyslawska", 50.2, 50.2);
  stops.emplace_back(8, "Teatr Bagatela", 50.2, 50.2);
  stops.emplace_back(9, "Stary Kleparz", 50.2, 50.2);
  stops.emplace_back(10, "Teatr Slowackiego", 50.2, 50.2);
  stops.emplace_back(11, "Teatr Slowackiego1", 50.2, 50.2);
  stops.emplace_back(12, "Teatr Slowackiego2", 50.2, 50.2);
  stops.emplace_back(13, "Teatr Slowackiego3", 50.2, 50.2);

  vector<Stop>::iterator b;
  b = stops.begin();
  l1.refractor(b);

  l1.print();

  cout << "---------------------------------------" << endl;

  l1.print();

  return 0;
}