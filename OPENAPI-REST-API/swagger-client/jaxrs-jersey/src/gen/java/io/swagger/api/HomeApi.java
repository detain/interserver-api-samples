package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.HomeApiService;
import io.swagger.api.factories.HomeApiServiceFactory;

import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.Parameter;
import io.swagger.v3.oas.annotations.enums.ParameterIn;
import io.swagger.v3.oas.annotations.responses.ApiResponses;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import io.swagger.v3.oas.annotations.media.ArraySchema;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;
import io.swagger.v3.oas.annotations.security.SecurityRequirement;

import io.swagger.model.Home;
import io.swagger.model.InlineResponse401;

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


@Path("/home")



public class HomeApi  {
   private final HomeApiService delegate;

   public HomeApi(@Context ServletConfig servletContext) {
      HomeApiService delegate = null;

      if (servletContext != null) {
         String implClass = servletContext.getInitParameter("HomeApi.implementation");
         if (implClass != null && !"".equals(implClass.trim())) {
            try {
               delegate = (HomeApiService) Class.forName(implClass).newInstance();
            } catch (Exception e) {
               throw new RuntimeException(e);
            }
         } 
      }

      if (delegate == null) {
         delegate = HomeApiServiceFactory.getHomeApi();
      }

      this.delegate = delegate;
   }

    @GET
    
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Home Data", description = "Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Account" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "General information for use on the home page.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = Home.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getHome(@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.getHome(securityContext);
    }
}
