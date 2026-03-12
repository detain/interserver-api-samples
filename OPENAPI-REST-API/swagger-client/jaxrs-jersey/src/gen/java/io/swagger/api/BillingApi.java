package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.BillingApiService;
import io.swagger.api.factories.BillingApiServiceFactory;

import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.Parameter;
import io.swagger.v3.oas.annotations.enums.ParameterIn;
import io.swagger.v3.oas.annotations.responses.ApiResponses;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import io.swagger.v3.oas.annotations.media.ArraySchema;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;
import io.swagger.v3.oas.annotations.security.SecurityRequirement;

import java.math.BigDecimal;
import io.swagger.model.BillingAddCcRequest;
import io.swagger.model.BillingInvoiceDetail;
import io.swagger.model.BillingInvoiceList;
import io.swagger.model.BillingPaymentMethodRequest;
import io.swagger.model.BillingPrepayRequest;
import io.swagger.model.BillingVerifyCcRequest;
import io.swagger.model.InlineResponse401;
import io.swagger.model.SuccessTextResponse;

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


@Path("/billing")



public class BillingApi  {
   private final BillingApiService delegate;

   public BillingApi(@Context ServletConfig servletContext) {
      BillingApiService delegate = null;

      if (servletContext != null) {
         String implClass = servletContext.getInitParameter("BillingApi.implementation");
         if (implClass != null && !"".equals(implClass.trim())) {
            try {
               delegate = (BillingApiService) Class.forName(implClass).newInstance();
            } catch (Exception e) {
               throw new RuntimeException(e);
            }
         } 
      }

      if (delegate == null) {
         delegate = BillingApiServiceFactory.getBillingApi();
      }

      this.delegate = delegate;
   }

    @POST
    @Path("/creditcards")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Add Credit Card for Billing", description = "Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via `GET /billing/creditcards/{id}/verify` followed by `POST /billing/creditcards/{id}/verify` before the card can be used for payments.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response addBillingCreditCard(@Parameter(in = ParameterIn.DEFAULT, description = "" ,required=true) BillingAddCcRequest body
,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.addBillingCreditCard(body,securityContext);
    }
    @POST
    @Path("/prepays")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Create Prepay Deposit", description = "Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use `/billing/invoices/{id}` to retrieve the generated invoice details.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response addBillingPrepay(@Parameter(in = ParameterIn.DEFAULT, description = "" ,required=true) BillingPrepayRequest body
,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.addBillingPrepay(body,securityContext);
    }
    @DELETE
    @Path("/creditcards/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Delete Credit Card", description = "Removes the selected credit card from the account. Use `/billing/payment_method` to select a new default payment method after deleting a card.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response deleteBillingCreditCard(@Parameter(in = ParameterIn.PATH, description = "The credit card ID to remove. Use IDs from `GET /billing/creditcards`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.deleteBillingCreditCard(id,securityContext);
    }
    @DELETE
    @Path("/invoices/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Delete Invoice", description = "Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response deleteBillingInvoice(@Parameter(in = ParameterIn.PATH, description = "The invoice ID to delete. Only unpaid invoices can be deleted.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.deleteBillingInvoice(id,securityContext);
    }
    @DELETE
    @Path("/prepays/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Delete Prepay Balance", description = "Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use `GET /billing/prepays` to list available prepay balances and their IDs.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response deleteBillingPrepay(@Parameter(in = ParameterIn.PATH, description = "The prepay balance ID to delete.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.deleteBillingPrepay(id,securityContext);
    }
    @GET
    @Path("/cart")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Shopping Cart Contents", description = "Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to `/pay/{method}/{invoices}`.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response getBillingCart(@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.getBillingCart(securityContext);
    }
    @GET
    @Path("/creditcards/{id}/verify")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Credit Card Verification Requirements", description = "Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getBillingCreditCardVerify(@Parameter(in = ParameterIn.PATH, description = "The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.getBillingCreditCardVerify(id,securityContext);
    }
    @GET
    @Path("/invoices/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Invoice Details", description = "Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to `/pay/{method}/{invoices}` so you can display the exact amount due and confirm the invoice is still unpaid.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Detailed invoice payload for the requested invoice.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = BillingInvoiceDetail.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getBillingInvoice(@Parameter(in = ParameterIn.PATH, description = "The invoice ID. Use IDs from `GET /billing/invoices` or from order responses.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.getBillingInvoice(id,securityContext);
    }
    @GET
    @Path("/invoices")
    
    @Produces({ "application/json" })
    @Operation(summary = "List Account Invoices", description = "Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with `/billing/invoices/{id}` to retrieve detailed line items, or with `/pay/{method}/{invoices}` to initiate payment.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Invoice listing and summary for the account.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = BillingInvoiceList.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getBillingInvoices(@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.getBillingInvoices(securityContext);
    }
    @GET
    @Path("/prepays")
    
    @Produces({ "application/json" })
    @Operation(summary = "List Prepay Balances", description = "Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting `prepay` as a payment method.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response getBillingPrePays(@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.getBillingPrePays(securityContext);
    }
    @POST
    @Path("/creditcards/{id}/verify")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Submit Credit Card Verification", description = "Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by `GET /billing/creditcards/{id}/verify`. A successful response means the card is verified and can be selected as a payment method via `/billing/payment_method`.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postBillingCreditCardVerify(@Parameter(in = ParameterIn.DEFAULT, description = "" ,required=true) BillingVerifyCcRequest body
,@Parameter(in = ParameterIn.PATH, description = "The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.postBillingCreditCardVerify(body,id,securityContext);
    }
    @POST
    @Path("/creditcards/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Update Credit Card Details", description = "Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response updateBillingCreditCard(@Parameter(in = ParameterIn.PATH, description = "The credit card ID. Use IDs from `GET /billing/creditcards` or the response from `POST /billing/creditcards`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.updateBillingCreditCard(id,securityContext);
    }
    @POST
    @Path("/payment_method")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Default Payment Method", description = "Updates the account's default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response updateBillingPaymentMethod(@Parameter(in = ParameterIn.DEFAULT, description = "" ,required=true) BillingPaymentMethodRequest body
,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.updateBillingPaymentMethod(body,securityContext);
    }
}
