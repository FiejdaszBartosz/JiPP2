//
// Created by Bartosz Fiejdasz on 30/11/2021.
//

#ifndef ZAD2_NOTE_H
#define ZAD2_NOTE_H

#include "iostream"

using namespace std;


class Note {
public:
    string title;

    string getTitle();

    void setTitle(string in_title);

    virtual string getContent() = 0;

    virtual void setContent(string in_content) = 0;

};


#endif //ZAD2_NOTE_H
