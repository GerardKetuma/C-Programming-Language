//  Created by Gerard Ketuma on 6/28/18.
//  Copyright © 2018 Gerard Ketuma. All rights reserved.
//
#include <stdio.h>

int main()
{
  int c, count = 0;
  printf("Enter any sequence of characters and press enter to remove multiple blanks. Use Ctrl-D to end.\n");
  while ((c = getchar()) != EOF)
  {
    if (c == ' ')
    {
      ++count;
    }
    else
    {
      count = 0;
    }
    if (count < 2)
      putchar(c);
  }
  return 0;
}