//
//  main.c
//  triangle
//
//  Created by Chad Russell on 9/14/15.
//  Copyright © 2015 chadrussell. All rights reserved.
//

#include <stdio.h>

static float angleC;


void remainingAngle(float angleA, float angleB)
{
   


    float angleScratch =  angleA + angleB;
    angleC = 180 - angleScratch;
    
    ;
    
};


int main(int argc, const char * argv[]) {
    // insert code here...
   
    
    float angleAVariable = 20.0;
    float angleBVariable = 60.0;
    
    remainingAngle(angleAVariable, angleBVariable);

     printf("The missing angle is %f degrees \n" , angleC);
    
            return 0;
}
    
    
    



    
    