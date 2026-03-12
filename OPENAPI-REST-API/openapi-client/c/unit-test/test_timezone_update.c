#ifndef timezone_update_TEST
#define timezone_update_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define timezone_update_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/timezone_update.h"
timezone_update_t* instantiate_timezone_update(int include_optional);



timezone_update_t* instantiate_timezone_update(int include_optional) {
  timezone_update_t* timezone_update = NULL;
  if (include_optional) {
    timezone_update = timezone_update_create(
      "America/New_York"
    );
  } else {
    timezone_update = timezone_update_create(
      "America/New_York"
    );
  }

  return timezone_update;
}


#ifdef timezone_update_MAIN

void test_timezone_update(int include_optional) {
    timezone_update_t* timezone_update_1 = instantiate_timezone_update(include_optional);

	cJSON* jsontimezone_update_1 = timezone_update_convertToJSON(timezone_update_1);
	printf("timezone_update :\n%s\n", cJSON_Print(jsontimezone_update_1));
	timezone_update_t* timezone_update_2 = timezone_update_parseFromJSON(jsontimezone_update_1);
	cJSON* jsontimezone_update_2 = timezone_update_convertToJSON(timezone_update_2);
	printf("repeating timezone_update:\n%s\n", cJSON_Print(jsontimezone_update_2));
}

int main() {
  test_timezone_update(1);
  test_timezone_update(0);

  printf("Hello world \n");
  return 0;
}

#endif // timezone_update_MAIN
#endif // timezone_update_TEST
