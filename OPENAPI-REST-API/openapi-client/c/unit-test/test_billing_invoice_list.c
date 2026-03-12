#ifndef billing_invoice_list_TEST
#define billing_invoice_list_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define billing_invoice_list_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/billing_invoice_list.h"
billing_invoice_list_t* instantiate_billing_invoice_list(int include_optional);



billing_invoice_list_t* instantiate_billing_invoice_list(int include_optional) {
  billing_invoice_list_t* billing_invoice_list = NULL;
  if (include_optional) {
    billing_invoice_list = billing_invoice_list_create(
      list_createList(),
      0
    );
  } else {
    billing_invoice_list = billing_invoice_list_create(
      list_createList(),
      0
    );
  }

  return billing_invoice_list;
}


#ifdef billing_invoice_list_MAIN

void test_billing_invoice_list(int include_optional) {
    billing_invoice_list_t* billing_invoice_list_1 = instantiate_billing_invoice_list(include_optional);

	cJSON* jsonbilling_invoice_list_1 = billing_invoice_list_convertToJSON(billing_invoice_list_1);
	printf("billing_invoice_list :\n%s\n", cJSON_Print(jsonbilling_invoice_list_1));
	billing_invoice_list_t* billing_invoice_list_2 = billing_invoice_list_parseFromJSON(jsonbilling_invoice_list_1);
	cJSON* jsonbilling_invoice_list_2 = billing_invoice_list_convertToJSON(billing_invoice_list_2);
	printf("repeating billing_invoice_list:\n%s\n", cJSON_Print(jsonbilling_invoice_list_2));
}

int main() {
  test_billing_invoice_list(1);
  test_billing_invoice_list(0);

  printf("Hello world \n");
  return 0;
}

#endif // billing_invoice_list_MAIN
#endif // billing_invoice_list_TEST
