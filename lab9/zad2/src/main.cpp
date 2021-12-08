//
// Created by Bartek on 07.12.2021.
//
#include "../include/Playlist.h"

int main() {
  Playlist newPlaylist("Nowa playlista");
  newPlaylist.addSong("Forma", "Kizo", 2.14);
  newPlaylist.addSong("Dobrze", "Kizo", 2.12);
  newPlaylist.addSong("3telefony", "Malik", 2.13);
  newPlaylist.addSong("Blok", "Mata", 3.45);

  newPlaylist.printPlaylist();

  cout << "--------------------------" << endl;

  //newPlaylist.removeSong("Forma");
  newPlaylist.play();
  newPlaylist.printPlaylist();
  cout << "--------------------------" << endl;
  newPlaylist.next();
  newPlaylist.printPlaylist();

  cout << "--------------------------" << endl;
  newPlaylist.previous();
  newPlaylist.printPlaylist();

  cout << "--------------------------" << endl;
  newPlaylist.loopSong();
  newPlaylist.printPlaylist();

  cout << "--------------------------" << endl;
  newPlaylist.loopSong();
  newPlaylist.printPlaylist();

  cout << "--------------------------" << endl;
  newPlaylist.next(); // next nie powoduje zmiany bo utwor jest w loopie
  newPlaylist.printPlaylist();
}