//
//  RankTableDaaSource.cpp
//  Cocos2dxMultiColumnTable
//
//  Created by Stuart on 2016. 4. 19..
//
//

#include "RankTableDataSource.h"

RankTableDataSource::RankTableDataSource() {
    _sharedData.clear();
}

RankTableDataSource::~RankTableDataSource() {
}

ssize_t RankTableDataSource::numberOfCellsInTableView(TableView *table) {
    return _sharedData.size();
}
Size RankTableDataSource::cellSizeForTable(TableView *table) {
    return Size(130, 30);
}

TableViewCell* RankTableDataSource::tableCellAtIndex(TableView *table, ssize_t idx) {
    
    RankTableCell *cell = (RankTableCell*)table->dequeueCell();
    
    std::vector<std::string> rankList = _sharedData;
    
    if (cell == NULL) {
        cell = new RankTableCell;
        cell->setContentSize(Size(130, 30));
    }
    
    cell->getNickNameLabel()->setString(rankList[idx].c_str());
    cell->getPlayCountLabel()->setString(rankList[idx].c_str());
    cell->getTotalScoreLabel()->setString(rankList[idx].c_str());
    
    return cell;
    
}