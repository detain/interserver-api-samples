package io.swagger.api;

import io.swagger.model.InlineResponse2009;
import io.swagger.model.InlineResponse401;
import io.swagger.api.PayApiService;

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
@Path("/pay")
@RequestScoped






public class PayApi  {

  @Context SecurityContext securityContext;

  @Inject PayApiService delegate;


    @GET
    @Path("/{method}/{invoices}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Initiate Payment", description = "Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: `redirect` means send the user to the provided URL, `submit` means POST a form with the provided fields, and `single` means the payment was processed immediately. Use invoice IDs obtained from order responses or `/billing/invoices`.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Payment initiation response with redirect or form data.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse2009.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response initiatePayment(
@Parameter(description = "The payment method to use. Valid values: `cc` (credit card), `paypal`, `prepay`, `payssion`, `payu`, `ccavenue`, `cashfree`, `coinbase`, `btcpay`.",required=true, schema=@Schema(allowableValues={ "cc", "paypal", "prepay", "payssion", "payu", "ccavenue", "cashfree", "coinbase", "btcpay" })
) @PathParam("method") String method
, 
@Parameter(description = "A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. `/backups/order`, `/vps/order`) and by `/billing/invoices`.",required=true) @PathParam("invoices") String invoices
) {
        return delegate.initiatePayment(method, invoices, securityContext);
    }
}
