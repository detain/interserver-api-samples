package io.swagger.api;

import io.swagger.model.InlineResponse2005;
import io.swagger.model.InlineResponse2006;
import io.swagger.model.InlineResponse2007;
import io.swagger.model.InlineResponse401;
import io.swagger.model.OauthBody;
import io.swagger.model.OauthBody2;
import io.swagger.api.OauthApiService;

import javax.ws.rs.*;
import javax.ws.rs.core.Context;
import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;
import javax.enterprise.context.RequestScoped;
import javax.inject.Inject;

import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.Parameter;
import io.swagger.v3.oas.annotations.responses.ApiResponses;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import io.swagger.v3.oas.annotations.media.ArraySchema;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;
import io.swagger.v3.oas.annotations.security.SecurityRequirement;
import java.io.InputStream;

import org.apache.cxf.jaxrs.ext.multipart.Attachment;
import org.apache.cxf.jaxrs.ext.multipart.Multipart;

import java.util.Map;
import java.util.List;
import javax.validation.constraints.*;
@Path("/oauth")
@RequestScoped






public class OauthApi  {

  @Context SecurityContext securityContext;

  @Inject OauthApiService delegate;


    @GET
    
    
    @Produces({ "application/json" })
    @Operation(summary = "Get OAuth Redirect URL", description = "Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call `POST /oauth`.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Public" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "OAuth redirect URL for the requested provider.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse2005.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getOauthRedirect( @NotNull 
@Parameter(description = "The OAuth provider name (e.g. `Google`).",required=true)  @QueryParam("provider") String provider
) {
        return delegate.getOauthRedirect(provider, securityContext);
    }

    @PATCH
    
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Complete OAuth Two-Factor Verification", description = "Completes the OAuth login by verifying a two-factor authentication code. Use the `account_id` returned by `POST /oauth` when the response contained `error_code: \"2fa_required\"`.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Public" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "OAuth 2FA verification result.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse2007.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response patchOauthTwoFactor(
@Parameter(description = "" ,required=true) OauthBody2 body
) {
        return delegate.patchOauthTwoFactor(body, securityContext);
    }

    @PATCH
    
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Complete OAuth Two-Factor Verification", description = "Completes the OAuth login by verifying a two-factor authentication code. Use the `account_id` returned by `POST /oauth` when the response contained `error_code: \"2fa_required\"`.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Public" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "OAuth 2FA verification result.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse2007.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response patchOauthTwoFactor(@Multipart(value = "account_id")  Integer accountId, @Multipart(value = "code")  String code) {
        return delegate.patchOauthTwoFactor(accountId, code, securityContext);
    }

    @POST
    
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "OAuth Callback", description = "Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include `error_code: \"2fa_required\"` and an `account_id`; use `PATCH /oauth` with the 2FA code and account ID to complete login.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Public" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "OAuth callback result.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse2006.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postOauthCallback( @NotNull 
@Parameter(description = "The OAuth provider name (e.g. `Google`).",required=true)  @QueryParam("provider") String provider
, 
@Parameter(description = "" ) OauthBody body
) {
        return delegate.postOauthCallback(provider, body, securityContext);
    }

    @POST
    
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "OAuth Callback", description = "Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include `error_code: \"2fa_required\"` and an `account_id`; use `PATCH /oauth` with the 2FA code and account ID to complete login.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Public" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "OAuth callback result.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse2006.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postOauthCallback( @NotNull 
@Parameter(description = "The OAuth provider name (e.g. `Google`).",required=true)  @QueryParam("provider") String provider
, @Multipart(value = "provider", required = false)  String provider2) {
        return delegate.postOauthCallback(provider, provider2, securityContext);
    }
}
