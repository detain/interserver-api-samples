import 'package:test/test.dart';
import 'package:openapi/openapi.dart';

// tests for BillingPrepayRequest
void main() {
  final instance = BillingPrepayRequestBuilder();
  // TODO add properties to the builder and call build()

  group(BillingPrepayRequest, () {
    // Module the prepay should be applied to (for example `default`).
    // String module
    test('to test the property `module`', () async {
      // TODO
    });

    // Amount to add to prepay balance. Minimum is $10.
    // num amount
    test('to test the property `amount`', () async {
      // TODO
    });

    // Whether the prepay balance should be used automatically.
    // String automaticUse
    test('to test the property `automaticUse`', () async {
      // TODO
    });

  });
}
