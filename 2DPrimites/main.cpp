//
//  main.cpp
//  2DPrimites
//
//  Created by pc-laptop on 11/6/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#include <iostream>
#include "Vector2D.hpp"

int main(int argc, const char * argv[])
{
    Vector2D *vector = new Vector2D(7.0f, 1.0f);
    const Vector2D *vector2 = new Vector2D(5.0f, 5.0f);
    
    /*
     Testing Calculation
     */
    printf("%f\n", vector->Angle(*vector2));
    printf("%f\n", vector->Distance(*vector2));
    printf("%f\n", vector->magnitude());
    printf("%f\n", vector2->magnitude());
    
    Vector2D resutlAdd = *vector + *vector2;
    printf("Add x%f, y%f\n", resutlAdd.getX(), resutlAdd.getY());
    Vector2D resutlS = *vector - *vector2;
    printf("S x%f, y%f\n", resutlS.getX(), resutlS.getY());
    Vector2D resutlM = *vector * *vector2;
    printf("M x%f, y%f\n", resutlM.getX(), resutlM.getY());
    Vector2D resutlD = *vector / *vector2;
    printf("D x%f, y%f\n", resutlD.getX(), resutlD.getY());
    
    Vector2D resutlAddScale = *vector + 2;
    printf("Scale Add x%f, y%f\n", resutlAddScale.getX(), resutlAddScale.getY());
    Vector2D resutlSScale = *vector - 2;
    printf("Scale S x%f, y%f\n", resutlSScale.getX(), resutlSScale.getY());
    Vector2D resutlMScale = *vector * 2;
    printf("Scale M x%f, y%f\n", resutlMScale.getX(), resutlMScale.getY());
    Vector2D resutlDScale = *vector / 2;
    printf("Scale D x%f, y%f\n", resutlDScale.getX(), resutlDScale.getY());
    
    /*
     End Test
     */
    
    return 0;
}
