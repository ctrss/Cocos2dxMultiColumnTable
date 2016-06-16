//
//  SyCCLayer.hpp
//  Cocos2dxMultiColumnTable
//
//  Created by Stuart on 2016. 4. 19..
//
//

#ifndef _SY_CC_SCENE_H_
#define _SY_CC_SCENE_H_

#include "cocos2d.h"

class SyCCScene: cocos2d::LayerColor {
    
public:
    static cocos2d::Scene* createScene(cocos2d::Color4B bgColor = cocos2d::Color4B::BLACK);
    
    virtual bool init() override;
    
    // implement the "static create()" method manually
    CREATE_FUNC(SyCCScene);
    
private:
    cocos2d::Point originPos;
    cocos2d::Size viewSize;
};

#endif /* _SY_CC_SCENE_H_ */
