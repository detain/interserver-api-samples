package io.swagger.api;

import io.swagger.model.Backup;
import io.swagger.model.BackupLoginResponse;
import io.swagger.model.BackupOrderPostResponse;
import io.swagger.model.BackupOrderPutRequest;
import io.swagger.model.BackupOrderPutResponse;
import io.swagger.model.BackupRow;
import io.swagger.model.BackupsOrder;
import io.swagger.model.ChargeInvoiceRows;
import io.swagger.model.InlineResponse2001;
import io.swagger.model.InlineResponse401;
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
public class BackupsApiController implements BackupsApi {

    private static final Logger log = LoggerFactory.getLogger(BackupsApiController.class);

    private final ObjectMapper objectMapper;

    private final HttpServletRequest request;

    @org.springframework.beans.factory.annotation.Autowired
    public BackupsApiController(ObjectMapper objectMapper, HttpServletRequest request) {
        this.objectMapper = objectMapper;
        this.request = request;
    }

    public ResponseEntity<BackupOrderPostResponse> addBackup(@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="validateOnly", required=true)  Boolean validateOnly
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="serviceType", required=true)  Integer serviceType
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="coupon", required=true)  String coupon
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<BackupOrderPostResponse>(objectMapper.readValue("{\n  \"continue\" : true,\n  \"errors\" : [ ],\n  \"total_cost\" : \"3.00\",\n  \"iid\" : \"25296597\",\n  \"iids\" : [ \"SERVICEbackups40464\" ],\n  \"real_iids\" : [ \"25296597\" ],\n  \"serviceId\" : 40464,\n  \"invoice_description\" : \"Storage ST 100\",\n  \"cj_params\" : {\n    \"containerTagId\" : \"1684\",\n    \"CID\" : \"1525038\",\n    \"OID\" : \"backups40464\",\n    \"TYPE\" : \"355669\",\n    \"ITEM1\" : \"backups10831\",\n    \"AMT1\" : \"3.00\",\n    \"QTY1\" : 1,\n    \"CURRENCY\" : \"USD\"\n  }\n}", BackupOrderPostResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<BackupOrderPostResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<BackupOrderPostResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<InlineResponse2001> cancelBackup(@Parameter(in = ParameterIn.PATH, description = "The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<InlineResponse2001>(objectMapper.readValue("{\n  \"success\" : true,\n  \"text\" : \"Backups is canceled.\"\n}", InlineResponse2001.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<InlineResponse2001>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<InlineResponse2001>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<Backup> getBackupInfo(@Parameter(in = ParameterIn.PATH, description = "The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<Backup>(objectMapper.readValue("{\n  \"serviceExtra\" : \"serviceExtra\",\n  \"package\" : \"package\",\n  \"client_links\" : [ {\n    \"link\" : \"link\",\n    \"icon\" : \"icon\",\n    \"other_attr\" : \"other_attr\",\n    \"label\" : \"label\",\n    \"icon_text\" : \"icon_text\",\n    \"help_text\" : \"help_text\"\n  }, {\n    \"link\" : \"link\",\n    \"icon\" : \"icon\",\n    \"other_attr\" : \"other_attr\",\n    \"label\" : \"label\",\n    \"icon_text\" : \"icon_text\",\n    \"help_text\" : \"help_text\"\n  } ],\n  \"billingDetails\" : {\n    \"service_currency\" : \"USD\",\n    \"service_extra\" : \"[]\",\n    \"service_payment_status\" : \"Paid\",\n    \"service_next_invoice_date\" : \"January 29, 2022\",\n    \"service_frequency\" : \"Monthly\",\n    \"service_last_invoice_date\" : \"December 29, 2021\",\n    \"service_currency_symbol\" : \"$\",\n    \"service_extra_json\" : \"[]\",\n    \"service_cost_info\" : \"3\",\n    \"next_date\" : \"2022-01-29T14:09:57.000Z\"\n  },\n  \"serviceMaster\" : {\n    \"backup_last_update\" : \"2023-08-17T23:20:02.000Z\",\n    \"backup_id\" : 38,\n    \"backup_name\" : \"storage1400.is.cc\",\n    \"backup_available\" : 0,\n    \"backup_type\" : 703,\n    \"backup_hdfree\" : 61374,\n    \"backup_order\" : 21359,\n    \"backup_ip\" : \"44.22.11.88\",\n    \"backup_hdsize\" : 156448,\n    \"backup_iowait\" : 0\n  },\n  \"serviceInfo\" : {\n    \"backup_currency\" : \"USD\",\n    \"backup_quota\" : \"0\",\n    \"backup_extra\" : \"[]\",\n    \"backup_custid\" : \"2773\",\n    \"backup_type\" : \"10831\",\n    \"backup_status\" : \"canceled\",\n    \"backup_ip\" : \"64.20.55.234\",\n    \"backup_invoice\" : \"19591007\",\n    \"backup_comment\" : \"backup_comment\",\n    \"backup_id\" : \"21163\",\n    \"backup_server\" : \"38\",\n    \"backup_username\" : \"st21163\",\n    \"backup_server_status\" : \"deleted\",\n    \"backup_coupon\" : \"0\",\n    \"backup_order_date\" : \"2021-12-29T14:09:57.000Z\"\n  },\n  \"extraInfoTables\" : {\n    \"ip_info\" : {\n      \"title\" : \"IP Information\",\n      \"rows\" : [ {\n        \"value\" : \"255.255.255.248\",\n        \"desc\" : \"Netmask\"\n      }, {\n        \"value\" : \"255.255.255.248\",\n        \"desc\" : \"Netmask\"\n      } ]\n    }\n  },\n  \"custCurrencySymbol\" : \"$\",\n  \"custCurrency\" : \"USD\"\n}", Backup.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<Backup>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<Backup>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<ChargeInvoiceRows> getBackupInvoices(@Parameter(in = ParameterIn.PATH, description = "The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<BackupLoginResponse> getBackupLogin(@Parameter(in = ParameterIn.PATH, description = "The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<BackupLoginResponse>(objectMapper.readValue("{\n  \"success\" : true,\n  \"text\" : \"text\"\n}", BackupLoginResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<BackupLoginResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<BackupLoginResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<List<BackupRow>> getBackupsList() {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<List<BackupRow>>(objectMapper.readValue("[ {\n  \"backup_id\" : \"2414\",\n  \"backup_name\" : \"storage-nj.interserver.net\",\n  \"backup_cost\" : \"5.99\",\n  \"backup_username\" : \"detainin2414\",\n  \"backup_status\" : \"pending-setup\",\n  \"services_name\" : \"Swift Storage\"\n}, {\n  \"backup_id\" : \"2414\",\n  \"backup_name\" : \"storage-nj.interserver.net\",\n  \"backup_cost\" : \"5.99\",\n  \"backup_username\" : \"detainin2414\",\n  \"backup_status\" : \"pending-setup\",\n  \"services_name\" : \"Swift Storage\"\n} ]", List.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<List<BackupRow>>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<List<BackupRow>>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<SuccessTextResponse> getBackupsWelcomeEmail(@Parameter(in = ParameterIn.PATH, description = "The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<BackupsOrder> getNewBackup() {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<BackupsOrder>(objectMapper.readValue("{\n  \"packageCosts\" : {\n    \"11006\" : 84\n  },\n  \"serviceTypes\" : {\n    \"11006\" : {\n      \"services_id\" : \"11006\",\n      \"services_category\" : \"702\",\n      \"services_field1\" : \"\",\n      \"services_field2\" : \"bandwidth=40000000,quota=40000000,inode=100,uinode=ON,vdomains=2,nsubdomains=5,nemails=0,nemailf=0,nemailml=0,nemailr=0,mysql=5,domainptr=5,ftp=100,aftp=OFF,cgi=ON,php=ON,spam=OFF,cron=OFF,catchall=OFF,ssl=ON,ssh=ON,sysinfo=ON,login_keys=ON,dnscontrol=OFF,suspend_at_limit=ON\",\n      \"services_name\" : \"Storage ST 700\",\n      \"services_type\" : \"703\",\n      \"services_buyable\" : \"1\",\n      \"services_cost\" : \"84.00\",\n      \"services_module\" : \"backups\"\n    }\n  }\n}", BackupsOrder.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<BackupsOrder>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<BackupsOrder>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<SuccessTextResponse> updateBackupInfo(@Parameter(in = ParameterIn.PATH, description = "The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<BackupOrderPutResponse> validateBackupOrder(@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="validateOnly", required=true)  Boolean validateOnly
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="serviceType", required=true)  Integer serviceType
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="coupon", required=true)  String coupon
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<BackupOrderPutResponse>(objectMapper.readValue("{\n  \"continue\" : true,\n  \"errors\" : [ ],\n  \"serviceType\" : 10831,\n  \"serviceCost\" : \"3.00\",\n  \"originalCost\" : \"3.00\",\n  \"repeatServiceCost\" : \"3.00\",\n  \"hostname\" : \"\",\n  \"password\" : \"m13dxi6K\",\n  \"coupon\" : \"\",\n  \"couponCode\" : 0\n}", BackupOrderPutResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<BackupOrderPutResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<BackupOrderPutResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

}
