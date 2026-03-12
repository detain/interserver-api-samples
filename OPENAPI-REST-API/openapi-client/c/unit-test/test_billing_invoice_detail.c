#ifndef billing_invoice_detail_TEST
#define billing_invoice_detail_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define billing_invoice_detail_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/billing_invoice_detail.h"
billing_invoice_detail_t* instantiate_billing_invoice_detail(int include_optional);



billing_invoice_detail_t* instantiate_billing_invoice_detail(int include_optional) {
  billing_invoice_detail_t* billing_invoice_detail = NULL;
  if (include_optional) {
    billing_invoice_detail = billing_invoice_detail_create(
    );
  } else {
    billing_invoice_detail = billing_invoice_detail_create(
    );
  }

  return billing_invoice_detail;
}


#ifdef billing_invoice_detail_MAIN

void test_billing_invoice_detail(int include_optional) {
    billing_invoice_detail_t* billing_invoice_detail_1 = instantiate_billing_invoice_detail(include_optional);

	cJSON* jsonbilling_invoice_detail_1 = billing_invoice_detail_convertToJSON(billing_invoice_detail_1);
	printf("billing_invoice_detail :\n%s\n", cJSON_Print(jsonbilling_invoice_detail_1));
	billing_invoice_detail_t* billing_invoice_detail_2 = billing_invoice_detail_parseFromJSON(jsonbilling_invoice_detail_1);
	cJSON* jsonbilling_invoice_detail_2 = billing_invoice_detail_convertToJSON(billing_invoice_detail_2);
	printf("repeating billing_invoice_detail:\n%s\n", cJSON_Print(jsonbilling_invoice_detail_2));
}

int main() {
  test_billing_invoice_detail(1);
  test_billing_invoice_detail(0);

  printf("Hello world \n");
  return 0;
}

#endif // billing_invoice_detail_MAIN
#endif // billing_invoice_detail_TEST
