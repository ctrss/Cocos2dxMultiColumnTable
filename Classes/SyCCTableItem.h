//
//  TableItems.hpp
//  Cocos2dxMultiColumnTable
//
//  Created by Stuart on 2016. 4. 19..
//
//

#ifndef _SY_CC_TABLE_ITEM_H_
#define _SY_CC_TABLE_ITEM_H_

#include "cocos-ext.h"

class SyCCTableItem: public cocos2d::extension::TableViewCell {
private:
    cocos2d::Label* m_title{nullptr};
    std::vector<cocos2d::LayerColor*> m_cols{};
public:
    CREATE_FUNC(SyCCTableItem);
    virtual bool init() override;
    
    virtual void SetLayout(void* data);
    
    static cocos2d::Size GetSize(cocos2d::extension::TableView* table);
};

#endif /* _SY_CC_TABLE_ITEM_H_ */
