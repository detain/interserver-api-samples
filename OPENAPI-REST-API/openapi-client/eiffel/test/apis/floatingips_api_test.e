note
    description: "API tests for FLOATINGIPS_API"
    date: "$Date$"
    revision: "$Revision$"


class FLOATINGIPS_API_TEST

inherit

    EQA_TEST_SET

feature -- Test routines


    test_add_floating_ip
            -- Place Floating IP Order
            --
            -- Places an order for a new Floating IP service. Use &#x60;PUT /floating_ips/order&#x60; to validate the order first.
        local
        do
            -- TODO: Initialize required params.

            -- api.add_floating_ip
            assert ("not_implemented", False)
        end

    test_floating_ip_info
            -- View Floating IP
            --
            -- Returns detailed information about a specific Floating IP service including its current target IP assignment.
        local
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- api.floating_ip_info(l_id)
            assert ("not_implemented", False)
        end

    test_floating_ip_invoices
            -- Get Floating IP Invoices
            --
            -- Returns the billing invoices associated with this Floating IP service.
        local
            l_response: CHARGE_INVOICE_ROWS
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.floating_ip_invoices(l_id)
            assert ("not_implemented", False)
        end

    test_floating_ips_cancel
            -- Cancel Floating IP
            --
            -- Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.
        local
            l_response: FLOATING_IPS_CANCEL_200_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.floating_ips_cancel(l_id)
            assert ("not_implemented", False)
        end

    test_floating_ips_list
            -- List Floating IPs
            --
            -- Returns all Floating IP services on the account with their current status and assignment details.
        local
        do
            -- TODO: Initialize required params.

            -- api.floating_ips_list
            assert ("not_implemented", False)
        end

    test_floating_ips_welcome_email
            -- Resend Floating IPs Welcome Email
            --
            -- Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.
        local
            l_response: SUCCESS_TEXT_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.floating_ips_welcome_email(l_id)
            assert ("not_implemented", False)
        end

    test_new_floating_ip
            -- Get Floating IP Ordering Information
            --
            -- Retrieves available options and pricing for ordering a new Floating IP.
        local
        do
            -- TODO: Initialize required params.

            -- api.new_floating_ip
            assert ("not_implemented", False)
        end

    test_post_floating_ips_change_ip
            -- Change Floating IP Target
            --
            -- Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use &#x60;GET /floating_ips/{id}&#x60; to view the current target before making changes.
        local
            l_response: SUCCESS_TEXT_RESPONSE
            l_id: INTEGER_32
            l_ip: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_id
            -- l_ip

            -- l_response := api.post_floating_ips_change_ip(l_id, l_ip)
            assert ("not_implemented", False)
        end

    test_put_floating_ips
            -- Validate Floating IP Order
            --
            -- Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.
        local
        do
            -- TODO: Initialize required params.

            -- api.put_floating_ips
            assert ("not_implemented", False)
        end

    test_update_floating_ip_info
            -- Update Floating IP
            --
            -- Updates settings on a Floating IP service, such as its label or configuration metadata.
        local
            l_id: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- api.update_floating_ip_info(l_id)
            assert ("not_implemented", False)
        end

feature {NONE} -- Implementation

    api: FLOATINGIPS_API
            -- Create an object instance of `FLOATINGIPS_API'.
        once
            create { FLOATINGIPS_API } Result
        end

end
