#include <stdio.h>
int main()
{
  //define latitude and longtitude
  float latitude;
  float longtitude;
  //info char long 80 char arr
  char info[80];
  //initial started 0 for start 1 for stop
  int started = 0;
  //puts for json format
  puts("data=[");
  //wait for device for input
  while (scanf("%f,%f,79[^\n]",&latitude,longtitude,info )==3;)
  {
    if (started)
    {
      printf(",\n" );
    }else{
      started = 1;
    }

    if ((latitude < -90.0) || (latitude >90.0))
    {
      fprintf(stderr, "invavild latitude: %f\n",latitude );
      return 2;
    }

    if ((longtitude < -90.0) || (longtitude > 90.0))
    {
      fprintf(stderr, "invavild longtitude:%f\n",longtitude);
    }
    printf("latitude:%f,longtitude:%f,info:'%s'",latitude,longtitude,info );

  }
  puts("\n]");
  return 0;
}
