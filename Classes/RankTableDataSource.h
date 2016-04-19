//
//  RankTableDaaSource.hpp
//  Cocos2dxMultiColumnTable
//
//  Created by Stuart on 2016. 4. 19..
//
//

#ifndef __SampleTableView__RankTableDataSource__
#define __SampleTableView__RankTableDataSource__

#include "cocos2d.h"
#include "cocos-ext.h"

#include "RankTableCell.h"

USING_NS_CC;
USING_NS_CC_EXT;

class RankTableDataSource : public TableViewDataSource {
public:
    RankTableDataSource();
    ~RankTableDataSource();
    
    virtual ssize_t numberOfCellsInTableView(TableView *table) override;
    virtual Size cellSizeForTable(TableView *table) override;
    virtual TableViewCell* tableCellAtIndex(TableView *table, ssize_t idx);
    std::vector<std::string> _sharedData;
};

#endif /* defined(__SampleTableView__RankTableDataSource__) */