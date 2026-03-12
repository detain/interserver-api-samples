package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.LoginApiService;
import io.swagger.api.factories.LoginApiServiceFactory;

import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.Parameter;
import io.swagger.v3.oas.annotations.enums.ParameterIn;
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

import org.glassfish.jersey.media.multipart.FormDataContentDisposition;
import org.glassfish.jersey.media.multipart.FormDataParam;

import javax.servlet.ServletConfig;
import javax.ws.rs.core.Context;
import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;
import javax.ws.rs.*;
import javax.validation.constraints.*;


@Path("/login")



public class LoginApi  {
   private final LoginApiService delegate;

   public LoginApi(@Context ServletConfig servletContext) {
      LoginApiService delegate = null;

      if (servletContext != null) {
         String implClass = servletContext.getInitParameter("LoginApi.implementation");
         if (implClass != null && !"".equals(implClass.trim())) {
            try {
               delegate = (LoginApiService) Class.forName(implClass).newInstance();
            } catch (Exception e) {
               throw new RuntimeException(e);
            }
         } 
      }

      if (delegate == null) {
         delegate = LoginApiServiceFactory.getLoginApi();
      }

      this.delegate = delegate;
   }

    @GET
    
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Login Info", description = "Gets the various pieces of information useful for generating a login page.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Public" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Various pieces of information useful for rendering a login page.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = LoginInfo.class))),
        
        @ApiResponse(responseCode = "403", description = "Error response to a login request.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = LoginErrorResponse.class))) })
    public Response getLoginInfo(@Context SecurityContext securityContext)
    throws NotFoundException {
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
    public Response submitLogin(@Parameter(description = "", required=true)  @FormParam("login")  String login,@Parameter(description = "", required=true)  @FormParam("passwd")  String passwd,@Parameter(description = "", required=true)  @FormParam("remember")  String remember,@Parameter(description = "", required=true)  @FormParam("g-recaptcha-response")  LoginSubmissionExampleGrecaptcharesponse gRecaptchaResponse,@Parameter(description = "", required=true)  @FormParam("tfa")  String tfa,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.submitLogin(login,passwd,remember,gRecaptchaResponse,tfa,securityContext);
    }
}
