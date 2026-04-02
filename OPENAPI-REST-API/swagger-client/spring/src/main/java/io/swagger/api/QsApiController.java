package io.swagger.api;

import io.swagger.model.ChargeInvoiceRows;
import io.swagger.model.IdBackupsBody;
import io.swagger.model.InlineResponse20010;
import io.swagger.model.InlineResponse20011;
import io.swagger.model.InlineResponse401;
import io.swagger.model.QueueResponse;
import io.swagger.model.Quickserver;
import io.swagger.model.QuickserverOrder;
import io.swagger.model.QuickserverRow;
import io.swagger.model.RestoreRequest;
import io.swagger.model.ReverseDnsEntries;
import io.swagger.model.ServiceOrderPostResponse;
import io.swagger.model.SuccessTextResponse;
import io.swagger.model.TextResponse;
import io.swagger.model.TimezoneUpdate;
import io.swagger.model.VpsBackupRows;
import io.swagger.model.VpsTemplatesList;
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
public class QsApiController implements QsApi {

    private static final Logger log = LoggerFactory.getLogger(QsApiController.class);

    private final ObjectMapper objectMapper;

    private final HttpServletRequest request;

    @org.springframework.beans.factory.annotation.Autowired
    public QsApiController(ObjectMapper objectMapper, HttpServletRequest request) {
        this.objectMapper = objectMapper;
        this.request = request;
    }

    public ResponseEntity<ServiceOrderPostResponse> addQs() {
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

    public ResponseEntity<SuccessTextResponse> deleteQsBackup(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@NotNull @Parameter(in = ParameterIn.QUERY, description = "The backup filename to delete." ,required=true,schema=@Schema()) @Valid @RequestParam(value = "file", required = true) String file
,@Parameter(in = ParameterIn.QUERY, description = "Set to `1` to list all backups across all services, not just the ones for the given QuickServer." ,schema=@Schema(allowableValues={ "0", "1" }
)) @Valid @RequestParam(value = "all", required = false) String all
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

    public ResponseEntity<QueueResponse> doQsBlockSmtp(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<QueueResponse>(objectMapper.readValue("{\n  \"text\" : \"Action has been sent to the server. Please allow up to 2 minutes for action to be completed.\",\n  \"queueId\" : 14670065\n}", QueueResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<QueueResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<QueueResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<QueueResponse> doQsDisableCd(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<QueueResponse>(objectMapper.readValue("{\n  \"text\" : \"Action has been sent to the server. Please allow up to 2 minutes for action to be completed.\",\n  \"queueId\" : 14670065\n}", QueueResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<QueueResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<QueueResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<QueueResponse> doQsDisableQuota(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<QueueResponse>(objectMapper.readValue("{\n  \"text\" : \"Action has been sent to the server. Please allow up to 2 minutes for action to be completed.\",\n  \"queueId\" : 14670065\n}", QueueResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<QueueResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<QueueResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<QueueResponse> doQsEjectCd(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<QueueResponse>(objectMapper.readValue("{\n  \"text\" : \"Action has been sent to the server. Please allow up to 2 minutes for action to be completed.\",\n  \"queueId\" : 14670065\n}", QueueResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<QueueResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<QueueResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<QueueResponse> doQsEnableQuota(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<QueueResponse>(objectMapper.readValue("{\n  \"text\" : \"Action has been sent to the server. Please allow up to 2 minutes for action to be completed.\",\n  \"queueId\" : 14670065\n}", QueueResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<QueueResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<QueueResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<QueueResponse> doQsRestart(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<QueueResponse>(objectMapper.readValue("{\n  \"text\" : \"Action has been sent to the server. Please allow up to 2 minutes for action to be completed.\",\n  \"queueId\" : 14670065\n}", QueueResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<QueueResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<QueueResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<QueueResponse> doQsStart(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<QueueResponse>(objectMapper.readValue("{\n  \"text\" : \"Action has been sent to the server. Please allow up to 2 minutes for action to be completed.\",\n  \"queueId\" : 14670065\n}", QueueResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<QueueResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<QueueResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<QueueResponse> doQsStop(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<QueueResponse>(objectMapper.readValue("{\n  \"text\" : \"Action has been sent to the server. Please allow up to 2 minutes for action to be completed.\",\n  \"queueId\" : 14670065\n}", QueueResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<QueueResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<QueueResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<InlineResponse20011> downloadQsBackup(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true, schema=@Schema()) @Valid @RequestBody IdBackupsBody body
,@Parameter(in = ParameterIn.QUERY, description = "Set to `1` to list all backups across all services, not just the ones for the given QuickServer." ,schema=@Schema(allowableValues={ "0", "1" }
)) @Valid @RequestParam(value = "all", required = false) String all
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<InlineResponse20011>(objectMapper.readValue("{\n  \"text\" : \"text\",\n  \"url\" : \"url\"\n}", InlineResponse20011.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<InlineResponse20011>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<InlineResponse20011>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<QuickserverOrder> getNewQs() {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<QuickserverOrder>(objectMapper.readValue("{\n  \"server_details\" : {\n    \"381\" : {\n      \"cores\" : 24,\n      \"cost\" : \"$140.00\",\n      \"cpu\" : \"AMD Ryzen 9 5900X 12-Core Processor\",\n      \"hd\" : \"1760GB\",\n      \"ram\" : \"119GB\"\n    }\n  },\n  \"distro_sel\" : {\n    \"Ubuntu\" : {\n      \"Ubuntu\" : \"Ubuntu\"\n    }\n  },\n  \"qs_id\" : \"221\",\n  \"templates\" : {\n    \"Ubuntu\" : [ [ \"ubuntu24\", \"ubuntu24\" ], [ \"ubuntu24\", \"ubuntu24\" ] ]\n  },\n  \"version\" : {\n    \"centosstream-8\" : {\n      \"centosstream-8\" : \"8 Stream (64 bits)\"\n    }\n  }\n}", QuickserverOrder.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<QuickserverOrder>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<QuickserverOrder>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<VpsBackupRows> getQsBackups(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.QUERY, description = "Set to `1` to list all backups across all services, not just the ones for the given QuickServer." ,schema=@Schema(allowableValues={ "0", "1" }
)) @Valid @RequestParam(value = "all", required = false) String all
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<VpsBackupRows>(objectMapper.readValue("[ {\n  \"type\" : \"zfs\",\n  \"service\" : 2722890,\n  \"name\" : \"first\",\n  \"size\" : 3229615,\n  \"date\" : 1694082660\n}, {\n  \"type\" : \"swift\",\n  \"service\" : 100,\n  \"name\" : \"reset_shot_vps100_20210928.jpg\",\n  \"size\" : 40621,\n  \"date\" : 1632842251\n}, {\n  \"type\" : \"swift\",\n  \"service\" : 100,\n  \"name\" : \"reset_shot_vps100_20210929.jpg\",\n  \"size\" : 36319,\n  \"date\" : 1632968243\n} ]", VpsBackupRows.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<VpsBackupRows>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<VpsBackupRows>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<Void> getQsChangeHostname(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<Void> getQsChangeRootPassword(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<List<String>> getQsChangeTimezone(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<List<String>>(objectMapper.readValue("[ \"\", \"\" ]", List.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<List<String>>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<List<String>>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<Void> getQsChangeWebuzoPassword(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<Quickserver> getQsInfo(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<Quickserver>(objectMapper.readValue("{\n  \"package\" : \"Rapid Deploy Server\",\n  \"memory\" : \"0GB\",\n  \"client_links\" : [ {\n    \"link\" : \"invoices\",\n    \"icon\" : \"fas fa-file-invoice-dollar fa-w-12\",\n    \"other_attr\" : \"other_attr\",\n    \"label\" : \"Invoices\",\n    \"icon_text\" : \"\",\n    \"help_text\" : \"Invoice History\"\n  }, {\n    \"link\" : \"invoices\",\n    \"icon\" : \"fas fa-file-invoice-dollar fa-w-12\",\n    \"other_attr\" : \"other_attr\",\n    \"label\" : \"Invoices\",\n    \"icon_text\" : \"\",\n    \"help_text\" : \"Invoice History\"\n  } ],\n  \"billingDetails\" : {\n    \"service_currency\" : \"USD\",\n    \"service_extra\" : {\n      \"platform\" : \"kvm\"\n    },\n    \"service_payment_status\" : \"Paid\",\n    \"service_next_invoice_date\" : \"May 11, 2023\",\n    \"service_frequency\" : \"Monthly\",\n    \"service_last_invoice_date\" : \"April 11, 2023\",\n    \"service_currency_symbol\" : \"$\",\n    \"service_extra_json\" : \"{\\"platform\\":\\"kvm\\"}\",\n    \"service_cost_info\" : \"49.00\",\n    \"next_date\" : \"2023-05-11T20:00:06.000Z\"\n  },\n  \"serviceMaster\" : {\n    \"qs_bytes_sec_out\" : \"0\",\n    \"qs_hdsize\" : \"1760\",\n    \"qs_cores\" : \"8\",\n    \"qs_name\" : \"Qs365\",\n    \"qs_available\" : \"0\",\n    \"qs_bits\" : \"64\",\n    \"qs_last_update\" : \"2023-08-17T23:52:02.000Z\",\n    \"qs_ip\" : \"\",\n    \"qs_cost\" : \"49\",\n    \"qs_order\" : \"92263\",\n    \"qs_distro\" : \"Ubuntu\",\n    \"qs_hdfree\" : \"1192\",\n    \"qs_packets_sec_out\" : \"0\",\n    \"qs_ram\" : \"29550679\",\n    \"qs_iowait\" : \"6.89\",\n    \"qs_cpu_flags\" : \"\",\n    \"qs_last_install_time\" : \"qs_last_install_time\",\n    \"qs_location\" : \"1\",\n    \"qs_packets_sec_in\" : \"0\",\n    \"qs_distro_version\" : \"22.04\",\n    \"qs_ioping\" : \"330707348\",\n    \"qs_speed\" : \"1000\",\n    \"qs_kernel\" : \"5.15.0-69-generic\",\n    \"qs_cpu_model\" : \"Intel(R) Xeon(R) CPU E3-1271 v3 @ 3.60GHz\",\n    \"qs_load\" : \"3.45\",\n    \"qs_bytes_sec_in\" : \"0\",\n    \"qs_raid_building\" : \"0\",\n    \"qs_partitions\" : \"qs_partitions\",\n    \"qs_raid_status\" : \"OK: zfs:all pools are healthy\",\n    \"qs_id\" : \"365\",\n    \"qs_cpu_mhz\" : \"2900\",\n    \"qs_type\" : \"14\",\n    \"qs_drive_type\" : \"SSD\"\n  },\n  \"module\" : \"quickservers\",\n  \"cpu_graph_data\" : \"{\\"labels\\":[],\\"value\\":[]}\",\n  \"serviceInfo\" : {\n    \"qs_rootpass\" : \"\",\n    \"qs_extra\" : \"{\\"platform\\":\\"kvm\\"}\",\n    \"qs_hostname\" : \"qs24355\",\n    \"qs_custid\" : \"771282\",\n    \"qs_ip\" : \"\",\n    \"qs_server\" : \"365\",\n    \"qs_os\" : \"ubuntu24\",\n    \"qs_vzid\" : \"qs24355\",\n    \"qs_version\" : \"Ubuntu\",\n    \"qs_location\" : \"1\",\n    \"qs_vnc\" : \"99.88.77.66\",\n    \"qs_comment\" : \"\",\n    \"qs_invoice\" : \"20297531\",\n    \"qs_platform\" : \"qs_platform\",\n    \"qs_mac\" : \"\",\n    \"qs_order_date\" : \"2023-04-11T20:00:06.000Z\",\n    \"qs_ipv6\" : \"qs_ipv6\",\n    \"qs_coupon\" : \"0\",\n    \"qs_currency\" : \"USD\",\n    \"qs_slices\" : \"0\",\n    \"qs_id\" : \"24355\",\n    \"qs_status\" : \"canceled\",\n    \"qs_type\" : \"700\",\n    \"qs_server_status\" : \"deleted\",\n    \"qs_vnc_port\" : 0\n  },\n  \"extraInfoTables\" : {\n    \"addons\" : {\n      \"title\" : \"Addons\",\n      \"rows\" : [ {\n        \"value\" : \"\",\n        \"desc\" : \"Additional IP Address\"\n      }, {\n        \"value\" : \"\",\n        \"desc\" : \"Additional IP Address\"\n      } ]\n    },\n    \"ip_info\" : {\n      \"title\" : \"IP Information\",\n      \"rows\" : [ {\n        \"value\" : \"\",\n        \"desc\" : \"Netmask\"\n      }, {\n        \"value\" : \"\",\n        \"desc\" : \"Netmask\"\n      } ]\n    }\n  },\n  \"disk_percentage\" : 32.27,\n  \"hdd\" : \"0GB\",\n  \"bandwidth_yaxis\" : \"[]\",\n  \"token\" : \"%3Ftoken%3DAKLFIJOAQIRFOPIEWQRURQOIURWQOI\",\n  \"os_template\" : \"Ubuntu 22.04\",\n  \"serviceExtra\" : {\n    \"platform\" : \"kvm\"\n  },\n  \"bandwidth_xaxis\" : \"[]\",\n  \"service_disk_used\" : \"0.00 GB\",\n  \"custCurrencySymbol\" : \"$\",\n  \"service_overview_extra\" : [ \"service_overview_extra\", \"service_overview_extra\" ],\n  \"custCurrency\" : \"USD\",\n  \"service_disk_total\" : \"0.00 GB\"\n}", Quickserver.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<Quickserver>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<Quickserver>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<Void> getQsInsertCd(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<ChargeInvoiceRows> getQsInvoices(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<List<QuickserverRow>> getQsList() {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<List<QuickserverRow>>(objectMapper.readValue("[ {\n  \"qs_id\" : \"19504\",\n  \"qs_name\" : \"Quickserver199\",\n  \"cost\" : \"65.00\",\n  \"qs_hostname\" : \"qs19504\",\n  \"qs_status\" : \"canceled\",\n  \"qs_comment\" : \"\"\n}, {\n  \"qs_id\" : \"19504\",\n  \"qs_name\" : \"Quickserver199\",\n  \"cost\" : \"65.00\",\n  \"qs_hostname\" : \"qs19504\",\n  \"qs_status\" : \"canceled\",\n  \"qs_comment\" : \"\"\n} ]", List.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<List<QuickserverRow>>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<List<QuickserverRow>>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<VpsTemplatesList> getQsReinstallOs(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<VpsTemplatesList>(objectMapper.readValue("{\n  \"templates\" : [ {\n    \"template_id\" : \"1906\",\n    \"template_type\" : \"14\",\n    \"template_os\" : \"ubuntu\",\n    \"template_version\" : \"22.04\",\n    \"template_bits\" : \"64\",\n    \"template_file\" : \"ubuntu-22.04\",\n    \"template_available\" : \"1\",\n    \"template_name\" : \"Ubuntu\",\n    \"template_dir\" : \"\"\n  }, {\n    \"template_id\" : \"1906\",\n    \"template_type\" : \"14\",\n    \"template_os\" : \"ubuntu\",\n    \"template_version\" : \"22.04\",\n    \"template_bits\" : \"64\",\n    \"template_file\" : \"ubuntu-22.04\",\n    \"template_available\" : \"1\",\n    \"template_name\" : \"Ubuntu\",\n    \"template_dir\" : \"\"\n  } ]\n}", VpsTemplatesList.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<VpsTemplatesList>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<VpsTemplatesList>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<Void> getQsResetPassword(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<ReverseDnsEntries> getQsReverseDns(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<Void> getQsSetupVnc(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<Void> getQsTrafficUsage(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<Void> getQsViewDesktop(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<TextResponse> getQsWelcomeEmail(@Parameter(in = ParameterIn.PATH, description = "Quickserver ID", required=true, schema=@Schema()) @PathVariable("id") String id
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

    public ResponseEntity<QueueResponse> postQsBackup(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<QueueResponse>(objectMapper.readValue("{\n  \"text\" : \"Action has been sent to the server. Please allow up to 2 minutes for action to be completed.\",\n  \"queueId\" : 14670065\n}", QueueResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<QueueResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<QueueResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<QueueResponse> postQsChangeHostname(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<QueueResponse>(objectMapper.readValue("{\n  \"text\" : \"Action has been sent to the server. Please allow up to 2 minutes for action to be completed.\",\n  \"queueId\" : 14670065\n}", QueueResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<QueueResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<QueueResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<QueueResponse> postQsChangeRootPassword(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<QueueResponse>(objectMapper.readValue("{\n  \"text\" : \"Action has been sent to the server. Please allow up to 2 minutes for action to be completed.\",\n  \"queueId\" : 14670065\n}", QueueResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<QueueResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<QueueResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<QueueResponse> postQsChangeTimezone(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="timezone", required=true)  String timezone
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<QueueResponse>(objectMapper.readValue("{\n  \"text\" : \"Action has been sent to the server. Please allow up to 2 minutes for action to be completed.\",\n  \"queueId\" : 14670065\n}", QueueResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<QueueResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<QueueResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<QueueResponse> postQsChangeWebuzoPassword(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<QueueResponse>(objectMapper.readValue("{\n  \"text\" : \"Action has been sent to the server. Please allow up to 2 minutes for action to be completed.\",\n  \"queueId\" : 14670065\n}", QueueResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<QueueResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<QueueResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<QueueResponse> postQsInsertCd(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<QueueResponse>(objectMapper.readValue("{\n  \"text\" : \"Action has been sent to the server. Please allow up to 2 minutes for action to be completed.\",\n  \"queueId\" : 14670065\n}", QueueResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<QueueResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<QueueResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<QueueResponse> postQsReinstallOs(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<QueueResponse>(objectMapper.readValue("{\n  \"text\" : \"Action has been sent to the server. Please allow up to 2 minutes for action to be completed.\",\n  \"queueId\" : 14670065\n}", QueueResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<QueueResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<QueueResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<QueueResponse> postQsResetPassword(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<QueueResponse>(objectMapper.readValue("{\n  \"text\" : \"Action has been sent to the server. Please allow up to 2 minutes for action to be completed.\",\n  \"queueId\" : 14670065\n}", QueueResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<QueueResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<QueueResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<TextResponse> postQsReverseDns(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<QueueResponse> postQsSetupVnc(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<QueueResponse>(objectMapper.readValue("{\n  \"text\" : \"Action has been sent to the server. Please allow up to 2 minutes for action to be completed.\",\n  \"queueId\" : 14670065\n}", QueueResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<QueueResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<QueueResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<Void> postQsTrafficUsage(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<Void> postQsViewDesktop(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<QueueResponse> postQuickServerRestore(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "QuickServer Restore request", required=true, schema=@Schema()) @Valid @RequestBody RestoreRequest body
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<QueueResponse>(objectMapper.readValue("{\n  \"text\" : \"Action has been sent to the server. Please allow up to 2 minutes for action to be completed.\",\n  \"queueId\" : 14670065\n}", QueueResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<QueueResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<QueueResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<Void> putQs() {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<InlineResponse20010> quickserversCancel(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<InlineResponse20010>(objectMapper.readValue("{\n  \"success\" : true,\n  \"text\" : \"Rapid Deploy Servers is canceled.\"\n}", InlineResponse20010.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<InlineResponse20010>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<InlineResponse20010>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<SuccessTextResponse> updateQsInfo(@Parameter(in = ParameterIn.PATH, description = "QuickServer ID number.", required=true, schema=@Schema()) @PathVariable("id") String id
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
