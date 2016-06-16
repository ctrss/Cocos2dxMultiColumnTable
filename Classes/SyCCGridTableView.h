//
//  SyGridTableView.hpp
//  Cocos2dxMultiColumnTable
//
//  Created by Stuart on 2016. 4. 19..
//
//

#ifndef _SY_CC_GRID_TABLE_VIEW_H_
#define _SY_CC_GRID_TABLE_VIEW_H_

#include "cocos2d.h"
#include "cocos-ext.h"

template<typename T>
class SyCCTableData;

class SyCCGridTableView: public cocos2d::extension::TableView {
    
public:
    SyCCGridTableView();
    
    static SyCCGridTableView* create(cocos2d::extension::TableViewDataSource* dataSource, cocos2d::Size size);
};

#endif /* _SY_CC_GRID_TABLE_VIEW_H_ */
