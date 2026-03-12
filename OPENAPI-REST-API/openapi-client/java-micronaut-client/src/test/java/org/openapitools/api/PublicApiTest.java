package org.openapitools.api;

import org.openapitools.model.BuyItNowList;
import org.openapitools.model.CaptchaResponse;
import org.openapitools.model.GetAccountInfo401Response;
import org.openapitools.model.GetOauthRedirect200Response;
import org.openapitools.model.LoginErrorResponse;
import org.openapitools.model.LoginInfo;
import org.openapitools.model.LoginSubmissionExample;
import org.openapitools.model.LoginSubmissionExampleGRecaptchaResponse;
import org.openapitools.model.LoginSuccessResponse;
import org.openapitools.model.PatchOauthTwoFactor200Response;
import org.openapitools.model.PatchOauthTwoFactorRequest;
import org.openapitools.model.PostOauthCallback200Response;
import org.openapitools.model.PostOauthCallbackRequest;
import org.openapitools.model.ServicesInfo;
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
 * API tests for PublicApi
 */
@MicronautTest
public class PublicApiTest {

    @Inject
    PublicApi api;

    
    /**
     * Get Captcha Challenge
     *
     * Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.
     */
    @Test
    @Disabled("Not Implemented")
    public void getCaptchaTest() {
        // given

        // when
        CaptchaResponse body = api.getCaptcha().block();

        // then
        // TODO implement the getCaptchaTest()
    }

    
    /**
     * Get Countries
     *
     * Returns a map of country codes to country names. Use the optional &#x60;fetch_by&#x60; parameter to select the key format: &#x60;iso2&#x60; (default, two-letter codes), &#x60;iso3&#x60; (three-letter codes), or &#x60;numcode&#x60; (numeric codes). Use these values when populating country fields in account registration or domain contact forms.
     */
    @Test
    @Disabled("Not Implemented")
    public void getCountriesTest() {
        // given
        String fetchBy = "example";

        // when
        Object body = api.getCountries(fetchBy).block();

        // then
        // TODO implement the getCountriesTest()
    }

    
    /**
     * Get Server Info
     *
     * Returns metadata about the API server&#39;s available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.
     */
    @Test
    @Disabled("Not Implemented")
    public void getInfoTest() {
        // given

        // when
        ServicesInfo body = api.getInfo().block();

        // then
        // TODO implement the getInfoTest()
    }

    
    /**
     * Get Login Info
     *
     * Gets the various pieces of information useful for generating a login page.
     */
    @Test
    @Disabled("Not Implemented")
    public void getLoginInfoTest() {
        // given

        // when
        LoginInfo body = api.getLoginInfo().block();

        // then
        // TODO implement the getLoginInfoTest()
    }

    
    /**
     * List Marketplace Servers
     *
     * Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
     */
    @Test
    @Disabled("Not Implemented")
    public void getMPServersTest() {
        // given

        // when
        BuyItNowList body = api.getMPServers().block();

        // then
        // TODO implement the getMPServersTest()
    }

    
    /**
     * Get OAuth Redirect URL
     *
     * Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call &#x60;POST /oauth&#x60;.
     */
    @Test
    @Disabled("Not Implemented")
    public void getOauthRedirectTest() {
        // given
        String provider = "example";

        // when
        GetOauthRedirect200Response body = api.getOauthRedirect(provider).block();

        // then
        // TODO implement the getOauthRedirectTest()
    }

    
    /**
     * Get Available Timezones
     *
     * Returns the complete list of available timezone identifiers (e.g. &#x60;America/New_York&#x60;, &#x60;UTC&#x60;). Use these values when updating timezone settings on your account or on VPS and QuickServer services via &#x60;/vps/{id}/change_timezone&#x60; or &#x60;/qs/{id}/change_timezone&#x60;.
     */
    @Test
    @Disabled("Not Implemented")
    public void getTimezonesTest() {
        // given

        // when
        List<String> body = api.getTimezones().block();

        // then
        // TODO implement the getTimezonesTest()
    }

    
    /**
     * Complete OAuth Two-Factor Verification
     *
     * Completes the OAuth login by verifying a two-factor authentication code. Use the &#x60;account_id&#x60; returned by &#x60;POST /oauth&#x60; when the response contained &#x60;error_code: \&quot;2fa_required\&quot;&#x60;.
     */
    @Test
    @Disabled("Not Implemented")
    public void patchOauthTwoFactorTest() {
        // given
        PatchOauthTwoFactorRequest patchOauthTwoFactorRequest = new PatchOauthTwoFactorRequest(56, "example");

        // when
        PatchOauthTwoFactor200Response body = api.patchOauthTwoFactor(patchOauthTwoFactorRequest).block();

        // then
        // TODO implement the patchOauthTwoFactorTest()
    }

    
    /**
     * Ping Server
     *
     * Performs a single ping/pong request to let you know if the server is up.
     */
    @Test
    @Disabled("Not Implemented")
    public void pingServerTest() {
        // given

        // when
        String body = api.pingServer().block();

        // then
        // TODO implement the pingServerTest()
    }

    
    /**
     * OAuth Callback
     *
     * Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include &#x60;error_code: \&quot;2fa_required\&quot;&#x60; and an &#x60;account_id&#x60;; use &#x60;PATCH /oauth&#x60; with the 2FA code and account ID to complete login.
     */
    @Test
    @Disabled("Not Implemented")
    public void postOauthCallbackTest() {
        // given
        String provider = "example";
        PostOauthCallbackRequest postOauthCallbackRequest = new PostOauthCallbackRequest();

        // when
        PostOauthCallback200Response body = api.postOauthCallback(provider, postOauthCallbackRequest).block();

        // then
        // TODO implement the postOauthCallbackTest()
    }

    
    /**
     * Submit Login Information
     *
     * Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the &#x60;sessionid&#x60; header on subsequent requests. If authentication fails, a &#x60;402&#x60; error is returned.
     */
    @Test
    @Disabled("Not Implemented")
    public void submitLoginTest() {
        // given
        String login = "example";
        String passwd = "example";
        String remember = "example";
        LoginSubmissionExampleGRecaptchaResponse gRecaptchaResponse = new LoginSubmissionExampleGRecaptchaResponse();
        String tfa = "example";

        // when
        LoginSuccessResponse body = api.submitLogin(login, passwd, remember, gRecaptchaResponse, tfa).block();

        // then
        // TODO implement the submitLoginTest()
    }

    
    /**
     * Submit Signup Information
     *
     * Creates a new account in our system using the provided information.
     */
    @Test
    @Disabled("Not Implemented")
    public void submitSignupTest() {
        // given
        LoginSubmissionExample loginSubmissionExample = new LoginSubmissionExample("example", "example");

        // when
        api.submitSignup(loginSubmissionExample).block();

        // then
        // TODO implement the submitSignupTest()
    }

    
}
