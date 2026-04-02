package org.openapitools.api;

import org.openapitools.model.DnsListItem;
import org.openapitools.model.DnsRecord;
import org.openapitools.model.DnsRecordType;
import org.openapitools.model.GetAccountInfo401Response;
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
@Path("/dns")
@Api(value = "/", description = "")
public interface DnsApi  {

    /**
     * Create DNS Domain
     *
     * Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer&#39;s DNS servers. Use &#x60;/dns/{id}&#x60; to manage records after creation.
     *
     */
    @POST
    
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Create DNS Domain", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse addDnsDomain(@Multipart(value = "domain")  String domain, @Multipart(value = "ip")  String ip);

    /**
     * Add DNS Record to Domain
     *
     * Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; afterward to confirm the record was created.
     *
     */
    @POST
    @Path("/{id}")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Add DNS Record to Domain", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Add DNS Domain Response"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public void addDnsRecord(@PathParam("id") String id, @Multipart(value = "name")  String name, @Multipart(value = "type")  DnsRecordType type, @Multipart(value = "content")  String content, @Multipart(value = "ttl", required = false)  Integer ttl, @Multipart(value = "prio", required = false)  Integer prio);

    /**
     * Delete DNS Domain
     *
     * Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.
     *
     */
    @DELETE
    @Path("/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Delete DNS Domain", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse deleteDnsDomain(@PathParam("id") String id);

    /**
     * Delete DNS Record
     *
     * Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; to verify the record has been removed.
     *
     */
    @DELETE
    @Path("/{domainId}/{recordId}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Delete DNS Record", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse deleteDnsRecord(@PathParam("domainId") Integer domainId, @PathParam("recordId") Integer recordId);

    /**
     * List Domain DNS Records
     *
     * Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record &#x60;id&#x60; values with &#x60;/dns/{domainId}/{recordId}&#x60; to update or delete individual records.
     *
     */
    @GET
    @Path("/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "List Domain DNS Records", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "The DNS records for the specified domain.", response = DnsRecord.class, responseContainer = "List"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public List<DnsRecord> getDnsDomain(@PathParam("id") Integer id);

    /**
     * List DNS Domains
     *
     * Returns the DNS domains on your account along with their primary A record content. Use the &#x60;id&#x60; from each entry with &#x60;/dns/{id}&#x60; to retrieve the full record set, or to add, update, and delete individual records.
     *
     */
    @GET
    
    @Produces({ "application/json" })
    @ApiOperation(value = "List DNS Domains", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Listing of DNS domains on the account with their primary A record.", response = DnsListItem.class, responseContainer = "List"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public List<DnsListItem> getDnsList();

    /**
     * Update DNS Record
     *
     * Updates an existing DNS record with new values. Use &#x60;GET /dns/{id}&#x60; to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.
     *
     */
    @POST
    @Path("/{domainId}/{recordId}")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Update DNS Record", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse updateDnsRecord(@PathParam("domainId") Integer domainId, @PathParam("recordId") Integer recordId, @Multipart(value = "name", required = false)  String name, @Multipart(value = "type", required = false)  DnsRecordType type, @Multipart(value = "content", required = false)  String content, @Multipart(value = "ttl", required = false)  String ttl, @Multipart(value = "prio", required = false)  String prio, @Multipart(value = "disabled", required = false)  String disabled, @Multipart(value = "ordername", required = false)  String ordername, @Multipart(value = "auth", required = false)  String auth);
}
