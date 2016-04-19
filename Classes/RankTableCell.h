//
//  RankTableCell.hpp
//  Cocos2dxMultiColumnTable
//
//  Created by Stuart on 2016. 4. 19..
//
//

#ifndef _RANK_TABLE_CELL_H_
#define _RANK_TABLE_CELL_H_

#include "cocos2d.h"
#include "cocos-ext.h"

//#include "RootMacros.h"

USING_NS_CC;
USING_NS_CC_EXT;

class RankTableCell : public TableViewCell {
public:
    RankTableCell();
    ~RankTableCell();
    
    CC_SYNTHESIZE(cocos2d::Label*, _lbNickName, NickNameLabel);
    CC_SYNTHESIZE(cocos2d::Label*, _lbPlayCount, PlayCountLabel);
    CC_SYNTHESIZE(cocos2d::Label*, _lbTotalScore, TotalScoreLabel);
};


#endif // _RANK_TABLE_CELL_H_