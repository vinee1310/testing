#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<assert.h>
#include "function.c"

int main()
{
    assert(functionality('+',4,3)==7);
    printf("passed");
    assert(functionality('+',-4,3)==-1);
    printf("\npassed");
    assert(functionality('+',-4,-3)==-7);
    printf("\npassed");
    assert(functionality('-',-4,3)==-7);
    printf("\npassed");

return 0;
}
