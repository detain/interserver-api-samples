package io.swagger.api;

import java.math.BigDecimal;
import io.swagger.model.BillingAddCcRequest;
import io.swagger.model.BillingInvoiceDetail;
import io.swagger.model.BillingInvoiceList;
import io.swagger.model.BillingPaymentMethodRequest;
import io.swagger.model.BillingPrepayRequest;
import io.swagger.model.BillingVerifyCcRequest;
import io.swagger.model.InlineResponse401;
import io.swagger.model.SuccessTextResponse;
import io.swagger.api.BillingApiService;

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
@Path("/billing")
@RequestScoped






public class BillingApi  {

  @Context SecurityContext securityContext;

  @Inject BillingApiService delegate;


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
    public Response addBillingCreditCard(
@Parameter(description = "" ,required=true) BillingAddCcRequest body
) {
        return delegate.addBillingCreditCard(body, securityContext);
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
    public Response addBillingCreditCard(@Multipart(value = "name")  String name, @Multipart(value = "address")  String address, @Multipart(value = "city")  String city, @Multipart(value = "state")  String state, @Multipart(value = "country")  String country, @Multipart(value = "zip")  String zip, @Multipart(value = "cc")  String cc, @Multipart(value = "cc_exp")  String ccExp, @Multipart(value = "cc_ccv2")  String ccCcv2) {
        return delegate.addBillingCreditCard(name, address, city, state, country, zip, cc, ccExp, ccCcv2, securityContext);
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
    public Response addBillingPrepay(
@Parameter(description = "" ,required=true) BillingPrepayRequest body
) {
        return delegate.addBillingPrepay(body, securityContext);
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
    public Response addBillingPrepay(@Multipart(value = "module")  String module, @Multipart(value = "amount")  BigDecimal amount, @Multipart(value = "automatic_use")  String automaticUse) {
        return delegate.addBillingPrepay(module, amount, automaticUse, securityContext);
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
    public Response deleteBillingCreditCard(
@Parameter(description = "The credit card ID to remove. Use IDs from `GET /billing/creditcards`.",required=true) @PathParam("id") Integer id
) {
        return delegate.deleteBillingCreditCard(id, securityContext);
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
    public Response deleteBillingInvoice(
@Parameter(description = "The invoice ID to delete. Only unpaid invoices can be deleted.",required=true) @PathParam("id") Integer id
) {
        return delegate.deleteBillingInvoice(id, securityContext);
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
    public Response deleteBillingPrepay(
@Parameter(description = "The prepay balance ID to delete.",required=true) @PathParam("id") Integer id
) {
        return delegate.deleteBillingPrepay(id, securityContext);
    }

    @GET
    @Path("/cart")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Shopping Cart Contents", description = "Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to `/pay/{method}/{invoices}`.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Current shopping cart contents and available payment methods.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = Object.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getBillingCart() {
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
    public Response getBillingCreditCardVerify(
@Parameter(description = "The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`.",required=true) @PathParam("id") Integer id
) {
        return delegate.getBillingCreditCardVerify(id, securityContext);
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
    public Response getBillingInvoice(
@Parameter(description = "The invoice ID. Use IDs from `GET /billing/invoices` or from order responses.",required=true) @PathParam("id") Integer id
) {
        return delegate.getBillingInvoice(id, securityContext);
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
    public Response getBillingInvoices() {
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
        @ApiResponse(responseCode = "200", description = "Prepay balances and metadata.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = Object.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getBillingPrePays() {
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
    public Response postBillingCreditCardVerify(
@Parameter(description = "" ,required=true) BillingVerifyCcRequest body
, 
@Parameter(description = "The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`.",required=true) @PathParam("id") Integer id
) {
        return delegate.postBillingCreditCardVerify(body, id, securityContext);
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
    public Response postBillingCreditCardVerify(@Multipart(value = "idx")  Integer idx, @Multipart(value = "cc_ccv2")  String ccCcv2, @Multipart(value = "cc_amount1")  String ccAmount1, @Multipart(value = "cc_amount2")  String ccAmount2, @Multipart(value = "terms")  Boolean terms, 
@Parameter(description = "The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`.",required=true) @PathParam("id") Integer id
) {
        return delegate.postBillingCreditCardVerify(idx, ccCcv2, ccAmount1, ccAmount2, terms, id, securityContext);
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
    public Response updateBillingCreditCard(
@Parameter(description = "The credit card ID. Use IDs from `GET /billing/creditcards` or the response from `POST /billing/creditcards`.",required=true) @PathParam("id") Integer id
) {
        return delegate.updateBillingCreditCard(id, securityContext);
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
    public Response updateBillingPaymentMethod(
@Parameter(description = "" ,required=true) BillingPaymentMethodRequest body
) {
        return delegate.updateBillingPaymentMethod(body, securityContext);
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
    public Response updateBillingPaymentMethod(@Multipart(value = "payment_method")  String paymentMethod, @Multipart(value = "cc_auto")  String ccAuto) {
        return delegate.updateBillingPaymentMethod(paymentMethod, ccAuto, securityContext);
    }
}
