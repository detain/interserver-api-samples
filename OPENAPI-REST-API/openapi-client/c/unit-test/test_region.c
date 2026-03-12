#ifndef region_TEST
#define region_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define region_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/region.h"
region_t* instantiate_region(int include_optional);



region_t* instantiate_region(int include_optional) {
  region_t* region = NULL;
  if (include_optional) {
    region = region_create(
      56,
      "0"
    );
  } else {
    region = region_create(
      56,
      "0"
    );
  }

  return region;
}


#ifdef region_MAIN

void test_region(int include_optional) {
    region_t* region_1 = instantiate_region(include_optional);

	cJSON* jsonregion_1 = region_convertToJSON(region_1);
	printf("region :\n%s\n", cJSON_Print(jsonregion_1));
	region_t* region_2 = region_parseFromJSON(jsonregion_1);
	cJSON* jsonregion_2 = region_convertToJSON(region_2);
	printf("repeating region:\n%s\n", cJSON_Print(jsonregion_2));
}

int main() {
  test_region(1);
  test_region(0);

  printf("Hello world \n");
  return 0;
}

#endif // region_MAIN
#endif // region_TEST
