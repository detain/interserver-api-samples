note
    description: "API tests for SCRUBIPS_API"
    date: "$Date$"
    revision: "$Revision$"


class SCRUBIPS_API_TEST

inherit

    EQA_TEST_SET

feature -- Test routines


    test_cancel_scrub_ip
            -- Cancel Scrub IP Service
            --
            -- Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.
        local
            l_response: CANCEL_SCRUB_IP_200_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.cancel_scrub_ip(l_id)
            assert ("not_implemented", False)
        end

    test_create_filter
            -- Create Traffic Filter
            --
            -- Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use &#x60;GET /scrub_ips/filter_types&#x60; to list available filter types.
        local
            l_response: CREATE_FILTER_201_RESPONSE
            l_id: INTEGER_32
            l_create_filter: CREATE_FILTER
        do
            -- TODO: Initialize required params.
            -- l_id
            -- l_create_filter

            -- l_response := api.create_filter(l_id, l_create_filter)
            assert ("not_implemented", False)
        end

    test_create_geo_rule
            -- Create Geo Firewall Rule
            --
            -- Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.
        local
            l_response: CREATE_RULE_201_RESPONSE
            l_id: INTEGER_32
            l_create_geo_firewall_rule: CREATE_GEO_FIREWALL_RULE
        do
            -- TODO: Initialize required params.
            -- l_id
            -- l_create_geo_firewall_rule

            -- l_response := api.create_geo_rule(l_id, l_create_geo_firewall_rule)
            assert ("not_implemented", False)
        end

    test_create_rule
            -- Create Firewall Rule
            --
            -- Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.
        local
            l_response: CREATE_RULE_201_RESPONSE
            l_id: INTEGER_32
            l_create_firewall_rule: CREATE_FIREWALL_RULE
        do
            -- TODO: Initialize required params.
            -- l_id
            -- l_create_firewall_rule

            -- l_response := api.create_rule(l_id, l_create_firewall_rule)
            assert ("not_implemented", False)
        end

    test_delete_filter
            -- Delete Traffic Filter
            --
            -- Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.
        local
            l_response: DELETE_FILTER_200_RESPONSE
            l_id: INTEGER_32
            l_create_filter: CREATE_FILTER
        do
            -- TODO: Initialize required params.
            -- l_id
            -- l_create_filter

            -- l_response := api.delete_filter(l_id, l_create_filter)
            assert ("not_implemented", False)
        end

    test_disable_scrub
            -- Disable Scrub Protection
            --
            -- Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.
        local
            l_response: DISABLE_SCRUB_200_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.disable_scrub(l_id)
            assert ("not_implemented", False)
        end

    test_enable_scrub
            -- Enable Scrub Protection
            --
            -- Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.
        local
            l_response: ENABLE_SCRUB_200_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.enable_scrub(l_id)
            assert ("not_implemented", False)
        end

    test_order_detail
            -- Get Scrub IP Ordering Information
            --
            -- Returns the available Scrub IP service plans and pricing information needed to build an order form.
        local
            l_response: GET_ORDER_DETAIL_200_RESPONSE
        do
            -- TODO: Initialize required params.

            -- l_response := api.order_detail
            assert ("not_implemented", False)
        end

    test_place_scrub_order
            -- Place Scrub IP Order
            --
            -- Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.
        local
            l_response: PLACE_SCRUB_ORDER_201_RESPONSE
            l_scrub_ip_place_order: SCRUB_IP_PLACE_ORDER
        do
            -- TODO: Initialize required params.
            -- l_scrub_ip_place_order

            -- l_response := api.place_scrub_order(l_scrub_ip_place_order)
            assert ("not_implemented", False)
        end

    test_scrub_ip_details
            -- Get Scrub IP Details
            --
            -- Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.
        local
            l_response: GET_SCRUB_IP_DETAILS_200_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.scrub_ip_details(l_id)
            assert ("not_implemented", False)
        end

    test_scrub_ip_filter_types
            -- List Scrub Filter Types
            --
            -- Returns the list of scrub filter types that can be used when creating filter rules via &#x60;/scrub_ips/{id}/create_filter&#x60;.
        local
            l_response: SCRUB_IP_FILTER_TYPES
        do
            -- TODO: Initialize required params.

            -- l_response := api.scrub_ip_filter_types
            assert ("not_implemented", False)
        end

    test_scrub_ip_invoices
            -- Get ScrubIp Invoices
            --
            -- Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.
        local
            l_response: CHARGE_INVOICE_ROWS
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.scrub_ip_invoices(l_id)
            assert ("not_implemented", False)
        end

    test_scrub_ip_logs
            -- Get Scrub IP Logs
            --
            -- Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.
        local
            l_response: LIST [SCRUB_IPS_LOG_ROW_SCHEMA]
            l_id: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.scrub_ip_logs(l_id)
            assert ("not_implemented", False)
        end

    test_scrub_ips_delete_geo_rule
            -- Delete Geo Firewall Rule
            --
            -- Removes an existing geographic-based firewall rule from the Scrub IP service. Use the &#x60;rule_id&#x60; from the service details response to identify the rule to delete.
        local
            l_response: SCRUB_IPS_DELETE_RULE_200_RESPONSE
            l_id: INTEGER_32
            l_delete_geo_firewall_rule: DELETE_GEO_FIREWALL_RULE
        do
            -- TODO: Initialize required params.
            -- l_id
            -- l_delete_geo_firewall_rule

            -- l_response := api.scrub_ips_delete_geo_rule(l_id, l_delete_geo_firewall_rule)
            assert ("not_implemented", False)
        end

    test_scrub_ips_delete_rule
            -- Delete Firewall Rule
            --
            -- Removes an existing firewall rule from the Scrub IP service. Use the &#x60;rule_id&#x60; from the service details response to identify the rule to delete.
        local
            l_response: SCRUB_IPS_DELETE_RULE_200_RESPONSE
            l_id: INTEGER_32
            l_delete_firewall_rule: DELETE_FIREWALL_RULE
        do
            -- TODO: Initialize required params.
            -- l_id
            -- l_delete_firewall_rule

            -- l_response := api.scrub_ips_delete_rule(l_id, l_delete_firewall_rule)
            assert ("not_implemented", False)
        end

    test_scrub_ips_list
            -- List Scrub IP Services
            --
            -- Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.
        local
            l_response: LIST [SCRUB_IPS_ROW_SCHEMA]
        do
            -- TODO: Initialize required params.

            -- l_response := api.scrub_ips_list
            assert ("not_implemented", False)
        end

feature {NONE} -- Implementation

    api: SCRUBIPS_API
            -- Create an object instance of `SCRUBIPS_API'.
        once
            create { SCRUBIPS_API } Result
        end

end
