#ifndef scrub_ips_row_schema_TEST
#define scrub_ips_row_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define scrub_ips_row_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/scrub_ips_row_schema.h"
scrub_ips_row_schema_t* instantiate_scrub_ips_row_schema(int include_optional);



scrub_ips_row_schema_t* instantiate_scrub_ips_row_schema(int include_optional) {
  scrub_ips_row_schema_t* scrub_ips_row_schema = NULL;
  if (include_optional) {
    scrub_ips_row_schema = scrub_ips_row_schema_create(
      56,
      1.337,
      "0",
      "0",
      "0"
    );
  } else {
    scrub_ips_row_schema = scrub_ips_row_schema_create(
      56,
      1.337,
      "0",
      "0",
      "0"
    );
  }

  return scrub_ips_row_schema;
}


#ifdef scrub_ips_row_schema_MAIN

void test_scrub_ips_row_schema(int include_optional) {
    scrub_ips_row_schema_t* scrub_ips_row_schema_1 = instantiate_scrub_ips_row_schema(include_optional);

	cJSON* jsonscrub_ips_row_schema_1 = scrub_ips_row_schema_convertToJSON(scrub_ips_row_schema_1);
	printf("scrub_ips_row_schema :\n%s\n", cJSON_Print(jsonscrub_ips_row_schema_1));
	scrub_ips_row_schema_t* scrub_ips_row_schema_2 = scrub_ips_row_schema_parseFromJSON(jsonscrub_ips_row_schema_1);
	cJSON* jsonscrub_ips_row_schema_2 = scrub_ips_row_schema_convertToJSON(scrub_ips_row_schema_2);
	printf("repeating scrub_ips_row_schema:\n%s\n", cJSON_Print(jsonscrub_ips_row_schema_2));
}

int main() {
  test_scrub_ips_row_schema(1);
  test_scrub_ips_row_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // scrub_ips_row_schema_MAIN
#endif // scrub_ips_row_schema_TEST
