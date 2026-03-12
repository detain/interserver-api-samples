package io.swagger.api.impl;

import io.swagger.api.*;
import io.swagger.model.Account2faBody1;
import io.swagger.model.AccountFeatures;
import io.swagger.model.AccountInfo;
import io.swagger.model.AccountInfoPost;
import io.swagger.model.AccountSshKey;
import io.swagger.model.GenericResponse;
import io.swagger.model.Home;
import io.swagger.model.InlineResponse200;
import io.swagger.model.InlineResponse401;
import io.swagger.model.IpLimitRange;
import io.swagger.model.PasswordRequest;
import io.swagger.model.SearchAutocompleteResponse;
import io.swagger.model.SuccessTextResponse;
import io.swagger.model.TextResponse;

import java.io.InputStream;
import java.io.OutputStream;
import java.util.List;
import java.util.Map;
import javax.ws.rs.*;
import javax.ws.rs.core.Response;
import org.apache.cxf.jaxrs.model.wadl.Description;
import org.apache.cxf.jaxrs.model.wadl.DocTarget;

import org.apache.cxf.jaxrs.ext.multipart.*;


/**
 * InterServer Management API
 *
 * <p># Overview  The InterServer Management API provides programmatic access to manage your InterServer services. Use this REST API to automate provisioning, configuration, and billing operations across your account.  The API covers the following service categories: - [Domains](https://www.interserver.net/domains/) — registration, transfers, and DNS management - [Web Hosting](https://www.interserver.net/hosting/) — shared and reseller hosting - [VPS Hosting](https://www.interserver.net/vps/) — virtual private servers - [Dedicated Servers](https://www.interserver.net/dedicated/) — bare metal and [Rapid Deploy Servers](https://www.interserver.net/dedicated/rapid-deploy.html) - [Backups](https://www.interserver.net/storage/) — storage and backup services - Licenses — control panel and software licenses - [Mail](https://www.mail.baby/) — mail delivery services - SSL — certificate provisioning - Billing — invoices, payment methods, and account management  For interactive testing, see the [API documentation](/api-docs/).  # Authentication  Most endpoints require authentication. Two methods are supported:  ## API Key (Preferred)  Generate an API key from the [Account Security](https://my.interserver.net/account_security) page on [my.interserver.net](https://my.interserver.net/). Pass it in the `X-API-KEY` request header:  ``` X-API-KEY: your-api-key-here ```  ## Session-Based Authentication  Alternatively, authenticate by creating a session:  1. **Log in** — Send a `POST` request to `/login` with your account credentials. The response includes a session identifier. 2. **Pass the session ID** — Include the session identifier in the `sessionid` header on subsequent requests:  ``` sessionid: your-session-id-here ```  API key authentication is recommended for most integrations as it does not expire and avoids the overhead of session management.  
 *
 */
public class AccountApiServiceImpl implements AccountApi {
    /**
     * Change Account Username
     *
     * Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.
     *
     */
    public TextResponse changeAccountUsername() {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Unlink OAuth Account
     *
     * Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.
     *
     */
    public SuccessTextResponse deleteAccountOauthName(String name) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Disable Two-Factor Authentication
     *
     * Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.
     *
     */
    public SuccessTextResponse deleteAccountTfa() {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Remove IP Access Restriction
     *
     * Removes an IP address range from the account&#x27;s access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.
     *
     */
    public GenericResponse deleteIpLimit() {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Retrieve Account Details
     *
     * Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with &#x60;POST /account&#x60;.
     *
     */
    public AccountInfo getAccountInfo() {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Get Two-Factor Setup Data
     *
     * Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the &#x60;2fa_google_key&#x60; as a QR code or display the &#x60;2fa_google_split&#x60; value for manual entry. After setup, verify with &#x60;POST /account/2fa&#x60;.
     *
     */
    public InlineResponse200 getAccountTfaSetup() {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Get Home Data
     *
     * Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.
     *
     */
    public Home getHome() {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Search Autocomplete
     *
     * Returns autocomplete results for the account&#x27;s services and records. Use this endpoint to power global search experiences in the client portal.
     *
     */
    public SearchAutocompleteResponse getSearch() {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Log Out
     *
     * Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.
     *
     */
    public SuccessTextResponse logout() {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Logout of OAuth
     *
     * Logs out of the specified OAuth provider session.
     *
     */
    public SuccessTextResponse logoutAccountOauth(String name) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Generate New API Key
     *
     * Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.
     *
     */
    public SuccessTextResponse updateAccountApiKey() {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Update Account Feature Flags
     *
     * Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.
     *
     */
    public SuccessTextResponse updateAccountFeatures(Integer disableReset, Integer disableReinstall) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Update Account Feature Flags
     *
     * Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.
     *
     */
    public SuccessTextResponse updateAccountFeatures(AccountFeatures body) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Update Account Information
     *
     * Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.
     *
     */
    public void updateAccountInfo(String name, String company, String address, String address2, String city, String state, String zip, String country, String phone, String locale, String emailInvoices, String emailAbuse, Boolean disableReset, Boolean disableReinstall, Boolean disableServerNotifications, Boolean disableEmailNotifications, String gstin) {
        // TODO: Implement...
        
        
    }
    
    /**
     * Update Account Information
     *
     * Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.
     *
     */
    public void updateAccountInfo(AccountInfoPost body) {
        // TODO: Implement...
        
        
    }
    
    /**
     * Add IP Access Restriction
     *
     * Adds an IP address range to the account&#x27;s access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.
     *
     */
    public void updateAccountIpLimits(String start, String end) {
        // TODO: Implement...
        
        
    }
    
    /**
     * Add IP Access Restriction
     *
     * Adds an IP address range to the account&#x27;s access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.
     *
     */
    public void updateAccountIpLimits(IpLimitRange body) {
        // TODO: Implement...
        
        
    }
    
    /**
     * Change Account Password
     *
     * Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.
     *
     */
    public TextResponse updateAccountPassword(String password) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Change Account Password
     *
     * Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.
     *
     */
    public TextResponse updateAccountPassword(PasswordRequest body) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Update SSH Keys
     *
     * Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.
     *
     */
    public SuccessTextResponse updateAccountSshKey(String sshKey) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Update SSH Keys
     *
     * Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.
     *
     */
    public SuccessTextResponse updateAccountSshKey(AccountSshKey body) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Enable Two-Factor Authentication
     *
     * Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use &#x60;GET /account/2fa&#x60; first to retrieve the secret key for app setup.
     *
     */
    public SuccessTextResponse updateAccountTfa(String _2faGoogleCode) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Enable Two-Factor Authentication
     *
     * Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use &#x60;GET /account/2fa&#x60; first to retrieve the secret key for app setup.
     *
     */
    public SuccessTextResponse updateAccountTfa(Account2faBody1 body) {
        // TODO: Implement...
        
        return null;
    }
    
}

