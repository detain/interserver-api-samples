package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.BuyNowServersListApiService;

import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.Parameter;
import io.swagger.v3.oas.annotations.enums.ParameterIn;
import io.swagger.v3.oas.annotations.responses.ApiResponses;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import io.swagger.v3.oas.annotations.media.ArraySchema;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;
import io.swagger.v3.oas.annotations.security.SecurityRequirement;

import io.swagger.model.BuyItNowList;
import io.swagger.model.InlineResponse401;

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

@Path("/buy_now_servers_list")



public class BuyNowServersListApi  {

   private BuyNowServersListApiService delegate;

   protected BuyNowServersListApi() {
   }

   @javax.inject.Inject
   public BuyNowServersListApi(BuyNowServersListApiService delegate) {
      this.delegate = delegate;
   }

    @GET
    
    
    @Produces({ "application/json" })
    @Operation(summary = "List Marketplace Servers", description = "Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Servers", "Public" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Marketplace Buy it now servers list", content = @Content(mediaType = "application/json", schema = @Schema(implementation = BuyItNowList.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getMPServers(@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.getMPServers(securityContext);
    }
}
