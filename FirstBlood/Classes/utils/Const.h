//
//  Const.h
//  FirstBlood
//
//  Created by 陶正凯 on 15/4/7.
//
//

#ifndef FirstBlood_Const_h
#define FirstBlood_Const_h


// 游戏布局(6*5小方格)
static const int GAME_ROW = 6;
static const int GAME_LINE = 5;

// 寿司种类索引
static const int INDEX_NUMS = 18;

// 寿司名称
static const char *NAME_SHOUSI[] = {
    "sushi_1h.png", "sushi_1n.png", "sushi_1v.png",
    "sushi_2h.png", "sushi_2n.png", "sushi_2v.png",
    "sushi_3h.png", "sushi_3n.png", "sushi_3v.png",
    "sushi_4h.png", "sushi_4n.png", "sushi_4v.png",
    "sushi_5h.png", "sushi_5n.png", "sushi_5v.png",
    "sushi_6h.png", "sushi_6n.png", "sushi_6v.png"
};

// 寿司尺寸
static const int WIDTH_SHOUSI = 90;
static const int HEIGHT_SHOUSI = 90;

// 寿司坐标
static const int POSTION_SHOUSI[6][5][2] = {
    {{82,58},  {93,180},{108,295},{112,405},{118,517}},
    {{129,622},{192,59},{211,402},{214,175},{215,508}},
    {{220,290},{232,626},{300,56},{317,176},{319,394}},
    {{326,513},{327,289},{340,621},{418,57},{431,174}},
    {{432,395},{438,510},{439,284},{445,621},{539,54}},
    {{545,168},{546,289},{553,398},{557,621},{559,511}}
};
#endif
