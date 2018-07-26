#include <stdio.h>
#include <float.h>
int main() {
  
printf("Minimum ize for float : %lu \n", sizeof(float));

printf("Maximum  float positive value: %E\n", FLT_MAX );
printf("Storage float positive value: %E\n", FLT_MIN );
printf("Precision value: %lu \n", FLT_DIG );
return 0;