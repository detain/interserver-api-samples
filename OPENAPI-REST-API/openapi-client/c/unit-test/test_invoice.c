#ifndef invoice_TEST
#define invoice_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define invoice_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/invoice.h"
invoice_t* instantiate_invoice(int include_optional);



invoice_t* instantiate_invoice(int include_optional) {
  invoice_t* invoice = NULL;
  if (include_optional) {
    invoice = invoice_create(
      56
    );
  } else {
    invoice = invoice_create(
      56
    );
  }

  return invoice;
}


#ifdef invoice_MAIN

void test_invoice(int include_optional) {
    invoice_t* invoice_1 = instantiate_invoice(include_optional);

	cJSON* jsoninvoice_1 = invoice_convertToJSON(invoice_1);
	printf("invoice :\n%s\n", cJSON_Print(jsoninvoice_1));
	invoice_t* invoice_2 = invoice_parseFromJSON(jsoninvoice_1);
	cJSON* jsoninvoice_2 = invoice_convertToJSON(invoice_2);
	printf("repeating invoice:\n%s\n", cJSON_Print(jsoninvoice_2));
}

int main() {
  test_invoice(1);
  test_invoice(0);

  printf("Hello world \n");
  return 0;
}

#endif // invoice_MAIN
#endif // invoice_TEST
