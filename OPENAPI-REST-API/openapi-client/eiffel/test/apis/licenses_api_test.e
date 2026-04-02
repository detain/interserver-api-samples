note
    description: "API tests for LICENSES_API"
    date: "$Date$"
    revision: "$Revision$"


class LICENSES_API_TEST

inherit

    EQA_TEST_SET

feature -- Test routines


    test_add_license
            -- Place License Order
            --
            -- Places an order for a new software license. Use &#x60;PUT /licenses/order&#x60; to validate the order first.
        local
            l_response: SERVICE_ORDER_POST_RESPONSE
        do
            -- TODO: Initialize required params.

            -- l_response := api.add_license
            assert ("not_implemented", False)
        end

    test_license_info
            -- Get License
            --
            -- Returns detailed information about a specific license including its type, IP assignment, and status.
        local
            l_response: LICENSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.license_info(l_id)
            assert ("not_implemented", False)
        end

    test_license_invoices
            -- Get License Invoices
            --
            -- Returns the billing invoices associated with this license service.
        local
            l_response: CHARGE_INVOICE_ROWS
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.license_invoices(l_id)
            assert ("not_implemented", False)
        end

    test_license_list
            -- List Licenses
            --
            -- Returns all software license services on the account with their current status and IP assignments.
        local
            l_response: LIST [LICENSE_ROW]
        do
            -- TODO: Initialize required params.

            -- l_response := api.license_list
            assert ("not_implemented", False)
        end

    test_license_order_cat_tag_info
            -- Get License Order Information for Category
            --
            -- Returns the available license types and pricing for a specific license category. Use the category tags from &#x60;GET /licenses/order&#x60; to identify valid values.
        local
            l_cat_tag: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_cat_tag

            -- api.license_order_cat_tag_info(l_cat_tag)
            assert ("not_implemented", False)
        end

    test_licenses_cancel
            -- Cancel License
            --
            -- Cancels a license service. After cancellation the license key is deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
        local
            l_response: LICENSES_CANCEL_200_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.licenses_cancel(l_id)
            assert ("not_implemented", False)
        end

    test_licenses_welcome_email
            -- Resend License Welcome Email
            --
            -- Resends the welcome email for the license service. The email contains the license key and activation instructions.
        local
            l_response: SUCCESS_TEXT_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.licenses_welcome_email(l_id)
            assert ("not_implemented", False)
        end

    test_new_license
            -- Get License Order Information
            --
            -- Retrieves available license types, categories, and pricing for ordering a new license.
        local
            l_response: LICENSES_ORDER
        do
            -- TODO: Initialize required params.

            -- l_response := api.new_license
            assert ("not_implemented", False)
        end

    test_post_license_change_ip
            -- Change License IP
            --
            -- Changes the IP address associated with the license. The service must be active. Use &#x60;GET /licenses/{id}&#x60; to view the current IP assignment before making changes.
        local
            l_response: SUCCESS_TEXT_RESPONSE
            l_id: INTEGER_32
            l_ip_object: IP_OBJECT
        do
            -- TODO: Initialize required params.
            -- l_id
            -- l_ip_object

            -- l_response := api.post_license_change_ip(l_id, l_ip_object)
            assert ("not_implemented", False)
        end

    test_put_licenses
            -- Validate License Order
            --
            -- Validates a license order before placing it. Use this to check for errors before committing to a purchase.
        local
        do
            -- TODO: Initialize required params.

            -- api.put_licenses
            assert ("not_implemented", False)
        end

    test_update_license_info
            -- Update License
            --
            -- Updates settings on a license service such as its assigned IP.
        local
            l_response: SUCCESS_TEXT_RESPONSE
            l_id: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.update_license_info(l_id)
            assert ("not_implemented", False)
        end

feature {NONE} -- Implementation

    api: LICENSES_API
            -- Create an object instance of `LICENSES_API'.
        once
            create { LICENSES_API } Result
        end

end
