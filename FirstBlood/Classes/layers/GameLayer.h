//
//  GameLayer.h
//  FirstBlood
//
//  Created by 陶正凯 on 15/4/7.
//
//

#ifndef __FirstBlood__GameLayer__
#define __FirstBlood__GameLayer__

#include "cocos2d.h"
using namespace cocos2d;

class GameLayer : public Layer {
public:
    GameLayer();
    ~GameLayer();
    virtual bool init();
    CREATE_FUNC(GameLayer);
    void randomLayout();
};


#endif /* defined(__FirstBlood__GameLayer__) */
