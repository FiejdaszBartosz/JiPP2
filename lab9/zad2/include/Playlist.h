//
// Created by Bartek on 07.12.2021.
//

#ifndef ZAD1_PLAYLIST_H
#define ZAD1_PLAYLIST_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct songAttributes {
  string title;
  string artist;
  double length;
  bool play = false;
  bool loop = false;
};

class Playlist {
 public:
  Playlist(string name);
  void addSong(string songTitle, string songArtist,
			   double songLength);
  void removeSong(string songTitle);
  void printPlaylist();
  void play();
  void next();
  void previous();
  void loopSong();
 private:
  string mPlaylistName;
  vector<songAttributes> mPlaylist;

};

#endif //ZAD1_PLAYLIST_H
