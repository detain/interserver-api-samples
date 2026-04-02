import 'package:swagger/api.dart';
import 'package:test/test.dart';


/// tests for DomainsApi
void main() {
  var instance = new DomainsApi();

  group('tests for DomainsApi', () {
    // Place Domain Order
    //
    // Places a new domain registration or transfer order. Use the results from `/domains/lookup/{name}` or `/domains/order/{domain}/{regType}` to populate the required domain fields before submitting the order.
    //
    //Future<ServiceOrderPostResponse> addDomain() async
    test('test addDomain', () async {
      // TODO
    });

    // Add Domain DNSSEC Records
    //
    // Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.
    //
    //Future<SuccessTextResponse> addDomainDnssec(DomainDnssecRequest body, List<int> algorithm, List<int> digestType, List<String> digest, List<int> keyTag, int id) async
    test('test addDomainDnssec', () async {
      // TODO
    });

    // Add Registered Nameserver
    //
    // Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use `GET /domains/{id}/nameservers` to confirm that the new entry exists.
    //
    //Future<TextResponse> addDomainNameserver(DomainNameserverPostRequest body, String name, String ipAddress, int id) async
    test('test addDomainNameserver', () async {
      // TODO
    });

    // Cancel Domain Order
    //
    // Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a `canceled` status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.
    //
    //Future<InlineResponse2002> cancelDomain(int id) async
    test('test cancelDomain', () async {
      // TODO
    });

    // Remove Domain DNSSEC Records
    //
    // Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.
    //
    //Future<SuccessTextResponse> deleteDomainDnssec(int id, String action) async
    test('test deleteDomainDnssec', () async {
      // TODO
    });

    // Delete Registered Nameserver
    //
    // Removes a registered nameserver (glue record) from the domain. Specify the zero-based `index` of the nameserver to remove as returned by `GET /domains/{id}/nameservers`.
    //
    //Future<TextResponse> deleteDomainNameserver(int id, int index) async
    test('test deleteDomainNameserver', () async {
      // TODO
    });

    // Get Domain Contact Details
    //
    // Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.
    //
    //Future<DomainContactDetails> getDomainContact(int id) async
    test('test getDomainContact', () async {
      // TODO
    });

    // Get Domain DNSSEC Records
    //
    // Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.
    //
    //Future<DomainDnssecRecords> getDomainDnssec(int id) async
    test('test getDomainDnssec', () async {
      // TODO
    });

    // Get Domain Order
    //
    // Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the `domain_hostname` from this response when calling `/domains/lookup/{name}` or when interacting with nameserver and DNSSEC management endpoints.
    //
    //Future<Domain> getDomainInfo(int id) async
    test('test getDomainInfo', () async {
      // TODO
    });

    // Get Domain Invoices
    //
    // Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.
    //
    //Future<ChargeInvoiceRows> getDomainInvoices(int id) async
    test('test getDomainInvoices', () async {
      // TODO
    });

    // Lookup Domain Availability and Pricing
    //
    // Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to `/domains/order` when placing a registration or transfer.
    //
    //Future<DomainLookupResponse> getDomainLookup(String name) async
    test('test getDomainLookup', () async {
      // TODO
    });

    // List Registered Nameservers
    //
    // Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.
    //
    //Future<DomainNameserverGetResponse> getDomainNameservers(int id) async
    test('test getDomainNameservers', () async {
      // TODO
    });

    // Get Domain Order Fields
    //
    // Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for `POST /domains/order`.
    //
    //Future getDomainOrderFields(String domain, String regType) async
    test('test getDomainOrderFields', () async {
      // TODO
    });

    // Get Domain Order Search Results
    //
    // Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.
    //
    //Future getDomainOrderSearchResults(String domain) async
    test('test getDomainOrderSearchResults', () async {
      // TODO
    });

    // Start Domain Renewal Flow
    //
    // Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.
    //
    //Future<SuccessTextResponse> getDomainRenewal(int id) async
    test('test getDomainRenewal', () async {
      // TODO
    });

    // Search Domain Suggestions
    //
    // Queries the registrar for suggested domains and availability data. Use the returned `lookup` results to identify availability and then call `/domains/lookup/{name}` or `/domains/order` to obtain pricing and order fields for the chosen domain.
    //
    //Future<DomainSearchResponse> getDomainSearch(String name) async
    test('test getDomainSearch', () async {
      // TODO
    });

    // Start Domain Transfer Flow
    //
    // Initiates the transfer workflow for a domain already in your account. Use this in coordination with `/domains/{id}/contact` to ensure registrant details are ready for the transfer request.
    //
    //Future<SuccessTextResponse> getDomainTransfer(int id) async
    test('test getDomainTransfer', () async {
      // TODO
    });

    // Get Whois Privacy Status
    //
    // Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.
    //
    //Future<SuccessTextResponse> getDomainWhoisPrivacy(int id) async
    test('test getDomainWhoisPrivacy', () async {
      // TODO
    });

    // List Domain Orders
    //
    // Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the `domain_id` from this response with `GET /domains/{id}` to fetch full service details, or with `/domains/{id}/nameservers`, `/domains/{id}/contact`, and `/domains/{id}/whois` to manage registration settings.
    //
    //Future<List<DomainRow>> getDomainsList() async
    test('test getDomainsList', () async {
      // TODO
    });

    // Resend Domain Welcome Email
    //
    // Resends the welcome email for the domain service. The email contains registration details and management instructions.
    //
    //Future<SuccessTextResponse> getDomainsWelcomeEmail(int id) async
    test('test getDomainsWelcomeEmail', () async {
      // TODO
    });

    // Get Domain Ordering Information
    //
    // Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the `tldServices` map to resolve a TLD into a service ID when you build an order request for `/domains/order` (POST) or the domain-field lookup endpoints.
    //
    //Future<DomainOrder> getNewDomain() async
    test('test getNewDomain', () async {
      // TODO
    });

    // Validate Domain Order
    //
    // Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for `/domains/order` (POST).
    //
    //Future patchDomains() async
    test('test patchDomains', () async {
      // TODO
    });

    // Request Domain Renewal
    //
    // Submits a domain renewal request for the order. Use `/domains/{id}/invoices` to identify any invoices created as part of the renewal flow.
    //
    //Future<SuccessTextResponse> postDomainRenewal(int id) async
    test('test postDomainRenewal', () async {
      // TODO
    });

    // Request Domain Transfer
    //
    // Submits a transfer request for the domain order. Use `/domains/{id}/invoices` to identify any invoices generated as part of the transfer process.
    //
    //Future<SuccessTextResponse> postDomainTransfer(int id) async
    test('test postDomainTransfer', () async {
      // TODO
    });

    // Domain Order Search
    //
    // Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.
    //
    //Future putDomains() async
    test('test putDomains', () async {
      // TODO
    });

    // Update Domain Contact Details
    //
    // Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.
    //
    //Future<SuccessTextResponse> updateDomainContact(DomainContactDetails body, String status, String state, String orgName, String country, String postalCode, String email, String fax, String address2, String address3, String address1, String city, String phone, String firstName, String lastName, int id) async
    test('test updateDomainContact', () async {
      // TODO
    });

    // Update Domain Order
    //
    // Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.
    //
    //Future<SuccessTextResponse> updateDomainInfo(String id) async
    test('test updateDomainInfo', () async {
      // TODO
    });

    // Replace Nameserver Set
    //
    // Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.
    //
    //Future<TextResponse> updateDomainNameservers(DomainNameserverPutRequest body, List<String> nameserver, int id) async
    test('test updateDomainNameservers', () async {
      // TODO
    });

    // Update Whois Privacy
    //
    // Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use `/domains/{id}/invoices` to track billing events.
    //
    //Future<SuccessTextResponse> updateDomainWhoisPrivacy(DomainWhoisPrivacyRequest body, String func, String csrfToken, String domainFirstname, String domainLastname, String domainEmail, String domainAddress, String domainAddress2, String domainAddress3, String domainCity, String domainState, String domainZip, String domainCountry, String domainPhone, String domainFax, String domainCompany, String domainExtra, int id) async
    test('test updateDomainWhoisPrivacy', () async {
      // TODO
    });

  });
}
