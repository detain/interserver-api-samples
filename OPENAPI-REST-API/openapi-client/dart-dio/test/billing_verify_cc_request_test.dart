import 'package:test/test.dart';
import 'package:openapi/openapi.dart';

// tests for BillingVerifyCcRequest
void main() {
  final instance = BillingVerifyCcRequestBuilder();
  // TODO add properties to the builder and call build()

  group(BillingVerifyCcRequest, () {
    // Card index to verify.
    // int idx
    test('to test the property `idx`', () async {
      // TODO
    });

    // CVV code for verification.
    // String ccCcv2
    test('to test the property `ccCcv2`', () async {
      // TODO
    });

    // First micro-charge amount for verification.
    // String ccAmount1
    test('to test the property `ccAmount1`', () async {
      // TODO
    });

    // Second micro-charge amount for verification.
    // String ccAmount2
    test('to test the property `ccAmount2`', () async {
      // TODO
    });

    // Whether terms were accepted for verification.
    // bool terms
    test('to test the property `terms`', () async {
      // TODO
    });

  });
}
