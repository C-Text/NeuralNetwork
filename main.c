#include "network/layer.h"

int main(void) {
  layer l = create_layer(10);
  lprint(&l, false);
  return 0;
}
