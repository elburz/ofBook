//
//  Bullet.h
//  OfBookOsc
//
//  Created by Phoenix Perry on 3/3/14.
//
//

#ifndef __OfBookOsc__Bullet__
#define __OfBookOsc__Bullet__
#include <iostream>
#include "ofMain.h"

class Bullet {
public:
    ofPoint pos;
    
    float speed;
    
    float width;
    
    bool from_player;
    
    void setup(bool f_p, ofPoint p, float s, ofImage * bullet_image);
    void update();
    void draw();
    
    ofImage * img;
};
#endif /* defined(__OfBookOsc__Bullet__) */
