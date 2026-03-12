package io.swagger.api;

import io.swagger.model.DnsListItem;
import io.swagger.model.DnsNewDomain;
import io.swagger.model.DnsNewRecord;
import io.swagger.model.DnsRecord;
import io.swagger.model.DnsRecordType;
import io.swagger.model.DnsUpdateRecord;
import io.swagger.model.InlineResponse401;

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
public interface DnsApi  {

    /**
     * Create DNS Domain
     *
     * Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer&#x27;s DNS servers. Use &#x60;/dns/{id}&#x60; to manage records after creation.
     *
     */
    @POST
    @Path("/dns")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Create DNS Domain", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public void addDnsDomain(@Multipart(value = "domain")  String domain, @Multipart(value = "ip")  String ip);

    /**
     * Create DNS Domain
     *
     * Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer&#x27;s DNS servers. Use &#x60;/dns/{id}&#x60; to manage records after creation.
     *
     */
    @POST
    @Path("/dns")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Create DNS Domain", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public void addDnsDomain(DnsNewDomain body);

    /**
     * Add DNS Record to Domain
     *
     * Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; afterward to confirm the record was created.
     *
     */
    @POST
    @Path("/dns/{id}")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Add DNS Record to Domain", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Add DNS Domain Response"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public void addDnsRecord(@Multipart(value = "name")  String name, @Multipart(value = "type")  DnsRecordType type, @Multipart(value = "content")  String content, @Multipart(value = "ttl")  Integer ttl, @Multipart(value = "prio")  Integer prio, @PathParam("id") String id);

    /**
     * Add DNS Record to Domain
     *
     * Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; afterward to confirm the record was created.
     *
     */
    @POST
    @Path("/dns/{id}")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Add DNS Record to Domain", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Add DNS Domain Response"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public void addDnsRecord(DnsNewRecord body, @PathParam("id") String id);

    /**
     * Delete DNS Domain
     *
     * Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.
     *
     */
    @DELETE
    @Path("/dns/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Delete DNS Domain", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public void deleteDnsDomain(@PathParam("id") String id);

    /**
     * Delete DNS Record
     *
     * Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; to verify the record has been removed.
     *
     */
    @DELETE
    @Path("/dns/{domainId}/{recordId}")
    @Produces({ "application/json" })
    @Operation(summary = "Delete DNS Record", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public void deleteDnsRecord(@PathParam("domainId") Integer domainId, @PathParam("recordId") Integer recordId);

    /**
     * List Domain DNS Records
     *
     * Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record &#x60;id&#x60; values with &#x60;/dns/{domainId}/{recordId}&#x60; to update or delete individual records.
     *
     */
    @GET
    @Path("/dns/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "List Domain DNS Records", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The DNS records for the specified domain.", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = DnsRecord.class)))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public List<DnsRecord> getDnsDomain(@PathParam("id") Integer id);

    /**
     * List DNS Domains
     *
     * Returns the DNS domains on your account along with their primary A record content. Use the &#x60;id&#x60; from each entry with &#x60;/dns/{id}&#x60; to retrieve the full record set, or to add, update, and delete individual records.
     *
     */
    @GET
    @Path("/dns")
    @Produces({ "application/json" })
    @Operation(summary = "List DNS Domains", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Listing of DNS domains on the account with their primary A record.", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = DnsListItem.class)))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public List<DnsListItem> getDnsList();

    /**
     * Update DNS Record
     *
     * Updates an existing DNS record with new values. Use &#x60;GET /dns/{id}&#x60; to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.
     *
     */
    @POST
    @Path("/dns/{domainId}/{recordId}")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Update DNS Record", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public void updateDnsRecord(@Multipart(value = "name")  String name, @Multipart(value = "type")  DnsRecordType type, @Multipart(value = "content")  String content, @Multipart(value = "ttl")  String ttl, @Multipart(value = "prio")  String prio, @Multipart(value = "disabled")  String disabled, @Multipart(value = "ordername")  String ordername, @Multipart(value = "auth")  String auth, @PathParam("domainId") Integer domainId, @PathParam("recordId") Integer recordId);

    /**
     * Update DNS Record
     *
     * Updates an existing DNS record with new values. Use &#x60;GET /dns/{id}&#x60; to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.
     *
     */
    @POST
    @Path("/dns/{domainId}/{recordId}")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Update DNS Record", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public void updateDnsRecord(DnsUpdateRecord body, @PathParam("domainId") Integer domainId, @PathParam("recordId") Integer recordId);
}
