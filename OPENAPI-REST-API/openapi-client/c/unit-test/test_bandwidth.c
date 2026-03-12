#ifndef bandwidth_TEST
#define bandwidth_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define bandwidth_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/bandwidth.h"
bandwidth_t* instantiate_bandwidth(int include_optional);



bandwidth_t* instantiate_bandwidth(int include_optional) {
  bandwidth_t* bandwidth = NULL;
  if (include_optional) {
    bandwidth = bandwidth_create(
      56,
      "0",
      1.337,
      "0"
    );
  } else {
    bandwidth = bandwidth_create(
      56,
      "0",
      1.337,
      "0"
    );
  }

  return bandwidth;
}


#ifdef bandwidth_MAIN

void test_bandwidth(int include_optional) {
    bandwidth_t* bandwidth_1 = instantiate_bandwidth(include_optional);

	cJSON* jsonbandwidth_1 = bandwidth_convertToJSON(bandwidth_1);
	printf("bandwidth :\n%s\n", cJSON_Print(jsonbandwidth_1));
	bandwidth_t* bandwidth_2 = bandwidth_parseFromJSON(jsonbandwidth_1);
	cJSON* jsonbandwidth_2 = bandwidth_convertToJSON(bandwidth_2);
	printf("repeating bandwidth:\n%s\n", cJSON_Print(jsonbandwidth_2));
}

int main() {
  test_bandwidth(1);
  test_bandwidth(0);

  printf("Hello world \n");
  return 0;
}

#endif // bandwidth_MAIN
#endif // bandwidth_TEST
