#ifndef backups_order_service_types_TEST
#define backups_order_service_types_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define backups_order_service_types_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/backups_order_service_types.h"
backups_order_service_types_t* instantiate_backups_order_service_types(int include_optional);

#include "test_backups_order_service_types.c"


backups_order_service_types_t* instantiate_backups_order_service_types(int include_optional) {
  backups_order_service_types_t* backups_order_service_types = NULL;
  if (include_optional) {
    backups_order_service_types = backups_order_service_types_create(
       // false, not to have infinite recursion
      instantiate_backups_order_service_types(0)
    );
  } else {
    backups_order_service_types = backups_order_service_types_create(
      NULL
    );
  }

  return backups_order_service_types;
}


#ifdef backups_order_service_types_MAIN

void test_backups_order_service_types(int include_optional) {
    backups_order_service_types_t* backups_order_service_types_1 = instantiate_backups_order_service_types(include_optional);

	cJSON* jsonbackups_order_service_types_1 = backups_order_service_types_convertToJSON(backups_order_service_types_1);
	printf("backups_order_service_types :\n%s\n", cJSON_Print(jsonbackups_order_service_types_1));
	backups_order_service_types_t* backups_order_service_types_2 = backups_order_service_types_parseFromJSON(jsonbackups_order_service_types_1);
	cJSON* jsonbackups_order_service_types_2 = backups_order_service_types_convertToJSON(backups_order_service_types_2);
	printf("repeating backups_order_service_types:\n%s\n", cJSON_Print(jsonbackups_order_service_types_2));
}

int main() {
  test_backups_order_service_types(1);
  test_backups_order_service_types(0);

  printf("Hello world \n");
  return 0;
}

#endif // backups_order_service_types_MAIN
#endif // backups_order_service_types_TEST
