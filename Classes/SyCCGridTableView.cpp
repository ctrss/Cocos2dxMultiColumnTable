//
//  SyGridTableView.cpp
//  Cocos2dxMultiColumnTable
//
//  Created by Stuart on 2016. 4. 19..
//
//

#include "SyCCGridTableView.h"
#include "SyCCTableData.h"

USING_NS_CC;
USING_NS_CC_EXT;

SyCCGridTableView::SyCCGridTableView()
{
    TableView::TableView();
    //this->setColor(Color3B::GREEN);
}

SyCCGridTableView* SyCCGridTableView::create(TableViewDataSource* dataSource, Size size)
{
    SyCCGridTableView *table = new (std::nothrow) SyCCGridTableView();
    table->initWithViewSize(size, nullptr);
    table->autorelease();
    table->setDataSource(dataSource);
    table->_updateCellPositions();
    table->_updateContentSize();
    
    return table;
}