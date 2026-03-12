package io.swagger.api;

import io.swagger.model.AffiliateBannerRow;
import io.swagger.model.AffiliateDockSetup;
import io.swagger.model.AffiliatePaymentSetup;
import io.swagger.model.AffiliateTrafficRow;
import io.swagger.model.InlineResponse401;
import io.swagger.model.MonthlyCounts;
import io.swagger.model.StatusMonthlyBreakdown;
import io.swagger.model.TextResponse;

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

@Path("/affiliate")


public class AffiliateApi {

    @GET
    @Path("/banners")
    @Produces({ "application/json" })
    @Operation(summary = "List Affiliate Banner Assets", description = "Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Affiliate Banners Array", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = AffiliateBannerRow.class)))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response getAffiliateBanners() {
        return Response.ok().entity("magic!").build();
    }
    @GET
    @Path("/rich_report")
    @Produces({ "application/json" })
    @Operation(summary = "Get Affiliate Performance Report", description = "Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response getAffiliateRichReport() {
        return Response.ok().entity("magic!").build();
    }
    @GET
    @Path("/sales_graph")
    @Produces({ "application/json" })
    @Operation(summary = "Get Affiliate Sales Graph Data", description = "Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Affiliate sales graph data broken down by time period.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = StatusMonthlyBreakdown.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response getAffiliateSalesGraph(  @QueryParam("days") 

 @Parameter(description = "Number of days of sales history to include in the graph data. Determines the time window for the returned data points.")  Integer days
) {
        return Response.ok().entity("magic!").build();
    }
    @GET
    @Path("/sales_report")
    @Produces({ "application/json" })
    @Operation(summary = "Get Affiliate Sales Report", description = "Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response getAffiliateSalesReport() {
        return Response.ok().entity("magic!").build();
    }
    @GET
    @Path("/traffic_graph")
    @Produces({ "application/json" })
    @Operation(summary = "Get Affiliate Traffic Graph Data", description = "Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Affiliate traffic graph data broken down by time period.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = MonthlyCounts.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response getAffiliateTrafficGraph(  @QueryParam("days") 

 @Parameter(description = "Number of days of traffic history to include in the graph data. Determines the time window for the returned data points.")  Integer days
) {
        return Response.ok().entity("magic!").build();
    }
    @GET
    @Path("/web_traffic")
    @Produces({ "application/json" })
    @Operation(summary = "List Affiliate Web Traffic Entries", description = "Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The recent affiliate web traffic", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = AffiliateTrafficRow.class)))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response getAffiliateWebTraffic() {
        return Response.ok().entity("magic!").build();
    }
    @POST
    @Path("/dock_setup")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Configure Affiliate Dock Settings", description = "Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response updateAffiliateDockSetup(@FormParam(value = "affiliate_dock_title")  String affiliateDockTitle,@FormParam(value = "affiliate_dock_description")  String affiliateDockDescription,@FormParam(value = "referrer_coupon")  String referrerCoupon) {
        return Response.ok().entity("magic!").build();
    }
    @POST
    @Path("/dock_setup")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Configure Affiliate Dock Settings", description = "Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response updateAffiliateDockSetup(@Valid AffiliateDockSetup body) {
        return Response.ok().entity("magic!").build();
    }
    @POST
    @Path("/landing_pg")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Configure Affiliate Landing Page", description = "Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response updateAffiliateLandingPage(@FormParam(value = "affiliate_dock_title")  String affiliateDockTitle,@FormParam(value = "affiliate_dock_description")  String affiliateDockDescription,@FormParam(value = "referrer_coupon")  String referrerCoupon) {
        return Response.ok().entity("magic!").build();
    }
    @POST
    @Path("/landing_pg")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Configure Affiliate Landing Page", description = "Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response updateAffiliateLandingPage(@Valid AffiliateDockSetup body) {
        return Response.ok().entity("magic!").build();
    }
    @POST
    @Path("/payment_setup")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Configure Affiliate Payout Preferences", description = "Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response updateAffiliatePaymentSetup(@FormParam(value = "affiliate_paypal")  String affiliatePaypal,@FormParam(value = "affiliate_payment_method")  String affiliatePaymentMethod) {
        return Response.ok().entity("magic!").build();
    }
    @POST
    @Path("/payment_setup")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Configure Affiliate Payout Preferences", description = "Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response updateAffiliatePaymentSetup(@Valid AffiliatePaymentSetup body) {
        return Response.ok().entity("magic!").build();
    }}
