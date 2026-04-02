//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

import 'package:openapi/api.dart';
import 'package:test/test.dart';


/// tests for DNSApi
void main() {
  // final instance = DNSApi();

  group('tests for DNSApi', () {
    // Create DNS Domain
    //
    // Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer's DNS servers. Use `/dns/{id}` to manage records after creation.
    //
    //Future<SuccessTextResponse> addDnsDomain(String domain, String ip) async
    test('test addDnsDomain', () async {
      // TODO
    });

    // Add DNS Record to Domain
    //
    // Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use `GET /dns/{id}` afterward to confirm the record was created.
    //
    //Future addDnsRecord(String id, String name, DnsRecordType type, String content, { int ttl, int prio }) async
    test('test addDnsRecord', () async {
      // TODO
    });

    // Delete DNS Domain
    //
    // Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.
    //
    //Future<SuccessTextResponse> deleteDnsDomain(String id) async
    test('test deleteDnsDomain', () async {
      // TODO
    });

    // Delete DNS Record
    //
    // Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use `GET /dns/{id}` to verify the record has been removed.
    //
    //Future<SuccessTextResponse> deleteDnsRecord(int domainId, int recordId) async
    test('test deleteDnsRecord', () async {
      // TODO
    });

    // List Domain DNS Records
    //
    // Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record `id` values with `/dns/{domainId}/{recordId}` to update or delete individual records.
    //
    //Future<List<DnsRecord>> getDnsDomain(int id) async
    test('test getDnsDomain', () async {
      // TODO
    });

    // List DNS Domains
    //
    // Returns the DNS domains on your account along with their primary A record content. Use the `id` from each entry with `/dns/{id}` to retrieve the full record set, or to add, update, and delete individual records.
    //
    //Future<List<DnsListItem>> getDnsList() async
    test('test getDnsList', () async {
      // TODO
    });

    // Update DNS Record
    //
    // Updates an existing DNS record with new values. Use `GET /dns/{id}` to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.
    //
    //Future<SuccessTextResponse> updateDnsRecord(int domainId, int recordId, { String name, DnsRecordType type, String content, String ttl, String prio, String disabled, String ordername, String auth }) async
    test('test updateDnsRecord', () async {
      // TODO
    });

  });
}
