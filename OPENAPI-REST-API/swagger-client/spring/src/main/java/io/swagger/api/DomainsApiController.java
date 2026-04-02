package io.swagger.api;

import io.swagger.model.ChargeInvoiceRows;
import io.swagger.model.Domain;
import io.swagger.model.DomainContactDetails;
import io.swagger.model.DomainDnssecRecords;
import io.swagger.model.DomainDnssecRequest;
import io.swagger.model.DomainLookupResponse;
import io.swagger.model.DomainNameserverGetResponse;
import io.swagger.model.DomainNameserverPostRequest;
import io.swagger.model.DomainNameserverPutRequest;
import io.swagger.model.DomainOrder;
import io.swagger.model.DomainRow;
import io.swagger.model.DomainSearchResponse;
import io.swagger.model.DomainWhoisPrivacyRequest;
import io.swagger.model.InlineResponse2002;
import io.swagger.model.InlineResponse401;
import io.swagger.model.ServiceOrderPostResponse;
import io.swagger.model.SuccessTextResponse;
import io.swagger.model.TextResponse;
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
public class DomainsApiController implements DomainsApi {

    private static final Logger log = LoggerFactory.getLogger(DomainsApiController.class);

    private final ObjectMapper objectMapper;

    private final HttpServletRequest request;

    @org.springframework.beans.factory.annotation.Autowired
    public DomainsApiController(ObjectMapper objectMapper, HttpServletRequest request) {
        this.objectMapper = objectMapper;
        this.request = request;
    }

    public ResponseEntity<ServiceOrderPostResponse> addDomain() {
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

    public ResponseEntity<SuccessTextResponse> addDomainDnssec(@Parameter(in = ParameterIn.PATH, description = "The domain service ID. Use `domain_id` from `GET /domains`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true, schema=@Schema()) @Valid @RequestBody DomainDnssecRequest body
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

    public ResponseEntity<TextResponse> addDomainNameserver(@Parameter(in = ParameterIn.PATH, description = "The domain service ID. Use `domain_id` from `GET /domains`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true, schema=@Schema()) @Valid @RequestBody DomainNameserverPostRequest body
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

    public ResponseEntity<InlineResponse2002> cancelDomain(@Parameter(in = ParameterIn.PATH, description = "The domain service ID. Use `domain_id` from `GET /domains`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<InlineResponse2002>(objectMapper.readValue("{\n  \"success\" : true,\n  \"text\" : \"Domains is canceled.\"\n}", InlineResponse2002.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<InlineResponse2002>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<InlineResponse2002>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<SuccessTextResponse> deleteDomainDnssec(@Parameter(in = ParameterIn.PATH, description = "The domain service ID. Use `domain_id` from `GET /domains`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@NotNull @Parameter(in = ParameterIn.QUERY, description = "Set to `delete` to remove all DNSSEC records." ,required=true,schema=@Schema()) @Valid @RequestParam(value = "action", required = true) String action
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

    public ResponseEntity<TextResponse> deleteDomainNameserver(@Parameter(in = ParameterIn.PATH, description = "The domain service ID. Use `domain_id` from `GET /domains`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@NotNull @Parameter(in = ParameterIn.QUERY, description = "The index of the registered nameserver from the registered nameservers list to delete.  " ,required=true,schema=@Schema()) @Valid @RequestParam(value = "index", required = true) Integer index
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

    public ResponseEntity<DomainContactDetails> getDomainContact(@Parameter(in = ParameterIn.PATH, description = "The domain service ID. Use `domain_id` from `GET /domains`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<DomainContactDetails>(objectMapper.readValue("{\n  \"country\" : \"country\",\n  \"address3\" : \"address3\",\n  \"address2\" : \"address2\",\n  \"city\" : \"city\",\n  \"address1\" : \"address1\",\n  \"last_name\" : \"last_name\",\n  \"phone\" : \"phone\",\n  \"state\" : \"state\",\n  \"org_name\" : \"org_name\",\n  \"postal_code\" : \"postal_code\",\n  \"fax\" : \"fax\",\n  \"first_name\" : \"first_name\",\n  \"email\" : \"email\",\n  \"status\" : \"status\"\n}", DomainContactDetails.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<DomainContactDetails>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<DomainContactDetails>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<DomainDnssecRecords> getDomainDnssec(@Parameter(in = ParameterIn.PATH, description = "The domain service ID. Use `domain_id` from `GET /domains`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<DomainDnssecRecords>(objectMapper.readValue("[ {\n  \"key_tag\" : \"key_tag\",\n  \"digest_type\" : \"digest_type\",\n  \"digest\" : \"digest\",\n  \"algorithm\" : \"algorithm\"\n}, {\n  \"key_tag\" : \"key_tag\",\n  \"digest_type\" : \"digest_type\",\n  \"digest\" : \"digest\",\n  \"algorithm\" : \"algorithm\"\n} ]", DomainDnssecRecords.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<DomainDnssecRecords>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<DomainDnssecRecords>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<Domain> getDomainInfo(@Parameter(in = ParameterIn.PATH, description = "The domain service ID. Use `domain_id` from `GET /domains`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<Domain>(objectMapper.readValue("{\n  \"client_links\" : [ {\n    \"link\" : \"link\",\n    \"icon\" : \"icon\",\n    \"label\" : \"label\",\n    \"icon_text\" : \"icon_text\",\n    \"help_text\" : \"help_text\"\n  }, {\n    \"link\" : \"link\",\n    \"icon\" : \"icon\",\n    \"label\" : \"label\",\n    \"icon_text\" : \"icon_text\",\n    \"help_text\" : \"help_text\"\n  } ],\n  \"billingDetails\" : {\n    \"service_currency\" : \"service_currency\",\n    \"service_extra\" : {\n      \"zip\" : \"zip\",\n      \"country\" : \"country\",\n      \"firstname\" : \"firstname\",\n      \"address\" : \"address\",\n      \"address3\" : \"address3\",\n      \"address2\" : \"address2\",\n      \"city\" : \"city\",\n      \"lastname\" : \"lastname\",\n      \"domain_id\" : \"domain_id\",\n      \"provProcessPending\" : {\n        \"protocol\" : \"protocol\",\n        \"response_code\" : \"response_code\",\n        \"action\" : \"action\",\n        \"response_text\" : \"response_text\",\n        \"attributes\" : {\n          \"registration expiration date\" : \"registration expiration date\",\n          \"f_auto_renew\" : \"f_auto_renew\",\n          \"id\" : \"id\",\n          \"order_id\" : \"order_id\"\n        },\n        \"_OPS_version\" : \"_OPS_version\",\n        \"is_success\" : \"is_success\",\n        \"object\" : \"object\"\n      },\n      \"phone\" : \"phone\",\n      \"company\" : \"company\",\n      \"state\" : \"state\",\n      \"fax\" : \"fax\",\n      \"order_id\" : \"order_id\",\n      \"email\" : \"email\",\n      \"order\" : {\n        \"protocol\" : \"protocol\",\n        \"response_code\" : \"response_code\",\n        \"action\" : \"action\",\n        \"attributes\" : {\n          \"id\" : \"id\",\n          \"admin_email\" : \"admin_email\"\n        },\n        \"response_text\" : \"response_text\",\n        \"_OPS_version\" : \"_OPS_version\",\n        \"is_success\" : \"is_success\",\n        \"object\" : \"object\"\n      }\n    },\n    \"service_payment_status\" : \"service_payment_status\",\n    \"service_next_invoice_date\" : \"service_next_invoice_date\",\n    \"service_frequency\" : \"service_frequency\",\n    \"service_last_invoice_date\" : \"service_last_invoice_date\",\n    \"service_currency_symbol\" : \"service_currency_symbol\",\n    \"service_extra_json\" : \"service_extra_json\",\n    \"service_cost_info\" : \"service_cost_info\",\n    \"next_date\" : \"next_date\"\n  },\n  \"pwarning\" : \"pwarning\",\n  \"whoisPrivacy\" : \"whoisPrivacy\",\n  \"serviceInfo\" : {\n    \"domain_id\" : \"domain_id\",\n    \"domain_password\" : \"domain_password\",\n    \"domain_type\" : \"domain_type\",\n    \"domain_expire_date\" : \"domain_expire_date\",\n    \"domain_status\" : \"domain_status\",\n    \"domain_hostname\" : \"domain_hostname\",\n    \"domain_username\" : \"domain_username\",\n    \"domain_order_date\" : \"domain_order_date\",\n    \"domain_invoice\" : \"domain_invoice\",\n    \"domain_currency\" : \"domain_currency\",\n    \"domain_custid\" : \"domain_custid\",\n    \"domain_coupon\" : \"domain_coupon\"\n  },\n  \"extraInfoTables\" : {\n    \"ip_info\" : {\n      \"title\" : \"IP Information\",\n      \"rows\" : [ {\n        \"value\" : \"255.255.255.248\",\n        \"desc\" : \"Netmask\"\n      }, {\n        \"value\" : \"255.255.255.248\",\n        \"desc\" : \"Netmask\"\n      } ]\n    }\n  },\n  \"contact_details\" : {\n    \"country\" : \"country\",\n    \"address3\" : \"address3\",\n    \"address2\" : \"address2\",\n    \"city\" : \"city\",\n    \"address1\" : \"address1\",\n    \"last_name\" : \"last_name\",\n    \"phone\" : \"phone\",\n    \"state\" : \"state\",\n    \"org_name\" : \"org_name\",\n    \"postal_code\" : \"postal_code\",\n    \"fax\" : \"fax\",\n    \"first_name\" : \"first_name\",\n    \"email\" : \"email\",\n    \"status\" : \"status\"\n  },\n  \"registrarStatus\" : \"registrarStatus\",\n  \"transfer_info\" : \"transfer_info\",\n  \"allInfo\" : {\n    \"protocol\" : \"protocol\",\n    \"response_code\" : \"response_code\",\n    \"action\" : \"action\",\n    \"attributes\" : {\n      \"registry_createdate\" : \"registry_createdate\",\n      \"registry_expiredate\" : \"registry_expiredate\",\n      \"sponsoring_rsp\" : \"sponsoring_rsp\",\n      \"auto_renew\" : \"auto_renew\",\n      \"registry_updatedate\" : \"registry_updatedate\",\n      \"affiliate_id\" : \"affiliate_id\",\n      \"contact_set\" : {\n        \"owner\" : {\n          \"country\" : \"country\",\n          \"address3\" : \"address3\",\n          \"address2\" : \"address2\",\n          \"city\" : \"city\",\n          \"address1\" : \"address1\",\n          \"last_name\" : \"last_name\",\n          \"phone\" : \"phone\",\n          \"state\" : \"state\",\n          \"postal_code\" : \"postal_code\",\n          \"org_name\" : \"org_name\",\n          \"fax\" : \"fax\",\n          \"first_name\" : \"first_name\",\n          \"email\" : \"email\",\n          \"status\" : \"status\"\n        },\n        \"tech\" : {\n          \"country\" : \"country\",\n          \"address3\" : \"address3\",\n          \"address2\" : \"address2\",\n          \"city\" : \"city\",\n          \"address1\" : \"address1\",\n          \"last_name\" : \"last_name\",\n          \"phone\" : \"phone\",\n          \"state\" : \"state\",\n          \"org_name\" : \"org_name\",\n          \"postal_code\" : \"postal_code\",\n          \"fax\" : \"fax\",\n          \"first_name\" : \"first_name\",\n          \"email\" : \"email\",\n          \"status\" : \"status\"\n        },\n        \"admin\" : {\n          \"country\" : \"country\",\n          \"address3\" : \"address3\",\n          \"address2\" : \"address2\",\n          \"city\" : \"city\",\n          \"address1\" : \"address1\",\n          \"last_name\" : \"last_name\",\n          \"phone\" : \"phone\",\n          \"state\" : \"state\",\n          \"org_name\" : \"org_name\",\n          \"postal_code\" : \"postal_code\",\n          \"fax\" : \"fax\",\n          \"first_name\" : \"first_name\",\n          \"email\" : \"email\",\n          \"status\" : \"status\"\n        }\n      },\n      \"nameserver_list\" : [ {\n        \"ipaddress\" : \"ipaddress\",\n        \"name\" : \"name\",\n        \"sortorder\" : \"sortorder\"\n      }, {\n        \"ipaddress\" : \"ipaddress\",\n        \"name\" : \"name\",\n        \"sortorder\" : \"sortorder\"\n      } ],\n      \"tld_data\" : \"tld_data\",\n      \"expiredate\" : \"expiredate\",\n      \"gdpr_consent_status\" : \"gdpr_consent_status\",\n      \"let_expire\" : \"let_expire\"\n    },\n    \"response_text\" : \"response_text\",\n    \"_OPS_version\" : \"_OPS_version\",\n    \"is_success\" : \"is_success\",\n    \"object\" : \"object\"\n  },\n  \"serviceTypes\" : {\n    \"key\" : {\n      \"services_id\" : \"services_id\",\n      \"services_category\" : \"services_category\",\n      \"services_field1\" : \"services_field1\",\n      \"services_field2\" : \"services_field2\",\n      \"services_name\" : \"services_name\",\n      \"services_type\" : \"services_type\",\n      \"services_buyable\" : \"services_buyable\",\n      \"services_cost\" : \"services_cost\",\n      \"services_module\" : \"services_module\"\n    }\n  },\n  \"autoRenew\" : \"autoRenew\",\n  \"custCurrencySymbol\" : \"custCurrencySymbol\",\n  \"custCurrency\" : \"custCurrency\",\n  \"locked\" : \"locked\",\n  \"errors\" : true,\n  \"domain_logs\" : [ \"domain_logs\", \"domain_logs\" ]\n}", Domain.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<Domain>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<Domain>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<ChargeInvoiceRows> getDomainInvoices(@Parameter(in = ParameterIn.PATH, description = "The domain service ID. Use `domain_id` from `GET /domains`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<DomainLookupResponse> getDomainLookup(@Parameter(in = ParameterIn.PATH, description = "The full domain name to look up (for example `example.com`).", required=true, schema=@Schema()) @PathVariable("name") String name
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<DomainLookupResponse>(objectMapper.readValue("{\n  \"new\" : \"new\",\n  \"website\" : true,\n  \"domain_service\" : true,\n  \"premium\" : true,\n  \"transfer\" : \"transfer\",\n  \"renewal\" : \"renewal\",\n  \"service\" : { },\n  \"available\" : true,\n  \"whois_privacy\" : true,\n  \"fields\" : { },\n  \"currencies\" : { }\n}", DomainLookupResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<DomainLookupResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<DomainLookupResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<DomainNameserverGetResponse> getDomainNameservers(@Parameter(in = ParameterIn.PATH, description = "The domain service ID. Use `domain_id` from `GET /domains`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<DomainNameserverGetResponse>(objectMapper.readValue("[ {\n  \"ipaddress\" : \"1.2.3.4\",\n  \"can_delete\" : \"1\",\n  \"name\" : \"ns1.domain.com\"\n}, {\n  \"ipaddress\" : \"1.2.3.4\",\n  \"can_delete\" : \"1\",\n  \"name\" : \"ns1.domain.com\"\n} ]", DomainNameserverGetResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<DomainNameserverGetResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<DomainNameserverGetResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<Void> getDomainOrderFields(@Parameter(in = ParameterIn.PATH, description = "The fully qualified domain name (e.g. `example.com`).", required=true, schema=@Schema()) @PathVariable("domain") String domain
,@Parameter(in = ParameterIn.PATH, description = "The registration type. Common values include `register` for new registrations and `transfer` for inbound transfers.", required=true, schema=@Schema()) @PathVariable("regType") String regType
) {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<Void> getDomainOrderSearchResults(@Parameter(in = ParameterIn.PATH, description = "The fully qualified domain name to look up (e.g. `example.com`).", required=true, schema=@Schema()) @PathVariable("domain") String domain
) {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<SuccessTextResponse> getDomainRenewal(@Parameter(in = ParameterIn.PATH, description = "The domain service ID. Use `domain_id` from `GET /domains`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<DomainSearchResponse> getDomainSearch(@Parameter(in = ParameterIn.PATH, description = "The base domain name to search (for example `example` or `example.com`).", required=true, schema=@Schema()) @PathVariable("name") String name
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<DomainSearchResponse>(objectMapper.readValue("{\n  \"lookup\" : [ { }, { } ],\n  \"tlds\" : [ \"tlds\", \"tlds\" ],\n  \"success\" : true,\n  \"response_text\" : \"response_text\",\n  \"response_time\" : \"response_time\",\n  \"suggest\" : [ { }, { } ]\n}", DomainSearchResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<DomainSearchResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<DomainSearchResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<SuccessTextResponse> getDomainTransfer(@Parameter(in = ParameterIn.PATH, description = "The domain service ID. Use `domain_id` from `GET /domains`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<SuccessTextResponse> getDomainWhoisPrivacy(@Parameter(in = ParameterIn.PATH, description = "The domain service ID. Use `domain_id` from `GET /domains`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<List<DomainRow>> getDomainsList() {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<List<DomainRow>>(objectMapper.readValue("[ {\n  \"domain_id\" : \"592337\",\n  \"domain_hostname\" : \"mydomain.com\",\n  \"domain_expire_date\" : \"2023-08-14T00:59:38.000Z\",\n  \"cost\" : \"18.00\",\n  \"domain_status\" : \"active\"\n}, {\n  \"domain_id\" : \"592337\",\n  \"domain_hostname\" : \"mydomain.com\",\n  \"domain_expire_date\" : \"2023-08-14T00:59:38.000Z\",\n  \"cost\" : \"18.00\",\n  \"domain_status\" : \"active\"\n} ]", List.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<List<DomainRow>>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<List<DomainRow>>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<SuccessTextResponse> getDomainsWelcomeEmail(@Parameter(in = ParameterIn.PATH, description = "The domain service ID. Use `domain_id` from `GET /domains`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<DomainOrder> getNewDomain() {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<DomainOrder>(objectMapper.readValue("{\n  \"whoisPrivacyCost\" : \"5\",\n  \"services\" : {\n    \"DomainOrderServices10001\" : {\n      \"services_id\" : \"10001\",\n      \"services_category\" : \"100\",\n      \"services_field1\" : \".asia\",\n      \"services_field2\" : \"\",\n      \"services_name\" : \".asia Domain Name Registration\",\n      \"services_type\" : \"100\",\n      \"services_currency\" : \"USD\",\n      \"services_buyable\" : \"1\",\n      \"services_cost\" : \"19.00\",\n      \"services_hidden\" : \"0\",\n      \"services_module\" : \"domains\"\n    }\n  },\n  \"tldServices\" : { }\n}", DomainOrder.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<DomainOrder>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<DomainOrder>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<Void> patchDomains() {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<SuccessTextResponse> postDomainRenewal(@Parameter(in = ParameterIn.PATH, description = "The domain service ID. Use `domain_id` from `GET /domains`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<SuccessTextResponse> postDomainTransfer(@Parameter(in = ParameterIn.PATH, description = "The domain service ID. Use `domain_id` from `GET /domains`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<Void> putDomains() {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<SuccessTextResponse> updateDomainContact(@Parameter(in = ParameterIn.PATH, description = "The domain service ID. Use `domain_id` from `GET /domains`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true, schema=@Schema()) @Valid @RequestBody DomainContactDetails body
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

    public ResponseEntity<SuccessTextResponse> updateDomainInfo(@Parameter(in = ParameterIn.PATH, description = "The domain service ID. Use `domain_id` from `GET /domains`.", required=true, schema=@Schema()) @PathVariable("id") String id
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

    public ResponseEntity<TextResponse> updateDomainNameservers(@Parameter(in = ParameterIn.PATH, description = "The domain service ID. Use `domain_id` from `GET /domains`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true, schema=@Schema()) @Valid @RequestBody DomainNameserverPutRequest body
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

    public ResponseEntity<SuccessTextResponse> updateDomainWhoisPrivacy(@Parameter(in = ParameterIn.PATH, description = "The domain service ID. Use `domain_id` from `GET /domains`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true, schema=@Schema()) @Valid @RequestBody DomainWhoisPrivacyRequest body
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

}
