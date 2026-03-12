package io.swagger.api;

import io.swagger.model.LoginErrorResponse;
import io.swagger.model.LoginInfo;
import io.swagger.model.LoginSubmissionExample;
import io.swagger.model.LoginSubmissionExampleGrecaptcharesponse;
import io.swagger.model.LoginSuccessResponse;
import io.swagger.api.LoginApiService;

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
@Path("/login")
@RequestScoped






public class LoginApi  {

  @Context SecurityContext securityContext;

  @Inject LoginApiService delegate;


    @GET
    
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Login Info", description = "Gets the various pieces of information useful for generating a login page.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Public" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Various pieces of information useful for rendering a login page.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = LoginInfo.class))),
        @ApiResponse(responseCode = "403", description = "Error response to a login request.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = LoginErrorResponse.class))) })
    public Response getLoginInfo() {
        return delegate.getLoginInfo(securityContext);
    }

    @POST
    
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Submit Login Information", description = "Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the `sessionid` header on subsequent requests. If authentication fails, a `402` error is returned.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Public" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Successful login response containing the session token.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = LoginSuccessResponse.class))),
        @ApiResponse(responseCode = "402", description = "Error response to a login request.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = LoginErrorResponse.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response submitLogin(@Multipart(value = "login")  String login, @Multipart(value = "passwd")  String passwd, @Multipart(value = "remember")  String remember, @Multipart(value = "g-recaptcha-response")  LoginSubmissionExampleGrecaptcharesponse gRecaptchaResponse, @Multipart(value = "tfa")  String tfa) {
        return delegate.submitLogin(login, passwd, remember, gRecaptchaResponse, tfa, securityContext);
    }

    @POST
    
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Submit Login Information", description = "Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the `sessionid` header on subsequent requests. If authentication fails, a `402` error is returned.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Public" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Successful login response containing the session token.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = LoginSuccessResponse.class))),
        @ApiResponse(responseCode = "402", description = "Error response to a login request.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = LoginErrorResponse.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response submitLogin(
@Parameter(description = "" ,required=true) LoginSubmissionExample body
) {
        return delegate.submitLogin(body, securityContext);
    }
}
