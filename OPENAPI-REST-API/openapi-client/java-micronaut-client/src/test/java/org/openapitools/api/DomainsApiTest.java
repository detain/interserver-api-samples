package org.openapitools.api;

import org.openapitools.model.CancelDomain200Response;
import org.openapitools.model.ChargeInvoiceRows;
import org.openapitools.model.Domain;
import org.openapitools.model.DomainContactDetails;
import org.openapitools.model.DomainDnssecRecords;
import org.openapitools.model.DomainDnssecRequest;
import org.openapitools.model.DomainLookupResponse;
import org.openapitools.model.DomainNameserverGetResponse;
import org.openapitools.model.DomainNameserverPostRequest;
import org.openapitools.model.DomainNameserverPutRequest;
import org.openapitools.model.DomainOrder;
import org.openapitools.model.DomainRow;
import org.openapitools.model.DomainSearchResponse;
import org.openapitools.model.DomainWhoisPrivacyRequest;
import org.openapitools.model.GetAccountInfo401Response;
import org.openapitools.model.SuccessTextResponse;
import org.openapitools.model.TextResponse;
import io.micronaut.test.extensions.junit5.annotation.MicronautTest;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Disabled;
import jakarta.inject.Inject;
import java.util.Arrays;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.HashSet;

/**
 * API tests for DomainsApi
 */
@MicronautTest
public class DomainsApiTest {

    @Inject
    DomainsApi api;

    
    /**
     * Place Domain Order
     *
     * Places a new domain registration or transfer order. Use the results from &#x60;/domains/lookup/{name}&#x60; or &#x60;/domains/order/{domain}/{regType}&#x60; to populate the required domain fields before submitting the order.
     */
    @Test
    @Disabled("Not Implemented")
    public void addDomainTest() {
        // given

        // when
        api.addDomain().block();

        // then
        // TODO implement the addDomainTest()
    }

    
    /**
     * Add Domain DNSSEC Records
     *
     * Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.
     */
    @Test
    @Disabled("Not Implemented")
    public void addDomainDnssecTest() {
        // given
        Integer id = 56;
        DomainDnssecRequest domainDnssecRequest = new DomainDnssecRequest();

        // when
        SuccessTextResponse body = api.addDomainDnssec(id, domainDnssecRequest).block();

        // then
        // TODO implement the addDomainDnssecTest()
    }

    
    /**
     * Add Registered Nameserver
     *
     * Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use &#x60;GET /domains/{id}/nameservers&#x60; to confirm that the new entry exists.
     */
    @Test
    @Disabled("Not Implemented")
    public void addDomainNameserverTest() {
        // given
        Integer id = 56;
        DomainNameserverPostRequest domainNameserverPostRequest = new DomainNameserverPostRequest("ns1.host.com", "1.2.3.4Get");

        // when
        TextResponse body = api.addDomainNameserver(id, domainNameserverPostRequest).block();

        // then
        // TODO implement the addDomainNameserverTest()
    }

    
    /**
     * Cancel Domain Order
     *
     * Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a &#x60;canceled&#x60; status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.
     */
    @Test
    @Disabled("Not Implemented")
    public void cancelDomainTest() {
        // given
        Integer id = 56;

        // when
        CancelDomain200Response body = api.cancelDomain(id).block();

        // then
        // TODO implement the cancelDomainTest()
    }

    
    /**
     * Remove Domain DNSSEC Records
     *
     * Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.
     */
    @Test
    @Disabled("Not Implemented")
    public void deleteDomainDnssecTest() {
        // given
        Integer id = 56;
        String action = "example";

        // when
        SuccessTextResponse body = api.deleteDomainDnssec(id, action).block();

        // then
        // TODO implement the deleteDomainDnssecTest()
    }

    
    /**
     * Delete Registered Nameserver
     *
     * Removes a registered nameserver (glue record) from the domain. Specify the zero-based &#x60;index&#x60; of the nameserver to remove as returned by &#x60;GET /domains/{id}/nameservers&#x60;.
     */
    @Test
    @Disabled("Not Implemented")
    public void deleteDomainNameserverTest() {
        // given
        Integer id = 56;
        Integer index = 56;

        // when
        TextResponse body = api.deleteDomainNameserver(id, index).block();

        // then
        // TODO implement the deleteDomainNameserverTest()
    }

    
    /**
     * Get Domain Contact Details
     *
     * Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.
     */
    @Test
    @Disabled("Not Implemented")
    public void getDomainContactTest() {
        // given
        Integer id = 56;

        // when
        DomainContactDetails body = api.getDomainContact(id).block();

        // then
        // TODO implement the getDomainContactTest()
    }

    
    /**
     * Get Domain DNSSEC Records
     *
     * Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.
     */
    @Test
    @Disabled("Not Implemented")
    public void getDomainDnssecTest() {
        // given
        Integer id = 56;

        // when
        DomainDnssecRecords body = api.getDomainDnssec(id).block();

        // then
        // TODO implement the getDomainDnssecTest()
    }

    
    /**
     * Get Domain Order
     *
     * Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the &#x60;domain_hostname&#x60; from this response when calling &#x60;/domains/lookup/{name}&#x60; or when interacting with nameserver and DNSSEC management endpoints.
     */
    @Test
    @Disabled("Not Implemented")
    public void getDomainInfoTest() {
        // given
        Integer id = 56;

        // when
        Domain body = api.getDomainInfo(id).block();

        // then
        // TODO implement the getDomainInfoTest()
    }

    
    /**
     * Get Domain Invoices
     *
     * Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.
     */
    @Test
    @Disabled("Not Implemented")
    public void getDomainInvoicesTest() {
        // given
        Integer id = 56;

        // when
        ChargeInvoiceRows body = api.getDomainInvoices(id).block();

        // then
        // TODO implement the getDomainInvoicesTest()
    }

    
    /**
     * Lookup Domain Availability and Pricing
     *
     * Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to &#x60;/domains/order&#x60; when placing a registration or transfer.
     */
    @Test
    @Disabled("Not Implemented")
    public void getDomainLookupTest() {
        // given
        String name = "example";

        // when
        DomainLookupResponse body = api.getDomainLookup(name).block();

        // then
        // TODO implement the getDomainLookupTest()
    }

    
    /**
     * List Registered Nameservers
     *
     * Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.
     */
    @Test
    @Disabled("Not Implemented")
    public void getDomainNameserversTest() {
        // given
        Integer id = 56;

        // when
        DomainNameserverGetResponse body = api.getDomainNameservers(id).block();

        // then
        // TODO implement the getDomainNameserversTest()
    }

    
    /**
     * Get Domain Order Fields
     *
     * Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for &#x60;POST /domains/order&#x60;.
     */
    @Test
    @Disabled("Not Implemented")
    public void getDomainOrderFieldsTest() {
        // given
        String domain = "example";
        String regType = "example";

        // when
        api.getDomainOrderFields(domain, regType).block();

        // then
        // TODO implement the getDomainOrderFieldsTest()
    }

    
    /**
     * Get Domain Order Search Results
     *
     * Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.
     */
    @Test
    @Disabled("Not Implemented")
    public void getDomainOrderSearchResultsTest() {
        // given
        String domain = "example";

        // when
        api.getDomainOrderSearchResults(domain).block();

        // then
        // TODO implement the getDomainOrderSearchResultsTest()
    }

    
    /**
     * Start Domain Renewal Flow
     *
     * Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.
     */
    @Test
    @Disabled("Not Implemented")
    public void getDomainRenewalTest() {
        // given
        Integer id = 56;

        // when
        SuccessTextResponse body = api.getDomainRenewal(id).block();

        // then
        // TODO implement the getDomainRenewalTest()
    }

    
    /**
     * Search Domain Suggestions
     *
     * Queries the registrar for suggested domains and availability data. Use the returned &#x60;lookup&#x60; results to identify availability and then call &#x60;/domains/lookup/{name}&#x60; or &#x60;/domains/order&#x60; to obtain pricing and order fields for the chosen domain.
     */
    @Test
    @Disabled("Not Implemented")
    public void getDomainSearchTest() {
        // given
        String name = "example";

        // when
        DomainSearchResponse body = api.getDomainSearch(name).block();

        // then
        // TODO implement the getDomainSearchTest()
    }

    
    /**
     * Start Domain Transfer Flow
     *
     * Initiates the transfer workflow for a domain already in your account. Use this in coordination with &#x60;/domains/{id}/contact&#x60; to ensure registrant details are ready for the transfer request.
     */
    @Test
    @Disabled("Not Implemented")
    public void getDomainTransferTest() {
        // given
        Integer id = 56;

        // when
        SuccessTextResponse body = api.getDomainTransfer(id).block();

        // then
        // TODO implement the getDomainTransferTest()
    }

    
    /**
     * Get Whois Privacy Status
     *
     * Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.
     */
    @Test
    @Disabled("Not Implemented")
    public void getDomainWhoisPrivacyTest() {
        // given
        Integer id = 56;

        // when
        SuccessTextResponse body = api.getDomainWhoisPrivacy(id).block();

        // then
        // TODO implement the getDomainWhoisPrivacyTest()
    }

    
    /**
     * List Domain Orders
     *
     * Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the &#x60;domain_id&#x60; from this response with &#x60;GET /domains/{id}&#x60; to fetch full service details, or with &#x60;/domains/{id}/nameservers&#x60;, &#x60;/domains/{id}/contact&#x60;, and &#x60;/domains/{id}/whois&#x60; to manage registration settings.
     */
    @Test
    @Disabled("Not Implemented")
    public void getDomainsListTest() {
        // given

        // when
        List<DomainRow> body = api.getDomainsList().block();

        // then
        // TODO implement the getDomainsListTest()
    }

    
    /**
     * Resend Domain Welcome Email
     *
     * Resends the welcome email for the domain service. The email contains registration details and management instructions.
     */
    @Test
    @Disabled("Not Implemented")
    public void getDomainsWelcomeEmailTest() {
        // given
        Integer id = 56;

        // when
        SuccessTextResponse body = api.getDomainsWelcomeEmail(id).block();

        // then
        // TODO implement the getDomainsWelcomeEmailTest()
    }

    
    /**
     * Get Domain Ordering Information
     *
     * Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the &#x60;tldServices&#x60; map to resolve a TLD into a service ID when you build an order request for &#x60;/domains/order&#x60; (POST) or the domain-field lookup endpoints.
     */
    @Test
    @Disabled("Not Implemented")
    public void getNewDomainTest() {
        // given

        // when
        DomainOrder body = api.getNewDomain().block();

        // then
        // TODO implement the getNewDomainTest()
    }

    
    /**
     * Validate Domain Order
     *
     * Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for &#x60;/domains/order&#x60; (POST).
     */
    @Test
    @Disabled("Not Implemented")
    public void patchDomainsTest() {
        // given

        // when
        api.patchDomains().block();

        // then
        // TODO implement the patchDomainsTest()
    }

    
    /**
     * Request Domain Renewal
     *
     * Submits a domain renewal request for the order. Use &#x60;/domains/{id}/invoices&#x60; to identify any invoices created as part of the renewal flow.
     */
    @Test
    @Disabled("Not Implemented")
    public void postDomainRenewalTest() {
        // given
        Integer id = 56;

        // when
        SuccessTextResponse body = api.postDomainRenewal(id).block();

        // then
        // TODO implement the postDomainRenewalTest()
    }

    
    /**
     * Request Domain Transfer
     *
     * Submits a transfer request for the domain order. Use &#x60;/domains/{id}/invoices&#x60; to identify any invoices generated as part of the transfer process.
     */
    @Test
    @Disabled("Not Implemented")
    public void postDomainTransferTest() {
        // given
        Integer id = 56;

        // when
        SuccessTextResponse body = api.postDomainTransfer(id).block();

        // then
        // TODO implement the postDomainTransferTest()
    }

    
    /**
     * Domain Order Search
     *
     * Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.
     */
    @Test
    @Disabled("Not Implemented")
    public void putDomainsTest() {
        // given

        // when
        api.putDomains().block();

        // then
        // TODO implement the putDomainsTest()
    }

    
    /**
     * Update Domain Contact Details
     *
     * Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.
     */
    @Test
    @Disabled("Not Implemented")
    public void updateDomainContactTest() {
        // given
        Integer id = 56;
        DomainContactDetails domainContactDetails = new DomainContactDetails();

        // when
        SuccessTextResponse body = api.updateDomainContact(id, domainContactDetails).block();

        // then
        // TODO implement the updateDomainContactTest()
    }

    
    /**
     * Update Domain Order
     *
     * Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.
     */
    @Test
    @Disabled("Not Implemented")
    public void updateDomainInfoTest() {
        // given
        String id = "example";

        // when
        api.updateDomainInfo(id).block();

        // then
        // TODO implement the updateDomainInfoTest()
    }

    
    /**
     * Replace Nameserver Set
     *
     * Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.
     */
    @Test
    @Disabled("Not Implemented")
    public void updateDomainNameserversTest() {
        // given
        Integer id = 56;
        DomainNameserverPutRequest domainNameserverPutRequest = new DomainNameserverPutRequest(Arrays.asList("example"));

        // when
        TextResponse body = api.updateDomainNameservers(id, domainNameserverPutRequest).block();

        // then
        // TODO implement the updateDomainNameserversTest()
    }

    
    /**
     * Update Whois Privacy
     *
     * Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use &#x60;/domains/{id}/invoices&#x60; to track billing events.
     */
    @Test
    @Disabled("Not Implemented")
    public void updateDomainWhoisPrivacyTest() {
        // given
        Integer id = 56;
        DomainWhoisPrivacyRequest domainWhoisPrivacyRequest = new DomainWhoisPrivacyRequest();

        // when
        SuccessTextResponse body = api.updateDomainWhoisPrivacy(id, domainWhoisPrivacyRequest).block();

        // then
        // TODO implement the updateDomainWhoisPrivacyTest()
    }

    
}
