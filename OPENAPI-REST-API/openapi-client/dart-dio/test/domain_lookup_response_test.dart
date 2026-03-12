import 'package:test/test.dart';
import 'package:openapi/openapi.dart';

// tests for DomainLookupResponse
void main() {
  final instance = DomainLookupResponseBuilder();
  // TODO add properties to the builder and call build()

  group(DomainLookupResponse, () {
    // Whether the domain is available to register.
    // bool available
    test('to test the property `available`', () async {
      // TODO
    });

    // Whether the domain is marked as premium by the registrar.
    // bool premium
    test('to test the property `premium`', () async {
      // TODO
    });

    // Indicates if the domain is already used by a website service.
    // bool website
    test('to test the property `website`', () async {
      // TODO
    });

    // Indicates if the domain already exists as a domain service on the account.
    // bool domainService
    test('to test the property `domainService`', () async {
      // TODO
    });

    // Service catalog details for the domain's TLD.
    // JsonObject service
    test('to test the property `service`', () async {
      // TODO
    });

    // Whether Whois privacy is available for the TLD.
    // bool whoisPrivacy
    test('to test the property `whoisPrivacy`', () async {
      // TODO
    });

    // Calculated registration price, when available.
    // String new_
    test('to test the property `new_`', () async {
      // TODO
    });

    // Calculated renewal price, when available.
    // String renewal
    test('to test the property `renewal`', () async {
      // TODO
    });

    // Calculated transfer price, when available.
    // String transfer
    test('to test the property `transfer`', () async {
      // TODO
    });

    // Registrar field requirements for this domain/TLD.
    // JsonObject fields
    test('to test the property `fields`', () async {
      // TODO
    });

    // Pricing information normalized to supported currencies.
    // JsonObject currencies
    test('to test the property `currencies`', () async {
      // TODO
    });

  });
}
