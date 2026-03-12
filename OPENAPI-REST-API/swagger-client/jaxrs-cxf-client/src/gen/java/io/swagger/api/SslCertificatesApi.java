package io.swagger.api;

import io.swagger.model.ChargeInvoiceRows;
import io.swagger.model.InlineResponse20020;
import io.swagger.model.InlineResponse401;
import io.swagger.model.SuccessTextResponse;

import java.io.InputStream;
import java.io.OutputStream;
import java.util.List;
import java.util.Map;
import javax.ws.rs.*;
import javax.ws.rs.core.Response;
import javax.ws.rs.core.MediaType;
import org.apache.cxf.jaxrs.ext.multipart.*;

import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.responses.ApiResponses;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import io.swagger.v3.oas.annotations.media.ArraySchema;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;

/**
 * InterServer Management API
 *
 * <p># Overview  The InterServer Management API provides programmatic access to manage your InterServer services. Use this REST API to automate provisioning, configuration, and billing operations across your account.  The API covers the following service categories: - [Domains](https://www.interserver.net/domains/) — registration, transfers, and DNS management - [Web Hosting](https://www.interserver.net/hosting/) — shared and reseller hosting - [VPS Hosting](https://www.interserver.net/vps/) — virtual private servers - [Dedicated Servers](https://www.interserver.net/dedicated/) — bare metal and [Rapid Deploy Servers](https://www.interserver.net/dedicated/rapid-deploy.html) - [Backups](https://www.interserver.net/storage/) — storage and backup services - Licenses — control panel and software licenses - [Mail](https://www.mail.baby/) — mail delivery services - SSL — certificate provisioning - Billing — invoices, payment methods, and account management  For interactive testing, see the [API documentation](/api-docs/).  # Authentication  Most endpoints require authentication. Two methods are supported:  ## API Key (Preferred)  Generate an API key from the [Account Security](https://my.interserver.net/account_security) page on [my.interserver.net](https://my.interserver.net/). Pass it in the `X-API-KEY` request header:  ``` X-API-KEY: your-api-key-here ```  ## Session-Based Authentication  Alternatively, authenticate by creating a session:  1. **Log in** — Send a `POST` request to `/login` with your account credentials. The response includes a session identifier. 2. **Pass the session ID** — Include the session identifier in the `sessionid` header on subsequent requests:  ``` sessionid: your-session-id-here ```  API key authentication is recommended for most integrations as it does not expire and avoids the overhead of session management.  
 *
 */
@Path("/")
public interface SslCertificatesApi  {

    /**
     * Place SSL Cert Order
     *
     * Places an order for a new SSL certificate. Use &#x60;PUT /ssl/order&#x60; to validate the order first.
     *
     */
    @POST
    @Path("/ssl/order")
    @Produces({ "application/json" })
    @Operation(summary = "Place SSL Cert Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public void addSsl();

    /**
     * SSL Cert Ordering Information
     *
     * Retrieves available SSL certificate types and pricing for ordering.
     *
     */
    @GET
    @Path("/ssl/order")
    @Produces({ "application/json" })
    @Operation(summary = "SSL Cert Ordering Information", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public void getNewSsl();

    /**
     * Get SSL Cert Info
     *
     * Returns detailed information about a specific SSL certificate including its domain and expiration.
     *
     */
    @GET
    @Path("/ssl/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Get SSL Cert Info", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public void getSslInfo(@PathParam("id") Integer id);

    /**
     * Get SSL Cert Invoices
     *
     * Returns the billing invoices associated with this SSL certificate.
     *
     */
    @GET
    @Path("/ssl/{id}/invoices")
    @Produces({ "application/json" })
    @Operation(summary = "Get SSL Cert Invoices", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get Invoices response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ChargeInvoiceRows.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public ChargeInvoiceRows getSslInvoices(@PathParam("id") Integer id);

    /**
     * List SSL Certs
     *
     * Returns all SSL certificate services on the account with their current status.
     *
     */
    @GET
    @Path("/ssl")
    @Produces({ "application/json" })
    @Operation(summary = "List SSL Certs", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The listing of `SSL` services on your account."),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public void getSslList();

    /**
     * Resend SSL Welcome Email
     *
     * Resends the welcome email for the order.
     *
     */
    @GET
    @Path("/ssl/{id}/welcome_email")
    @Produces({ "application/json" })
    @Operation(summary = "Resend SSL Welcome Email", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse getSslWelcomeEmail(@PathParam("id") Integer id);

    /**
     * Validate SSL Cert Order
     *
     * Validates an SSL certificate order before placing it.
     *
     */
    @PUT
    @Path("/ssl/order")
    @Produces({ "application/json" })
    @Operation(summary = "Validate SSL Cert Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Validate SSL Order response"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public void putSsl();

    /**
     * Cancel SSL Certificate Service
     *
     * Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.
     *
     */
    @DELETE
    @Path("/ssl/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Cancel SSL Certificate Service", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "SSL Cancel", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20020.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public InlineResponse20020 sslCancel(@PathParam("id") Integer id);

    /**
     * Update SSL Cert Order
     *
     * Updates settings on an SSL certificate order.
     *
     */
    @POST
    @Path("/ssl/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Update SSL Cert Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public void updateSslInfo(@PathParam("id") String id);
}
