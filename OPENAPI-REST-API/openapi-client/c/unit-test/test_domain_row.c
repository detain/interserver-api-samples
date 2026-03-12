#ifndef domain_row_TEST
#define domain_row_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_row_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_row.h"
domain_row_t* instantiate_domain_row(int include_optional);



domain_row_t* instantiate_domain_row(int include_optional) {
  domain_row_t* domain_row = NULL;
  if (include_optional) {
    domain_row = domain_row_create(
      "59237",
      "mydomain.com",
      "2023-08-14T00:59:38.000Z",
      "11.00",
      "active"
    );
  } else {
    domain_row = domain_row_create(
      "59237",
      "mydomain.com",
      "2023-08-14T00:59:38.000Z",
      "11.00",
      "active"
    );
  }

  return domain_row;
}


#ifdef domain_row_MAIN

void test_domain_row(int include_optional) {
    domain_row_t* domain_row_1 = instantiate_domain_row(include_optional);

	cJSON* jsondomain_row_1 = domain_row_convertToJSON(domain_row_1);
	printf("domain_row :\n%s\n", cJSON_Print(jsondomain_row_1));
	domain_row_t* domain_row_2 = domain_row_parseFromJSON(jsondomain_row_1);
	cJSON* jsondomain_row_2 = domain_row_convertToJSON(domain_row_2);
	printf("repeating domain_row:\n%s\n", cJSON_Print(jsondomain_row_2));
}

int main() {
  test_domain_row(1);
  test_domain_row(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_row_MAIN
#endif // domain_row_TEST
