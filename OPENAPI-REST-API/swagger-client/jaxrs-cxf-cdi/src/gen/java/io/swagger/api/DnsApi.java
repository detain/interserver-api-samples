package io.swagger.api;

import io.swagger.model.DnsListItem;
import io.swagger.model.DnsNewDomain;
import io.swagger.model.DnsNewRecord;
import io.swagger.model.DnsRecord;
import io.swagger.model.DnsRecordType;
import io.swagger.model.DnsUpdateRecord;
import io.swagger.model.InlineResponse401;
import io.swagger.api.DnsApiService;

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
@Path("/dns")
@RequestScoped






public class DnsApi  {

  @Context SecurityContext securityContext;

  @Inject DnsApiService delegate;


    @POST
    
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Create DNS Domain", description = "Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer's DNS servers. Use `/dns/{id}` to manage records after creation.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "DNS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response addDnsDomain(@Multipart(value = "domain")  String domain, @Multipart(value = "ip")  String ip) {
        return delegate.addDnsDomain(domain, ip, securityContext);
    }

    @POST
    
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Create DNS Domain", description = "Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer's DNS servers. Use `/dns/{id}` to manage records after creation.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "DNS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response addDnsDomain(
@Parameter(description = "" ,required=true) DnsNewDomain body
) {
        return delegate.addDnsDomain(body, securityContext);
    }

    @POST
    @Path("/{id}")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Add DNS Record to Domain", description = "Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use `GET /dns/{id}` afterward to confirm the record was created.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "DNS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Add DNS Domain Response"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response addDnsRecord(@Multipart(value = "name")  String name, @Multipart(value = "type")  DnsRecordType type, @Multipart(value = "content")  String content, @Multipart(value = "ttl")  Integer ttl, @Multipart(value = "prio")  Integer prio, 
@Parameter(description = "The DNS Domain ID.",required=true) @PathParam("id") String id
) {
        return delegate.addDnsRecord(name, type, content, ttl, prio, id, securityContext);
    }

    @POST
    @Path("/{id}")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Add DNS Record to Domain", description = "Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use `GET /dns/{id}` afterward to confirm the record was created.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "DNS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Add DNS Domain Response"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response addDnsRecord(
@Parameter(description = "" ,required=true) DnsNewRecord body
, 
@Parameter(description = "The DNS Domain ID.",required=true) @PathParam("id") String id
) {
        return delegate.addDnsRecord(body, id, securityContext);
    }

    @DELETE
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Delete DNS Domain", description = "Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "DNS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response deleteDnsDomain(
@Parameter(description = "The DNS domain ID to delete. Use the `id` from `GET /dns` to identify the domain.",required=true) @PathParam("id") String id
) {
        return delegate.deleteDnsDomain(id, securityContext);
    }

    @DELETE
    @Path("/{domainId}/{recordId}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Delete DNS Record", description = "Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use `GET /dns/{id}` to verify the record has been removed.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "DNS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response deleteDnsRecord(
@Parameter(description = "The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.",required=true) @PathParam("domainId") Integer domainId
, 
@Parameter(description = "The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.",required=true) @PathParam("recordId") Integer recordId
) {
        return delegate.deleteDnsRecord(domainId, recordId, securityContext);
    }

    @GET
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "List Domain DNS Records", description = "Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record `id` values with `/dns/{domainId}/{recordId}` to update or delete individual records.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "DNS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The DNS records for the specified domain.", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = DnsRecord.class)))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getDnsDomain(
@Parameter(description = "The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.",required=true) @PathParam("id") Integer id
) {
        return delegate.getDnsDomain(id, securityContext);
    }

    @GET
    
    
    @Produces({ "application/json" })
    @Operation(summary = "List DNS Domains", description = "Returns the DNS domains on your account along with their primary A record content. Use the `id` from each entry with `/dns/{id}` to retrieve the full record set, or to add, update, and delete individual records.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "DNS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Listing of DNS domains on the account with their primary A record.", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = DnsListItem.class)))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getDnsList() {
        return delegate.getDnsList(securityContext);
    }

    @POST
    @Path("/{domainId}/{recordId}")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Update DNS Record", description = "Updates an existing DNS record with new values. Use `GET /dns/{id}` to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "DNS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response updateDnsRecord(@Multipart(value = "name")  String name, @Multipart(value = "type")  DnsRecordType type, @Multipart(value = "content")  String content, @Multipart(value = "ttl")  String ttl, @Multipart(value = "prio")  String prio, @Multipart(value = "disabled")  String disabled, @Multipart(value = "ordername")  String ordername, @Multipart(value = "auth")  String auth, 
@Parameter(description = "The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.",required=true) @PathParam("domainId") Integer domainId
, 
@Parameter(description = "The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.",required=true) @PathParam("recordId") Integer recordId
) {
        return delegate.updateDnsRecord(name, type, content, ttl, prio, disabled, ordername, auth, domainId, recordId, securityContext);
    }

    @POST
    @Path("/{domainId}/{recordId}")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Update DNS Record", description = "Updates an existing DNS record with new values. Use `GET /dns/{id}` to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "DNS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response updateDnsRecord(
@Parameter(description = "The request data to update a dns record." ,required=true) DnsUpdateRecord body
, 
@Parameter(description = "The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.",required=true) @PathParam("domainId") Integer domainId
, 
@Parameter(description = "The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.",required=true) @PathParam("recordId") Integer recordId
) {
        return delegate.updateDnsRecord(body, domainId, recordId, securityContext);
    }
}
