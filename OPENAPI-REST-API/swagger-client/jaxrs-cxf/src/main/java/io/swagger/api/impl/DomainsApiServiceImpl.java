package io.swagger.api.impl;

import io.swagger.api.*;
import io.swagger.model.ChargeInvoiceRows;
import io.swagger.model.Domain;
import io.swagger.model.DomainContactDetails;
import io.swagger.model.DomainDnssecRecords;
import io.swagger.model.DomainDnssecRequest;
import io.swagger.model.DomainLookupResponse;
import io.swagger.model.DomainNameserverGetResponse;
import io.swagger.model.DomainNameserverPostRequest;
import io.swagger.model.DomainNameserverPutRequest;
import io.swagger.model.DomainOrder;
import io.swagger.model.DomainRow;
import io.swagger.model.DomainSearchResponse;
import io.swagger.model.DomainWhoisPrivacyRequest;
import io.swagger.model.InlineResponse2002;
import io.swagger.model.InlineResponse401;
import io.swagger.model.SuccessTextResponse;
import io.swagger.model.TextResponse;

import java.io.InputStream;
import java.io.OutputStream;
import java.util.List;
import java.util.Map;
import javax.ws.rs.*;
import javax.ws.rs.core.Response;
import org.apache.cxf.jaxrs.model.wadl.Description;
import org.apache.cxf.jaxrs.model.wadl.DocTarget;

import org.apache.cxf.jaxrs.ext.multipart.*;


/**
 * InterServer Management API
 *
 * <p># Overview  The InterServer Management API provides programmatic access to manage your InterServer services. Use this REST API to automate provisioning, configuration, and billing operations across your account.  The API covers the following service categories: - [Domains](https://www.interserver.net/domains/) — registration, transfers, and DNS management - [Web Hosting](https://www.interserver.net/hosting/) — shared and reseller hosting - [VPS Hosting](https://www.interserver.net/vps/) — virtual private servers - [Dedicated Servers](https://www.interserver.net/dedicated/) — bare metal and [Rapid Deploy Servers](https://www.interserver.net/dedicated/rapid-deploy.html) - [Backups](https://www.interserver.net/storage/) — storage and backup services - Licenses — control panel and software licenses - [Mail](https://www.mail.baby/) — mail delivery services - SSL — certificate provisioning - Billing — invoices, payment methods, and account management  For interactive testing, see the [API documentation](/api-docs/).  # Authentication  Most endpoints require authentication. Two methods are supported:  ## API Key (Preferred)  Generate an API key from the [Account Security](https://my.interserver.net/account_security) page on [my.interserver.net](https://my.interserver.net/). Pass it in the `X-API-KEY` request header:  ``` X-API-KEY: your-api-key-here ```  ## Session-Based Authentication  Alternatively, authenticate by creating a session:  1. **Log in** — Send a `POST` request to `/login` with your account credentials. The response includes a session identifier. 2. **Pass the session ID** — Include the session identifier in the `sessionid` header on subsequent requests:  ``` sessionid: your-session-id-here ```  API key authentication is recommended for most integrations as it does not expire and avoids the overhead of session management.  
 *
 */
public class DomainsApiServiceImpl implements DomainsApi {
    /**
     * Place Domain Order
     *
     * Places a new domain registration or transfer order. Use the results from &#x60;/domains/lookup/{name}&#x60; or &#x60;/domains/order/{domain}/{regType}&#x60; to populate the required domain fields before submitting the order.
     *
     */
    public void addDomain() {
        // TODO: Implement...
        
        
    }
    
    /**
     * Add Domain DNSSEC Records
     *
     * Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.
     *
     */
    public SuccessTextResponse addDomainDnssec(DomainDnssecRequest body, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Add Domain DNSSEC Records
     *
     * Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.
     *
     */
    public SuccessTextResponse addDomainDnssec(List<Integer> algorithm, List<Integer> digestType, List<String> digest, List<Integer> keyTag, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Add Registered Nameserver
     *
     * Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use &#x60;GET /domains/{id}/nameservers&#x60; to confirm that the new entry exists.
     *
     */
    public TextResponse addDomainNameserver(DomainNameserverPostRequest body, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Add Registered Nameserver
     *
     * Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use &#x60;GET /domains/{id}/nameservers&#x60; to confirm that the new entry exists.
     *
     */
    public TextResponse addDomainNameserver(String name, String ipAddress, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Cancel Domain Order
     *
     * Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a &#x60;canceled&#x60; status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.
     *
     */
    public InlineResponse2002 cancelDomain(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Remove Domain DNSSEC Records
     *
     * Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.
     *
     */
    public SuccessTextResponse deleteDomainDnssec(Integer id, String action) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Delete Registered Nameserver
     *
     * Removes a registered nameserver (glue record) from the domain. Specify the zero-based &#x60;index&#x60; of the nameserver to remove as returned by &#x60;GET /domains/{id}/nameservers&#x60;.
     *
     */
    public TextResponse deleteDomainNameserver(Integer id, Integer index) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Get Domain Contact Details
     *
     * Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.
     *
     */
    public DomainContactDetails getDomainContact(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Get Domain DNSSEC Records
     *
     * Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.
     *
     */
    public DomainDnssecRecords getDomainDnssec(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Get Domain Order
     *
     * Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the &#x60;domain_hostname&#x60; from this response when calling &#x60;/domains/lookup/{name}&#x60; or when interacting with nameserver and DNSSEC management endpoints.
     *
     */
    public Domain getDomainInfo(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Get Domain Invoices
     *
     * Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.
     *
     */
    public ChargeInvoiceRows getDomainInvoices(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Lookup Domain Availability and Pricing
     *
     * Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to &#x60;/domains/order&#x60; when placing a registration or transfer.
     *
     */
    public DomainLookupResponse getDomainLookup(String name) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * List Registered Nameservers
     *
     * Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.
     *
     */
    public DomainNameserverGetResponse getDomainNameservers(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Get Domain Order Fields
     *
     * Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for &#x60;POST /domains/order&#x60;.
     *
     */
    public void getDomainOrderFields(String domain, String regType) {
        // TODO: Implement...
        
        
    }
    
    /**
     * Get Domain Order Search Results
     *
     * Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.
     *
     */
    public void getDomainOrderSearchResults(String domain) {
        // TODO: Implement...
        
        
    }
    
    /**
     * Start Domain Renewal Flow
     *
     * Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.
     *
     */
    public SuccessTextResponse getDomainRenewal(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Search Domain Suggestions
     *
     * Queries the registrar for suggested domains and availability data. Use the returned &#x60;lookup&#x60; results to identify availability and then call &#x60;/domains/lookup/{name}&#x60; or &#x60;/domains/order&#x60; to obtain pricing and order fields for the chosen domain.
     *
     */
    public DomainSearchResponse getDomainSearch(String name) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Start Domain Transfer Flow
     *
     * Initiates the transfer workflow for a domain already in your account. Use this in coordination with &#x60;/domains/{id}/contact&#x60; to ensure registrant details are ready for the transfer request.
     *
     */
    public SuccessTextResponse getDomainTransfer(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Get Whois Privacy Status
     *
     * Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.
     *
     */
    public SuccessTextResponse getDomainWhoisPrivacy(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * List Domain Orders
     *
     * Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the &#x60;domain_id&#x60; from this response with &#x60;GET /domains/{id}&#x60; to fetch full service details, or with &#x60;/domains/{id}/nameservers&#x60;, &#x60;/domains/{id}/contact&#x60;, and &#x60;/domains/{id}/whois&#x60; to manage registration settings.
     *
     */
    public List<DomainRow> getDomainsList() {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Resend Domain Welcome Email
     *
     * Resends the welcome email for the domain service. The email contains registration details and management instructions.
     *
     */
    public SuccessTextResponse getDomainsWelcomeEmail(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Get Domain Ordering Information
     *
     * Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the &#x60;tldServices&#x60; map to resolve a TLD into a service ID when you build an order request for &#x60;/domains/order&#x60; (POST) or the domain-field lookup endpoints.
     *
     */
    public DomainOrder getNewDomain() {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Validate Domain Order
     *
     * Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for &#x60;/domains/order&#x60; (POST).
     *
     */
    public void patchDomains() {
        // TODO: Implement...
        
        
    }
    
    /**
     * Request Domain Renewal
     *
     * Submits a domain renewal request for the order. Use &#x60;/domains/{id}/invoices&#x60; to identify any invoices created as part of the renewal flow.
     *
     */
    public SuccessTextResponse postDomainRenewal(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Request Domain Transfer
     *
     * Submits a transfer request for the domain order. Use &#x60;/domains/{id}/invoices&#x60; to identify any invoices generated as part of the transfer process.
     *
     */
    public SuccessTextResponse postDomainTransfer(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Domain Order Search
     *
     * Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.
     *
     */
    public void putDomains() {
        // TODO: Implement...
        
        
    }
    
    /**
     * Update Domain Contact Details
     *
     * Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.
     *
     */
    public SuccessTextResponse updateDomainContact(DomainContactDetails body, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Update Domain Contact Details
     *
     * Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.
     *
     */
    public SuccessTextResponse updateDomainContact(String status, String state, String orgName, String country, String postalCode, String email, String fax, String address2, String address3, String address1, String city, String phone, String firstName, String lastName, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Update Domain Order
     *
     * Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.
     *
     */
    public void updateDomainInfo(String id) {
        // TODO: Implement...
        
        
    }
    
    /**
     * Replace Nameserver Set
     *
     * Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.
     *
     */
    public TextResponse updateDomainNameservers(DomainNameserverPutRequest body, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Replace Nameserver Set
     *
     * Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.
     *
     */
    public TextResponse updateDomainNameservers(List<String> nameserver, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Update Whois Privacy
     *
     * Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use &#x60;/domains/{id}/invoices&#x60; to track billing events.
     *
     */
    public SuccessTextResponse updateDomainWhoisPrivacy(DomainWhoisPrivacyRequest body, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Update Whois Privacy
     *
     * Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use &#x60;/domains/{id}/invoices&#x60; to track billing events.
     *
     */
    public SuccessTextResponse updateDomainWhoisPrivacy(String func, String csrfToken, String domainFirstname, String domainLastname, String domainEmail, String domainAddress, String domainAddress2, String domainAddress3, String domainCity, String domainState, String domainZip, String domainCountry, String domainPhone, String domainFax, String domainCompany, String domainExtra, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
}

