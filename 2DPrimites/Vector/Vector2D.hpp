//
//  Vector2D.hpp
//  2DPrimites
//
//  Created by pc-laptop on 11/6/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#ifndef Vector2D_hpp
#define Vector2D_hpp

#include <stdio.h>

#endif /* Vector2D_hpp */

class Vector2D
{
public:
    Vector2D(float x, float y);

    friend Vector2D operator+(const Vector2D& rhs, const Vector2D& lhs);
    friend Vector2D operator-(const Vector2D& rhs, const Vector2D& lhs);
    friend Vector2D operator*(const Vector2D& rhs, const Vector2D& lhs);
    friend Vector2D operator/(const Vector2D& rhs, const Vector2D& lhs);
    
    friend Vector2D operator+(const Vector2D& rhs, const float scale);
    friend Vector2D operator-(const Vector2D& rhs, const float scale);
    friend Vector2D operator*(const Vector2D& rhs, const float scale);
    friend Vector2D operator/(const Vector2D& rhs, const float scale);
    
    float magnitude() const;
    float Angle(const Vector2D& other) const;
    float Distance(const Vector2D& other) const;
    
    float getX() const { return m_x; }
    float getY() const { return m_y; }
    
private:
    float m_x, m_y;
};
