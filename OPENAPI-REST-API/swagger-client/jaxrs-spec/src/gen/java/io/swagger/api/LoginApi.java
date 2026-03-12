package io.swagger.api;

import io.swagger.model.LoginErrorResponse;
import io.swagger.model.LoginInfo;
import io.swagger.model.LoginSubmissionExample;
import io.swagger.model.LoginSubmissionExampleGrecaptcharesponse;
import io.swagger.model.LoginSuccessResponse;

import javax.ws.rs.*;
import javax.ws.rs.core.Response;

import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.Parameter;
import io.swagger.v3.oas.annotations.responses.ApiResponses;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import io.swagger.v3.oas.annotations.media.ArraySchema;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;
import io.swagger.v3.oas.annotations.security.SecurityRequirement;

import java.util.Map;
import java.util.List;
import javax.validation.constraints.*;
import javax.validation.Valid;

@Path("/login")


public class LoginApi {

    @GET
    @Produces({ "application/json" })
    @Operation(summary = "Get Login Info", description = "Gets the various pieces of information useful for generating a login page.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Public" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Various pieces of information useful for rendering a login page.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = LoginInfo.class))),
        @ApiResponse(responseCode = "403", description = "Error response to a login request.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = LoginErrorResponse.class)))
    })
    public Response getLoginInfo() {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "200", description = "Default response")
    })
    public Response submitLogin(@FormParam(value = "login")  String login,@FormParam(value = "passwd")  String passwd,@FormParam(value = "remember")  String remember,@FormParam(value = "g-recaptcha-response")  LoginSubmissionExampleGrecaptcharesponse gRecaptchaResponse,@FormParam(value = "tfa")  String tfa) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "200", description = "Default response")
    })
    public Response submitLogin(@Valid LoginSubmissionExample body) {
        return Response.ok().entity("magic!").build();
    }}
