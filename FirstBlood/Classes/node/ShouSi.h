//
//  ShouSi.h
//  FirstBlood
//
//  Created by 陶正凯 on 15/4/8.
//
//

#ifndef __FirstBlood__ShouSi__
#define __FirstBlood__ShouSi__

#include "cocos2d.h"
using namespace cocos2d;

class ShouSi : public Node {
public:
    ShouSi();
    ~ShouSi();
    virtual bool init();
    CREATE_FUNC(ShouSi);
    void initWithIndex(int index);
    int getIndex();
    
private:
    int index;
};


#endif /* defined(__FirstBlood__ShouSi__) */
