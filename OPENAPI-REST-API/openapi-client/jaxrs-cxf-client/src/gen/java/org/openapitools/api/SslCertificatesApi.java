package org.openapitools.api;

import org.openapitools.model.ChargeInvoiceRows;
import org.openapitools.model.GetAccountInfo401Response;
import org.openapitools.model.SslCancel200Response;
import org.openapitools.model.SuccessTextResponse;

import java.util.List;
import java.util.Map;
import javax.ws.rs.*;
import org.apache.cxf.jaxrs.ext.multipart.*;

import io.swagger.annotations.Api;
import io.swagger.annotations.ApiOperation;
import io.swagger.annotations.ApiResponses;
import io.swagger.annotations.ApiResponse;
import io.swagger.jaxrs.PATCH;

/**
 * InterServer Management API
 *
 * <p># Overview  The InterServer Management API provides programmatic access to manage your InterServer services. Use this REST API to automate provisioning, configuration, and billing operations across your account.  The API covers the following service categories: - [Domains](https://www.interserver.net/domains/) — registration, transfers, and DNS management - [Web Hosting](https://www.interserver.net/hosting/) — shared and reseller hosting - [VPS Hosting](https://www.interserver.net/vps/) — virtual private servers - [Dedicated Servers](https://www.interserver.net/dedicated/) — bare metal and [Rapid Deploy Servers](https://www.interserver.net/dedicated/rapid-deploy.html) - [Backups](https://www.interserver.net/storage/) — storage and backup services - Licenses — control panel and software licenses - [Mail](https://www.mail.baby/) — mail delivery services - SSL — certificate provisioning - Billing — invoices, payment methods, and account management  For interactive testing, see the [API documentation](/api-docs/).  # Authentication  Most endpoints require authentication. Two methods are supported:  ## API Key (Preferred)  Generate an API key from the [Account Security](https://my.interserver.net/account_security) page on [my.interserver.net](https://my.interserver.net/). Pass it in the `X-API-KEY` request header:  ``` X-API-KEY: your-api-key-here ```  ## Session-Based Authentication  Alternatively, authenticate by creating a session:  1. **Log in** — Send a `POST` request to `/login` with your account credentials. The response includes a session identifier. 2. **Pass the session ID** — Include the session identifier in the `sessionid` header on subsequent requests:  ``` sessionid: your-session-id-here ```  API key authentication is recommended for most integrations as it does not expire and avoids the overhead of session management.  
 *
 */
@Path("/ssl")
@Api(value = "/", description = "")
public interface SslCertificatesApi  {

    /**
     * Place SSL Cert Order
     *
     * Places an order for a new SSL certificate. Use &#x60;PUT /ssl/order&#x60; to validate the order first.
     *
     */
    @POST
    @Path("/order")
    @Produces({ "application/json" })
    @ApiOperation(value = "Place SSL Cert Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 200, message = "Default response") })
    public void addSsl();

    /**
     * SSL Cert Ordering Information
     *
     * Retrieves available SSL certificate types and pricing for ordering.
     *
     */
    @GET
    @Path("/order")
    @Produces({ "application/json" })
    @ApiOperation(value = "SSL Cert Ordering Information", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 200, message = "Default response") })
    public void getNewSsl();

    /**
     * Get SSL Cert Info
     *
     * Returns detailed information about a specific SSL certificate including its domain and expiration.
     *
     */
    @GET
    @Path("/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get SSL Cert Info", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 200, message = "Default response") })
    public void getSslInfo(@PathParam("id") Integer id);

    /**
     * Get SSL Cert Invoices
     *
     * Returns the billing invoices associated with this SSL certificate.
     *
     */
    @GET
    @Path("/{id}/invoices")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get SSL Cert Invoices", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Get Invoices response", response = ChargeInvoiceRows.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public ChargeInvoiceRows getSslInvoices(@PathParam("id") Integer id);

    /**
     * List SSL Certs
     *
     * Returns all SSL certificate services on the account with their current status.
     *
     */
    @GET
    
    @Produces({ "application/json" })
    @ApiOperation(value = "List SSL Certs", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "The listing of `SSL` services on your account."),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 200, message = "Default response") })
    public void getSslList();

    /**
     * Resend SSL Welcome Email
     *
     * Resends the welcome email for the order.
     *
     */
    @GET
    @Path("/{id}/welcome_email")
    @Produces({ "application/json" })
    @ApiOperation(value = "Resend SSL Welcome Email", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse getSslWelcomeEmail(@PathParam("id") Integer id);

    /**
     * Validate SSL Cert Order
     *
     * Validates an SSL certificate order before placing it.
     *
     */
    @PUT
    @Path("/order")
    @Produces({ "application/json" })
    @ApiOperation(value = "Validate SSL Cert Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Validate SSL Order response"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public void putSsl();

    /**
     * Cancel SSL Certificate Service
     *
     * Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.
     *
     */
    @DELETE
    @Path("/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Cancel SSL Certificate Service", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "SSL Cancel", response = SslCancel200Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SslCancel200Response sslCancel(@PathParam("id") Integer id);

    /**
     * Update SSL Cert Order
     *
     * Updates settings on an SSL certificate order.
     *
     */
    @POST
    @Path("/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Update SSL Cert Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 200, message = "Default response") })
    public void updateSslInfo(@PathParam("id") String id);
}
