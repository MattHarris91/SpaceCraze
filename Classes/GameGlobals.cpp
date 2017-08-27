#include "GameGlobals.h"

Size GameGlobals::screen_size_ = Size::ZERO;

void GameGlobals::init()
{
    screen_size_ = Director::getInstance()->getWinSize();
    LoadData();
}

void GameGlobals::LoadData()
{
    SpriteFrameCache::getInstance()->addSpriteFramesWithFile("spacetex.plist");
    
    SOUND_ENGINE->preloadEffect("blast_brick.wav");
    SOUND_ENGINE->preloadEffect("blast_brick.wav");
    SOUND_ENGINE->preloadEffect("blast_enemy.wav");
    SOUND_ENGINE->preloadEffect("blast_player.wav");
    SOUND_ENGINE->preloadEffect("game_over.wav");
    SOUND_ENGINE->preloadEffect("level_complete.wav");
    SOUND_ENGINE->preloadEffect("shoot_enemy.wav");
    SOUND_ENGINE->preloadEffect("shoot_player.wav");
}

vector<float> GameGlobals::GetFloatListFromString(string input)
{
    vector<float> result;
    result.clear();
    
    if (input == "")
    {
        return result;
    }
    
    stringstream ss(input);
    float i;
    
    while (ss >> i)
    {
        result.push_back(i);
        if (ss.peek() == ',')
        {
            ss.ignore();
        }
    }
    
    return result;
}

Point GameGlobals::GetPointFromString(string input)
{
    Point point = Point::ZERO;
    if (input == "")
    {
        return point;
    }
    
    vector<float> list = GetFloatListFromString(input);
    point.x = list[0];
    point.y = list[1];
    
    return point;
}
