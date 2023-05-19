#ifndef __BIN_H__
#define __BIN_H__
#include <string>
#include <array>
#include <cmath>
#include "Position.h"
#include "CSprite.h"
#include "Player.h"
#include "Bowl.h"

#include <SFML/Graphics.hpp>

using namespace std;

class Bin: public CSprite  {
    public:
        Bin();

        int get_state();
        void set_state(int n);

	    void update(unsigned char i_level, std::array<std::array<ObjectType, MAP_HEIGHT>, MAP_WIDTH>& i_map, 
                    Bowl& i_bowl_1, Player& i_player); //fix this and this can be made into virtual function);

        //reimplement virtual function from Appliance
        void reset();
        bool player_collide (const Position&  i_player_position);

        //learn to use this
        void draw(bool i_flash,sf::RenderWindow& i_window); //fix flash and learn render in sfml

};

#endif
