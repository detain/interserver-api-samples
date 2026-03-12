import 'package:test/test.dart';
import 'package:openapi/openapi.dart';

// tests for PlaceBuyNowServerRequest
void main() {
  final instance = PlaceBuyNowServerRequestBuilder();
  // TODO add properties to the builder and call build()

  group(PlaceBuyNowServerRequest, () {
    // The ID of the buy-it-now server configuration to order. Use the server listing from `GET /servers/order/buy_now_server` to find valid IDs.
    // num serverId
    test('to test the property `serverId`', () async {
      // TODO
    });

    // The fully-qualified hostname to assign to the server.
    // String serverHostname
    test('to test the property `serverHostname`', () async {
      // TODO
    });

    // The root or administrator password to set on the server.
    // String serverRootPassword
    test('to test the property `serverRootPassword`', () async {
      // TODO
    });

  });
}
