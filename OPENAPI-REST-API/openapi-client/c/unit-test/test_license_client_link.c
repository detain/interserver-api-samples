#ifndef license_client_link_TEST
#define license_client_link_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define license_client_link_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/license_client_link.h"
license_client_link_t* instantiate_license_client_link(int include_optional);



license_client_link_t* instantiate_license_client_link(int include_optional) {
  license_client_link_t* license_client_link = NULL;
  if (include_optional) {
    license_client_link = license_client_link_create(
      "Invoices",
      "invoices",
      "fas fa-file-invoice-dollar fa-w-12",
      "Invoice History",
      "0",
      "0"
    );
  } else {
    license_client_link = license_client_link_create(
      "Invoices",
      "invoices",
      "fas fa-file-invoice-dollar fa-w-12",
      "Invoice History",
      "0",
      "0"
    );
  }

  return license_client_link;
}


#ifdef license_client_link_MAIN

void test_license_client_link(int include_optional) {
    license_client_link_t* license_client_link_1 = instantiate_license_client_link(include_optional);

	cJSON* jsonlicense_client_link_1 = license_client_link_convertToJSON(license_client_link_1);
	printf("license_client_link :\n%s\n", cJSON_Print(jsonlicense_client_link_1));
	license_client_link_t* license_client_link_2 = license_client_link_parseFromJSON(jsonlicense_client_link_1);
	cJSON* jsonlicense_client_link_2 = license_client_link_convertToJSON(license_client_link_2);
	printf("repeating license_client_link:\n%s\n", cJSON_Print(jsonlicense_client_link_2));
}

int main() {
  test_license_client_link(1);
  test_license_client_link(0);

  printf("Hello world \n");
  return 0;
}

#endif // license_client_link_MAIN
#endif // license_client_link_TEST
