//
//  GameScene.cpp
//  FirstBlood
//
//  Created by 陶正凯 on 15/4/7.
//
//

#include "GameScene.h"
#include "../layers/GameLayer.h"
#include "../utils/ResourceConst.h"


GameScene::GameScene() {
    SpriteFrameCache *pFrameCache = SpriteFrameCache::getInstance();
    TextureCache *pTextCache = Director::getInstance()->getTextureCache();
    pFrameCache->addSpriteFramesWithFile(plist_shousi);
    pTextCache->addImage(png_shousi);
}

GameScene::~GameScene() {
    SpriteFrameCache *pFrameCache = SpriteFrameCache::getInstance();
    TextureCache *pTextCache = Director::getInstance()->getTextureCache();
    pTextCache->removeTextureForKey(png_shousi);
    pFrameCache->removeSpriteFrameByName(plist_shousi);
}

bool GameScene::init() {
    if (!Scene::init()) {
        return false;
    }
    GameLayer *layer = GameLayer::create();
    this->addChild(layer);
    
    return true;
}