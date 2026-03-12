package io.swagger.api;

import io.swagger.model.ChargeInvoiceRows;
import io.swagger.model.CreateFilter;
import io.swagger.model.CreateFirewallRule;
import io.swagger.model.CreateGeoFirewallRule;
import io.swagger.model.DeleteFirewallRule;
import io.swagger.model.DeleteGeoFirewallRule;
import io.swagger.model.InlineResponse20012;
import io.swagger.model.InlineResponse20013;
import io.swagger.model.InlineResponse20014;
import io.swagger.model.InlineResponse20015;
import io.swagger.model.InlineResponse20016;
import io.swagger.model.InlineResponse20017;
import io.swagger.model.InlineResponse20018;
import io.swagger.model.InlineResponse201;
import io.swagger.model.InlineResponse2011;
import io.swagger.model.InlineResponse2012;
import io.swagger.model.InlineResponse400;
import io.swagger.model.InlineResponse4001;
import io.swagger.model.InlineResponse4002;
import io.swagger.model.InlineResponse4003;
import io.swagger.model.InlineResponse4004;
import io.swagger.model.InlineResponse4005;
import io.swagger.model.InlineResponse401;
import io.swagger.model.InlineResponse500;
import io.swagger.model.InlineResponse5001;
import io.swagger.model.InlineResponse5002;
import io.swagger.model.InlineResponse5003;
import io.swagger.model.InlineResponse5004;
import io.swagger.model.InlineResponse5005;
import io.swagger.model.ScrubIpFilterTypes;
import io.swagger.model.ScrubIpPlaceOrder;
import io.swagger.model.ScrubIpsLogRowSchema;
import io.swagger.model.ScrubIpsRowSchema;
import com.fasterxml.jackson.databind.ObjectMapper;
import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.Parameter;
import io.swagger.v3.oas.annotations.enums.ParameterIn;
import io.swagger.v3.oas.annotations.responses.ApiResponses;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import io.swagger.v3.oas.annotations.media.ArraySchema;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;
import io.swagger.v3.oas.annotations.security.SecurityRequirement;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.RestController;
import org.springframework.web.bind.annotation.CookieValue;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestHeader;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RequestPart;
import org.springframework.web.bind.annotation.RestController;
import org.springframework.web.multipart.MultipartFile;

import javax.validation.Valid;
import javax.validation.constraints.*;
import javax.servlet.http.HttpServletRequest;
import java.io.IOException;
import java.util.List;
import java.util.Map;


@RestController
public class ScrubIpsApiController implements ScrubIpsApi {

    private static final Logger log = LoggerFactory.getLogger(ScrubIpsApiController.class);

    private final ObjectMapper objectMapper;

    private final HttpServletRequest request;

    @org.springframework.beans.factory.annotation.Autowired
    public ScrubIpsApiController(ObjectMapper objectMapper, HttpServletRequest request) {
        this.objectMapper = objectMapper;
        this.request = request;
    }

    public ResponseEntity<InlineResponse20013> cancelScrubIp(@Parameter(in = ParameterIn.PATH, description = "ScrubIp ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<InlineResponse20013>(objectMapper.readValue("{\n  \"success\" : true,\n  \"text\" : \"Scrub Ips is canceled.\"\n}", InlineResponse20013.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<InlineResponse20013>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<InlineResponse20013>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<InlineResponse2011> createFilter(@Parameter(in = ParameterIn.PATH, description = "ScrubIp ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true, schema=@Schema()) @Valid @RequestBody CreateFilter body
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<InlineResponse2011>(objectMapper.readValue("{\n  \"success\" : true,\n  \"text\" : \"New filter has been created.\"\n}", InlineResponse2011.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<InlineResponse2011>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<InlineResponse2011>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<InlineResponse201> createGeoRule(@Parameter(in = ParameterIn.PATH, description = "ScrubIp ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true, schema=@Schema()) @Valid @RequestBody CreateGeoFirewallRule body
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<InlineResponse201>(objectMapper.readValue("{\n  \"success\" : true,\n  \"text\" : \"New firewall Rule has been created.\"\n}", InlineResponse201.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<InlineResponse201>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<InlineResponse201>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<InlineResponse201> createRule(@Parameter(in = ParameterIn.PATH, description = "ScrubIp ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true, schema=@Schema()) @Valid @RequestBody CreateFirewallRule body
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<InlineResponse201>(objectMapper.readValue("{\n  \"success\" : true,\n  \"text\" : \"New firewall Rule has been created.\"\n}", InlineResponse201.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<InlineResponse201>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<InlineResponse201>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<InlineResponse20017> deleteFilter(@Parameter(in = ParameterIn.PATH, description = "ScrubIp ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true, schema=@Schema()) @Valid @RequestBody CreateFilter body
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<InlineResponse20017>(objectMapper.readValue("{\n  \"success\" : true,\n  \"text\" : \"Filter is deleted.\"\n}", InlineResponse20017.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<InlineResponse20017>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<InlineResponse20017>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<InlineResponse20015> disableScrub(@Parameter(in = ParameterIn.PATH, description = "ScrubIp ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<InlineResponse20015>(objectMapper.readValue("{\n  \"success\" : true,\n  \"text\" : \"Scrub is disabled on your IP.\"\n}", InlineResponse20015.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<InlineResponse20015>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<InlineResponse20015>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<InlineResponse20014> enableScrub(@Parameter(in = ParameterIn.PATH, description = "ScrubIp ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<InlineResponse20014>(objectMapper.readValue("{\n  \"success\" : true,\n  \"text\" : \"Scrub is enabled on your IP.\"\n}", InlineResponse20014.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<InlineResponse20014>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<InlineResponse20014>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<InlineResponse20018> getOrderDetail() {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<InlineResponse20018>(objectMapper.readValue("{\n  \"packageCosts\" : {\n    \"package_cost\" : 5,\n    \"currencySymbol\" : \"$\",\n    \"currency\" : \"USD\",\n    \"package_id\" : 11552\n  },\n  \"serviceTypes\" : [ {\n    \"services_id\" : 11552,\n    \"services_field1\" : \"\",\n    \"services_field2\" : \"\",\n    \"services_name\" : \"Current IP + Scrub\",\n    \"services_cost\" : 5,\n    \"services_module\" : \"scrub_ips\"\n  }, {\n    \"services_id\" : 11552,\n    \"services_field1\" : \"\",\n    \"services_field2\" : \"\",\n    \"services_name\" : \"Current IP + Scrub\",\n    \"services_cost\" : 5,\n    \"services_module\" : \"scrub_ips\"\n  } ],\n  \"ips\" : [ {\n    \"service_hostname\" : \"server.gtest.com\",\n    \"service_id\" : 12345,\n    \"service_module\" : \"vps\"\n  }, {\n    \"service_hostname\" : \"server.gtest.com\",\n    \"service_id\" : 12345,\n    \"service_module\" : \"vps\"\n  } ]\n}", InlineResponse20018.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<InlineResponse20018>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<InlineResponse20018>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<InlineResponse20012> getScrubIpDetails(@Parameter(in = ParameterIn.PATH, description = "ScrubIp ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<InlineResponse20012>(objectMapper.readValue("{\n  \"serviceInfo\" : {\n    \"scrub_ip_id\" : \"123\",\n    \"scrub_ip_type\" : \"11552\",\n    \"scrub_ip_custid\" : \"456\",\n    \"scrub_ip_order_date\" : \"2025-12-26 08:24:02\",\n    \"scrub_ip_ip\" : \"11.24.11.23\",\n    \"scrub_ip_service_id\" : \"11111\",\n    \"scrub_ip_service_module\" : \"servers\",\n    \"scrub_ip_status\" : \"active\",\n    \"scrub_ip_invoice\" : \"654321\",\n    \"scrub_ip_currency\" : \"USD\",\n    \"scrub_ip_coupon\" : \"0\",\n    \"scrub_ip_comment\" : \"\"\n  },\n  \"client_links\" : [ {\n    \"label\" : \"Invoices\",\n    \"link\" : \"invoices\",\n    \"icon\" : \"fas fa-file-invoice-dollar fa-w-12\",\n    \"icon_text\" : \"\",\n    \"help_text\" : \"Invoice History\"\n  }, {\n    \"label\" : \"Cancel Scrub IPs\",\n    \"link\" : \"cancel\",\n    \"icon\" : \"fas fa-times\",\n    \"icon_text\" : \"\",\n    \"help_text\" : \"Cancel Scrub IPs\"\n  }, {\n    \"label\" : \"Disable Scrub\",\n    \"link\" : \"scrub_action\",\n    \"icon\" : \"fa fa-shield text-lg\",\n    \"icon_text\" : \"\",\n    \"help_text\" : \"Enable/Disable Scrub\",\n    \"other_attr\" : \"\"\n  }, {\n    \"label\" : \"Scrub Documentation\",\n    \"link\" : \"https://www.interserver.net/tips/kb/scrub/\",\n    \"icon\" : \"fa fa-file text-lg\",\n    \"icon_text\" : \"\",\n    \"help_text\" : \"Scrub Documentation\",\n    \"other_attr\" : \"target= \\"_blank\\"\"\n  } ],\n  \"billingDetails\" : {\n    \"service_last_invoice_date\" : \"December 26, 2025\",\n    \"service_payment_status\" : \"Paid\",\n    \"service_frequency\" : \"Monthly\",\n    \"next_date\" : \"2026-01-26 08:24:02\",\n    \"service_next_invoice_date\" : \"January 26, 2026\",\n    \"service_currency\" : \"USD\",\n    \"service_currency_symbol\" : \"$\",\n    \"service_cost_info\" : \"5.00\"\n  },\n  \"custCurrency\" : \"USD\",\n  \"custCurrencySymbol\" : \"$\",\n  \"package\" : \"Current IP + Scrub\",\n  \"extraInfoTables\" : {\n    \"scrub_ips\" : {\n      \"title\" : \"Connection Information\",\n      \"rows\" : [ {\n        \"desc\" : \"IP\",\n        \"value\" : \"11.12.12.12\"\n      }, {\n        \"desc\" : \"Scrub\",\n        \"value\" : \"Enabled\"\n      } ]\n    }\n  },\n  \"filter_firewall\" : {\n    \"rules\" : [ ],\n    \"filters\" : [ {\n      \"daddr\" : \"2331742347\",\n      \"dest\" : \"80\",\n      \"filter_name\" : \"dns\",\n      \"destination_ip\" : \"11.12.12.12\",\n      \"filter\" : \"Dns\"\n    }, {\n      \"daddr\" : \"2331742347\",\n      \"dest\" : \"443\",\n      \"filter_name\" : \"dns\",\n      \"destination_ip\" : \"11.12.12.12\",\n      \"filter\" : \"Dns\"\n    } ],\n    \"scrub_enabled\" : 21104\n  }\n}", InlineResponse20012.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<InlineResponse20012>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<InlineResponse20012>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<ScrubIpFilterTypes> getScrubIpFilterTypes() {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<ScrubIpFilterTypes>(objectMapper.readValue("{\n  \"success\" : true,\n  \"filters\" : {\n    \"key\" : {\n      \"name\" : \"name\",\n      \"desc\" : \"desc\"\n    }\n  }\n}", ScrubIpFilterTypes.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<ScrubIpFilterTypes>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<ScrubIpFilterTypes>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<ChargeInvoiceRows> getScrubIpInvoices(@Parameter(in = ParameterIn.PATH, description = "ScrubIp ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<ChargeInvoiceRows>(objectMapper.readValue("{\n  \"success\" : true,\n  \"invoices\" : {\n    \"1234565\" : {\n      \"invoices_id\" : 1234565,\n      \"invoices_description\" : \"Current IP + Scrub\",\n      \"invoices_amount\" : 5,\n      \"invoices_date\" : \"2025-12-05T19:38:24.000Z\",\n      \"invoices_paid\" : 1,\n      \"invoices_due_date\" : \"2025-12-19T19:38:24.000Z\",\n      \"invoices_currency\" : \"USD\",\n      \"currency_symbol\" : \"$\",\n      \"invoices_date_formatted\" : \"5th Dec 2025\",\n      \"paid_invoices\" : {\n        \"654321\" : {\n          \"invoices_id\" : \"654321,\",\n          \"invoices_description\" : \"Credit Card Payment 2189347824\",\n          \"invoices_amount\" : 5,\n          \"invoices_date\" : \"2025-12-05T19:38:38.000Z\",\n          \"invoices_currency\" : \"USD\",\n          \"currency_symbol\" : \"$\",\n          \"invoices_date_formatted\" : \"5th Dec 2025\",\n          \"payment_type\" : \"Credit Card Payment\",\n          \"refund_invoices\" : {\n            \"98765\" : {\n              \"invoices_id\" : 98765,\n              \"invoices_description\" : \"REFUND: Credit Card Payment 2189347824\",\n              \"invoices_amount\" : 5,\n              \"invoices_date\" : \"2025-12-16T13:32:22.000Z\",\n              \"invoices_currency\" : \"USD\",\n              \"currency_symbol\" : \"$\",\n              \"invoices_date_formatted\" : \"16th Dec 2025\"\n            }\n          }\n        }\n      }\n    }\n  }\n}", ChargeInvoiceRows.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<ChargeInvoiceRows>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<ChargeInvoiceRows>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<List<ScrubIpsLogRowSchema>> getScrubIpLogs(@Parameter(in = ParameterIn.PATH, description = "Scrub Order ID", required=true, schema=@Schema()) @PathVariable("id") String id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<List<ScrubIpsLogRowSchema>>(objectMapper.readValue("[ {\n  \"date\" : \"date\",\n  \"filter\" : \"filter\",\n  \"target_port\" : 0.8008281904610115,\n  \"protocol\" : \"protocol\",\n  \"blocked_ip\" : \"blocked_ip\",\n  \"target_ip\" : \"target_ip\",\n  \"xdp_action\" : \"xdp_action\",\n  \"byte_count\" : 6.027456183070403\n}, {\n  \"date\" : \"date\",\n  \"filter\" : \"filter\",\n  \"target_port\" : 0.8008281904610115,\n  \"protocol\" : \"protocol\",\n  \"blocked_ip\" : \"blocked_ip\",\n  \"target_ip\" : \"target_ip\",\n  \"xdp_action\" : \"xdp_action\",\n  \"byte_count\" : 6.027456183070403\n} ]", List.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<List<ScrubIpsLogRowSchema>>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<List<ScrubIpsLogRowSchema>>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<List<ScrubIpsRowSchema>> getScrubIpsList() {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<List<ScrubIpsRowSchema>>(objectMapper.readValue("[ {\n  \"scrub_ip_id\" : 0,\n  \"repeat_invoices_cost\" : 6.027456183070403,\n  \"scrub_ip_status\" : \"scrub_ip_status\",\n  \"services_name\" : \"services_name\",\n  \"scrub_ip_ip\" : \"scrub_ip_ip\"\n}, {\n  \"scrub_ip_id\" : 0,\n  \"repeat_invoices_cost\" : 6.027456183070403,\n  \"scrub_ip_status\" : \"scrub_ip_status\",\n  \"services_name\" : \"services_name\",\n  \"scrub_ip_ip\" : \"scrub_ip_ip\"\n} ]", List.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<List<ScrubIpsRowSchema>>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<List<ScrubIpsRowSchema>>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<InlineResponse2012> placeScrubOrder(@Parameter(in = ParameterIn.DEFAULT, description = "", required=true, schema=@Schema()) @Valid @RequestBody ScrubIpPlaceOrder body
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<InlineResponse2012>(objectMapper.readValue("{\n  \"success\" : true,\n  \"text\" : \"ScrubIp order is placed.\",\n  \"order_details\" : {\n    \"cj_params\" : {\n      \"CURRENCY\" : \"USD\",\n      \"ITEM1\" : \"scrub_ips904\",\n      \"AMT1\" : 5,\n      \"containerTagId\" : 1684,\n      \"OID\" : \"scrub_ips12424\",\n      \"TYPE\" : 2242343242,\n      \"QTY1\" : 1,\n      \"CID\" : 2314\n    },\n    \"total_cost\" : 5,\n    \"service_id\" : 12346,\n    \"invoice_id\" : 2746273,\n    \"invoice_description\" : \"Scrub + Current Ip\"\n  }\n}", InlineResponse2012.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<InlineResponse2012>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<InlineResponse2012>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<InlineResponse20016> scrubIpsDeleteGeoRule(@Parameter(in = ParameterIn.PATH, description = "ScrubIp ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true, schema=@Schema()) @Valid @RequestBody DeleteGeoFirewallRule body
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<InlineResponse20016>(objectMapper.readValue("{\n  \"success\" : true,\n  \"text\" : \"Firewall Rule has been deleted.\"\n}", InlineResponse20016.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<InlineResponse20016>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<InlineResponse20016>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<InlineResponse20016> scrubIpsDeleteRule(@Parameter(in = ParameterIn.PATH, description = "ScrubIp ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true, schema=@Schema()) @Valid @RequestBody DeleteFirewallRule body
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<InlineResponse20016>(objectMapper.readValue("{\n  \"success\" : true,\n  \"text\" : \"Firewall Rule has been deleted.\"\n}", InlineResponse20016.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<InlineResponse20016>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<InlineResponse20016>(HttpStatus.NOT_IMPLEMENTED);
    }

}
