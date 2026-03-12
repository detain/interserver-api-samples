package io.swagger.api;

import io.swagger.model.ChargeInvoiceRows;
import io.swagger.model.InlineResponse2004;
import io.swagger.model.InlineResponse401;
import io.swagger.model.IpObject;
import io.swagger.model.License;
import io.swagger.model.LicenseRow;
import io.swagger.model.LicensesOrder;
import io.swagger.model.SuccessTextResponse;
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
public class LicensesApiController implements LicensesApi {

    private static final Logger log = LoggerFactory.getLogger(LicensesApiController.class);

    private final ObjectMapper objectMapper;

    private final HttpServletRequest request;

    @org.springframework.beans.factory.annotation.Autowired
    public LicensesApiController(ObjectMapper objectMapper, HttpServletRequest request) {
        this.objectMapper = objectMapper;
        this.request = request;
    }

    public ResponseEntity<Void> addLicense() {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<License> getLicenseInfo(@Parameter(in = ParameterIn.PATH, description = "The license service ID. Use `license_id` from `GET /licenses`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<License>(objectMapper.readValue("{\n  \"serviceType\" : {\n    \"services_id\" : \"5034\",\n    \"services_category\" : \"508\",\n    \"services_field1\" : \"16\",\n    \"services_field2\" : \"\",\n    \"services_name\" : \"KernelCare License\",\n    \"services_type\" : \"508\",\n    \"services_buyable\" : \"1\",\n    \"services_cost\" : \"2.95\",\n    \"services_module\" : \"licenses\"\n  },\n  \"serviceExtra\" : [ \"serviceExtra\", \"serviceExtra\" ],\n  \"package\" : \"KernelCare License\",\n  \"client_links\" : [ {\n    \"link\" : \"invoices\",\n    \"icon\" : \"fas fa-file-invoice-dollar fa-w-12\",\n    \"other_attr\" : \"\",\n    \"label\" : \"Invoices\",\n    \"icon_text\" : \"\",\n    \"help_text\" : \"Invoice History\"\n  }, {\n    \"link\" : \"invoices\",\n    \"icon\" : \"fas fa-file-invoice-dollar fa-w-12\",\n    \"other_attr\" : \"\",\n    \"label\" : \"Invoices\",\n    \"icon_text\" : \"\",\n    \"help_text\" : \"Invoice History\"\n  } ],\n  \"billingDetails\" : {\n    \"service_currency\" : \"USD\",\n    \"service_extra\" : [ \"service_extra\", \"service_extra\" ],\n    \"service_payment_status\" : \"Paid\",\n    \"service_next_invoice_date\" : \"September 14, 2023\",\n    \"service_frequency\" : \"Monthly\",\n    \"service_coupon\" : \"ACOUPONFORLICENSES\",\n    \"service_last_invoice_date\" : \"August 14, 2023\",\n    \"service_currency_symbol\" : \"$\",\n    \"service_extra_json\" : \"[\\"\\"]\",\n    \"service_cost_info\" : \"0.00\",\n    \"next_date\" : \"2023-09-14T09:39:46Z\"\n  },\n  \"serviceInfo\" : {\n    \"license_order_date\" : \"2020-01-14T10:48:14Z\",\n    \"license_hostname\" : \"\",\n    \"license_extra\" : \"\",\n    \"license_currency\" : \"USD\",\n    \"license_id\" : \"386522\",\n    \"license_type\" : \"5034\",\n    \"license_coupon\" : \"1836\",\n    \"license_custid\" : \"771282\",\n    \"license_ip\" : \"1.2.3.4\",\n    \"license_status\" : \"active\",\n    \"license_invoice\" : \"18704419\",\n    \"license_key\" : \"\"\n  },\n  \"extraInfoTables\" : {\n    \"ip_info\" : {\n      \"title\" : \"IP Information\",\n      \"rows\" : [ {\n        \"value\" : \"255.255.255.248\",\n        \"desc\" : \"Netmask\"\n      }, {\n        \"value\" : \"255.255.255.248\",\n        \"desc\" : \"Netmask\"\n      } ]\n    }\n  },\n  \"custCurrencySymbol\" : \"$\",\n  \"service_overview_extra\" : \"service_overview_extra\",\n  \"custCurrency\" : \"USD\",\n  \"license_key\" : \"\"\n}", License.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<License>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<License>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<ChargeInvoiceRows> getLicenseInvoices(@Parameter(in = ParameterIn.PATH, description = "The license service ID. Use `license_id` from `GET /licenses`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<List<LicenseRow>> getLicenseList() {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<List<LicenseRow>>(objectMapper.readValue("[ {\n  \"license_id\" : \"386111\",\n  \"license_hostname\" : \"\",\n  \"license_ip\" : \"66.45.228.100\",\n  \"services_name\" : \"Imunify360 up to 30 users\",\n  \"cost\" : \"25.00\",\n  \"license_status\" : \"canceled\",\n  \"invoices_paid\" : \"1\",\n  \"invoices_date\" : \"2019-08-28T14:27:22.000Z\"\n}, {\n  \"license_id\" : \"386111\",\n  \"license_hostname\" : \"\",\n  \"license_ip\" : \"66.45.228.100\",\n  \"services_name\" : \"Imunify360 up to 30 users\",\n  \"cost\" : \"25.00\",\n  \"license_status\" : \"canceled\",\n  \"invoices_paid\" : \"1\",\n  \"invoices_date\" : \"2019-08-28T14:27:22.000Z\"\n} ]", List.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<List<LicenseRow>>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<List<LicenseRow>>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<Void> getLicenseOrderCatTagInfo(@Parameter(in = ParameterIn.PATH, description = "The license category tag (e.g. `cpanel`, `plesk`). Obtain valid values from the `GET /licenses/order` response.", required=true, schema=@Schema()) @PathVariable("catTag") String catTag
) {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<SuccessTextResponse> getLicensesWelcomeEmail(@Parameter(in = ParameterIn.PATH, description = "The license service ID. Use `license_id` from `GET /licenses`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<LicensesOrder> getNewLicense() {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<LicensesOrder>(objectMapper.readValue("{\n  \"packageCosts\" : {\n    \"LicensesOrderPackageCosts11468\" : 3.75\n  },\n  \"serviceTypes\" : {\n    \"LicensesOrderServiceTypes11482\" : {\n      \"services_id\" : \"11482\",\n      \"services_category\" : \"506\",\n      \"services_field1\" : \"2704,Standard\",\n      \"services_field2\" : \"Unlimited Accounts & Domains<br><br>The DirectAdmin standard license is best for medium to large shared-hosting and/or reseller-hosting companies. No limit on accounts or domains.\",\n      \"services_name\" : \"DirectAdmin Standard\",\n      \"services_type\" : \"506\",\n      \"services_buyable\" : \"1\",\n      \"services_cost\" : \"21.75\",\n      \"services_module\" : \"licenses\"\n    }\n  },\n  \"serviceCategories\" : {\n    \"LicensesOrderServiceCategories509\" : {\n      \"category_name\" : \"Webuzo\",\n      \"category_id\" : \"509\",\n      \"category_tag\" : \"webuzo\",\n      \"category_module\" : \"licenses\"\n    }\n  }\n}", LicensesOrder.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<LicensesOrder>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<LicensesOrder>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<InlineResponse2004> licensesCancel(@Parameter(in = ParameterIn.PATH, description = "The license service ID. Use `license_id` from `GET /licenses`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<InlineResponse2004>(objectMapper.readValue("{\n  \"success\" : true,\n  \"text\" : \"License is canceled.\"\n}", InlineResponse2004.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<InlineResponse2004>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<InlineResponse2004>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<SuccessTextResponse> postLicenseChangeIp(@Parameter(in = ParameterIn.PATH, description = "The license service ID. Use `license_id` from `GET /licenses`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true, schema=@Schema()) @Valid @RequestBody IpObject body
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

    public ResponseEntity<Void> putLicenses() {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<Void> updateLicenseInfo(@Parameter(in = ParameterIn.PATH, description = "The license service ID. Use `license_id` from `GET /licenses`.", required=true, schema=@Schema()) @PathVariable("id") String id
) {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

}
