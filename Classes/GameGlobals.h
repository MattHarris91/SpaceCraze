#ifndef __GAME_GLOBALS_H__
#define __GAME_GLOBALS_H__

#include "cocos2d.h"
#include "SimpleAudioEngine.h"

// Equivalent of using namespace cocos2d
USING_NS_CC;
using namespace std;

#define SCREEN_SIZE GameGlobals::screen_size_
// useful macro to fetch the SAE singleton object
#define SOUND_ENGINE CocosDenshion::SimpleAudioEngine::getInstance()
#define MAX_STARS 15
#define BULLET_MOVE_DURATION 1.5f
#define MAX_BULLETS 25
#define MAX_LEVELS 5

// enum used for proper z-ordering
enum E_ZORDER
{
    E_LAYER_BACKGROUND = 0,
    E_LAYER_FOREGROUND = 2,
    E_LAYER_ENEMIES_BRICKS = 4,
    E_LAYER_BULLETS = 6,
    E_LAYER_PLAYER = 8,
    E_LAYER_HUD = 10,
    E_LAYER_POPUP = 12
};

class GameGlobals
{
public:
    // Still needed in v3?
    GameGlobals(void){};
    ~GameGlobals(void){};
    
    // virtual bool init in v3?
    static void init();
    
    static void LoadData();
    static Size screen_size_;
    // Helper methods
    static vector<float> GetFloatListFromString(string input);
    static Point GetPointFromString(string input);
};

#endif // __GAME_GLOBALS_H__
