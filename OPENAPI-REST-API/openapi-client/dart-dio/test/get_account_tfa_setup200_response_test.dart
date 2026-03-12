import 'package:test/test.dart';
import 'package:openapi/openapi.dart';

// tests for GetAccountTfaSetup200Response
void main() {
  final instance = GetAccountTfaSetup200ResponseBuilder();
  // TODO add properties to the builder and call build()

  group(GetAccountTfaSetup200Response, () {
    // Base64-encoded secret key for TOTP setup.
    // String n2faGoogleKey
    test('to test the property `n2faGoogleKey`', () async {
      // TODO
    });

    // Human-readable formatted key (chunks of 4 characters).
    // String n2faGoogleSplit
    test('to test the property `n2faGoogleSplit`', () async {
      // TODO
    });

  });
}
