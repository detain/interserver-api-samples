package io.swagger.api;

import io.swagger.model.InlineResponse401;
import io.swagger.model.Invoice;

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

@Path("/invoices")


public class InvoicesApi {

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
        @ApiResponse(responseCode = "404", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response getInvoices(  @QueryParam("searchString") 

 @Parameter(description = "pass an optional search string for looking up inventory")  String searchString
, @Min(0)  @QueryParam("skip") 

 @Parameter(description = "number of records to skip for pagination")  Integer skip
, @Min(0) @Max(50)  @QueryParam("limit") 

 @Parameter(description = "maximum number of records to return")  Integer limit
) {
        return Response.ok().entity("magic!").build();
    }}
