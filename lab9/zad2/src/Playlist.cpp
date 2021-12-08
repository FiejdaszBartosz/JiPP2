//
// Created by Bartek on 07.12.2021.
//

#include "../include/Playlist.h"

Playlist::Playlist(string name) : mPlaylistName(name) {}

void Playlist::addSong(string songTitle, string songArtist,
					   double songLength) {
  songAttributes temp;
  temp.title = songTitle;
  temp.artist = songArtist;
  temp.length = songLength;

  mPlaylist.push_back(temp);
}

void Playlist::removeSong(string songTitle) {
  auto i = mPlaylist.begin();

  for (i; i != mPlaylist.end(); i++) {
	if (i->title == songTitle) {
	  i = mPlaylist.erase(i);
	} else {
	  ++i;
	}
  }
}

void Playlist::printPlaylist() {
  vector<songAttributes>::iterator i;
  for (i = mPlaylist.begin(); i != mPlaylist.end(); ++i) {
	if (!i->play)
	  cout << i->title << " " << i->artist << " " << i->length << endl;
	else if (i->play && i->loop)
	  cout << "ODTWARZANE W PETLI -> " << i->title << " " << i->artist << " " <<
		   i->length << endl;
	else
	  cout << "TERAZ GRANE -> " << i->title << " " << i->artist << " " <<
		   i->length << endl;
  }
}

void Playlist::play() {
  mPlaylist.begin()->play = true;
}

void Playlist::next() {
  vector<songAttributes>::iterator i;
  for (i = mPlaylist.begin(); i != mPlaylist.end(); ++i) {
	if (i->play && !i->loop){
	  i->play = false;
	  i++;
	  i->play = true;
	}
  }
}

void Playlist::previous() {
  vector<songAttributes>::iterator i;
  for (i = mPlaylist.begin(); i != mPlaylist.end(); ++i) {
	if (i->play && !i->loop){
	  i->play = false;
	  i--;
	  i->play = true;
	}
  }
}

void Playlist::loopSong() {
  vector<songAttributes>::iterator i;
  for (i = mPlaylist.begin(); i != mPlaylist.end(); ++i) {
	if (i->play){
	  i->loop = true;
	}
  }
}