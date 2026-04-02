package io.swagger.api;

import io.swagger.model.*;

import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.Parameter;
import io.swagger.v3.oas.annotations.responses.ApiResponses;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import io.swagger.v3.oas.annotations.media.ArraySchema;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;
import io.swagger.v3.oas.annotations.security.SecurityRequirement;

import io.swagger.model.DnsListItem;
import io.swagger.model.DnsNewDomain;
import io.swagger.model.DnsNewRecord;
import io.swagger.model.DnsRecord;
import io.swagger.model.DnsRecordType;
import io.swagger.model.DnsUpdateRecord;
import io.swagger.model.InlineResponse401;
import io.swagger.model.SuccessTextResponse;

import java.util.List;
import java.util.Map;

import java.io.InputStream;

import javax.ws.rs.core.Context;
import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;
import javax.ws.rs.*;
import javax.validation.constraints.*;
import org.jboss.resteasy.plugins.providers.multipart.MultipartFormDataInput;
import org.jboss.resteasy.plugins.providers.multipart.MultipartFormDataInput;
import org.jboss.resteasy.plugins.providers.multipart.MultipartFormDataInput;
@Path("/dns")



public interface DnsApi  {
   
    @POST
    
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Create DNS Domain", description = "Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer's DNS servers. Use `/dns/{id}` to manage records after creation.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "DNS" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response addDnsDomain(MultipartFormDataInput input,@Parameter(description = "", required=true)@FormParam("domain")  String domain,@Parameter(description = "", required=true)@FormParam("ip")  String ip,@Context SecurityContext securityContext);

    @POST
    
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Create DNS Domain", description = "Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer's DNS servers. Use `/dns/{id}` to manage records after creation.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "DNS" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response addDnsDomain(MultipartFormDataInput input,@Parameter(description = "" ,required=true) DnsNewDomain body,@Context SecurityContext securityContext);

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
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response addDnsRecord(MultipartFormDataInput input,@Parameter(description = "", required=true)@FormParam("name")  String name,@Parameter(description = "", required=true)@FormParam("type")  DnsRecordType type,@Parameter(description = "", required=true)@FormParam("content")  String content,@Parameter(description = "", required=true)@FormParam("ttl")  Integer ttl,@Parameter(description = "", required=true)@FormParam("prio")  Integer prio, @PathParam("id") String id,@Context SecurityContext securityContext);

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
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response addDnsRecord(MultipartFormDataInput input,@Parameter(description = "" ,required=true) DnsNewRecord body, @PathParam("id") String id,@Context SecurityContext securityContext);

    @DELETE
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Delete DNS Domain", description = "Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "DNS" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response deleteDnsDomain( @PathParam("id") String id,@Context SecurityContext securityContext);

    @DELETE
    @Path("/{domainId}/{recordId}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Delete DNS Record", description = "Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use `GET /dns/{id}` to verify the record has been removed.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "DNS" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response deleteDnsRecord( @PathParam("domainId") Integer domainId, @PathParam("recordId") Integer recordId,@Context SecurityContext securityContext);

    @GET
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "List Domain DNS Records", description = "Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record `id` values with `/dns/{domainId}/{recordId}` to update or delete individual records.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "DNS" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "The DNS records for the specified domain.", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = DnsRecord.class)))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response getDnsDomain( @PathParam("id") Integer id,@Context SecurityContext securityContext);

    @GET
    
    
    @Produces({ "application/json" })
    @Operation(summary = "List DNS Domains", description = "Returns the DNS domains on your account along with their primary A record content. Use the `id` from each entry with `/dns/{id}` to retrieve the full record set, or to add, update, and delete individual records.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "DNS" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "Listing of DNS domains on the account with their primary A record.", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = DnsListItem.class)))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response getDnsList(@Context SecurityContext securityContext);

    @POST
    @Path("/{domainId}/{recordId}")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Update DNS Record", description = "Updates an existing DNS record with new values. Use `GET /dns/{id}` to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "DNS" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response updateDnsRecord(MultipartFormDataInput input,@Parameter(description = "", required=true)@FormParam("name")  String name,@Parameter(description = "", required=true)@FormParam("type")  DnsRecordType type,@Parameter(description = "", required=true)@FormParam("content")  String content,@Parameter(description = "", required=true)@FormParam("ttl")  String ttl,@Parameter(description = "", required=true)@FormParam("prio")  String prio,@Parameter(description = "", required=true)@FormParam("disabled")  String disabled,@Parameter(description = "", required=true)@FormParam("ordername")  String ordername,@Parameter(description = "", required=true)@FormParam("auth")  String auth, @PathParam("domainId") Integer domainId, @PathParam("recordId") Integer recordId,@Context SecurityContext securityContext);

    @POST
    @Path("/{domainId}/{recordId}")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Update DNS Record", description = "Updates an existing DNS record with new values. Use `GET /dns/{id}` to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "DNS" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response updateDnsRecord(MultipartFormDataInput input,@Parameter(description = "The request data to update a dns record." ,required=true) DnsUpdateRecord body, @PathParam("domainId") Integer domainId, @PathParam("recordId") Integer recordId,@Context SecurityContext securityContext);

}
