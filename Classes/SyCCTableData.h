//
//  SyCCTableData.hpp
//  Cocos2dxMultiColumnTable
//
//  Created by Stuart on 2016. 4. 19..
//
//

#ifndef _SY_CC_TABLE_DATA_H_
#define _SY_CC_TABLE_DATA_H_

#include "cocos-ext.h"
#include "SyCCTableItem.h"

template<class T>
class SyCCTableData: public cocos2d::extension::TableViewDataSource {
    
private:
    std::vector<T> m_itemList{};
    
public:
    virtual ssize_t numberOfCellsInTableView(cocos2d::extension::TableView *table) override
    {
        return m_itemList.size();
    }
    virtual cocos2d::Size cellSizeForTable(cocos2d::extension::TableView *table) override
    {
        if (m_itemList.empty()) return cocos2d::Size::ZERO;
        else
        {
            return SyCCTableItem::GetSize(table);
        }
    }
    virtual cocos2d::extension::TableViewCell* tableCellAtIndex(cocos2d::extension::TableView *table, ssize_t idx) override
    {
        SyCCTableItem* cell = (SyCCTableItem*)table->dequeueCell();
        if (cell == nullptr)
        {
            cell = SyCCTableItem::create();
        }
        cell->SetLayout(&m_itemList[idx]);
        return cell;
    }
    
    void addItemData(T data)
    {
        m_itemList.push_back(data);
    }
    static SyCCTableData* create() { return new SyCCTableData(); }
};

#endif /* _SY_CC_TABLE_DATA_H_ */
