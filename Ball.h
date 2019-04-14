#ifndef BALL_H_INCLUDED
#define BALL_H_INCLUDED
#include "CommonFunction.h"
#include "BaseObject.h"

struct Ball: public BaseObject
{
public:
    Ball();
    ~Ball();
    void Show(SDL_Renderer* des);

private:
    float x_pos_;
    float y_pos_;

};



#endif // BALL_H_INCLUDED
