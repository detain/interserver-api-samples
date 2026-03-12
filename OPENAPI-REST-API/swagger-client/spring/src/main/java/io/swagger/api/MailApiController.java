package io.swagger.api;

import io.swagger.model.ChargeInvoiceRows;
import io.swagger.model.DenyRuleNew;
import io.swagger.model.DenyRuleRecord;
import io.swagger.model.EmailAddress;
import io.swagger.model.EmailAddressName;
import io.swagger.model.GenericResponse;
import io.swagger.model.InlineResponse2008;
import io.swagger.model.InlineResponse401;
import io.swagger.model.MailAlertRequest;
import io.swagger.model.MailAlertUpdateRequest;
import io.swagger.model.MailAlertsResponse;
import io.swagger.model.MailAttachment;
import io.swagger.model.MailBlocks;
import io.swagger.model.MailDelistRequest;
import io.swagger.model.MailDelistResponse;
import io.swagger.model.MailDeliverabilityResponse;
import io.swagger.model.MailLog;
import io.swagger.model.MailOrder;
import io.swagger.model.MailRow;
import io.swagger.model.MailSchema;
import io.swagger.model.MailStatsType;
import io.swagger.model.SendMail;
import io.swagger.model.SendMailAdv;
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
public class MailApiController implements MailApi {

    private static final Logger log = LoggerFactory.getLogger(MailApiController.class);

    private final ObjectMapper objectMapper;

    private final HttpServletRequest request;

    @org.springframework.beans.factory.annotation.Autowired
    public MailApiController(ObjectMapper objectMapper, HttpServletRequest request) {
        this.objectMapper = objectMapper;
        this.request = request;
    }

    public ResponseEntity<Void> addMail() {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<GenericResponse> addRule(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "These are the fields needed to create a new email deny rule.", required=true, schema=@Schema()) @Valid @RequestBody DenyRuleNew body
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<GenericResponse>(objectMapper.readValue("{\n  \"status\" : \"ok\",\n  \"text\" : \"The command completed successfully.\"\n}", GenericResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<GenericResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<GenericResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<SuccessTextResponse> createMailAlert(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true, schema=@Schema()) @Valid @RequestBody MailAlertRequest body
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

    public ResponseEntity<SuccessTextResponse> deleteMailAlert(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@NotNull @Parameter(in = ParameterIn.QUERY, description = "Alert ID to delete." ,required=true,schema=@Schema()) @Valid @RequestParam(value = "alert_id", required = true) Integer alertId
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

    public ResponseEntity<GenericResponse> deleteRule(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.PATH, description = "The ID of the Rules entry.", required=true, schema=@Schema()) @PathVariable("rule") String rule
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<GenericResponse>(objectMapper.readValue("{\n  \"status\" : \"ok\",\n  \"text\" : \"The command completed successfully.\"\n}", GenericResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<GenericResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<GenericResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<GenericResponse> delistBlock(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="email", required=true)  String email
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<GenericResponse>(objectMapper.readValue("{\n  \"status\" : \"ok\",\n  \"text\" : \"The command completed successfully.\"\n}", GenericResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<GenericResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<GenericResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<MailAlertsResponse> getMailAlerts(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<MailAlertsResponse>(objectMapper.readValue("[ {\n  \"alert_id\" : 0,\n  \"alert_to\" : \"alert_to\",\n  \"alert_enabled\" : \"alert_enabled\",\n  \"alert_value\" : \"alert_value\",\n  \"alert_type\" : \"alert_type\"\n}, {\n  \"alert_id\" : 0,\n  \"alert_to\" : \"alert_to\",\n  \"alert_enabled\" : \"alert_enabled\",\n  \"alert_value\" : \"alert_value\",\n  \"alert_type\" : \"alert_type\"\n} ]", MailAlertsResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<MailAlertsResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<MailAlertsResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<MailBlocks> getMailBlocks(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<MailBlocks>(objectMapper.readValue("{\n  \"local\" : [ {\n    \"date\" : \"2023-08-07\",\n    \"from\" : \"user@domain.com\",\n    \"messageId\" : \"pFaRqFUEWkucjhTuIzYuoAgWU@domain.com\",\n    \"subject\" : \"Test Email\",\n    \"to\" : \"['client@site.com']\"\n  } ],\n  \"mbtrap\" : [ {\n    \"date\" : \"2023-08-07\",\n    \"from\" : \"user@domain.com\",\n    \"messageId\" : \"pFaRqFUEWkucjhTuIzYuoAgWU@domain.com\",\n    \"subject\" : \"Test Email\",\n    \"to\" : \"['client@site.com']\"\n  } ],\n  \"subject\" : [ {\n    \"from\" : \"user@domain.com\",\n    \"subject\" : \"Test Email\"\n  } ]\n}", MailBlocks.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<MailBlocks>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<MailBlocks>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<MailDelistResponse> getMailDelist(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<MailDelistResponse>(objectMapper.readValue("{\n  \"subject\" : [ { }, { } ],\n  \"mbtrap\" : [ { }, { } ],\n  \"id\" : 0,\n  \"manual\" : [ { }, { } ],\n  \"local\" : [ { }, { } ]\n}", MailDelistResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<MailDelistResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<MailDelistResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<MailDeliverabilityResponse> getMailDeliverability(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<MailDeliverabilityResponse>(objectMapper.readValue("{\n  \"stat\" : { },\n  \"table_data\" : [ [ \"table_data\", \"table_data\" ], [ \"table_data\", \"table_data\" ] ],\n  \"percent\" : 0.8008281904610115\n}", MailDeliverabilityResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<MailDeliverabilityResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<MailDeliverabilityResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<MailSchema> getMailInfo(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<MailSchema>(objectMapper.readValue("{\n  \"serviceType\" : {\n    \"services_id\" : \"10880\",\n    \"services_category\" : \"800\",\n    \"services_field1\" : \"\",\n    \"services_field2\" : \"\",\n    \"services_name\" : \"MailBaby Mail\",\n    \"services_type\" : \"800\",\n    \"services_buyable\" : \"1\",\n    \"services_cost\" : \"1.00\",\n    \"services_module\" : \"mail\"\n  },\n  \"serviceExtra\" : [ ],\n  \"usage_count\" : \"0\",\n  \"package\" : \"MailBaby Mail\",\n  \"client_links\" : [ {\n    \"link\" : \"invoices\",\n    \"icon\" : \"fas fa-file-invoice-dollar fa-w-12\",\n    \"other_attr\" : \"\",\n    \"label\" : \"Invoices\",\n    \"icon_text\" : \"\",\n    \"help_text\" : \"Invoice History\"\n  }, {\n    \"link\" : \"invoices\",\n    \"icon\" : \"fas fa-file-invoice-dollar fa-w-12\",\n    \"other_attr\" : \"\",\n    \"label\" : \"Invoices\",\n    \"icon_text\" : \"\",\n    \"help_text\" : \"Invoice History\"\n  } ],\n  \"billingDetails\" : {\n    \"service_currency\" : \"USD\",\n    \"service_extra\" : [ ],\n    \"service_payment_status\" : \"Unpaid\",\n    \"service_next_invoice_date\" : \"August 16, 2023\",\n    \"service_frequency\" : \"Monthly\",\n    \"service_last_invoice_date\" : \"July 16, 2023\",\n    \"service_currency_symbol\" : \"$\",\n    \"service_extra_json\" : \"[]\",\n    \"service_cost_info\" : \"1.00\",\n    \"next_date\" : \"2023-08-16T00:55:05.000Z\"\n  },\n  \"serviceInfo\" : {\n    \"mail_type\" : \"10880\",\n    \"mail_id\" : \"43171\",\n    \"mail_ip\" : \"\",\n    \"mail_comment\" : \"\",\n    \"mail_currency\" : \"USD\",\n    \"mail_invoice\" : \"20410322\",\n    \"mail_quota\" : \"0\",\n    \"mail_username\" : \"\",\n    \"mail_server_status\" : \"\",\n    \"mail_order_date\" : \"2023-07-16T00:55:05.000Z\",\n    \"mail_status\" : \"expired\",\n    \"mail_coupon\" : \"0\",\n    \"mail_extra\" : \"[]\",\n    \"mail_custid\" : \"771282\"\n  },\n  \"extraInfoTables\" : {\n    \"mail\" : {\n      \"title\" : \"Connection Information\",\n      \"rows\" : [ {\n        \"value\" : \"relay.mailbaby.net\",\n        \"desc\" : \"SMTP Server\"\n      }, {\n        \"value\" : \"relay.mailbaby.net\",\n        \"desc\" : \"SMTP Server\"\n      } ]\n    },\n    \"tutorials\" : {\n      \"title\" : \"Tutorials\",\n      \"rows\" : [ {\n        \"value\" : \"<a class=\\"link\\" href=\\"https://mail.baby/cpanel/\\" target=\\"_blank\\">Click Here</a>\",\n        \"desc\" : \"cPanel Tutorial\"\n      }, {\n        \"value\" : \"<a class=\\"link\\" href=\\"https://mail.baby/cpanel/\\" target=\\"_blank\\">Click Here</a>\",\n        \"desc\" : \"cPanel Tutorial\"\n      } ]\n    }\n  },\n  \"custCurrencySymbol\" : \"$\",\n  \"custCurrency\" : \"USD\"\n}", MailSchema.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<MailSchema>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<MailSchema>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<ChargeInvoiceRows> getMailInvoices(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<List<MailRow>> getMailList() {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<List<MailRow>>(objectMapper.readValue("[ {\n  \"mail_id\" : \"5652\",\n  \"repeat_invoices_cost\" : \"5.99\",\n  \"mail_username\" : \"mb5652\",\n  \"mail_status\" : \"expired\",\n  \"services_name\" : \"MailBaby Mail\"\n}, {\n  \"mail_id\" : \"5652\",\n  \"repeat_invoices_cost\" : \"5.99\",\n  \"mail_username\" : \"mb5652\",\n  \"mail_status\" : \"expired\",\n  \"services_name\" : \"MailBaby Mail\"\n} ]", List.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<List<MailRow>>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<List<MailRow>>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<SuccessTextResponse> getMailWelcomeEmail(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<MailOrder> getNewMail() {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<MailOrder>(objectMapper.readValue("{\n  \"id\" : 21472,\n  \"status\" : \"active\",\n  \"username\" : \"mb21472\"\n}", MailOrder.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<MailOrder>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<MailOrder>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<List<DenyRuleRecord>> getRules(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<List<DenyRuleRecord>>(objectMapper.readValue("[ {\n  \"id\" : 14,\n  \"user\" : \"mb20682\",\n  \"type\" : \"email\",\n  \"data\" : \"domeinwo@server.guesshost.net\",\n  \"created\" : \"2022-03-22 19:16:35\"\n}, {\n  \"id\" : 14,\n  \"user\" : \"mb20682\",\n  \"type\" : \"email\",\n  \"data\" : \"domeinwo@server.guesshost.net\",\n  \"created\" : \"2022-03-22 19:16:35\"\n} ]", List.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<List<DenyRuleRecord>>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<List<DenyRuleRecord>>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<MailStatsType> getStats(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.QUERY, description = "The timeframe for the statistics." ,schema=@Schema(allowableValues={ "all", "billing", "month", "7d", "24h", "1d", "1h" }
)) @Valid @RequestParam(value = "time", required = false) String time
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<MailStatsType>(objectMapper.readValue("{\n  \"time\" : \"all\",\n  \"usage\" : 55,\n  \"currency\" : \"USD\",\n  \"currencySymbol\" : \"$\",\n  \"cost\" : 1.02,\n  \"received\" : 508,\n  \"sent\" : 495,\n  \"volume\" : {\n    \"to\" : {\n      \"client@domain.com\" : 395,\n      \"user@site.net\" : 57,\n      \"sales@company.com\" : 47,\n      \"client@anothersite.com\" : 9\n    },\n    \"from\" : {\n      \"billing@somedomain.com\" : 369,\n      \"sales@somedomain.com\" : 139\n    },\n    \"ip\" : {\n      \"1.1.1.1\" : 142,\n      \"2.2.2.2\" : 132,\n      \"3.3.3.3\" : 129,\n      \"4.4.4.4\" : 105\n    }\n  }\n}", MailStatsType.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<MailStatsType>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<MailStatsType>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<InlineResponse2008> mailCancel(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<InlineResponse2008>(objectMapper.readValue("{\n  \"success\" : true,\n  \"text\" : \"Mail is canceled.\"\n}", InlineResponse2008.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<InlineResponse2008>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<InlineResponse2008>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<SuccessTextResponse> postMailDelist(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true, schema=@Schema()) @Valid @RequestBody MailDelistRequest body
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

    public ResponseEntity<Void> putMail() {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<SuccessTextResponse> resetMailPassword(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<GenericResponse> sendAdvMail(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true, schema=@Schema()) @Valid @RequestBody SendMailAdv body
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<GenericResponse>(objectMapper.readValue("{\n  \"status\" : \"ok\",\n  \"text\" : \"The command completed successfully.\"\n}", GenericResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<GenericResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<GenericResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<GenericResponse> sendMail(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true, schema=@Schema()) @Valid @RequestBody SendMail body
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<GenericResponse>(objectMapper.readValue("{\n  \"status\" : \"ok\",\n  \"text\" : \"The command completed successfully.\"\n}", GenericResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<GenericResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<GenericResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<SuccessTextResponse> updateMailAlert(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true, schema=@Schema()) @Valid @RequestBody MailAlertUpdateRequest body
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

    public ResponseEntity<Void> updateMailInfo(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.", required=true, schema=@Schema()) @PathVariable("id") String id
) {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<MailLog> viewMailLog(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.QUERY, description = "The ID of your mail order this will be sent through." ,schema=@Schema()) @Valid @RequestParam(value = "id", required = false) Long id
,@Parameter(in = ParameterIn.QUERY, description = "originating ip address sending mail" ,schema=@Schema()) @Valid @RequestParam(value = "origin", required = false) String origin
,@Parameter(in = ParameterIn.QUERY, description = "mx record mail was sent to" ,schema=@Schema()) @Valid @RequestParam(value = "mx", required = false) String mx
,@Parameter(in = ParameterIn.QUERY, description = "from email address" ,schema=@Schema()) @Valid @RequestParam(value = "from", required = false) String from
,@Parameter(in = ParameterIn.QUERY, description = "to/destination email address" ,schema=@Schema()) @Valid @RequestParam(value = "to", required = false) String to
,@Parameter(in = ParameterIn.QUERY, description = "subject containing this string" ,schema=@Schema()) @Valid @RequestParam(value = "subject", required = false) String subject
,@Parameter(in = ParameterIn.QUERY, description = "mail id" ,schema=@Schema()) @Valid @RequestParam(value = "mailid", required = false) String mailid
,@Min(0)@Parameter(in = ParameterIn.QUERY, description = "number of records to skip for pagination" ,schema=@Schema(allowableValues={ "0" }
, defaultValue="0")) @Valid @RequestParam(value = "skip", required = false, defaultValue="0") Integer skip
,@Min(1) @Max(10000) @Parameter(in = ParameterIn.QUERY, description = "maximum number of records to return" ,schema=@Schema(allowableValues={ "1", "10000" }, minimum="1", maximum="10000"
, defaultValue="100")) @Valid @RequestParam(value = "limit", required = false, defaultValue="100") Integer limit
,@Min(0L) @Max(9999999999L) @Parameter(in = ParameterIn.QUERY, description = "earliest date to get emails in unix timestamp format" ,schema=@Schema(allowableValues={ "0", "9999999999" }, maximum="9999999999"
)) @Valid @RequestParam(value = "startDate", required = false) Long startDate
,@Min(0L) @Max(9999999999L) @Parameter(in = ParameterIn.QUERY, description = "Latest date to get emails in unix timestamp format." ,schema=@Schema(allowableValues={ "0", "9999999999" }, maximum="9999999999"
)) @Valid @RequestParam(value = "endDate", required = false) Long endDate
,@Parameter(in = ParameterIn.QUERY, description = "Filter emails by whether or not they were delivered." ,schema=@Schema(allowableValues={ "0", "1" }
)) @Valid @RequestParam(value = "delivered", required = false) String delivered
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<MailLog>(objectMapper.readValue("{\n  \"total\" : 1,\n  \"skip\" : 0,\n  \"limit\" : 100,\n  \"emails\" : [ {\n    \"_id\" : 103172,\n    \"id\" : \"17c7eda538e0005d03\",\n    \"from\" : \"person@mysite.com\",\n    \"to\" : \"client@isp.com\",\n    \"subject\" : \"sell 0.005 shares\",\n    \"messageId\" : \"<vmiLEebsuCbSpUxD7oN3REpaN4VbN6BrdCAbNKIrdAo@relay0.mailbaby.net>\",\n    \"created\" : \"2021-10-14T08:50:10.000Z\",\n    \"time\" : 1634215809,\n    \"user\" : \"mb5658\",\n    \"transtype\" : \"ESMTPSA\",\n    \"origin\" : \"199.231.189.154\",\n    \"interface\" : \"feeder\",\n    \"sendingZone\" : \"interserver\",\n    \"bodySize\" : 63,\n    \"seq\" : 1,\n    \"recipient\" : \"client@isp.com\",\n    \"domain\" : \"interserver.net\",\n    \"locked\" : 1,\n    \"lockTime\" : 1634215818533,\n    \"assigned\" : \"relay1\",\n    \"queued\" : \"2021-10-14T12:50:15.487Z\",\n    \"mxHostname\" : \"mx.j.is.cc\",\n    \"response\" : \"250 2.0.0 Ok queued as C91D83E128C\"\n  } ]\n}", MailLog.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<MailLog>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<MailLog>(HttpStatus.NOT_IMPLEMENTED);
    }

}
