note
    description: "API tests for DOMAINS_API"
    date: "$Date$"
    revision: "$Revision$"


class DOMAINS_API_TEST

inherit

    EQA_TEST_SET

feature -- Test routines


    test_add_domain
            -- Place Domain Order
            --
            -- Places a new domain registration or transfer order. Use the results from &#x60;/domains/lookup/{name}&#x60; or &#x60;/domains/order/{domain}/{regType}&#x60; to populate the required domain fields before submitting the order.
        local
        do
            -- TODO: Initialize required params.

            -- api.add_domain
            assert ("not_implemented", False)
        end

    test_add_domain_dnssec
            -- Add Domain DNSSEC Records
            --
            -- Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.
        local
            l_response: SUCCESS_TEXT_RESPONSE
            l_id: INTEGER_32
            l_domain_dnssec_request: DOMAIN_DNSSEC_REQUEST
        do
            -- TODO: Initialize required params.
            -- l_id
            -- l_domain_dnssec_request

            -- l_response := api.add_domain_dnssec(l_id, l_domain_dnssec_request)
            assert ("not_implemented", False)
        end

    test_add_domain_nameserver
            -- Add Registered Nameserver
            --
            -- Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use &#x60;GET /domains/{id}/nameservers&#x60; to confirm that the new entry exists.
        local
            l_response: TEXT_RESPONSE
            l_id: INTEGER_32
            l_domain_nameserver_post_request: DOMAIN_NAMESERVER_POST_REQUEST
        do
            -- TODO: Initialize required params.
            -- l_id
            -- l_domain_nameserver_post_request

            -- l_response := api.add_domain_nameserver(l_id, l_domain_nameserver_post_request)
            assert ("not_implemented", False)
        end

    test_cancel_domain
            -- Cancel Domain Order
            --
            -- Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a &#x60;canceled&#x60; status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.
        local
            l_response: CANCEL_DOMAIN_200_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.cancel_domain(l_id)
            assert ("not_implemented", False)
        end

    test_delete_domain_dnssec
            -- Remove Domain DNSSEC Records
            --
            -- Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.
        local
            l_response: SUCCESS_TEXT_RESPONSE
            l_id: INTEGER_32
            l_action: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_id
            -- l_action

            -- l_response := api.delete_domain_dnssec(l_id, l_action)
            assert ("not_implemented", False)
        end

    test_delete_domain_nameserver
            -- Delete Registered Nameserver
            --
            -- Removes a registered nameserver (glue record) from the domain. Specify the zero-based &#x60;index&#x60; of the nameserver to remove as returned by &#x60;GET /domains/{id}/nameservers&#x60;.
        local
            l_response: TEXT_RESPONSE
            l_id: INTEGER_32
            l_index: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id
            -- l_index

            -- l_response := api.delete_domain_nameserver(l_id, l_index)
            assert ("not_implemented", False)
        end

    test_domain_contact
            -- Get Domain Contact Details
            --
            -- Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.
        local
            l_response: DOMAIN_CONTACT_DETAILS
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.domain_contact(l_id)
            assert ("not_implemented", False)
        end

    test_domain_dnssec
            -- Get Domain DNSSEC Records
            --
            -- Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.
        local
            l_response: DOMAIN_DNSSEC_RECORDS
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.domain_dnssec(l_id)
            assert ("not_implemented", False)
        end

    test_domain_info
            -- Get Domain Order
            --
            -- Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the &#x60;domain_hostname&#x60; from this response when calling &#x60;/domains/lookup/{name}&#x60; or when interacting with nameserver and DNSSEC management endpoints.
        local
            l_response: DOMAIN
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.domain_info(l_id)
            assert ("not_implemented", False)
        end

    test_domain_invoices
            -- Get Domain Invoices
            --
            -- Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.
        local
            l_response: CHARGE_INVOICE_ROWS
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.domain_invoices(l_id)
            assert ("not_implemented", False)
        end

    test_domain_lookup
            -- Lookup Domain Availability and Pricing
            --
            -- Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to &#x60;/domains/order&#x60; when placing a registration or transfer.
        local
            l_response: DOMAIN_LOOKUP_RESPONSE
            l_name: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_name

            -- l_response := api.domain_lookup(l_name)
            assert ("not_implemented", False)
        end

    test_domain_nameservers
            -- List Registered Nameservers
            --
            -- Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.
        local
            l_response: DOMAIN_NAMESERVER_GET_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.domain_nameservers(l_id)
            assert ("not_implemented", False)
        end

    test_domain_order_fields
            -- Get Domain Order Fields
            --
            -- Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for &#x60;POST /domains/order&#x60;.
        local
            l_domain: STRING_32
            l_reg_type: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_domain
            -- l_reg_type

            -- api.domain_order_fields(l_domain, l_reg_type)
            assert ("not_implemented", False)
        end

    test_domain_order_search_results
            -- Get Domain Order Search Results
            --
            -- Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.
        local
            l_domain: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_domain

            -- api.domain_order_search_results(l_domain)
            assert ("not_implemented", False)
        end

    test_domain_renewal
            -- Start Domain Renewal Flow
            --
            -- Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.
        local
            l_response: SUCCESS_TEXT_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.domain_renewal(l_id)
            assert ("not_implemented", False)
        end

    test_domain_search
            -- Search Domain Suggestions
            --
            -- Queries the registrar for suggested domains and availability data. Use the returned &#x60;lookup&#x60; results to identify availability and then call &#x60;/domains/lookup/{name}&#x60; or &#x60;/domains/order&#x60; to obtain pricing and order fields for the chosen domain.
        local
            l_response: DOMAIN_SEARCH_RESPONSE
            l_name: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_name

            -- l_response := api.domain_search(l_name)
            assert ("not_implemented", False)
        end

    test_domain_transfer
            -- Start Domain Transfer Flow
            --
            -- Initiates the transfer workflow for a domain already in your account. Use this in coordination with &#x60;/domains/{id}/contact&#x60; to ensure registrant details are ready for the transfer request.
        local
            l_response: SUCCESS_TEXT_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.domain_transfer(l_id)
            assert ("not_implemented", False)
        end

    test_domain_whois_privacy
            -- Get Whois Privacy Status
            --
            -- Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.
        local
            l_response: SUCCESS_TEXT_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.domain_whois_privacy(l_id)
            assert ("not_implemented", False)
        end

    test_domains_list
            -- List Domain Orders
            --
            -- Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the &#x60;domain_id&#x60; from this response with &#x60;GET /domains/{id}&#x60; to fetch full service details, or with &#x60;/domains/{id}/nameservers&#x60;, &#x60;/domains/{id}/contact&#x60;, and &#x60;/domains/{id}/whois&#x60; to manage registration settings.
        local
            l_response: LIST [DOMAIN_ROW]
        do
            -- TODO: Initialize required params.

            -- l_response := api.domains_list
            assert ("not_implemented", False)
        end

    test_domains_welcome_email
            -- Resend Domain Welcome Email
            --
            -- Resends the welcome email for the domain service. The email contains registration details and management instructions.
        local
            l_response: SUCCESS_TEXT_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.domains_welcome_email(l_id)
            assert ("not_implemented", False)
        end

    test_new_domain
            -- Get Domain Ordering Information
            --
            -- Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the &#x60;tldServices&#x60; map to resolve a TLD into a service ID when you build an order request for &#x60;/domains/order&#x60; (POST) or the domain-field lookup endpoints.
        local
            l_response: DOMAIN_ORDER
        do
            -- TODO: Initialize required params.

            -- l_response := api.new_domain
            assert ("not_implemented", False)
        end

    test_patch_domains
            -- Validate Domain Order
            --
            -- Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for &#x60;/domains/order&#x60; (POST).
        local
        do
            -- TODO: Initialize required params.

            -- api.patch_domains
            assert ("not_implemented", False)
        end

    test_post_domain_renewal
            -- Request Domain Renewal
            --
            -- Submits a domain renewal request for the order. Use &#x60;/domains/{id}/invoices&#x60; to identify any invoices created as part of the renewal flow.
        local
            l_response: SUCCESS_TEXT_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.post_domain_renewal(l_id)
            assert ("not_implemented", False)
        end

    test_post_domain_transfer
            -- Request Domain Transfer
            --
            -- Submits a transfer request for the domain order. Use &#x60;/domains/{id}/invoices&#x60; to identify any invoices generated as part of the transfer process.
        local
            l_response: SUCCESS_TEXT_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.post_domain_transfer(l_id)
            assert ("not_implemented", False)
        end

    test_put_domains
            -- Domain Order Search
            --
            -- Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.
        local
        do
            -- TODO: Initialize required params.

            -- api.put_domains
            assert ("not_implemented", False)
        end

    test_update_domain_contact
            -- Update Domain Contact Details
            --
            -- Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.
        local
            l_response: SUCCESS_TEXT_RESPONSE
            l_id: INTEGER_32
            l_domain_contact_details: DOMAIN_CONTACT_DETAILS
        do
            -- TODO: Initialize required params.
            -- l_id
            -- l_domain_contact_details

            -- l_response := api.update_domain_contact(l_id, l_domain_contact_details)
            assert ("not_implemented", False)
        end

    test_update_domain_info
            -- Update Domain Order
            --
            -- Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.
        local
            l_id: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- api.update_domain_info(l_id)
            assert ("not_implemented", False)
        end

    test_update_domain_nameservers
            -- Replace Nameserver Set
            --
            -- Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.
        local
            l_response: TEXT_RESPONSE
            l_id: INTEGER_32
            l_domain_nameserver_put_request: DOMAIN_NAMESERVER_PUT_REQUEST
        do
            -- TODO: Initialize required params.
            -- l_id
            -- l_domain_nameserver_put_request

            -- l_response := api.update_domain_nameservers(l_id, l_domain_nameserver_put_request)
            assert ("not_implemented", False)
        end

    test_update_domain_whois_privacy
            -- Update Whois Privacy
            --
            -- Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use &#x60;/domains/{id}/invoices&#x60; to track billing events.
        local
            l_response: SUCCESS_TEXT_RESPONSE
            l_id: INTEGER_32
            l_domain_whois_privacy_request: DOMAIN_WHOIS_PRIVACY_REQUEST
        do
            -- TODO: Initialize required params.
            -- l_id
            -- l_domain_whois_privacy_request

            -- l_response := api.update_domain_whois_privacy(l_id, l_domain_whois_privacy_request)
            assert ("not_implemented", False)
        end

feature {NONE} -- Implementation

    api: DOMAINS_API
            -- Create an object instance of `DOMAINS_API'.
        once
            create { DOMAINS_API } Result
        end

end
