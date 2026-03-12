import 'package:test/test.dart';
import 'package:openapi/openapi.dart';

// tests for DomainDnssecRequest
void main() {
  final instance = DomainDnssecRequestBuilder();
  // TODO add properties to the builder and call build()

  group(DomainDnssecRequest, () {
    // List of DNSSEC algorithm IDs for each record.
    // BuiltList<int> algorithm
    test('to test the property `algorithm`', () async {
      // TODO
    });

    // List of digest type IDs for each record.
    // BuiltList<int> digestType
    test('to test the property `digestType`', () async {
      // TODO
    });

    // List of hex digests for each record.
    // BuiltList<String> digest
    test('to test the property `digest`', () async {
      // TODO
    });

    // List of key tag values corresponding to each record.
    // BuiltList<int> keyTag
    test('to test the property `keyTag`', () async {
      // TODO
    });

  });
}
