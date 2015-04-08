//
//  GameScene.h
//  FirstBlood
//
//  Created by 陶正凯 on 15/4/7.
//
//

#ifndef __FirstBlood__GameScene__
#define __FirstBlood__GameScene__


#include "cocos2d.h"
using namespace cocos2d;

class GameScene : public Scene {
public:
    GameScene();
    ~GameScene();
    virtual bool init();
    CREATE_FUNC(GameScene);
};


#endif /* defined(__FirstBlood__GameScene__) */
