#include "HelloWorldScene.h"
#include "RankTableDataSource.h"
#include "SyCCGridTableView.h"
#include "SyCCTableData.h"

USING_NS_CC;
USING_NS_CC_EXT;

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !LayerColor::initWithColor(Color4B(255, 255, 255, 255)) )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    origin = Director::getInstance()->getVisibleOrigin();
    
    ShowRankTable();
    
    return true;
}

void HelloWorld::ShowRankTable()
{
    RankTableDataSource* tvDataSource = new RankTableDataSource();
    TableView *rankTableView = TableView::create(tvDataSource, Size(130, 30));
    float posX, posY;
    
    Size winSize = Director::sharedDirector()->getWinSize();
    Size tvSize = rankTableView->getContentSize();
    
    posX = winSize.width/2 - 130/2;
    posY = winSize.height/2;
    
    rankTableView->setPosition( Point(origin.x + posX, origin.y + posY) );
    
    this->addChild(rankTableView, 0);
    
    std::vector<std::string> rankList = tvDataSource->_sharedData;
}
