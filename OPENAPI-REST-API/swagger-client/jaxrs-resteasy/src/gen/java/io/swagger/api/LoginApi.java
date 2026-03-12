package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.LoginApiService;

import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.Parameter;
import io.swagger.v3.oas.annotations.responses.ApiResponses;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import io.swagger.v3.oas.annotations.media.ArraySchema;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;
import io.swagger.v3.oas.annotations.security.SecurityRequirement;

import io.swagger.model.LoginErrorResponse;
import io.swagger.model.LoginInfo;
import io.swagger.model.LoginSubmissionExample;
import io.swagger.model.LoginSubmissionExampleGrecaptcharesponse;
import io.swagger.model.LoginSuccessResponse;

import java.util.Map;
import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import javax.ws.rs.core.Context;
import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;
import javax.ws.rs.*;
import javax.inject.Inject;

import javax.validation.constraints.*;
import org.jboss.resteasy.plugins.providers.multipart.MultipartFormDataInput;
@Path("/login")



public class LoginApi  {

    @Inject LoginApiService service;

    @GET
    
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Login Info", description = "Gets the various pieces of information useful for generating a login page.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Public" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Various pieces of information useful for rendering a login page.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = LoginInfo.class))),
        
        @ApiResponse(responseCode = "403", description = "Error response to a login request.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = LoginErrorResponse.class))) })
    public Response getLoginInfo(@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.getLoginInfo(securityContext);
    }
    @POST
    
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Submit Login Information", description = "Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the `sessionid` header on subsequent requests. If authentication fails, a `402` error is returned.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Public" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Successful login response containing the session token.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = LoginSuccessResponse.class))),
        
        @ApiResponse(responseCode = "402", description = "Error response to a login request.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = LoginErrorResponse.class))),
        
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response submitLogin(MultipartFormDataInput input,@Parameter(description = "", required=true)@FormParam("login")  String login,@Parameter(description = "", required=true)@FormParam("passwd")  String passwd,@Parameter(description = "", required=true)@FormParam("remember")  String remember,@Parameter(description = "", required=true)@FormParam("g-recaptcha-response")  LoginSubmissionExampleGrecaptcharesponse gRecaptchaResponse,@Parameter(description = "", required=true)@FormParam("tfa")  String tfa,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.submitLogin(input,login,passwd,remember,gRecaptchaResponse,tfa,securityContext);
    }
    @POST
    
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Submit Login Information", description = "Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the `sessionid` header on subsequent requests. If authentication fails, a `402` error is returned.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Public" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Successful login response containing the session token.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = LoginSuccessResponse.class))),
        
        @ApiResponse(responseCode = "402", description = "Error response to a login request.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = LoginErrorResponse.class))),
        
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response submitLogin(MultipartFormDataInput input,
@Parameter(description = "" ,required=true) LoginSubmissionExample body
,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.submitLogin(input,body,securityContext);
    }
}
