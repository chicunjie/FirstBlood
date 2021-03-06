//
//  GameLayer.cpp
//  FirstBlood
//
//  Created by 陶正凯 on 15/4/7.
//
//

#include "GameLayer.h"
#include "../node/ShouSi.h"
#include "../utils/Const.h"
#include "../utils/ResourceConst.h"


GameLayer::GameLayer()
{
}

GameLayer::~GameLayer()
{
}

bool GameLayer::init() {
    if (!Layer::init()) {
        return false;
    }
    Size winSize = Director::getInstance()->getWinSize();
    Sprite *backGround = Sprite::create(png_background);
    backGround->setPosition(Point(winSize.width/2, winSize.height/2));
    this->addChild(backGround);
    
    randomLayout();
    
    return true;
}

void GameLayer::randomLayout() {
    for (int i=0; i< GAME_ROW; i++) {
        for (int j=0; j< GAME_LINE; j++) {
            int index = (int)(100 * CCRANDOM_0_1()) % INDEX_NUMS;
            ShouSi *node = ShouSi::create();
            node->initWithIndex(index);
            node->setPosition(Point(POSTION_SHOUSI[i][j][0], POSTION_SHOUSI[i][j][1]));
            this->addChild(node);
        }
    }
}