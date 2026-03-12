import 'package:test/test.dart';
import 'package:openapi/openapi.dart';

// tests for CreateFirewallRule
void main() {
  final instance = CreateFirewallRuleBuilder();
  // TODO add properties to the builder and call build()

  group(CreateFirewallRule, () {
    // 1 = TCP, 2 = UDP
    // int protocolId
    test('to test the property `protocolId`', () async {
      // TODO
    });

    // 1 = Block,  0 = Whitelist
    // int xdpAction
    test('to test the property `xdpAction`', () async {
      // TODO
    });

    // int destinationPort (default value: 80)
    test('to test the property `destinationPort`', () async {
      // TODO
    });

    // String sourceIp (default value: '0')
    test('to test the property `sourceIp`', () async {
      // TODO
    });

    // int sourcePort (default value: 0)
    test('to test the property `sourcePort`', () async {
      // TODO
    });

  });
}
