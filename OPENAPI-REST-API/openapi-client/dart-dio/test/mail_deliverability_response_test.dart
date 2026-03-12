import 'package:test/test.dart';
import 'package:openapi/openapi.dart';

// tests for MailDeliverabilityResponse
void main() {
  final instance = MailDeliverabilityResponseBuilder();
  // TODO add properties to the builder and call build()

  group(MailDeliverabilityResponse, () {
    // Delivered and bounced counts.
    // JsonObject stat
    test('to test the property `stat`', () async {
      // TODO
    });

    // Bounce percentage.
    // num percent
    test('to test the property `percent`', () async {
      // TODO
    });

    // Detailed deliverability breakdown by sender or domain.
    // BuiltList<BuiltList<String>> tableData
    test('to test the property `tableData`', () async {
      // TODO
    });

  });
}
