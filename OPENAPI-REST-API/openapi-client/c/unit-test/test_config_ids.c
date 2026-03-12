#ifndef config_ids_TEST
#define config_ids_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define config_ids_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/config_ids.h"
config_ids_t* instantiate_config_ids(int include_optional);



config_ids_t* instantiate_config_ids(int include_optional) {
  config_ids_t* config_ids = NULL;
  if (include_optional) {
    config_ids = config_ids_create(
      56,
      56,
      56,
      56,
      56,
      56,
      56
    );
  } else {
    config_ids = config_ids_create(
      56,
      56,
      56,
      56,
      56,
      56,
      56
    );
  }

  return config_ids;
}


#ifdef config_ids_MAIN

void test_config_ids(int include_optional) {
    config_ids_t* config_ids_1 = instantiate_config_ids(include_optional);

	cJSON* jsonconfig_ids_1 = config_ids_convertToJSON(config_ids_1);
	printf("config_ids :\n%s\n", cJSON_Print(jsonconfig_ids_1));
	config_ids_t* config_ids_2 = config_ids_parseFromJSON(jsonconfig_ids_1);
	cJSON* jsonconfig_ids_2 = config_ids_convertToJSON(config_ids_2);
	printf("repeating config_ids:\n%s\n", cJSON_Print(jsonconfig_ids_2));
}

int main() {
  test_config_ids(1);
  test_config_ids(0);

  printf("Hello world \n");
  return 0;
}

#endif // config_ids_MAIN
#endif // config_ids_TEST
