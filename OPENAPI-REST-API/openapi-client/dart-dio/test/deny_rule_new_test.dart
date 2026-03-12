import 'package:test/test.dart';
import 'package:openapi/openapi.dart';

// tests for DenyRuleNew
void main() {
  //final instance = DenyRuleNewBuilder();
  // TODO add properties to the builder and call build()

  group(DenyRuleNew, () {
    // The type of deny rule.
    // String type
    test('to test the property `type`', () async {
      // TODO
    });

    // The content of the rule.  If a domain type rule then an example would be google.com. For a begins with type an example would be msgid-.  For the email typer an example would be user@server.com.
    // String data
    test('to test the property `data`', () async {
      // TODO
    });

    // Mail account username that will be tied to this rule.  If not specified the first active mail order will be used.
    // String user
    test('to test the property `user`', () async {
      // TODO
    });

  });
}
