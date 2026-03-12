#ifndef config_lists_TEST
#define config_lists_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define config_lists_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/config_lists.h"
config_lists_t* instantiate_config_lists(int include_optional);



config_lists_t* instantiate_config_lists(int include_optional) {
  config_lists_t* config_lists = NULL;
  if (include_optional) {
    config_lists = config_lists_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    config_lists = config_lists_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return config_lists;
}


#ifdef config_lists_MAIN

void test_config_lists(int include_optional) {
    config_lists_t* config_lists_1 = instantiate_config_lists(include_optional);

	cJSON* jsonconfig_lists_1 = config_lists_convertToJSON(config_lists_1);
	printf("config_lists :\n%s\n", cJSON_Print(jsonconfig_lists_1));
	config_lists_t* config_lists_2 = config_lists_parseFromJSON(jsonconfig_lists_1);
	cJSON* jsonconfig_lists_2 = config_lists_convertToJSON(config_lists_2);
	printf("repeating config_lists:\n%s\n", cJSON_Print(jsonconfig_lists_2));
}

int main() {
  test_config_lists(1);
  test_config_lists(0);

  printf("Hello world \n");
  return 0;
}

#endif // config_lists_MAIN
#endif // config_lists_TEST
