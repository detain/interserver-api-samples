package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.SearchApiService;

import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.Parameter;
import io.swagger.v3.oas.annotations.enums.ParameterIn;
import io.swagger.v3.oas.annotations.responses.ApiResponses;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import io.swagger.v3.oas.annotations.media.ArraySchema;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;
import io.swagger.v3.oas.annotations.security.SecurityRequirement;

import io.swagger.model.InlineResponse401;
import io.swagger.model.SearchAutocompleteResponse;

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

@Path("/search")



public class SearchApi  {

   private SearchApiService delegate;

   protected SearchApi() {
   }

   @javax.inject.Inject
   public SearchApi(SearchApiService delegate) {
      this.delegate = delegate;
   }

    @GET
    
    
    @Produces({ "application/json" })
    @Operation(summary = "Search Autocomplete", description = "Returns autocomplete results for the account's services and records. Use this endpoint to power global search experiences in the client portal.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Account" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Search autocomplete results for the account.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SearchAutocompleteResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getSearch(@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.getSearch(securityContext);
    }
}
