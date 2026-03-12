package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.InvoicesApiService;

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
import io.swagger.model.Invoice;

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

@Path("/invoices")



public class InvoicesApi  {

   private InvoicesApiService delegate;

   protected InvoicesApi() {
   }

   @javax.inject.Inject
   public InvoicesApi(InvoicesApiService delegate) {
      this.delegate = delegate;
   }

    @GET
    
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Invoices", description = "Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional `searchString` parameter to filter results and `skip`/`limit` for pagination.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "search results matching criteria", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = Invoice.class)))),
        
        @ApiResponse(responseCode = "400", description = "bad input parameter"),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "404", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getInvoices(@Parameter(in = ParameterIn.QUERY, description = "pass an optional search string for looking up inventory") @QueryParam("searchString") String searchString,@Parameter(in = ParameterIn.QUERY, description = "number of records to skip for pagination", schema=@Schema(allowableValues={ "0" })
) @QueryParam("skip") Integer skip,@Parameter(in = ParameterIn.QUERY, description = "maximum number of records to return", schema=@Schema(allowableValues={ "0", "50" }, maximum="50")
) @QueryParam("limit") Integer limit,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.getInvoices(searchString,skip,limit,securityContext);
    }
}
