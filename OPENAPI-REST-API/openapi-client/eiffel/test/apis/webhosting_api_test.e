note
    description: "API tests for WEBHOSTING_API"
    date: "$Date$"
    revision: "$Revision$"


class WEBHOSTING_API_TEST

inherit

    EQA_TEST_SET

feature -- Test routines


    test_add_website
            -- Place Website Order
            --
            -- Places an order for a new webhosting package. Use &#x60;PUT /websites/order&#x60; to validate the order first.
        local
        do
            -- TODO: Initialize required params.

            -- api.add_website
            assert ("not_implemented", False)
        end

    test_gett_website_reverse_dns
            -- Get Website Reverse DNS
            --
            -- Returns the current reverse DNS (PTR record) entries for the website&#39;s IP addresses.
        local
            l_response: REVERSE_DNS_ENTRIES
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.gett_website_reverse_dns(l_id)
            assert ("not_implemented", False)
        end

    test_new_website
            -- Website Ordering Information
            --
            -- Retrieves available webhosting plans and pricing for ordering.
        local
            l_response: WEBSITES_ORDER
        do
            -- TODO: Initialize required params.

            -- l_response := api.new_website
            assert ("not_implemented", False)
        end

    test_post_website_buy_ip
            -- Update Website IP DNS
            --
            -- Updates the reverse DNS hostnames for the website&#39;s IP addresses. Provide an &#x60;ips&#x60; object mapping each IP address to its desired hostname.
        local
            l_response: POST_WEBSITE_BUY_IP_200_RESPONSE
            l_id: INTEGER_32
            l_post_website_buy_ip_request: POST_WEBSITE_BUY_IP_REQUEST
        do
            -- TODO: Initialize required params.
            -- l_id
            -- l_post_website_buy_ip_request

            -- l_response := api.post_website_buy_ip(l_id, l_post_website_buy_ip_request)
            assert ("not_implemented", False)
        end

    test_post_website_migration
            -- Request Website Migration
            --
            -- Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned &#x60;ticket&#x60; ID with &#x60;/tickets/{id}&#x60; to monitor status.
        local
            l_response: POST_WEBSITE_MIGRATION_200_RESPONSE
            l_id: INTEGER_32
            l_post_website_migration_request: POST_WEBSITE_MIGRATION_REQUEST
        do
            -- TODO: Initialize required params.
            -- l_id
            -- l_post_website_migration_request

            -- l_response := api.post_website_migration(l_id, l_post_website_migration_request)
            assert ("not_implemented", False)
        end

    test_post_websites_reverse_dns
            -- Update Website Reverse DNS
            --
            -- Updates the reverse DNS entries for each of the IP addresses for the website.
        local
            l_response: TEXT_RESPONSE
            l_id: INTEGER_32
            l_reverse_dns_entries: REVERSE_DNS_ENTRIES
        do
            -- TODO: Initialize required params.
            -- l_id
            -- l_reverse_dns_entries

            -- l_response := api.post_websites_reverse_dns(l_id, l_reverse_dns_entries)
            assert ("not_implemented", False)
        end

    test_put_websites
            -- Validate Webhosting Order
            --
            -- Validates a webhosting order before placing it.
        local
        do
            -- TODO: Initialize required params.

            -- api.put_websites
            assert ("not_implemented", False)
        end

    test_update_website_info
            -- Update Website Order
            --
            -- Updates settings on a webhosting order.
        local
            l_id: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- api.update_website_info(l_id)
            assert ("not_implemented", False)
        end

    test_webhosting_cancel
            -- Cancel Website
            --
            -- Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.
        local
            l_response: WEBHOSTING_CANCEL_200_RESPONSE
            l_id: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.webhosting_cancel(l_id)
            assert ("not_implemented", False)
        end

    test_website_buy_ip
            -- Get Website IP Information
            --
            -- Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via &#x60;POST /websites/{id}/buy_ip&#x60;.
        local
            l_response: GET_WEBSITE_BUY_IP_200_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.website_buy_ip(l_id)
            assert ("not_implemented", False)
        end

    test_website_info
            -- Get Website Order
            --
            -- Returns detailed information about a specific webhosting order including its domain, plan, and status.
        local
            l_response: WEBSITE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.website_info(l_id)
            assert ("not_implemented", False)
        end

    test_website_invoices
            -- Get Website Invoices
            --
            -- Returns the billing invoices associated with this webhosting service.
        local
            l_response: CHARGE_INVOICE_ROWS
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.website_invoices(l_id)
            assert ("not_implemented", False)
        end

    test_website_list
            -- Get Website Listing
            --
            -- Gets a listing of your webhosting orders and service details.
        local
            l_response: LIST [WEBSITE_ROW]
        do
            -- TODO: Initialize required params.

            -- l_response := api.website_list
            assert ("not_implemented", False)
        end

    test_websites_backups
            -- Get Website Backups
            --
            -- Gets a list of the backups that exist for a website and their sizes.
        local
            l_response: WEBSITE_BACKUPS
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.websites_backups(l_id)
            assert ("not_implemented", False)
        end

    test_websites_login
            -- Hosting Panel Auto Login
            --
            -- Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.
        local
            l_response: WEBSITE_LOGIN_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.websites_login(l_id)
            assert ("not_implemented", False)
        end

    test_websites_welcome_email
            -- Resend Website Welcome Email
            --
            -- Resends the welcome email containing hosting credentials and panel access details for the webhosting order.
        local
            l_response: SUCCESS_TEXT_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.websites_welcome_email(l_id)
            assert ("not_implemented", False)
        end

feature {NONE} -- Implementation

    api: WEBHOSTING_API
            -- Create an object instance of `WEBHOSTING_API'.
        once
            create { WEBHOSTING_API } Result
        end

end
