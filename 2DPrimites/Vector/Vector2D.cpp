//
//  Vector2D.cpp
//  2DPrimites
//
//  Created by pc-laptop on 11/6/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#include "Vector2D.hpp"
#include <math.h>

Vector2D::Vector2D(float x, float y)
{
    this->m_x = x;
    this->m_y = y;
}

Vector2D operator+(const Vector2D& rhs, const Vector2D& lhs)
{
    Vector2D *vectorResult = new Vector2D(0, 0);
    vectorResult->m_x = rhs.m_x + lhs.m_y;
    vectorResult->m_y = rhs.m_y + lhs.m_y;
    return *vectorResult;
}

Vector2D operator-(const Vector2D& rhs, const Vector2D& lhs)
{
    Vector2D *vectorResult = new Vector2D(0, 0);
    vectorResult->m_x = rhs.m_x - lhs.m_y;
    vectorResult->m_y = rhs.m_y - lhs.m_y;
    return *vectorResult;
}

Vector2D operator*(const Vector2D& rhs, const Vector2D& lhs)
{
    Vector2D *vectorResult = new Vector2D(0, 0);
    vectorResult->m_x = rhs.m_x * lhs.m_y;
    vectorResult->m_y = rhs.m_y * lhs.m_y;
    return *vectorResult;
}

Vector2D operator/(const Vector2D& rhs, const Vector2D& lhs)
{
    Vector2D *vectorResult = new Vector2D(0, 0);
    vectorResult->m_x = rhs.m_x / lhs.m_y;
    vectorResult->m_y = rhs.m_y / lhs.m_y;
    return *vectorResult;
}


Vector2D operator+(const Vector2D& rhs, const float scale)
{
    Vector2D *vectorResult = new Vector2D(0, 0);
    vectorResult->m_x = rhs.m_x + scale;
    vectorResult->m_y = rhs.m_y + scale;
    return *vectorResult;
}
Vector2D operator-(const Vector2D& rhs, const float scale)
{
    Vector2D *vectorResult = new Vector2D(0, 0);
    vectorResult->m_x = rhs.m_x - scale;
    vectorResult->m_y = rhs.m_y - scale;
    return *vectorResult;
}

Vector2D operator*(const Vector2D& rhs, const float scale)
{
    Vector2D *vectorResult = new Vector2D(0, 0);
    vectorResult->m_x = rhs.m_x * scale;
    vectorResult->m_y = rhs.m_y * scale;
    return *vectorResult;
}

Vector2D operator/(const Vector2D& rhs, const float scale)
{
    Vector2D *vectorResult = new Vector2D(0, 0);
    vectorResult->m_x = rhs.m_x / scale;
    vectorResult->m_y = rhs.m_y / scale;
    return *vectorResult;
}

float Vector2D::magnitude() const
{
    float vectorPow = pow(m_x, 2) + pow(m_y, 2);
    float vectorLength = sqrt(vectorPow);
    return vectorLength;
}

float Vector2D::Angle(const Vector2D& other) const
{
    float dotProduct = (other.m_x * m_x) + (other.m_y * m_y);
    float currentVectorMagnitud = magnitude();
    float otherVectorMagnitud = other.magnitude();
    float angle = dotProduct / (currentVectorMagnitud * otherVectorMagnitud);

    return angle;
}

float Vector2D::Distance(const Vector2D& other) const
{
    float xValue = other.m_x - this->m_x;
    float yValue = other.m_y - this->m_y;
    
    float xPow = pow(xValue, 2);
    float yPow = pow(yValue, 2);
    
    float addPow = xPow + yPow;
    float distance =  sqrt(addPow);
    
    return distance;
}
