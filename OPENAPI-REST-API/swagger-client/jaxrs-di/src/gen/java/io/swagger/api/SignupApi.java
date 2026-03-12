package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.SignupApiService;

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
import io.swagger.model.LoginSubmissionExample;

import java.util.Map;
import java.util.List;

import java.io.InputStream;

import org.glassfish.jersey.media.multipart.FormDataContentDisposition;
import org.glassfish.jersey.media.multipart.FormDataParam;

import javax.ws.rs.core.Context;
import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;
import javax.ws.rs.*;
import javax.validation.constraints.*;

@Path("/signup")



public class SignupApi  {

   private SignupApiService delegate;

   protected SignupApi() {
   }

   @javax.inject.Inject
   public SignupApi(SignupApiService delegate) {
      this.delegate = delegate;
   }

    @POST
    
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Submit Signup Information", description = "Creates a new account in our system using the provided information.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Public" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Account created successfully."),
        
        @ApiResponse(responseCode = "402", description = "Error response to a login request.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = LoginErrorResponse.class))) })
    public Response submitSignup(@Parameter(in = ParameterIn.DEFAULT, description = "" ) LoginSubmissionExample body
,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.submitSignup(body,securityContext);
    }
}
