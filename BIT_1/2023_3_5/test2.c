#include <stdio.h>
#include <windows.h>
int main()
{
 char arr1[] = "welcome to bit...";
 char arr2[] = "#################";
 int left = 0;
 int right = strlen(arr1)-1;
 printf("%s\n", arr2);
//  //while循环实现
//  while(left<=right)
//  {
//  Sleep(500);
//  arr2[left] = arr1[left];
//  arr2[right] = arr1[right];
//  left++;
//  right--;
//  printf("%s\n", arr2);
//  }
//  return 0;
// }
for(left=0,right=strlen(arr1)-1;
    left<=right;
    left++,right--)
    {
        Sleep(500);
        arr2[left]=arr1[left];
        arr2[right]=arr1[right];
        printf("%s\n",arr2);
    }
    return 0;
    }
    