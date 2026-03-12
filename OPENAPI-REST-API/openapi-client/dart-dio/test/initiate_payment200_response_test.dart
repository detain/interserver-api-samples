import 'package:test/test.dart';
import 'package:openapi/openapi.dart';

// tests for InitiatePayment200Response
void main() {
  final instance = InitiatePayment200ResponseBuilder();
  // TODO add properties to the builder and call build()

  group(InitiatePayment200Response, () {
    // The response type indicating how to handle the payment. Possible values: `redirect` (redirect user to a URL), `submit` (submit a form to a URL), `single` (immediate result).
    // String type
    test('to test the property `type`', () async {
      // TODO
    });

    // URL to redirect the user to for payment (when type is `redirect`).
    // String redirect
    test('to test the property `redirect`', () async {
      // TODO
    });

    // Form action URL (when type is `submit`).
    // String action
    test('to test the property `action`', () async {
      // TODO
    });

    // HTTP method for the form submission (when type is `submit`).
    // String method
    test('to test the property `method`', () async {
      // TODO
    });

    // Form field name-value pairs to submit (when type is `submit`).
    // JsonObject items
    test('to test the property `items`', () async {
      // TODO
    });

    // Status or result text.
    // String text
    test('to test the property `text`', () async {
      // TODO
    });

  });
}
