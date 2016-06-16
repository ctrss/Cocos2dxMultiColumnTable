//
//  TableItems.cpp
//  Cocos2dxMultiColumnTable
//
//  Created by Stuart on 2016. 4. 19..
//
//

#include "SyCCTableItem.h"

USING_NS_CC;
USING_NS_CC_EXT;

bool SyCCTableItem::init()
{
    if (!TableViewCell::init())
    {
        return false;
    }
    this->setContentSize(Size(100, 100));
    m_title = Label::createWithSystemFont("", "", 20);
    m_title->setTextColor(Color4B::BLACK);
    m_title->setPosition(Point::ZERO);
    m_title->setAnchorPoint(Point(0, 0));
    this->addChild(m_title);
    
    log("ITEM INIT");
    
    return true;
}

void SyCCTableItem::SetLayout(void* data)
{
    std::string* str = (std::string*)data;
    m_title->setString(*str);
}

Size SyCCTableItem::GetSize(TableView* table)
{
    return Size(100, 100);
}