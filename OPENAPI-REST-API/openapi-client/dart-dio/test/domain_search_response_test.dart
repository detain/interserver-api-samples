import 'package:test/test.dart';
import 'package:openapi/openapi.dart';

// tests for DomainSearchResponse
void main() {
  final instance = DomainSearchResponseBuilder();
  // TODO add properties to the builder and call build()

  group(DomainSearchResponse, () {
    // Indicates whether the registrar search succeeded.
    // bool success
    test('to test the property `success`', () async {
      // TODO
    });

    // Human-readable status text from the registrar.
    // String responseText
    test('to test the property `responseText`', () async {
      // TODO
    });

    // Response time as reported by the registrar.
    // String responseTime
    test('to test the property `responseTime`', () async {
      // TODO
    });

    // Availability lookup results for queried domains.
    // BuiltList<JsonObject> lookup
    test('to test the property `lookup`', () async {
      // TODO
    });

    // Suggested alternative domains and availability data.
    // BuiltList<JsonObject> suggest
    test('to test the property `suggest`', () async {
      // TODO
    });

    // TLDs evaluated during the search.
    // BuiltList<String> tlds
    test('to test the property `tlds`', () async {
      // TODO
    });

  });
}
