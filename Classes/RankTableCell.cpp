//
//  RankTableCell.cpp
//  Cocos2dxMultiColumnTable
//
//  Created by Stuart on 2016. 4. 19..
//
//

#include "RankTableCell.h"

RankTableCell::RankTableCell():_lbNickName(NULL), _lbPlayCount(NULL), _lbTotalScore(NULL) {
    
    const float gapLeft = 10.0f;
    const float gapRight = 10.0f;
    
    const float fontSize = 16.0f;
    
    const float widthPlayCount  = 40.0f;
    const float widthTotalScore = 80.0f;
    const float widthNickName   = 300 - (widthPlayCount + widthTotalScore) - (gapLeft + gapRight);
    
    const float posNickName = gapLeft;
    const float posPlayCount = posNickName + widthNickName;
    const float posTotalScore = posPlayCount + widthPlayCount;
    
    // Background
    
    // Label : NickName
    
    _lbNickName = Label::createWithSystemFont("nick", "", 30);
    _lbNickName->setColor( Color3B(192, 64, 64) );
    _lbNickName->setPosition( Point(posNickName + widthNickName/2, 20/2) );
    this->addChild(_lbNickName);
    
    // Label : PlayCount
    
    _lbPlayCount = Label::createWithSystemFont("nick", "", 30);
    _lbPlayCount->setColor( Color3B(64, 64, 192) );
    _lbPlayCount->setPosition( Point(posPlayCount + widthPlayCount/2, 20/2) );
    this->addChild(_lbPlayCount);
    
    // Label : TotalScore
    
    _lbTotalScore = Label::createWithSystemFont("nick", "", 30);
    _lbTotalScore->setColor( Color3B(64, 128, 128) );
    _lbTotalScore->setPosition( Point(posTotalScore + widthTotalScore/2, 20/2) );
    this->addChild(_lbTotalScore);
}

RankTableCell::~RankTableCell() {}