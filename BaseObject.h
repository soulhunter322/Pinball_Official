#ifndef BASEOBJECT_H_INCLUDED
#define BASEOBJECT_H_INCLUDED
#include"CommonFunction.h"

struct BaseObject
{
public:
    BaseObject();
    ~BaseObject();
    void SetRect(const int&x, const int&y);
    SDL_Rect GetRect() const;
    SDL_Texture* GetObject() const;

    virtual bool LoadImg(std::string path, SDL_Renderer* screen);
    virtual void Render(SDL_Renderer* des, const SDL_Rect* clip = NULL);
    void Free();

protected:
    SDL_Texture* p_object_;
    SDL_Rect rect_;

};





#endif // BASEOBJECT_H_INCLUDED
