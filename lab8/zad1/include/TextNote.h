//
// Created by Bartosz Fiejdasz on 30/11/2021.
//

#ifndef ZAD2_TEXTNOTE_H
#define ZAD2_TEXTNOTE_H

#include "../include/Note.h"

class TextNote : public Note{
public:
    string content;

    string getContent();

    void setContent(string in_content);
};


#endif //ZAD2_TEXTNOTE_H
