#ifndef raid_option_TEST
#define raid_option_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define raid_option_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/raid_option.h"
raid_option_t* instantiate_raid_option(int include_optional);



raid_option_t* instantiate_raid_option(int include_optional) {
  raid_option_t* raid_option = NULL;
  if (include_optional) {
    raid_option = raid_option_create(
      56,
      "0",
      1.337
    );
  } else {
    raid_option = raid_option_create(
      56,
      "0",
      1.337
    );
  }

  return raid_option;
}


#ifdef raid_option_MAIN

void test_raid_option(int include_optional) {
    raid_option_t* raid_option_1 = instantiate_raid_option(include_optional);

	cJSON* jsonraid_option_1 = raid_option_convertToJSON(raid_option_1);
	printf("raid_option :\n%s\n", cJSON_Print(jsonraid_option_1));
	raid_option_t* raid_option_2 = raid_option_parseFromJSON(jsonraid_option_1);
	cJSON* jsonraid_option_2 = raid_option_convertToJSON(raid_option_2);
	printf("repeating raid_option:\n%s\n", cJSON_Print(jsonraid_option_2));
}

int main() {
  test_raid_option(1);
  test_raid_option(0);

  printf("Hello world \n");
  return 0;
}

#endif // raid_option_MAIN
#endif // raid_option_TEST
