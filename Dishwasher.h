#ifndef __DISHWASHER_H__
#define __DISHWASHER_H__
#include <string>
#include <array>
#include <cmath>
#include "Position.h"
#include "CSprite.h"
#include "Player.h"
#include "Appliance.h"
#include "Bowl.h"

#include <SFML/Graphics.hpp>

using namespace std;
//////////////////////////////////////////////////////////////////////////////////////////////////////
// FOR THE DISHWASHER
//
// [Dishwasher]
//      - Variables:
//          int state; (inherit from Container.h)
//          time_t time; (inherit from Container.h)
//          bool isOn;
//      - Functions:

class Dishwasher: public Appliance {
    public:
        Dishwasher(); //Initialise with an array of 3 empty spots to hold the bowls
        
        int get_state();
        void set_state(int n);


        bool get_power_state();
        void set_power_state(bool n);

        void update(unsigned char i_level, std::array<std::array<ObjectType, MAP_HEIGHT>, MAP_WIDTH>& i_map, 
                    Dishwasher& i_dishwasher, Bowl& i_bowl_1, Player& i_player); //fix this and this can be made into virtual function);
                    // Seht work on the display for Player options

        //reimplement virtual function from Appliance
        void reset();
        bool player_collide(const Position&  i_player_position); //Ansh and Seth work on this

        //learn to use this
        void draw(bool i_flash,sf::RenderWindow& i_window); //nsh and Seth work on this


    private:
        bool is_it_on;
        

        //friend class Player

        //In SFML there will be colour
        //Add in later

};

#endif