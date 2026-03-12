#ifndef payment_invoice_rows_TEST
#define payment_invoice_rows_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define payment_invoice_rows_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/payment_invoice_rows.h"
payment_invoice_rows_t* instantiate_payment_invoice_rows(int include_optional);



payment_invoice_rows_t* instantiate_payment_invoice_rows(int include_optional) {
  payment_invoice_rows_t* payment_invoice_rows = NULL;
  if (include_optional) {
    payment_invoice_rows = payment_invoice_rows_create(
    );
  } else {
    payment_invoice_rows = payment_invoice_rows_create(
    );
  }

  return payment_invoice_rows;
}


#ifdef payment_invoice_rows_MAIN

void test_payment_invoice_rows(int include_optional) {
    payment_invoice_rows_t* payment_invoice_rows_1 = instantiate_payment_invoice_rows(include_optional);

	cJSON* jsonpayment_invoice_rows_1 = payment_invoice_rows_convertToJSON(payment_invoice_rows_1);
	printf("payment_invoice_rows :\n%s\n", cJSON_Print(jsonpayment_invoice_rows_1));
	payment_invoice_rows_t* payment_invoice_rows_2 = payment_invoice_rows_parseFromJSON(jsonpayment_invoice_rows_1);
	cJSON* jsonpayment_invoice_rows_2 = payment_invoice_rows_convertToJSON(payment_invoice_rows_2);
	printf("repeating payment_invoice_rows:\n%s\n", cJSON_Print(jsonpayment_invoice_rows_2));
}

int main() {
  test_payment_invoice_rows(1);
  test_payment_invoice_rows(0);

  printf("Hello world \n");
  return 0;
}

#endif // payment_invoice_rows_MAIN
#endif // payment_invoice_rows_TEST
