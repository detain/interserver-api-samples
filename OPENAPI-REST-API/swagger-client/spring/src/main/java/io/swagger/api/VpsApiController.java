package io.swagger.api;

import io.swagger.model.ChargeInvoiceRows;
import io.swagger.model.HostnameObject;
import io.swagger.model.IdBackupsBody2;
import io.swagger.model.InlineResponse20011;
import io.swagger.model.InlineResponse20022;
import io.swagger.model.InlineResponse401;
import io.swagger.model.PasswordRequest;
import io.swagger.model.QueueResponse;
import io.swagger.model.RestoreRequest;
import io.swagger.model.ReverseDnsEntries;
import io.swagger.model.ServiceOrderPostResponse;
import io.swagger.model.SuccessTextResponse;
import io.swagger.model.TemplateRequest;
import io.swagger.model.TextResponse;
import io.swagger.model.TimezoneUpdate;
import io.swagger.model.UrlRequest;
import io.swagger.model.Vps;
import io.swagger.model.VpsBackupRows;
import io.swagger.model.VpsOrder;
import io.swagger.model.VpsOrderPostRequest;
import io.swagger.model.VpsOrderPutRequest;
import io.swagger.model.VpsOrderPutResponse;
import io.swagger.model.VpsRow;
import io.swagger.model.VpsTemplatesList;
import io.swagger.model.VpsTrafficResponse;
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
public class VpsApiController implements VpsApi {

    private static final Logger log = LoggerFactory.getLogger(VpsApiController.class);

    private final ObjectMapper objectMapper;

    private final HttpServletRequest request;

    @org.springframework.beans.factory.annotation.Autowired
    public VpsApiController(ObjectMapper objectMapper, HttpServletRequest request) {
        this.objectMapper = objectMapper;
        this.request = request;
    }

    public ResponseEntity<ServiceOrderPostResponse> addVps(@Parameter(in = ParameterIn.DEFAULT, description = "", schema=@Schema()) @Valid @RequestBody VpsOrderPostRequest body
) {
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

    public ResponseEntity<SuccessTextResponse> deleteVpsBackup(@Parameter(in = ParameterIn.PATH, description = "VPS ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@NotNull @Parameter(in = ParameterIn.QUERY, description = "The backup filename to delete." ,required=true,schema=@Schema()) @Valid @RequestParam(value = "file", required = true) String file
,@Parameter(in = ParameterIn.QUERY, description = "Set to `1` to list all backups across all services, not just the ones for the given VPS." ,schema=@Schema(allowableValues={ "0", "1" }
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

    public ResponseEntity<QueueResponse> doVpsBlockSmtp(@Parameter(in = ParameterIn.PATH, description = "VPS ID number.", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<QueueResponse> doVpsDisableCd(@Parameter(in = ParameterIn.PATH, description = "VPS ID number.", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<QueueResponse> doVpsDisableQuota(@Parameter(in = ParameterIn.PATH, description = "VPS ID number.", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<QueueResponse> doVpsEjectCd(@Parameter(in = ParameterIn.PATH, description = "VPS ID number.", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<QueueResponse> doVpsEnableQuota(@Parameter(in = ParameterIn.PATH, description = "VPS ID number.", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<QueueResponse> doVpsRestart(@Parameter(in = ParameterIn.PATH, description = "VPS ID number.", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<QueueResponse> doVpsStart(@Parameter(in = ParameterIn.PATH, description = "VPS ID number.", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<QueueResponse> doVpsStop(@Parameter(in = ParameterIn.PATH, description = "VPS ID number.", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<InlineResponse20011> downloadVpsBackup(@Parameter(in = ParameterIn.PATH, description = "VPS ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true, schema=@Schema()) @Valid @RequestBody IdBackupsBody2 body
,@Parameter(in = ParameterIn.QUERY, description = "Set to `1` to list all backups across all services, not just the ones for the given VPS." ,schema=@Schema(allowableValues={ "0", "1" }
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

    public ResponseEntity<VpsOrder> getNewVps() {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<VpsOrder>(objectMapper.readValue("{\n  \"vpsSliceOvzCost\" : 6,\n  \"bwType\" : \"2\",\n  \"vpsSliceXenCost\" : 6,\n  \"maxSlices\" : \"16\",\n  \"vpsSliceHypervCost\" : 10,\n  \"hdSlice\" : \"30\",\n  \"bwSlice\" : \"2000\",\n  \"platformNames\" : {\n    \"kvm\" : \"KVM\",\n    \"kvmstorage\" : \"KVM Storage\",\n    \"hyperv\" : \"HyperV\"\n  },\n  \"vpsSliceSsdOvzCost\" : 9,\n  \"osNames\" : {\n    \"ubuntu\" : \"Ubuntu\",\n    \"opensuse\" : \"OpenSUSE\"\n  },\n  \"vpsNyCost\" : 3,\n  \"vpsSliceLxcCost\" : 6,\n  \"ramSlice\" : \"2048\",\n  \"hdStorageSlice\" : \"1000\",\n  \"serviceTypes\" : {\n    \"32\" : {\n      \"services_id\" : \"32\",\n      \"services_category\" : \"2\",\n      \"services_field1\" : \"slice\",\n      \"services_field2\" : \"\",\n      \"services_name\" : \"KVM Windows VPS Slice\",\n      \"services_type\" : \"1\",\n      \"services_buyable\" : \"1\",\n      \"services_cost\" : \"10.00\",\n      \"services_module\" : \"vps\"\n    }\n  },\n  \"currency\" : \"USD\",\n  \"vpsSliceKvmStorageCost\" : 6,\n  \"vpsSliceVirtuozzoCost\" : 6,\n  \"locationStock\" : {\n    \"1\" : {\n      \"kvm\" : true,\n      \"kvmstorage\" : true,\n      \"hyperv\" : true\n    }\n  },\n  \"locationNames\" : {\n    \"3\" : \"Equinix NY4\"\n  },\n  \"vpsSliceKvmWCost\" : 10,\n  \"templates\" : {\n    \"hyperv\" : {\n      \"windows\" : {\n        \"Windows2022\" : \"2022\",\n        \"Windows2019Standard\" : \"2019 Standard\"\n      }\n    }\n  },\n  \"bwTotal\" : 2,\n  \"currencySymbol\" : \"$\",\n  \"cpanelCost\" : 22,\n  \"platformPackages\" : {\n    \"kvm\" : 32,\n    \"kvmstorage\" : 57,\n    \"hyperv\" : 54\n  },\n  \"daCost\" : 8,\n  \"packageCosts\" : {\n    \"57\" : 6\n  },\n  \"vpsSliceKvmLCost\" : 6,\n  \"vpsSliceSsdVirtuozzoCost\" : 9,\n  \"vpsSliceVmwareCost\" : 10\n}", VpsOrder.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<VpsOrder>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<VpsOrder>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<VpsBackupRows> getVpsBackups(@Parameter(in = ParameterIn.PATH, description = "VPS ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.QUERY, description = "Set to `1` to list all backups across all services, not just the ones for the given VPS." ,schema=@Schema(allowableValues={ "0", "1" }
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

    public ResponseEntity<Void> getVpsBuyHdSpace(@Parameter(in = ParameterIn.PATH, description = "VPS ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<Void> getVpsBuyIp(@Parameter(in = ParameterIn.PATH, description = "VPS ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<List<String>> getVpsChangeTimezone(@Parameter(in = ParameterIn.PATH, description = "VPS ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<Vps> getVpsInfo(@Parameter(in = ParameterIn.PATH, description = "VPS ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<Vps>(objectMapper.readValue("{\n  \"package\" : \"package\",\n  \"client_links\" : [ {\n    \"link\" : \"link\",\n    \"icon\" : \"icon\",\n    \"label\" : \"label\",\n    \"icon_text\" : \"icon_text\",\n    \"help_text\" : \"help_text\"\n  }, {\n    \"link\" : \"link\",\n    \"icon\" : \"icon\",\n    \"label\" : \"label\",\n    \"icon_text\" : \"icon_text\",\n    \"help_text\" : \"help_text\"\n  } ],\n  \"billingDetails\" : {\n    \"service_currency\" : \"USD\",\n    \"service_extra\" : {\n      \"snapshots\" : [ {\n        \"date\" : 6,\n        \"name\" : \"name\",\n        \"used\" : 0\n      }, {\n        \"date\" : 6,\n        \"name\" : \"name\",\n        \"used\" : 0\n      } ],\n      \"spice\" : 5903\n    },\n    \"service_payment_status\" : \"Paid\",\n    \"service_next_invoice_date\" : \"August 26, 2023\",\n    \"service_frequency\" : \"Monthly\",\n    \"service_coupon\" : \"TheCouponIUsed\",\n    \"service_last_invoice_date\" : \"July 26, 2023\",\n    \"service_currency_symbol\" : \"$\",\n    \"service_extra_json\" : \"{\\"spice\\":5903,\\"snapshots\\":[{\\"name\\":\\"third\\",\\"used\\":36490445,\\"date\\":1692095220},{\\"name\\":\\"second\\",\\"used\\":40894464,\\"date\\":1692181620},{\\"name\\":\\"first\\",\\"used\\":54735668,\\"date\\":1692268020}]}\",\n    \"service_cost_info\" : \"0.00\",\n    \"next_date\" : \"2023-08-26T09:41:12.000Z\"\n  },\n  \"serviceMaster\" : {\n    \"vps_name\" : \"Mystaging\",\n    \"vps_order\" : \"36978\",\n    \"vps_raid_building\" : \"0\",\n    \"vps_raid_status\" : \"OK: zfs:all pools are healthy\",\n    \"vps_load\" : \"0.17\",\n    \"vps_iowait\" : \"0.09\",\n    \"vps_hdfree\" : \"1559\",\n    \"vps_bits\" : \"64\",\n    \"vps_ram\" : \"263998228\",\n    \"vps_server_max\" : \"50\",\n    \"vps_cores\" : \"48\",\n    \"vps_server_max_slices\" : \"80\",\n    \"vps_cpu_model\" : \"Intel(R) Xeon(R) CPU E5-2678 v3 @ 2.50GHz\",\n    \"vps_type\" : \"14\",\n    \"vps_hdsize\" : \"1856\",\n    \"vps_last_update\" : \"2023-08-17T22:19:04.000Z\",\n    \"vps_mounts\" : \"udev:125:0:125:/dev,/dev/md1:91:53:38:/,securityfs:0:0:0:/sys/kernel/security,cgroup2:0:0:0:/sys/fs/cgroup/unified,pstore:0:0:0:/sys/fs/pstore,efivarfs:0:0:0:/sys/firmware/efi/efivars,systemd-1:0:0:0:/proc/sys/fs/binfmt_misc,hugetlbfs:0:0:0:/dev/hugepages\",\n    \"vps_ip\" : \"10.11.12.13\",\n    \"vps_location\" : \"1\",\n    \"vps_id\" : \"2439\",\n    \"vps_cpu_mhz\" : \"1198.86\",\n    \"vps_drive_type\" : \"SSD\",\n    \"vps_kernel\" : \"5.4.0-121-generic\",\n    \"vps_available\" : \"0\"\n  },\n  \"module\" : \"module\",\n  \"cpu_graph_data\" : \"\",\n  \"serviceInfo\" : {\n    \"vps_order_date\" : \"2022-12-26T20:14:59.000Z\",\n    \"vps_ipv6\" : \"vps_ipv6\",\n    \"vps_currency\" : \"USD\",\n    \"vps_invoice\" : \"20130799\",\n    \"vps_coupon\" : \"3646\",\n    \"vps_server_status\" : \"running\",\n    \"vps_custid\" : \"223513\",\n    \"vps_hostname\" : \"vps85872\",\n    \"vps_vzid\" : \"vps85872\",\n    \"vps_os\" : \"ubuntu24\",\n    \"vps_extra\" : \"{\\"spice\\":5903,\\"snapshots\\":[{\\"name\\":\\"third\\",\\"used\\":36490445,\\"date\\":1692095220},{\\"name\\":\\"second\\",\\"used\\":40894464,\\"date\\":1692181620},{\\"name\\":\\"first\\",\\"used\\":54735668,\\"date\\":1692268020}]}\",\n    \"vps_ip\" : \"1.2.3.4\",\n    \"vps_status\" : \"active\",\n    \"vps_rootpass\" : \"mypassword\",\n    \"vps_location\" : \"1\",\n    \"vps_id\" : \"85872\",\n    \"vps_vnc\" : \"8.7.6.5\",\n    \"vps_version\" : \"ubuntu\",\n    \"vps_diskmax\" : \"0\",\n    \"vps_slices\" : \"16\",\n    \"vps_comment\" : \"my-web-2\",\n    \"vps_platform\" : \"kvm\",\n    \"vps_server\" : \"2439\",\n    \"vps_diskused\" : \"0\",\n    \"vps_vnc_port\" : \"5902\",\n    \"vps_type\" : \"33\",\n    \"vps_mac\" : \"00:16:3e:27:59:b2\"\n  },\n  \"extraInfoTables\" : {\n    \"ip_info\" : {\n      \"title\" : \"IP Information\",\n      \"rows\" : [ {\n        \"value\" : \"value\",\n        \"desc\" : \"desc\"\n      }, {\n        \"value\" : \"value\",\n        \"desc\" : \"desc\"\n      } ]\n    }\n  },\n  \"cp_data\" : {\n    \"cost\" : 5,\n    \"name\" : \"name\"\n  },\n  \"token\" : \"token\",\n  \"plesk12_data\" : {\n    \"admin\" : {\n      \"sub_name\" : \"sub_name\",\n      \"cost\" : 9,\n      \"name\" : \"name\",\n      \"id\" : 7\n    }\n  },\n  \"os_template\" : \"os_template\",\n  \"da_data\" : {\n    \"free\" : {\n      \"sub_name\" : \"sub_name\",\n      \"cost\" : 2,\n      \"name\" : \"name\",\n      \"img_active\" : \"img_active\",\n      \"img_disabled\" : \"img_disabled\"\n    }\n  },\n  \"serviceAddons\" : {\n    \"has_softaculous\" : true,\n    \"unpaid_ips\" : [ \"unpaid_ips\", \"unpaid_ips\" ],\n    \"cost\" : 2,\n    \"has_cpanel\" : true,\n    \"rdata\" : [ \"rdata\", \"rdata\" ],\n    \"ips\" : [ \"ips\", \"ips\" ],\n    \"cpanel_id\" : 3,\n    \"dedicated_ip\" : true,\n    \"extra_ips\" : [ \"extra_ips\", \"extra_ips\" ],\n    \"extra_ips6\" : [ \"extra_ips6\", \"extra_ips6\" ],\n    \"has_fantastico\" : true,\n    \"ids\" : [ \"ids\", \"ids\" ],\n    \"has_directadmin\" : true,\n    \"has_hdspace\" : true,\n    \"ips6\" : [ \"ips6\", \"ips6\" ]\n  },\n  \"sr_link\" : 5,\n  \"custCurrencySymbol\" : \"custCurrencySymbol\",\n  \"custCurrency\" : \"custCurrency\",\n  \"da_link\" : 1\n}", Vps.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<Vps>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<Vps>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<ChargeInvoiceRows> getVpsInvoices(@Parameter(in = ParameterIn.PATH, description = "VPS ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<List<VpsRow>> getVpsList() {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<List<VpsRow>>(objectMapper.readValue("[ {\n  \"vps_id\" : \"100\",\n  \"vps_name\" : \"Builder\",\n  \"repeat_invoices_cost\" : \"10.00\",\n  \"vps_hostname\" : \"vps100\",\n  \"vps_ip\" : \"64.20.46.220\",\n  \"vps_status\" : \"active\",\n  \"services_name\" : \"KVM Windows VPS Slice\",\n  \"vps_comment\" : \"\"\n}, {\n  \"vps_id\" : \"100\",\n  \"vps_name\" : \"Builder\",\n  \"repeat_invoices_cost\" : \"10.00\",\n  \"vps_hostname\" : \"vps100\",\n  \"vps_ip\" : \"64.20.46.220\",\n  \"vps_status\" : \"active\",\n  \"services_name\" : \"KVM Windows VPS Slice\",\n  \"vps_comment\" : \"\"\n} ]", List.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<List<VpsRow>>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<List<VpsRow>>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<VpsTemplatesList> getVpsReinstallOs(@Parameter(in = ParameterIn.PATH, description = "VPS ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<ReverseDnsEntries> getVpsReverseDns(@Parameter(in = ParameterIn.PATH, description = "VPS ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<Void> getVpsSetupVnc(@Parameter(in = ParameterIn.PATH, description = "VPS ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<Void> getVpsSlices(@Parameter(in = ParameterIn.PATH, description = "VPS ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<VpsTrafficResponse> getVpsTrafficUsage(@Parameter(in = ParameterIn.PATH, description = "VPS ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<VpsTrafficResponse>(objectMapper.readValue("{\n  \"name\" : \"vps2725349\",\n  \"target\" : \"2725349\",\n  \"interval\" : 30,\n  \"history\" : {\n    \"hour\" : {\n      \"data\" : [ [ \"2023-09-11T12:00:00Z\", 834424 ], [ \"2023-09-11T23:00:00Z\", 8247944 ], [ \"2023-09-14T05:00:00Z\", 19763064 ], [ \"2023-09-14T06:00:00Z\", 18892320 ], [ \"2023-09-17T07:00:00Z\", 16546448 ] ],\n      \"times\" : [ \"2023-09-12T02:00:00Z\", \"2023-09-17T05:00:00Z\", \"2023-09-17T06:00:00Z\", \"2023-09-17T07:00:00Z\" ]\n    },\n    \"day\" : {\n      \"data\" : [ [ \"2023-09-12T00:00:00Z\", 1455497448 ], [ \"2023-09-13T00:00:00Z\", 182943992 ], [ \"2023-09-14T00:00:00Z\", 290416056 ], [ \"2023-09-15T00:00:00Z\", 440595840 ], [ \"2023-09-16T00:00:00Z\", 411255120 ], [ \"2023-09-17T00:00:00Z\", 346449520 ] ],\n      \"times\" : [ \"2023-09-12T00:00:00Z\", \"2023-09-13T00:00:00Z\", \"2023-09-14T00:00:00Z\", \"2023-09-15T00:00:00Z\", \"2023-09-16T00:00:00Z\", \"2023-09-17T00:00:00Z\" ]\n    }\n  },\n  \"last\" : \"2023-09-17T07:50:12Z\",\n  \"times\" : [ \"2023-09-17T03:30:30Z\", \"2023-09-17T03:31:30Z\", \"2023-09-17T03:32:31Z\", \"2023-09-17T03:33:31Z\", \"2023-09-17T04:12:30Z\", \"2023-09-17T04:13:31Z\", \"2023-09-17T04:14:30Z\", \"2023-09-17T04:15:30Z\", \"2023-09-17T04:16:31Z\", \"2023-09-17T04:17:30Z\", \"2023-09-17T04:18:31Z\", \"2023-09-17T04:19:30Z\", \"2023-09-17T04:20:30Z\", \"2023-09-17T04:21:30Z\", \"2023-09-17T04:22:31Z\", \"2023-09-17T07:50:12Z\" ],\n  \"totals\" : {\n    \"day\" : {\n      \"in\" : 49719744,\n      \"out\" : 11316104\n    },\n    \"month\" : {\n      \"in\" : 2880512936,\n      \"out\" : 380333384\n    },\n    \"year\" : {\n      \"in\" : 2880512936,\n      \"out\" : 380333384\n    },\n    \"all\" : {\n      \"in\" : 2880512936,\n      \"out\" : 380333384\n    }\n  },\n  \"usage\" : {\n    \"current\" : {\n      \"in\" : 5504,\n      \"out\" : 1248\n    },\n    \"peak\" : {\n      \"in\" : 9176,\n      \"out\" : 3600\n    },\n    \"average\" : {\n      \"in\" : {\n        \"total\" : 949688,\n        \"count\" : 261,\n        \"value\" : 3639\n      },\n      \"out\" : {\n        \"total\" : 200752,\n        \"count\" : 261,\n        \"value\" : 770\n      }\n    }\n  },\n  \"data\" : [ {\n    \"name\" : \"74.50.91.46 In\",\n    \"data\" : [ [ \"2023-09-17T03:30:30Z\", 3968 ], [ \"2023-09-17T03:31:30Z\", 840 ], [ \"2023-09-17T03:32:31Z\", 632 ], [ \"2023-09-17T03:33:31Z\", 1232 ], [ \"2023-09-17T03:34:31Z\", 2960 ], [ \"2023-09-17T07:50:12Z\", 5504 ] ]\n  }, {\n    \"name\" : \"74.50.91.46 Out\",\n    \"data\" : [ [ \"2023-09-17T03:30:30Z\", 456 ], [ \"2023-09-17T03:31:30Z\", 472 ], [ \"2023-09-17T03:48:30Z\", 592 ] ]\n  } ]\n}", VpsTrafficResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<VpsTrafficResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<VpsTrafficResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<Void> getVpsViewDesktop(@Parameter(in = ParameterIn.PATH, description = "VPS ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<SuccessTextResponse> getVpsWelcomeEmail(@Parameter(in = ParameterIn.PATH, description = "VPS ID", required=true, schema=@Schema()) @PathVariable("id") String id
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

    public ResponseEntity<QueueResponse> postVpsBackup(@Parameter(in = ParameterIn.PATH, description = "VPS ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<Void> postVpsBuyHdSpace(@Parameter(in = ParameterIn.PATH, description = "VPS ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<Void> postVpsBuyIp(@Parameter(in = ParameterIn.PATH, description = "VPS ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<QueueResponse> postVpsChangeHostname(@Parameter(in = ParameterIn.PATH, description = "VPS ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="hostname", required=true)  String hostname
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

    public ResponseEntity<QueueResponse> postVpsChangeRootPassword(@Parameter(in = ParameterIn.PATH, description = "VPS ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="password", required=true)  String password
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

    public ResponseEntity<QueueResponse> postVpsChangeTimezone(@Parameter(in = ParameterIn.PATH, description = "VPS ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<QueueResponse> postVpsChangeWebuzoPassword(@Parameter(in = ParameterIn.PATH, description = "VPS ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="password", required=true)  String password
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

    public ResponseEntity<QueueResponse> postVpsInsertCd(@Parameter(in = ParameterIn.PATH, description = "VPS ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="url", required=true)  String url
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

    public ResponseEntity<QueueResponse> postVpsReinstallOs(@Parameter(in = ParameterIn.PATH, description = "VPS ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="template", required=true)  String template
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="password", required=true)  String password
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="localPassword", required=true)  String localPassword
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

    public ResponseEntity<QueueResponse> postVpsResetPassword(@Parameter(in = ParameterIn.PATH, description = "VPS ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<QueueResponse> postVpsRestore(@Parameter(in = ParameterIn.PATH, description = "VPS ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "VPS Restore request", required=true, schema=@Schema()) @Valid @RequestBody RestoreRequest body
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

    public ResponseEntity<TextResponse> postVpsReverseDns(@Parameter(in = ParameterIn.PATH, description = "VPS ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<QueueResponse> postVpsSetupVnc(@Parameter(in = ParameterIn.PATH, description = "VPS ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<Void> postVpsSlices(@Parameter(in = ParameterIn.PATH, description = "VPS ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<Void> postVpsViewDesktop(@Parameter(in = ParameterIn.PATH, description = "VPS ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<VpsOrderPutResponse> putVps(@Parameter(in = ParameterIn.DEFAULT, description = "", schema=@Schema()) @Valid @RequestBody VpsOrderPutRequest body
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<VpsOrderPutResponse>(objectMapper.readValue("{\n  \"continue\" : true,\n  \"errors\" : [ ],\n  \"coupon_code\" : 0,\n  \"service_cost\" : 3,\n  \"slice_cost\" : 3,\n  \"service_type\" : 33,\n  \"repeat_slice_cost\" : 3,\n  \"original_slice_cost\" : 3,\n  \"original_cost\" : 3,\n  \"repeat_service_cost\" : 3,\n  \"monthly_service_cost\" : 3,\n  \"custid\" : \"123456\",\n  \"os\" : \"ubuntu\",\n  \"slices\" : \"1\",\n  \"platform\" : \"kvm\",\n  \"controlpanel\" : \"none\",\n  \"period\" : 1,\n  \"location\" : 1,\n  \"version\" : \"24.04\",\n  \"hostname\" : \"server.blank.com\",\n  \"coupon\" : \"\",\n  \"rootpass\" : \"string\"\n}", VpsOrderPutResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<VpsOrderPutResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<VpsOrderPutResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<SuccessTextResponse> updateVpsInfo(@Parameter(in = ParameterIn.PATH, description = "VPS ID number.", required=true, schema=@Schema()) @PathVariable("id") String id
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

    public ResponseEntity<InlineResponse20022> vPSCancel(@Parameter(in = ParameterIn.PATH, description = "VPS ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<InlineResponse20022>(objectMapper.readValue("{\n  \"success\" : true,\n  \"text\" : \"VPS is canceled.\"\n}", InlineResponse20022.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<InlineResponse20022>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<InlineResponse20022>(HttpStatus.NOT_IMPLEMENTED);
    }

}
