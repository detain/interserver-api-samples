package org.openapitools.api;

import org.openapitools.model.AccountInfo;
import org.openapitools.model.GenericResponse;
import org.openapitools.model.GetAccountInfo401Response;
import org.openapitools.model.GetAccountTfaSetup200Response;
import org.openapitools.model.Home;
import org.openapitools.model.SearchAutocompleteResponse;
import org.openapitools.model.SuccessTextResponse;
import org.openapitools.model.TextResponse;
import io.micronaut.test.extensions.junit5.annotation.MicronautTest;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Disabled;
import jakarta.inject.Inject;
import java.util.Arrays;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.HashSet;

/**
 * API tests for AccountApi
 */
@MicronautTest
public class AccountApiTest {

    @Inject
    AccountApi api;

    
    /**
     * Change Account Username
     *
     * Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.
     */
    @Test
    @Disabled("Not Implemented")
    public void changeAccountUsernameTest() {
        // given

        // when
        TextResponse body = api.changeAccountUsername().block();

        // then
        // TODO implement the changeAccountUsernameTest()
    }

    
    /**
     * Unlink OAuth Account
     *
     * Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.
     */
    @Test
    @Disabled("Not Implemented")
    public void deleteAccountOauthNameTest() {
        // given
        String name = "example";

        // when
        SuccessTextResponse body = api.deleteAccountOauthName(name).block();

        // then
        // TODO implement the deleteAccountOauthNameTest()
    }

    
    /**
     * Disable Two-Factor Authentication
     *
     * Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.
     */
    @Test
    @Disabled("Not Implemented")
    public void deleteAccountTfaTest() {
        // given

        // when
        SuccessTextResponse body = api.deleteAccountTfa().block();

        // then
        // TODO implement the deleteAccountTfaTest()
    }

    
    /**
     * Remove IP Access Restriction
     *
     * Removes an IP address range from the account&#39;s access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.
     */
    @Test
    @Disabled("Not Implemented")
    public void deleteIpLimitTest() {
        // given

        // when
        GenericResponse body = api.deleteIpLimit().block();

        // then
        // TODO implement the deleteIpLimitTest()
    }

    
    /**
     * Retrieve Account Details
     *
     * Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with &#x60;POST /account&#x60;.
     */
    @Test
    @Disabled("Not Implemented")
    public void getAccountInfoTest() {
        // given

        // when
        AccountInfo body = api.getAccountInfo().block();

        // then
        // TODO implement the getAccountInfoTest()
    }

    
    /**
     * Get Two-Factor Setup Data
     *
     * Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the &#x60;2fa_google_key&#x60; as a QR code or display the &#x60;2fa_google_split&#x60; value for manual entry. After setup, verify with &#x60;POST /account/2fa&#x60;.
     */
    @Test
    @Disabled("Not Implemented")
    public void getAccountTfaSetupTest() {
        // given

        // when
        GetAccountTfaSetup200Response body = api.getAccountTfaSetup().block();

        // then
        // TODO implement the getAccountTfaSetupTest()
    }

    
    /**
     * Get Home Data
     *
     * Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.
     */
    @Test
    @Disabled("Not Implemented")
    public void getHomeTest() {
        // given

        // when
        Home body = api.getHome().block();

        // then
        // TODO implement the getHomeTest()
    }

    
    /**
     * Search Autocomplete
     *
     * Returns autocomplete results for the account&#39;s services and records. Use this endpoint to power global search experiences in the client portal.
     */
    @Test
    @Disabled("Not Implemented")
    public void getSearchTest() {
        // given

        // when
        SearchAutocompleteResponse body = api.getSearch().block();

        // then
        // TODO implement the getSearchTest()
    }

    
    /**
     * Log Out
     *
     * Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.
     */
    @Test
    @Disabled("Not Implemented")
    public void logoutTest() {
        // given

        // when
        SuccessTextResponse body = api.logout().block();

        // then
        // TODO implement the logoutTest()
    }

    
    /**
     * Logout of OAuth
     *
     * Logs out of the specified OAuth provider session.
     */
    @Test
    @Disabled("Not Implemented")
    public void logoutAccountOauthTest() {
        // given
        String name = "example";

        // when
        SuccessTextResponse body = api.logoutAccountOauth(name).block();

        // then
        // TODO implement the logoutAccountOauthTest()
    }

    
    /**
     * Generate New API Key
     *
     * Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.
     */
    @Test
    @Disabled("Not Implemented")
    public void updateAccountApiKeyTest() {
        // given

        // when
        SuccessTextResponse body = api.updateAccountApiKey().block();

        // then
        // TODO implement the updateAccountApiKeyTest()
    }

    
    /**
     * Update Account Feature Flags
     *
     * Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.
     */
    @Test
    @Disabled("Not Implemented")
    public void updateAccountFeaturesTest() {
        // given
        Integer disableReset = 56;
        Integer disableReinstall = 56;

        // when
        SuccessTextResponse body = api.updateAccountFeatures(disableReset, disableReinstall).block();

        // then
        // TODO implement the updateAccountFeaturesTest()
    }

    
    /**
     * Update Account Information
     *
     * Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.
     */
    @Test
    @Disabled("Not Implemented")
    public void updateAccountInfoTest() {
        // given
        String name = "example";
        String address = "example";
        String city = "example";
        String state = "example";
        String zip = "example";
        String country = "example";
        String phone = "example";
        String company = "example";
        String address2 = "example";
        String locale = "example";
        String emailInvoices = "example";
        String emailAbuse = "example";
        Boolean disableReset = false;
        Boolean disableReinstall = false;
        Boolean disableServerNotifications = false;
        Boolean disableEmailNotifications = false;
        String gstin = "example";

        // when
        SuccessTextResponse body = api.updateAccountInfo(name, address, city, state, zip, country, phone, company, address2, locale, emailInvoices, emailAbuse, disableReset, disableReinstall, disableServerNotifications, disableEmailNotifications, gstin).block();

        // then
        // TODO implement the updateAccountInfoTest()
    }

    
    /**
     * Add IP Access Restriction
     *
     * Adds an IP address range to the account&#39;s access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.
     */
    @Test
    @Disabled("Not Implemented")
    public void updateAccountIpLimitsTest() {
        // given
        String start = "example";
        String end = "example";

        // when
        SuccessTextResponse body = api.updateAccountIpLimits(start, end).block();

        // then
        // TODO implement the updateAccountIpLimitsTest()
    }

    
    /**
     * Change Account Password
     *
     * Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.
     */
    @Test
    @Disabled("Not Implemented")
    public void updateAccountPasswordTest() {
        // given
        String password = "example";

        // when
        TextResponse body = api.updateAccountPassword(password).block();

        // then
        // TODO implement the updateAccountPasswordTest()
    }

    
    /**
     * Update SSH Keys
     *
     * Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.
     */
    @Test
    @Disabled("Not Implemented")
    public void updateAccountSshKeyTest() {
        // given
        String sshKey = "example";

        // when
        SuccessTextResponse body = api.updateAccountSshKey(sshKey).block();

        // then
        // TODO implement the updateAccountSshKeyTest()
    }

    
    /**
     * Enable Two-Factor Authentication
     *
     * Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use &#x60;GET /account/2fa&#x60; first to retrieve the secret key for app setup.
     */
    @Test
    @Disabled("Not Implemented")
    public void updateAccountTfaTest() {
        // given
        String _2faGoogleCode = "example";

        // when
        SuccessTextResponse body = api.updateAccountTfa(_2faGoogleCode).block();

        // then
        // TODO implement the updateAccountTfaTest()
    }

    
}
