#ifndef invoice_row_TEST
#define invoice_row_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define invoice_row_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/invoice_row.h"
invoice_row_t* instantiate_invoice_row(int include_optional);



invoice_row_t* instantiate_invoice_row(int include_optional) {
  invoice_row_t* invoice_row = NULL;
  if (include_optional) {
    invoice_row = invoice_row_create(
    );
  } else {
    invoice_row = invoice_row_create(
    );
  }

  return invoice_row;
}


#ifdef invoice_row_MAIN

void test_invoice_row(int include_optional) {
    invoice_row_t* invoice_row_1 = instantiate_invoice_row(include_optional);

	cJSON* jsoninvoice_row_1 = invoice_row_convertToJSON(invoice_row_1);
	printf("invoice_row :\n%s\n", cJSON_Print(jsoninvoice_row_1));
	invoice_row_t* invoice_row_2 = invoice_row_parseFromJSON(jsoninvoice_row_1);
	cJSON* jsoninvoice_row_2 = invoice_row_convertToJSON(invoice_row_2);
	printf("repeating invoice_row:\n%s\n", cJSON_Print(jsoninvoice_row_2));
}

int main() {
  test_invoice_row(1);
  test_invoice_row(0);

  printf("Hello world \n");
  return 0;
}

#endif // invoice_row_MAIN
#endif // invoice_row_TEST
