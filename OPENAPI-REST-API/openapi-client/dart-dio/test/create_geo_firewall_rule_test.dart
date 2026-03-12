import 'package:test/test.dart';
import 'package:openapi/openapi.dart';

// tests for CreateGeoFirewallRule
void main() {
  final instance = CreateGeoFirewallRuleBuilder();
  // TODO add properties to the builder and call build()

  group(CreateGeoFirewallRule, () {
    // 1 = Block,  0 = Whitelist
    // int xdpAction
    test('to test the property `xdpAction`', () async {
      // TODO
    });

    // int destinationPort (default value: 80)
    test('to test the property `destinationPort`', () async {
      // TODO
    });

    // To get country code refer our countries api - https://my.interserver.net/apiv2/account/countries?fetch_by=numcode
    // int countryCode
    test('to test the property `countryCode`', () async {
      // TODO
    });

    // ASN number
    // int asn
    test('to test the property `asn`', () async {
      // TODO
    });

  });
}
