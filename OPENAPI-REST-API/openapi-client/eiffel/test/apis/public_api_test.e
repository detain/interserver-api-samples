note
    description: "API tests for PUBLIC_API"
    date: "$Date$"
    revision: "$Revision$"


class PUBLIC_API_TEST

inherit

    EQA_TEST_SET

feature -- Test routines


    test_captcha
            -- Get Captcha Challenge
            --
            -- Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.
        local
            l_response: CAPTCHA_RESPONSE
        do
            -- TODO: Initialize required params.

            -- l_response := api.captcha
            assert ("not_implemented", False)
        end

    test_countries
            -- Get Countries
            --
            -- Returns a map of country codes to country names. Use the optional &#x60;fetch_by&#x60; parameter to select the key format: &#x60;iso2&#x60; (default, two-letter codes), &#x60;iso3&#x60; (three-letter codes), or &#x60;numcode&#x60; (numeric codes). Use these values when populating country fields in account registration or domain contact forms.
        local
            l_response: ANY
            l_fetch_by: STRING_32
        do
            -- TODO: Initialize required params.

            -- l_response := api.countries(l_fetch_by)
            assert ("not_implemented", False)
        end

    test_info
            -- Get Server Info
            --
            -- Returns metadata about the API server&#39;s available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.
        local
            l_response: SERVICES_INFO
        do
            -- TODO: Initialize required params.

            -- l_response := api.info
            assert ("not_implemented", False)
        end

    test_login_info
            -- Get Login Info
            --
            -- Gets the various pieces of information useful for generating a login page.
        local
            l_response: LOGIN_INFO
        do
            -- TODO: Initialize required params.

            -- l_response := api.login_info
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

    test_oauth_redirect
            -- Get OAuth Redirect URL
            --
            -- Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call &#x60;POST /oauth&#x60;.
        local
            l_response: GET_OAUTH_REDIRECT_200_RESPONSE
            l_provider: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_provider

            -- l_response := api.oauth_redirect(l_provider)
            assert ("not_implemented", False)
        end

    test_patch_oauth_two_factor
            -- Complete OAuth Two-Factor Verification
            --
            -- Completes the OAuth login by verifying a two-factor authentication code. Use the &#x60;account_id&#x60; returned by &#x60;POST /oauth&#x60; when the response contained &#x60;error_code: \&quot;2fa_required\&quot;&#x60;.
        local
            l_response: PATCH_OAUTH_TWO_FACTOR_200_RESPONSE
            l_patch_oauth_two_factor_request: PATCH_OAUTH_TWO_FACTOR_REQUEST
        do
            -- TODO: Initialize required params.
            -- l_patch_oauth_two_factor_request

            -- l_response := api.patch_oauth_two_factor(l_patch_oauth_two_factor_request)
            assert ("not_implemented", False)
        end

    test_ping_server
            -- Ping Server
            --
            -- Performs a single ping/pong request to let you know if the server is up.
        local
            l_response: STRING_32
        do
            -- TODO: Initialize required params.

            -- l_response := api.ping_server
            assert ("not_implemented", False)
        end

    test_post_oauth_callback
            -- OAuth Callback
            --
            -- Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include &#x60;error_code: \&quot;2fa_required\&quot;&#x60; and an &#x60;account_id&#x60;; use &#x60;PATCH /oauth&#x60; with the 2FA code and account ID to complete login.
        local
            l_response: POST_OAUTH_CALLBACK_200_RESPONSE
            l_provider: STRING_32
            l_post_oauth_callback_request: POST_OAUTH_CALLBACK_REQUEST
        do
            -- TODO: Initialize required params.
            -- l_provider

            -- l_response := api.post_oauth_callback(l_provider, l_post_oauth_callback_request)
            assert ("not_implemented", False)
        end

    test_submit_login
            -- Submit Login Information
            --
            -- Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the &#x60;sessionid&#x60; header on subsequent requests. If authentication fails, a &#x60;402&#x60; error is returned.
        local
            l_response: LOGIN_SUCCESS_RESPONSE
            l_login: STRING_32
            l_passwd: STRING_32
            l_remember: STRING_32
            l_g_recaptcha_response: LOGIN_SUBMISSION_EXAMPLE_G_RECAPTCHA_RESPONSE
            l_tfa: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_login
            -- l_passwd

            -- l_response := api.submit_login(l_login, l_passwd, l_remember, l_g_recaptcha_response, l_tfa)
            assert ("not_implemented", False)
        end

    test_submit_signup
            -- Submit Signup Information
            --
            -- Creates a new account in our system using the provided information.
        local
            l_login_submission_example: LOGIN_SUBMISSION_EXAMPLE
        do
            -- TODO: Initialize required params.

            -- api.submit_signup(l_login_submission_example)
            assert ("not_implemented", False)
        end

    test_timezones
            -- Get Available Timezones
            --
            -- Returns the complete list of available timezone identifiers (e.g. &#x60;America/New_York&#x60;, &#x60;UTC&#x60;). Use these values when updating timezone settings on your account or on VPS and QuickServer services via &#x60;/vps/{id}/change_timezone&#x60; or &#x60;/qs/{id}/change_timezone&#x60;.
        local
            l_response: LIST [STRING_32]
        do
            -- TODO: Initialize required params.

            -- l_response := api.timezones
            assert ("not_implemented", False)
        end

feature {NONE} -- Implementation

    api: PUBLIC_API
            -- Create an object instance of `PUBLIC_API'.
        once
            create { PUBLIC_API } Result
        end

end
