note
    description: "API tests for SSLCERTIFICATES_API"
    date: "$Date$"
    revision: "$Revision$"


class SSLCERTIFICATES_API_TEST

inherit

    EQA_TEST_SET

feature -- Test routines


    test_add_ssl
            -- Place SSL Cert Order
            --
            -- Places an order for a new SSL certificate. Use &#x60;PUT /ssl/order&#x60; to validate the order first.
        local
        do
            -- TODO: Initialize required params.

            -- api.add_ssl
            assert ("not_implemented", False)
        end

    test_new_ssl
            -- SSL Cert Ordering Information
            --
            -- Retrieves available SSL certificate types and pricing for ordering.
        local
        do
            -- TODO: Initialize required params.

            -- api.new_ssl
            assert ("not_implemented", False)
        end

    test_put_ssl
            -- Validate SSL Cert Order
            --
            -- Validates an SSL certificate order before placing it.
        local
        do
            -- TODO: Initialize required params.

            -- api.put_ssl
            assert ("not_implemented", False)
        end

    test_ssl_cancel
            -- Cancel SSL Certificate Service
            --
            -- Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.
        local
            l_response: SSL_CANCEL_200_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.ssl_cancel(l_id)
            assert ("not_implemented", False)
        end

    test_ssl_info
            -- Get SSL Cert Info
            --
            -- Returns detailed information about a specific SSL certificate including its domain and expiration.
        local
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- api.ssl_info(l_id)
            assert ("not_implemented", False)
        end

    test_ssl_invoices
            -- Get SSL Cert Invoices
            --
            -- Returns the billing invoices associated with this SSL certificate.
        local
            l_response: CHARGE_INVOICE_ROWS
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.ssl_invoices(l_id)
            assert ("not_implemented", False)
        end

    test_ssl_list
            -- List SSL Certs
            --
            -- Returns all SSL certificate services on the account with their current status.
        local
        do
            -- TODO: Initialize required params.

            -- api.ssl_list
            assert ("not_implemented", False)
        end

    test_ssl_welcome_email
            -- Resend SSL Welcome Email
            --
            -- Resends the welcome email for the order.
        local
            l_response: SUCCESS_TEXT_RESPONSE
            l_id: INTEGER_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- l_response := api.ssl_welcome_email(l_id)
            assert ("not_implemented", False)
        end

    test_update_ssl_info
            -- Update SSL Cert Order
            --
            -- Updates settings on an SSL certificate order.
        local
            l_id: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_id

            -- api.update_ssl_info(l_id)
            assert ("not_implemented", False)
        end

feature {NONE} -- Implementation

    api: SSLCERTIFICATES_API
            -- Create an object instance of `SSLCERTIFICATES_API'.
        once
            create { SSLCERTIFICATES_API } Result
        end

end
