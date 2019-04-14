#include "Ball.h"

Ball::Ball()
{
    x_pos_= SCREEN_WIDTH/2;
    y_pos_= SCREEN_HEIGHT/2;
}

Ball::~Ball()
{
    ;
}

void Ball::Show(SDL_Renderer* des)
{
    rect_.x = x_pos_;
    rect_.y = y_pos_;

    SDL_Rect* clip = NULL;

    SDL_Rect renderQuad = {rect_.x, rect_.y, rect_.w, rect_.h};

    SDL_RenderCopy(des, p_object_, clip, &renderQuad);
}

