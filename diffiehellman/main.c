//
//  main.c
//  diffiehellman
//
//  Created by Biswaranjan Padhy on 02/09/16.
//  Copyright © 2016 Biswaranjan Padhy. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int usera();
int userb();
int Xa = 3, Xb = 5, Ya, Yb;
int main(int argc, const char * argv[]) {

    int q = 11, alpha = 2;
    
    //Calculating Ya
    Ya = pow(alpha,Xa);
    Ya = Ya % q;
    printf("Ya is:%d",Ya);
    
    //Calculating Yb
    Yb = pow(alpha,Xb);
    Yb = Yb % q;
    printf("\nYb is:%d",Yb);
    
    
    int k1res = usera(alpha,q);
    int k2res = userb(alpha,q);
    printf("\n%d",k1res);
    printf("\n%d",k2res);
    if(k1res == k2res)
    {
        printf("\nk1 & k2 successfully matched!\n");
    }
    else
    {
        printf(" k1 & k2 failed to match!");
    }
    return 0;
}

int usera(alpha,q)
{
    int k1 = pow(Yb, Xa);
    k1 = k1 % q;
    return k1;
}

int userb(alpha,q)
{
    int k2 = pow(Ya, Xb);
    k2 = k2 % q;
    return k2;
}