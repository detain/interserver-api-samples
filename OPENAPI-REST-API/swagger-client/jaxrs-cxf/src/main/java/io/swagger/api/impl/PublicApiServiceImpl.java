package io.swagger.api.impl;

import io.swagger.api.*;
import io.swagger.model.CaptchaResponse;
import io.swagger.model.InlineResponse2005;
import io.swagger.model.InlineResponse2006;
import io.swagger.model.InlineResponse2007;
import io.swagger.model.InlineResponse401;
import io.swagger.model.LoginErrorResponse;
import io.swagger.model.LoginInfo;
import io.swagger.model.LoginSubmissionExample;
import io.swagger.model.LoginSubmissionExampleGrecaptcharesponse;
import io.swagger.model.LoginSuccessResponse;
import io.swagger.model.OauthBody;
import io.swagger.model.OauthBody2;
import io.swagger.model.ServicesInfo;

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
public class PublicApiServiceImpl implements PublicApi {
    /**
     * Get Captcha Challenge
     *
     * Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.
     *
     */
    public CaptchaResponse getCaptcha() {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Get Countries
     *
     * Returns a map of country codes to country names. Use the optional &#x60;fetch_by&#x60; parameter to select the key format: &#x60;iso2&#x60; (default, two-letter codes), &#x60;iso3&#x60; (three-letter codes), or &#x60;numcode&#x60; (numeric codes). Use these values when populating country fields in account registration or domain contact forms.
     *
     */
    public Object getCountries(String fetchBy) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Get Server Info
     *
     * Returns metadata about the API server&#x27;s available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.
     *
     */
    public ServicesInfo getInfo() {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Get Login Info
     *
     * Gets the various pieces of information useful for generating a login page.
     *
     */
    public LoginInfo getLoginInfo() {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Get OAuth Redirect URL
     *
     * Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call &#x60;POST /oauth&#x60;.
     *
     */
    public InlineResponse2005 getOauthRedirect(String provider) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Get Available Timezones
     *
     * Returns the complete list of available timezone identifiers (e.g. &#x60;America/New_York&#x60;, &#x60;UTC&#x60;). Use these values when updating timezone settings on your account or on VPS and QuickServer services via &#x60;/vps/{id}/change_timezone&#x60; or &#x60;/qs/{id}/change_timezone&#x60;.
     *
     */
    public List<String> getTimezones() {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Complete OAuth Two-Factor Verification
     *
     * Completes the OAuth login by verifying a two-factor authentication code. Use the &#x60;account_id&#x60; returned by &#x60;POST /oauth&#x60; when the response contained &#x60;error_code: \&quot;2fa_required\&quot;&#x60;.
     *
     */
    public InlineResponse2007 patchOauthTwoFactor(OauthBody2 body) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Complete OAuth Two-Factor Verification
     *
     * Completes the OAuth login by verifying a two-factor authentication code. Use the &#x60;account_id&#x60; returned by &#x60;POST /oauth&#x60; when the response contained &#x60;error_code: \&quot;2fa_required\&quot;&#x60;.
     *
     */
    public InlineResponse2007 patchOauthTwoFactor(Integer accountId, String code) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Ping Server
     *
     * Performs a single ping/pong request to let you know if the server is up.
     *
     */
    public String pingServer() {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * OAuth Callback
     *
     * Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include &#x60;error_code: \&quot;2fa_required\&quot;&#x60; and an &#x60;account_id&#x60;; use &#x60;PATCH /oauth&#x60; with the 2FA code and account ID to complete login.
     *
     */
    public InlineResponse2006 postOauthCallback(String provider, OauthBody body) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * OAuth Callback
     *
     * Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include &#x60;error_code: \&quot;2fa_required\&quot;&#x60; and an &#x60;account_id&#x60;; use &#x60;PATCH /oauth&#x60; with the 2FA code and account ID to complete login.
     *
     */
    public InlineResponse2006 postOauthCallback(String provider, String provider2) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Submit Login Information
     *
     * Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the &#x60;sessionid&#x60; header on subsequent requests. If authentication fails, a &#x60;402&#x60; error is returned.
     *
     */
    public LoginSuccessResponse submitLogin(String login, String passwd, String remember, LoginSubmissionExampleGrecaptcharesponse gRecaptchaResponse, String tfa) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Submit Login Information
     *
     * Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the &#x60;sessionid&#x60; header on subsequent requests. If authentication fails, a &#x60;402&#x60; error is returned.
     *
     */
    public LoginSuccessResponse submitLogin(LoginSubmissionExample body) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Submit Signup Information
     *
     * Creates a new account in our system using the provided information.
     *
     */
    public void submitSignup(LoginSubmissionExample body) {
        // TODO: Implement...
        
        
    }
    
}

