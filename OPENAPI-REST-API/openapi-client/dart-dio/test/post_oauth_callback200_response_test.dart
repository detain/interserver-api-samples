import 'package:test/test.dart';
import 'package:openapi/openapi.dart';

// tests for PostOauthCallback200Response
void main() {
  final instance = PostOauthCallback200ResponseBuilder();
  // TODO add properties to the builder and call build()

  group(PostOauthCallback200Response, () {
    // Whether the user was logged in to an existing account.
    // bool login
    test('to test the property `login`', () async {
      // TODO
    });

    // Whether a new account was created.
    // bool signup
    test('to test the property `signup`', () async {
      // TODO
    });

    // Whether the OAuth provider was linked to an existing account.
    // bool linked
    test('to test the property `linked`', () async {
      // TODO
    });

    // The account ID associated with the OAuth login.
    // int accountId
    test('to test the property `accountId`', () async {
      // TODO
    });

    // Error code if additional verification is needed (e.g. `2fa_required`).
    // String errorCode
    test('to test the property `errorCode`', () async {
      // TODO
    });

  });
}
