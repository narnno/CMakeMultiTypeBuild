// A simple program that computes the square root of a number
#include <stdio.h>
#include "appconfig.h"

#include "types.h" 
#include "apptest1.h"

//Lib1test
#include "libtest1.h"

#define MAX_NUMBER_BUILDING 3
int main (void)
{
  printf("Apptest1 (ver: %u.%u) \r\n",APPTEST1_VERSION_MAJOR, APPTEST1_VERSION_MINOR);

  tBuilding tStreet1[MAX_NUMBER_BUILDING] = {{1,0,NULL},{2,0,NULL},{8,1,NULL}}; 

  printf("sizeof struct tBuilding %lu \r\n",sizeof(tBuilding));
  printf("sizeof tStreet1  %lu \r\n",sizeof(tStreet1));

  tBuilding *pBuildPtr = tStreet1;
  for(TUInt8 size=0; size<MAX_NUMBER_BUILDING; size++)
  {
  	printf("Building (%u):{%u,%u} \r\n",size,pBuildPtr->b1NbFloor, pBuildPtr->b1NbElevator);
  	pBuildPtr++;
  }

  libtest1();
  
  return 0;

}