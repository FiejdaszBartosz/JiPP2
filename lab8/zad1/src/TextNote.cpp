//
// Created by Bartosz Fiejdasz on 30/11/2021.
//

#include "../include/TextNote.h"

string TextNote::getContent()
{
    return this->content;
}

void TextNote::setContent(string in_content)
{
    this->content = in_content;
}

