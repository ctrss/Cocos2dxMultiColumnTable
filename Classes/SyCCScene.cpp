//
//  SyCCLayer.cpp
//  Cocos2dxMultiColumnTable
//
//  Created by Stuart on 2016. 4. 19..
//
//

#include "SyCCScene.h"
#include "SyCCGridTableView.h"
#include "SyCCTableData.h"
#include "SyCCTableItem.h"

USING_NS_CC;
USING_NS_CC_EXT;

Scene* SyCCScene::createScene(Color4B bgColor)
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = SyCCScene::create();
    layer->setColor(Color3B(bgColor));
    layer->setOpacity(bgColor.a);
    
    // add layer as a child to scene
    scene->addChild(layer, 0);
    
    // return the scene
    return scene;
}

bool SyCCScene::init()
{
    log("INIT SCENE");
    if (!LayerColor::init())
    {
        return false;
    }
    
    viewSize = Director::getInstance()->getVisibleSize();
    originPos = Director::getInstance()->getVisibleOrigin();
    
    SyCCTableData<std::string>* tData = new SyCCTableData<std::string>();
    tData->addItemData("Third");
    tData->addItemData("second");
    tData->addItemData("first");
    SyCCGridTableView* table = SyCCGridTableView::create(tData, viewSize);
    table->setPosition(originPos);
    table->setAnchorPoint(Point::ZERO);
    this->addChild(table, 2);
    
    return true;
}