import 'package:test/test.dart';
import 'package:openapi/openapi.dart';

// tests for ServiceOrderPostResponse
void main() {
  final instance = ServiceOrderPostResponseBuilder();
  // TODO add properties to the builder and call build()

  group(ServiceOrderPostResponse, () {
    // Whether the order was accepted and can proceed to payment.
    // bool continue_
    test('to test the property `continue_`', () async {
      // TODO
    });

    // List of validation errors (empty on success).
    // BuiltList<String> errors
    test('to test the property `errors`', () async {
      // TODO
    });

    // Total cost of the order.
    // String totalCost
    test('to test the property `totalCost`', () async {
      // TODO
    });

    // Primary invoice ID for payment.
    // String iid
    test('to test the property `iid`', () async {
      // TODO
    });

    // All invoice identifiers associated with the order.
    // BuiltList<String> iids
    test('to test the property `iids`', () async {
      // TODO
    });

    // Numeric invoice IDs for use with billing endpoints.
    // BuiltList<String> realIids
    test('to test the property `realIids`', () async {
      // TODO
    });

    // The new service ID created by the order.
    // int serviceId
    test('to test the property `serviceId`', () async {
      // TODO
    });

    // Human-readable description of the invoice.
    // String invoiceDescription
    test('to test the property `invoiceDescription`', () async {
      // TODO
    });

  });
}
