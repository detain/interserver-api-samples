note
    description: "API tests for SERVERS_API"
    date: "$Date$"
    revision: "$Revision$"


class SERVERS_API_TEST

inherit

    EQA_TEST_SET

feature -- Test routines


    test_add_server
            -- Place Server Order
            --
            -- Places an order for a new dedicated server. Use &#x60;PUT /servers/order&#x60; to validate the order first.
        local
        do
            -- TODO: Initialize required params.

            -- api.add_server
            assert ("not_implemented", False)
        end

    test_buy_it_now_server_order
            -- Get Buy Now Server Options
            --
            -- Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via &#x60;POST /servers/order/buy_now_server&#x60;.
        local
            l_response: BUY_IT_NOW_SERVER_ORDER_200_RESPONSE
        do
            -- TODO: Initialize required params.

            -- l_response := api.buy_it_now_server_order
            assert ("not_implemented", False)
        end

    test_mp_servers
            -- List Marketplace Servers
            --
            -- Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
        local
            l_response: BUY_IT_NOW_LIST
        do
            -- TODO: Initialize required params.

            -- l_response := api.mp_servers
            assert ("not_implemented", False)
        end

    test_new_server
            -- Server Ordering Information
            --
            -- Retrieves available server configurations and pricing for ordering a new dedicated server.
        local
            l_response: SERVER_ORDER
        do
            -- TODO: Initialize required params.

            -- l_response := api.new_server
            assert ("not_implemented", False)
        end

    test_place_buy_now_server
            -- Place Buy Now Server Order
            --
            -- Places an order for a buy-it-now dedicated server. Use &#x60;GET /servers/order/buy_now_server&#x60; to retrieve available server configurations and their IDs before ordering.
        local
            l_response: SERVERS_BUY_NOW_RESPONSE
            l_place_buy_now_server_request: PLACE_BUY_NOW_SERVER_REQUEST
        do
            -- TODO: Initialize required params.

            -- l_response := api.place_buy_now_server(l_place_buy_now_server_request)
            assert ("not_implemented", False)
        end

    test_post_server_reverse_dns
            -- Update Reverse DNS
            --
            -- Updates the reverse DNS (PTR record) entries for the server&#39;s IP addresses.
        local
            l_response: TEXT_RESPONSE
            l_id: INTEGER_32
            l_reverse_dns_entries: REVERSE_DNS_ENTRIES
        do
            -- TODO: Initialize required params.
            -- l_id
            -- l_reverse_dns_entries

            -- l_response := api.post_server_reverse_dns(l_id, l_reverse_dns_entries)
            assert ("not_implemented", False)
        end

    test_put_servers
            -- Validate Server Order
            --
            -- Validates a server order before placing it. Use this to check for errors before committing to a purchase.
        local
        do
            -- TODO: Initialize required params.

            -- api.put_servers
            assert ("not_implemented", False)
        end

    test_server_info
            -- Get Server Order
            --
            -- Returns detailed information about a specific server including its hardware configuration, IPs, and status.
        local
            l_response: SERVER
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.server_info(l_id)
            assert ("not_implemented", False)
        end

    test_server_invoices
            -- Get Server Invoices
            --
            -- Returns the billing invoices associated with this dedicated server.
        local
            l_response: CHARGE_INVOICE_ROWS
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.server_invoices(l_id)
            assert ("not_implemented", False)
        end

    test_server_ipmi_live_get
            -- Server IPMI Live Information
            --
            -- Returns the current IPMI live connection information for the server.
        local
            l_response: SERVER_IPMI_LIVE_INFO
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.server_ipmi_live_get(l_id)
            assert ("not_implemented", False)
        end

    test_server_ipmi_live_post
            -- Server IPMI Live Setup
            --
            -- Configures IPMI live access by whitelisting your current IP address for connections to the server&#39;s IPMI management interface.
        local
            l_response: SERVER_IPMI_LIVE_INFO
            l_id: INTEGER_32
            l_ip: STRING_32
            l_asset: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id
            -- l_ip

            -- l_response := api.server_ipmi_live_post(l_id, l_ip, l_asset)
            assert ("not_implemented", False)
        end

    test_server_ipmi_power_get
            -- Get IPMI Power Status
            --
            -- Returns the chassis power status from ipmi.
        local
            l_response: TEXT_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.server_ipmi_power_get(l_id)
            assert ("not_implemented", False)
        end

    test_server_ipmi_power_post
            -- Server IPMI Power
            --
            -- Uses the IPMI interface to set the Power status on the server.
        local
            l_response: TEXT_RESPONSE
            l_id: INTEGER_32
            l_action: STRING_32
            l_asset: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id
            -- l_action

            -- l_response := api.server_ipmi_power_post(l_id, l_action, l_asset)
            assert ("not_implemented", False)
        end

    test_server_list
            -- List Servers
            --
            -- Returns all dedicated server services on the account with their current status and configuration.
        local
            l_response: LIST [SERVER_ROW]
        do
            -- TODO: Initialize required params.

            -- l_response := api.server_list
            assert ("not_implemented", False)
        end

    test_server_reverse_dns
            -- Reverse DNS Info
            --
            -- Returns the current reverse DNS (PTR record) entries for the server&#39;s IP addresses.
        local
            l_response: REVERSE_DNS_ENTRIES
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.server_reverse_dns(l_id)
            assert ("not_implemented", False)
        end

    test_servers_cancel
            -- Cancel Server Service
            --
            -- Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
        local
            l_response: SERVERS_CANCEL_200_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.servers_cancel(l_id)
            assert ("not_implemented", False)
        end

    test_servers_welcome_email
            -- Resend Server Welcome Email
            --
            -- Resends the welcome email for the order.
        local
            l_response: SUCCESS_TEXT_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.servers_welcome_email(l_id)
            assert ("not_implemented", False)
        end

    test_update_server_info
            -- Update Server Order
            --
            -- Updates settings on a dedicated server order.
        local
            l_id: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- api.update_server_info(l_id)
            assert ("not_implemented", False)
        end

feature {NONE} -- Implementation

    api: SERVERS_API
            -- Create an object instance of `SERVERS_API'.
        once
            create { SERVERS_API } Result
        end

end
