//
//  ShouSi.cpp
//  FirstBlood
//
//  Created by 陶正凯 on 15/4/8.
//
//

#include "ShouSi.h"
#include "../utils/Const.h"


ShouSi::ShouSi(): index(-1)
{
}

ShouSi::~ShouSi()
{
}

bool ShouSi::init() {
    if (!Node::init()) {
        return false;
    }
    
    return true;
}

void ShouSi::initWithIndex(int index) {
    this->index = index;
    Sprite *node = Sprite::create(NAME_SHOUSI[index]);
    this->addChild(node);
}

int ShouSi::getIndex() {
    return index;
}