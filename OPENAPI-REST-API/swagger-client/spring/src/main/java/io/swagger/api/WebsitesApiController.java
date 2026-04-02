package io.swagger.api;

import io.swagger.model.ChargeInvoiceRows;
import io.swagger.model.IdBuyIpBody;
import io.swagger.model.IdMigrationBody;
import io.swagger.model.InlineResponse20023;
import io.swagger.model.InlineResponse20024;
import io.swagger.model.InlineResponse20025;
import io.swagger.model.InlineResponse20026;
import io.swagger.model.InlineResponse401;
import io.swagger.model.ReverseDnsEntries;
import io.swagger.model.ServiceOrderPostResponse;
import io.swagger.model.SuccessTextResponse;
import io.swagger.model.TextResponse;
import io.swagger.model.Website;
import io.swagger.model.WebsiteBackups;
import io.swagger.model.WebsiteLoginResponse;
import io.swagger.model.WebsiteRow;
import io.swagger.model.WebsitesOrder;
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
public class WebsitesApiController implements WebsitesApi {

    private static final Logger log = LoggerFactory.getLogger(WebsitesApiController.class);

    private final ObjectMapper objectMapper;

    private final HttpServletRequest request;

    @org.springframework.beans.factory.annotation.Autowired
    public WebsitesApiController(ObjectMapper objectMapper, HttpServletRequest request) {
        this.objectMapper = objectMapper;
        this.request = request;
    }

    public ResponseEntity<ServiceOrderPostResponse> addWebsite() {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<ServiceOrderPostResponse>(objectMapper.readValue("{\n  \"continue\" : true,\n  \"errors\" : [ ],\n  \"total_cost\" : \"5.00\",\n  \"iid\" : \"25296600\",\n  \"iids\" : [ \"SERVICE12345\" ],\n  \"real_iids\" : [ \"25296600\" ],\n  \"serviceId\" : 12345,\n  \"invoice_description\" : \"New Service Order\"\n}", ServiceOrderPostResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<ServiceOrderPostResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<ServiceOrderPostResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<WebsitesOrder> getNewWebsite() {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<WebsitesOrder>(objectMapper.readValue("{\n  \"enableDomainRegistering\" : false,\n  \"website\" : \"\",\n  \"period\" : 1,\n  \"jsonServiceOffers\" : {\n    \"1026\" : [ {\n      \"renewal_frequency\" : \"12\",\n      \"updated_at\" : \"updated_at\",\n      \"renewal_cost\" : 96,\n      \"service_offer_id\" : \"136\",\n      \"service_id\" : \"1026\",\n      \"service_module\" : \"webhosting\",\n      \"intro_cost\" : 96,\n      \"created_at\" : \"2023-01-25T14:50:55.000Z\",\n      \"currencySymbol\" : \"$\",\n      \"intro_frequency\" : \"12\",\n      \"allow_coupon\" : \"1\",\n      \"deleted_at\" : \"deleted_at\"\n    }, {\n      \"renewal_frequency\" : \"12\",\n      \"updated_at\" : \"updated_at\",\n      \"renewal_cost\" : 96,\n      \"service_offer_id\" : \"136\",\n      \"service_id\" : \"1026\",\n      \"service_module\" : \"webhosting\",\n      \"intro_cost\" : 96,\n      \"created_at\" : \"2023-01-25T14:50:55.000Z\",\n      \"currencySymbol\" : \"$\",\n      \"intro_frequency\" : \"12\",\n      \"allow_coupon\" : \"1\",\n      \"deleted_at\" : \"deleted_at\"\n    } ]\n  },\n  \"serviceOffers\" : {\n    \"1026\" : [ {\n      \"renewal_frequency\" : \"12\",\n      \"updated_at\" : \"updated_at\",\n      \"renewal_cost\" : \"96.00\",\n      \"service_offer_id\" : \"136\",\n      \"service_id\" : \"1026\",\n      \"service_module\" : \"webhosting\",\n      \"intro_cost\" : \"96.00\",\n      \"created_at\" : \"2023-01-25T14:50:55.000Z\",\n      \"intro_frequency\" : \"12\",\n      \"allow_coupon\" : \"1\",\n      \"deleted_at\" : \"deleted_at\"\n    }, {\n      \"renewal_frequency\" : \"12\",\n      \"updated_at\" : \"updated_at\",\n      \"renewal_cost\" : \"96.00\",\n      \"service_offer_id\" : \"136\",\n      \"service_id\" : \"1026\",\n      \"service_module\" : \"webhosting\",\n      \"intro_cost\" : \"96.00\",\n      \"created_at\" : \"2023-01-25T14:50:55.000Z\",\n      \"intro_frequency\" : \"12\",\n      \"allow_coupon\" : \"1\",\n      \"deleted_at\" : \"deleted_at\"\n    } ]\n  },\n  \"serviceTypes\" : {\n    \"11447\" : {\n      \"services_description\" : \"\",\n      \"services_id\" : \"11447\",\n      \"services_moreinfo_url\" : \"\",\n      \"services_category\" : \"204\",\n      \"services_field1\" : \"\",\n      \"services_html\" : \"\",\n      \"services_field2\" : \"Standard\",\n      \"services_name\" : \"Web Hosting Direct Admin (PriceLock)\",\n      \"services_buyable\" : \"1\",\n      \"services_cost\" : \"5.00\",\n      \"services_hidden\" : \"1\",\n      \"services_module\" : \"webhosting\",\n      \"services_type\" : \"206\"\n    }\n  },\n  \"packges\" : {\n    \"11440\" : {\n      \"services_description\" : \"Direct Admin Web hosting package with 10x more resources over our standard web hosting package.\",\n      \"services_id\" : \"11440\",\n      \"services_moreinfo_url\" : \"\",\n      \"services_category\" : \"204\",\n      \"services_field1\" : \"\",\n      \"services_html\" : \"\",\n      \"services_field2\" : \"BoostX\",\n      \"services_name\" : \"DA BOOST X\",\n      \"services_buyable\" : \"1\",\n      \"services_cost\" : \"69.95\",\n      \"services_hidden\" : \"0\",\n      \"services_module\" : \"webhosting\",\n      \"services_type\" : \"206\"\n    }\n  },\n  \"step\" : \"order_form\",\n  \"packages\" : {\n    \"11447\" : \"Web Hosting Direct Admin (PriceLock)\"\n  },\n  \"serviceOfferId\" : 0,\n  \"jsonServices\" : {\n    \"11447\" : \"5.00\"\n  }\n}", WebsitesOrder.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<WebsitesOrder>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<WebsitesOrder>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<InlineResponse20024> getWebsiteBuyIp(@Parameter(in = ParameterIn.PATH, description = "The website service ID. Use `website_id` from `GET /websites`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<InlineResponse20024>(objectMapper.readValue("{\n  \"ips\" : {\n    \"key\" : \"ips\"\n  }\n}", InlineResponse20024.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<InlineResponse20024>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<InlineResponse20024>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<Website> getWebsiteInfo(@Parameter(in = ParameterIn.PATH, description = "The website service ID. Use `website_id` from `GET /websites`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<Website>(objectMapper.readValue("{\n  \"serviceExtra\" : [ null, null ],\n  \"package\" : \"Web Hosting Direct Admin\",\n  \"client_links\" : [ {\n    \"link\" : \"link\",\n    \"icon\" : \"icon\",\n    \"other_attr\" : \"other_attr\",\n    \"label\" : \"label\",\n    \"icon_text\" : \"icon_text\",\n    \"help_text\" : \"help_text\"\n  }, {\n    \"link\" : \"link\",\n    \"icon\" : \"icon\",\n    \"other_attr\" : \"other_attr\",\n    \"label\" : \"label\",\n    \"icon_text\" : \"icon_text\",\n    \"help_text\" : \"help_text\"\n  } ],\n  \"billingDetails\" : {\n    \"service_currency\" : \"USD\",\n    \"service_extra\" : { },\n    \"service_payment_status\" : \"service_payment_status\",\n    \"service_next_invoice_date\" : \"service_next_invoice_date\",\n    \"service_frequency\" : \"service_frequency\",\n    \"service_coupon\" : \"service_coupon\",\n    \"service_last_invoice_date\" : \"service_last_invoice_date\",\n    \"service_currency_symbol\" : \"$\",\n    \"service_extra_json\" : \"service_extra_json\",\n    \"service_cost_info\" : \"service_cost_info\",\n    \"next_date\" : \"next_date\"\n  },\n  \"serviceMaster\" : {\n    \"website_ip\" : \"74.50.80.15\",\n    \"website_order\" : \"58984\",\n    \"website_name\" : \"vda4200.is.cc\",\n    \"website_max_sites\" : \"300\",\n    \"website_load\" : \"6.55\",\n    \"website_hdfree\" : \"196\",\n    \"website_dns2\" : \"vda4200b.trouble-free.net\",\n    \"website_dns1\" : \"vda4200a.trouble-free.net\",\n    \"website_available\" : \"0\",\n    \"website_type\" : \"206\",\n    \"website_id\" : \"543\",\n    \"website_partitions\" : \"website_partitions\",\n    \"website_hdsize\" : \"2062\",\n    \"website_last_update\" : \"2023-08-17T23:01:02.000Z\"\n  },\n  \"serviceInfo\" : {\n    \"website_comment\" : \"website_comment\",\n    \"website_invoice\" : \"20261994\",\n    \"website_status\" : \"active\",\n    \"website_ip\" : \"74.50.80.15\",\n    \"website_server_status\" : \"website_server_status\",\n    \"website_username\" : \"vintagev\",\n    \"website_custid\" : \"85872\",\n    \"website_server\" : \"543\",\n    \"website_order_date\" : \"2023-03-16T22:51:54.000Z\",\n    \"website_extra\" : \"[]\",\n    \"website_hostname\" : \"vintagevultures.com\",\n    \"website_coupon\" : \"1690\",\n    \"website_type\" : \"11363\",\n    \"website_id\" : \"1196829\",\n    \"website_currency\" : \"USD\"\n  },\n  \"extraInfoTables\" : {\n    \"links\" : {\n      \"title\" : \"title\",\n      \"rows\" : [ {\n        \"value\" : \"value\",\n        \"desc\" : \"desc\"\n      }, {\n        \"value\" : \"value\",\n        \"desc\" : \"desc\"\n      } ]\n    }\n  },\n  \"custCurrencySymbol\" : \"$\",\n  \"custCurrency\" : \"USD\"\n}", Website.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<Website>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<Website>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<ChargeInvoiceRows> getWebsiteInvoices(@Parameter(in = ParameterIn.PATH, description = "The website service ID. Use `website_id` from `GET /websites`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<List<WebsiteRow>> getWebsiteList() {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<List<WebsiteRow>>(objectMapper.readValue("[ {\n  \"website_id\" : \"376359\",\n  \"website_hostname\" : \"hussfamily.com\",\n  \"repeat_invoices_cost\" : \"5.99\",\n  \"website_status\" : \"active\",\n  \"services_name\" : \"Standard Web Hosting\",\n  \"website_comment\" : \"\"\n}, {\n  \"website_id\" : \"376359\",\n  \"website_hostname\" : \"hussfamily.com\",\n  \"repeat_invoices_cost\" : \"5.99\",\n  \"website_status\" : \"active\",\n  \"services_name\" : \"Standard Web Hosting\",\n  \"website_comment\" : \"\"\n} ]", List.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<List<WebsiteRow>>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<List<WebsiteRow>>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<WebsiteBackups> getWebsitesBackups(@Parameter(in = ParameterIn.PATH, description = "The website service ID. Use `website_id` from `GET /websites`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<WebsiteBackups>(objectMapper.readValue("[ {\n  \"size\" : 0,\n  \"name\" : \"name\"\n}, {\n  \"size\" : 0,\n  \"name\" : \"name\"\n} ]", WebsiteBackups.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<WebsiteBackups>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<WebsiteBackups>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<WebsiteLoginResponse> getWebsitesLogin(@Parameter(in = ParameterIn.PATH, description = "The website service ID. Use `website_id` from `GET /websites`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<WebsiteLoginResponse>(objectMapper.readValue("{\n  \"type\" : \"location\",\n  \"location\" : \"https://www.site.com/\"\n}", WebsiteLoginResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<WebsiteLoginResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<WebsiteLoginResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<SuccessTextResponse> getWebsitesWelcomeEmail(@Parameter(in = ParameterIn.PATH, description = "The website service ID. Use `website_id` from `GET /websites`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<SuccessTextResponse>(objectMapper.readValue("{\n  \"success\" : true,\n  \"text\" : \"Ok\"\n}", SuccessTextResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<SuccessTextResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<SuccessTextResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<ReverseDnsEntries> gettWebsiteReverseDns(@Parameter(in = ParameterIn.PATH, description = "The website service ID. Use `website_id` from `GET /websites`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<ReverseDnsEntries>(objectMapper.readValue("{\n  \"ips\" : {\n    \"1.2.3.4\" : \"yourhost.com\",\n    \"1.2.3.5\" : \"anotherhost.com\"\n  }\n}", ReverseDnsEntries.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<ReverseDnsEntries>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<ReverseDnsEntries>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<InlineResponse20025> postWebsiteBuyIp(@Parameter(in = ParameterIn.PATH, description = "The website service ID. Use `website_id` from `GET /websites`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true, schema=@Schema()) @Valid @RequestBody IdBuyIpBody body
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<InlineResponse20025>(objectMapper.readValue("{\n  \"success\" : true,\n  \"message\" : \"message\"\n}", InlineResponse20025.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<InlineResponse20025>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<InlineResponse20025>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<InlineResponse20026> postWebsiteMigration(@Parameter(in = ParameterIn.PATH, description = "The website service ID. Use `website_id` from `GET /websites`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true, schema=@Schema()) @Valid @RequestBody IdMigrationBody body
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<InlineResponse20026>(objectMapper.readValue("{\n  \"ticket\" : 0,\n  \"text\" : \"text\"\n}", InlineResponse20026.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<InlineResponse20026>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<InlineResponse20026>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<TextResponse> postWebsitesReverseDns(@Parameter(in = ParameterIn.PATH, description = "The website service ID. Use `website_id` from `GET /websites`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true, schema=@Schema()) @Valid @RequestBody ReverseDnsEntries body
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<TextResponse>(objectMapper.readValue("{\n  \"text\" : \"You were successfull.\"\n}", TextResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<TextResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<TextResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<Void> putWebsites() {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<SuccessTextResponse> updateWebsiteInfo(@Parameter(in = ParameterIn.PATH, description = "The website service ID. Use `website_id` from `GET /websites`.", required=true, schema=@Schema()) @PathVariable("id") String id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<SuccessTextResponse>(objectMapper.readValue("{\n  \"success\" : true,\n  \"text\" : \"Ok\"\n}", SuccessTextResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<SuccessTextResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<SuccessTextResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<InlineResponse20023> webhostingCancel(@Parameter(in = ParameterIn.PATH, description = "The website service ID. Use `website_id` from `GET /websites`.", required=true, schema=@Schema()) @PathVariable("id") String id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<InlineResponse20023>(objectMapper.readValue("{\n  \"success\" : true,\n  \"text\" : \"Website is canceled.\"\n}", InlineResponse20023.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<InlineResponse20023>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<InlineResponse20023>(HttpStatus.NOT_IMPLEMENTED);
    }

}
