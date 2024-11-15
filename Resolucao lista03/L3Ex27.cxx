#include<stdio.h>
#include<stdlib.h>


int main()
{
	for(int hip = 1 ; hip < 500 ; hip++)
	{
	    for(int cat1 = 1 ; cat1 < hip; cat1++)
	    {
            for(int cat2 = 1 ; cat2 < hip; cat2++)
            {
                if (hip*hip == cat1*cat1 + cat2*cat2)
                    printf("Hipotenusa: %d\nCatetos: %d e %d\n\n", hip, cat1, cat2);
            }
        }
    }
}
