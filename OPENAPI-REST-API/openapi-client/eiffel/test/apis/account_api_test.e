note
    description: "API tests for ACCOUNT_API"
    date: "$Date$"
    revision: "$Revision$"


class ACCOUNT_API_TEST

inherit

    EQA_TEST_SET

feature -- Test routines


    test_account_info
            -- Retrieve Account Details
            --
            -- Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with &#x60;POST /account&#x60;.
        local
            l_response: ACCOUNT_INFO
        do
            -- TODO: Initialize required params.

            -- l_response := api.account_info
            assert ("not_implemented", False)
        end

    test_account_tfa_setup
            -- Get Two-Factor Setup Data
            --
            -- Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the &#x60;2fa_google_key&#x60; as a QR code or display the &#x60;2fa_google_split&#x60; value for manual entry. After setup, verify with &#x60;POST /account/2fa&#x60;.
        local
            l_response: GET_ACCOUNT_TFA_SETUP_200_RESPONSE
        do
            -- TODO: Initialize required params.

            -- l_response := api.account_tfa_setup
            assert ("not_implemented", False)
        end

    test_change_account_username
            -- Change Account Username
            --
            -- Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.
        local
            l_response: TEXT_RESPONSE
        do
            -- TODO: Initialize required params.

            -- l_response := api.change_account_username
            assert ("not_implemented", False)
        end

    test_delete_account_oauth_name
            -- Unlink OAuth Account
            --
            -- Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.
        local
            l_response: SUCCESS_TEXT_RESPONSE
            l_name: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_name

            -- l_response := api.delete_account_oauth_name(l_name)
            assert ("not_implemented", False)
        end

    test_delete_account_tfa
            -- Disable Two-Factor Authentication
            --
            -- Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.
        local
            l_response: SUCCESS_TEXT_RESPONSE
        do
            -- TODO: Initialize required params.

            -- l_response := api.delete_account_tfa
            assert ("not_implemented", False)
        end

    test_delete_ip_limit
            -- Remove IP Access Restriction
            --
            -- Removes an IP address range from the account&#39;s access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.
        local
            l_response: GENERIC_RESPONSE
        do
            -- TODO: Initialize required params.

            -- l_response := api.delete_ip_limit
            assert ("not_implemented", False)
        end

    test_home
            -- Get Home Data
            --
            -- Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.
        local
            l_response: HOME
        do
            -- TODO: Initialize required params.

            -- l_response := api.home
            assert ("not_implemented", False)
        end

    test_logout
            -- Log Out
            --
            -- Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.
        local
            l_response: SUCCESS_TEXT_RESPONSE
        do
            -- TODO: Initialize required params.

            -- l_response := api.logout
            assert ("not_implemented", False)
        end

    test_logout_account_oauth
            -- Logout of OAuth
            --
            -- Logs out of the specified OAuth provider session.
        local
            l_response: SUCCESS_TEXT_RESPONSE
            l_name: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_name

            -- l_response := api.logout_account_oauth(l_name)
            assert ("not_implemented", False)
        end

    test_search
            -- Search Autocomplete
            --
            -- Returns autocomplete results for the account&#39;s services and records. Use this endpoint to power global search experiences in the client portal.
        local
            l_response: SEARCH_AUTOCOMPLETE_RESPONSE
        do
            -- TODO: Initialize required params.

            -- l_response := api.search
            assert ("not_implemented", False)
        end

    test_update_account_api_key
            -- Generate New API Key
            --
            -- Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.
        local
            l_response: SUCCESS_TEXT_RESPONSE
        do
            -- TODO: Initialize required params.

            -- l_response := api.update_account_api_key
            assert ("not_implemented", False)
        end

    test_update_account_features
            -- Update Account Feature Flags
            --
            -- Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.
        local
            l_response: SUCCESS_TEXT_RESPONSE
            l_disable_reset: INTEGER_32
            l_disable_reinstall: INTEGER_32
        do
            -- TODO: Initialize required params.

            -- l_response := api.update_account_features(l_disable_reset, l_disable_reinstall)
            assert ("not_implemented", False)
        end

    test_update_account_info
            -- Update Account Information
            --
            -- Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.
        local
            l_response: SUCCESS_TEXT_RESPONSE
            l_name: STRING_32
            l_address: STRING_32
            l_city: STRING_32
            l_state: STRING_32
            l_zip: STRING_32
            l_country: STRING_32
            l_phone: STRING_32
            l_company: STRING_32
            l_address2: STRING_32
            l_locale: STRING_32
            l_email_invoices: STRING_32
            l_email_abuse: STRING_32
            l_disable_reset: BOOLEAN
            l_disable_reinstall: BOOLEAN
            l_disable_server_notifications: BOOLEAN
            l_disable_email_notifications: BOOLEAN
            l_gstin: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_name
            -- l_address
            -- l_city
            -- l_state
            -- l_zip
            -- l_country
            -- l_phone

            -- l_response := api.update_account_info(l_name, l_address, l_city, l_state, l_zip, l_country, l_phone, l_company, l_address2, l_locale, l_email_invoices, l_email_abuse, l_disable_reset, l_disable_reinstall, l_disable_server_notifications, l_disable_email_notifications, l_gstin)
            assert ("not_implemented", False)
        end

    test_update_account_ip_limits
            -- Add IP Access Restriction
            --
            -- Adds an IP address range to the account&#39;s access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.
        local
            l_response: SUCCESS_TEXT_RESPONSE
            l_start: STRING_32
            l_var_end: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_start
            -- l_var_end

            -- l_response := api.update_account_ip_limits(l_start, l_var_end)
            assert ("not_implemented", False)
        end

    test_update_account_password
            -- Change Account Password
            --
            -- Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.
        local
            l_response: TEXT_RESPONSE
            l_password: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_password

            -- l_response := api.update_account_password(l_password)
            assert ("not_implemented", False)
        end

    test_update_account_ssh_key
            -- Update SSH Keys
            --
            -- Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.
        local
            l_response: SUCCESS_TEXT_RESPONSE
            l_ssh_key: STRING_32
        do
            -- TODO: Initialize required params.

            -- l_response := api.update_account_ssh_key(l_ssh_key)
            assert ("not_implemented", False)
        end

    test_update_account_tfa
            -- Enable Two-Factor Authentication
            --
            -- Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use &#x60;GET /account/2fa&#x60; first to retrieve the secret key for app setup.
        local
            l_response: SUCCESS_TEXT_RESPONSE
            l_var_2fa_google_code: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_var_2fa_google_code

            -- l_response := api.update_account_tfa(l_var_2fa_google_code)
            assert ("not_implemented", False)
        end

feature {NONE} -- Implementation

    api: ACCOUNT_API
            -- Create an object instance of `ACCOUNT_API'.
        once
            create { ACCOUNT_API } Result
        end

end
