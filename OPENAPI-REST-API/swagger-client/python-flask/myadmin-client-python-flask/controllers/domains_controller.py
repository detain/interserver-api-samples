import connexion
import six

from myadmin-client-python-flask.models.charge_invoice_rows import ChargeInvoiceRows  # noqa: E501
from myadmin-client-python-flask.models.domain import Domain  # noqa: E501
from myadmin-client-python-flask.models.domain_contact_details import DomainContactDetails  # noqa: E501
from myadmin-client-python-flask.models.domain_dnssec_records import DomainDnssecRecords  # noqa: E501
from myadmin-client-python-flask.models.domain_dnssec_request import DomainDnssecRequest  # noqa: E501
from myadmin-client-python-flask.models.domain_lookup_response import DomainLookupResponse  # noqa: E501
from myadmin-client-python-flask.models.domain_nameserver_get_response import DomainNameserverGetResponse  # noqa: E501
from myadmin-client-python-flask.models.domain_nameserver_post_request import DomainNameserverPostRequest  # noqa: E501
from myadmin-client-python-flask.models.domain_nameserver_put_request import DomainNameserverPutRequest  # noqa: E501
from myadmin-client-python-flask.models.domain_order import DomainOrder  # noqa: E501
from myadmin-client-python-flask.models.domain_row import DomainRow  # noqa: E501
from myadmin-client-python-flask.models.domain_search_response import DomainSearchResponse  # noqa: E501
from myadmin-client-python-flask.models.domain_whois_privacy_request import DomainWhoisPrivacyRequest  # noqa: E501
from myadmin-client-python-flask.models.inline_response2002 import InlineResponse2002  # noqa: E501
from myadmin-client-python-flask.models.inline_response401 import InlineResponse401  # noqa: E501
from myadmin-client-python-flask.models.service_order_post_response import ServiceOrderPostResponse  # noqa: E501
from myadmin-client-python-flask.models.success_text_response import SuccessTextResponse  # noqa: E501
from myadmin-client-python-flask.models.text_response import TextResponse  # noqa: E501
from myadmin-client-python-flask import util


def add_domain():  # noqa: E501
    """Place Domain Order

    Places a new domain registration or transfer order. Use the results from &#x60;/domains/lookup/{name}&#x60; or &#x60;/domains/order/{domain}/{regType}&#x60; to populate the required domain fields before submitting the order. # noqa: E501


    :rtype: ServiceOrderPostResponse
    """
    return 'do some magic!'


def add_domain_dnssec(body, id):  # noqa: E501
    """Add Domain DNSSEC Records

    Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
    :type id: int

    :rtype: SuccessTextResponse
    """
    if connexion.request.is_json:
        body = DomainDnssecRequest.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def add_domain_dnssec(algorithm, digest_type, digest, key_tag, id):  # noqa: E501
    """Add Domain DNSSEC Records

    Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active. # noqa: E501

    :param algorithm: 
    :type algorithm: List[int]
    :param digest_type: 
    :type digest_type: List[int]
    :param digest: 
    :type digest: List[str]
    :param key_tag: 
    :type key_tag: List[int]
    :param id: The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
    :type id: int

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def add_domain_nameserver(body, id):  # noqa: E501
    """Add Registered Nameserver

    Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use &#x60;GET /domains/{id}/nameservers&#x60; to confirm that the new entry exists. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
    :type id: int

    :rtype: TextResponse
    """
    if connexion.request.is_json:
        body = DomainNameserverPostRequest.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def add_domain_nameserver(name, ip_address, id):  # noqa: E501
    """Add Registered Nameserver

    Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use &#x60;GET /domains/{id}/nameservers&#x60; to confirm that the new entry exists. # noqa: E501

    :param name: 
    :type name: str
    :param ip_address: 
    :type ip_address: str
    :param id: The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
    :type id: int

    :rtype: TextResponse
    """
    return 'do some magic!'


def cancel_domain(id):  # noqa: E501
    """Cancel Domain Order

    Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a &#x60;canceled&#x60; status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds. # noqa: E501

    :param id: The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
    :type id: int

    :rtype: InlineResponse2002
    """
    return 'do some magic!'


def delete_domain_dnssec(id, action):  # noqa: E501
    """Remove Domain DNSSEC Records

    Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level. # noqa: E501

    :param id: The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
    :type id: int
    :param action: Set to &#x60;delete&#x60; to remove all DNSSEC records.
    :type action: str

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def delete_domain_nameserver(id, index):  # noqa: E501
    """Delete Registered Nameserver

    Removes a registered nameserver (glue record) from the domain. Specify the zero-based &#x60;index&#x60; of the nameserver to remove as returned by &#x60;GET /domains/{id}/nameservers&#x60;. # noqa: E501

    :param id: The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
    :type id: int
    :param index: The index of the registered nameserver from the registered nameservers list to delete.  
    :type index: int

    :rtype: TextResponse
    """
    return 'do some magic!'


def get_domain_contact(id):  # noqa: E501
    """Get Domain Contact Details

    Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates. # noqa: E501

    :param id: The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
    :type id: int

    :rtype: DomainContactDetails
    """
    return 'do some magic!'


def get_domain_dnssec(id):  # noqa: E501
    """Get Domain DNSSEC Records

    Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request. # noqa: E501

    :param id: The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
    :type id: int

    :rtype: DomainDnssecRecords
    """
    return 'do some magic!'


def get_domain_info(id):  # noqa: E501
    """Get Domain Order

    Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the &#x60;domain_hostname&#x60; from this response when calling &#x60;/domains/lookup/{name}&#x60; or when interacting with nameserver and DNSSEC management endpoints. # noqa: E501

    :param id: The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
    :type id: int

    :rtype: Domain
    """
    return 'do some magic!'


def get_domain_invoices(id):  # noqa: E501
    """Get Domain Invoices

    Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced. # noqa: E501

    :param id: The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
    :type id: int

    :rtype: ChargeInvoiceRows
    """
    return 'do some magic!'


def get_domain_lookup(name):  # noqa: E501
    """Lookup Domain Availability and Pricing

    Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to &#x60;/domains/order&#x60; when placing a registration or transfer. # noqa: E501

    :param name: The full domain name to look up (for example &#x60;example.com&#x60;).
    :type name: str

    :rtype: DomainLookupResponse
    """
    return 'do some magic!'


def get_domain_nameservers(id):  # noqa: E501
    """List Registered Nameservers

    Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records. # noqa: E501

    :param id: The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
    :type id: int

    :rtype: DomainNameserverGetResponse
    """
    return 'do some magic!'


def get_domain_order_fields(domain, reg_type):  # noqa: E501
    """Get Domain Order Fields

    Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for &#x60;POST /domains/order&#x60;. # noqa: E501

    :param domain: The fully qualified domain name (e.g. &#x60;example.com&#x60;).
    :type domain: str
    :param reg_type: The registration type. Common values include &#x60;register&#x60; for new registrations and &#x60;transfer&#x60; for inbound transfers.
    :type reg_type: str

    :rtype: None
    """
    return 'do some magic!'


def get_domain_order_search_results(domain):  # noqa: E501
    """Get Domain Order Search Results

    Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer. # noqa: E501

    :param domain: The fully qualified domain name to look up (e.g. &#x60;example.com&#x60;).
    :type domain: str

    :rtype: None
    """
    return 'do some magic!'


def get_domain_renewal(id):  # noqa: E501
    """Start Domain Renewal Flow

    Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered. # noqa: E501

    :param id: The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
    :type id: int

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def get_domain_search(name):  # noqa: E501
    """Search Domain Suggestions

    Queries the registrar for suggested domains and availability data. Use the returned &#x60;lookup&#x60; results to identify availability and then call &#x60;/domains/lookup/{name}&#x60; or &#x60;/domains/order&#x60; to obtain pricing and order fields for the chosen domain. # noqa: E501

    :param name: The base domain name to search (for example &#x60;example&#x60; or &#x60;example.com&#x60;).
    :type name: str

    :rtype: DomainSearchResponse
    """
    return 'do some magic!'


def get_domain_transfer(id):  # noqa: E501
    """Start Domain Transfer Flow

    Initiates the transfer workflow for a domain already in your account. Use this in coordination with &#x60;/domains/{id}/contact&#x60; to ensure registrant details are ready for the transfer request. # noqa: E501

    :param id: The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
    :type id: int

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def get_domain_whois_privacy(id):  # noqa: E501
    """Get Whois Privacy Status

    Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates. # noqa: E501

    :param id: The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
    :type id: int

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def get_domains_list():  # noqa: E501
    """List Domain Orders

    Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the &#x60;domain_id&#x60; from this response with &#x60;GET /domains/{id}&#x60; to fetch full service details, or with &#x60;/domains/{id}/nameservers&#x60;, &#x60;/domains/{id}/contact&#x60;, and &#x60;/domains/{id}/whois&#x60; to manage registration settings. # noqa: E501


    :rtype: List[DomainRow]
    """
    return 'do some magic!'


def get_domains_welcome_email(id):  # noqa: E501
    """Resend Domain Welcome Email

    Resends the welcome email for the domain service. The email contains registration details and management instructions. # noqa: E501

    :param id: The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
    :type id: int

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def get_new_domain():  # noqa: E501
    """Get Domain Ordering Information

    Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the &#x60;tldServices&#x60; map to resolve a TLD into a service ID when you build an order request for &#x60;/domains/order&#x60; (POST) or the domain-field lookup endpoints. # noqa: E501


    :rtype: DomainOrder
    """
    return 'do some magic!'


def patch_domains():  # noqa: E501
    """Validate Domain Order

    Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for &#x60;/domains/order&#x60; (POST). # noqa: E501


    :rtype: None
    """
    return 'do some magic!'


def post_domain_renewal(id):  # noqa: E501
    """Request Domain Renewal

    Submits a domain renewal request for the order. Use &#x60;/domains/{id}/invoices&#x60; to identify any invoices created as part of the renewal flow. # noqa: E501

    :param id: The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
    :type id: int

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def post_domain_transfer(id):  # noqa: E501
    """Request Domain Transfer

    Submits a transfer request for the domain order. Use &#x60;/domains/{id}/invoices&#x60; to identify any invoices generated as part of the transfer process. # noqa: E501

    :param id: The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
    :type id: int

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def put_domains():  # noqa: E501
    """Domain Order Search

    Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order. # noqa: E501


    :rtype: None
    """
    return 'do some magic!'


def update_domain_contact(body, id):  # noqa: E501
    """Update Domain Contact Details

    Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
    :type id: int

    :rtype: SuccessTextResponse
    """
    if connexion.request.is_json:
        body = DomainContactDetails.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def update_domain_contact(status, state, org_name, country, postal_code, email, fax, address2, address3, address1, city, phone, first_name, last_name, id):  # noqa: E501
    """Update Domain Contact Details

    Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked. # noqa: E501

    :param status: 
    :type status: str
    :param state: 
    :type state: str
    :param org_name: 
    :type org_name: str
    :param country: 
    :type country: str
    :param postal_code: 
    :type postal_code: str
    :param email: 
    :type email: str
    :param fax: 
    :type fax: str
    :param address2: 
    :type address2: str
    :param address3: 
    :type address3: str
    :param address1: 
    :type address1: str
    :param city: 
    :type city: str
    :param phone: 
    :type phone: str
    :param first_name: 
    :type first_name: str
    :param last_name: 
    :type last_name: str
    :param id: The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
    :type id: int

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def update_domain_info(id):  # noqa: E501
    """Update Domain Order

    Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes. # noqa: E501

    :param id: The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
    :type id: str

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def update_domain_nameservers(body, id):  # noqa: E501
    """Replace Nameserver Set

    Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
    :type id: int

    :rtype: TextResponse
    """
    if connexion.request.is_json:
        body = DomainNameserverPutRequest.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def update_domain_nameservers(nameserver, id):  # noqa: E501
    """Replace Nameserver Set

    Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to. # noqa: E501

    :param nameserver: 
    :type nameserver: List[str]
    :param id: The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
    :type id: int

    :rtype: TextResponse
    """
    return 'do some magic!'


def update_domain_whois_privacy(body, id):  # noqa: E501
    """Update Whois Privacy

    Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use &#x60;/domains/{id}/invoices&#x60; to track billing events. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
    :type id: int

    :rtype: SuccessTextResponse
    """
    if connexion.request.is_json:
        body = DomainWhoisPrivacyRequest.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def update_domain_whois_privacy(func, csrf_token, domain_firstname, domain_lastname, domain_email, domain_address, domain_address2, domain_address3, domain_city, domain_state, domain_zip, domain_country, domain_phone, domain_fax, domain_company, domain_extra, id):  # noqa: E501
    """Update Whois Privacy

    Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use &#x60;/domains/{id}/invoices&#x60; to track billing events. # noqa: E501

    :param func: 
    :type func: str
    :param csrf_token: 
    :type csrf_token: str
    :param domain_firstname: 
    :type domain_firstname: str
    :param domain_lastname: 
    :type domain_lastname: str
    :param domain_email: 
    :type domain_email: str
    :param domain_address: 
    :type domain_address: str
    :param domain_address2: 
    :type domain_address2: str
    :param domain_address3: 
    :type domain_address3: str
    :param domain_city: 
    :type domain_city: str
    :param domain_state: 
    :type domain_state: str
    :param domain_zip: 
    :type domain_zip: str
    :param domain_country: 
    :type domain_country: str
    :param domain_phone: 
    :type domain_phone: str
    :param domain_fax: 
    :type domain_fax: str
    :param domain_company: 
    :type domain_company: str
    :param domain_extra: 
    :type domain_extra: str
    :param id: The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
    :type id: int

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'
