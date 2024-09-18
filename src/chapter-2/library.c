#include "library.h"

#include <stdlib.h>

int total_times = 0;

float bigger(float y, float z) {
  total_times++;

  if (y > z) {
    return y;
  }

  return z;
}
