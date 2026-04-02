package io.swagger.api;

import io.swagger.model.ChargeInvoiceRows;
import io.swagger.model.InlineResponse20019;
import io.swagger.model.InlineResponse20020;
import io.swagger.model.InlineResponse20027;
import io.swagger.model.InlineResponse401;
import io.swagger.model.OrderBuyNowServerBody;
import io.swagger.model.ReverseDnsEntries;
import io.swagger.model.Server;
import io.swagger.model.ServerIpmiLiveInfo;
import io.swagger.model.ServerIpmiLiveRequest;
import io.swagger.model.ServerIpmiPowerRequest;
import io.swagger.model.ServerOrder;
import io.swagger.model.ServerRow;
import io.swagger.model.ServersBuyNowError;
import io.swagger.model.ServersBuyNowResponse;
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
public class ServersApiController implements ServersApi {

    private static final Logger log = LoggerFactory.getLogger(ServersApiController.class);

    private final ObjectMapper objectMapper;

    private final HttpServletRequest request;

    @org.springframework.beans.factory.annotation.Autowired
    public ServersApiController(ObjectMapper objectMapper, HttpServletRequest request) {
        this.objectMapper = objectMapper;
        this.request = request;
    }

    public ResponseEntity<InlineResponse20019> addServer() {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<InlineResponse20019>(objectMapper.readValue("{\n  \"text\" : \"Order Completed\",\n  \"invoice\" : 0,\n  \"order\" : 6\n}", InlineResponse20019.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<InlineResponse20019>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<InlineResponse20019>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<InlineResponse20027> buyItNowServerOrder() {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<InlineResponse20027>(objectMapper.readValue("{\n  \"os\" : [ {\n    \"monthly_price\" : \"0\",\n    \"id\" : \"5\",\n    \"short_desc\" : \"FreeBSD\",\n    \"long_desc\" : \"Latest FreeBSD 6.x OS<br><pre>CP(s): cPanel/DirectAdmin</pre>\"\n  }, {\n    \"monthly_price\" : \"0\",\n    \"id\" : \"5\",\n    \"short_desc\" : \"FreeBSD\",\n    \"long_desc\" : \"Latest FreeBSD 6.x OS<br><pre>CP(s): cPanel/DirectAdmin</pre>\"\n  } ],\n  \"bandwidth\" : [ {\n    \"monthly_price\" : \"0\",\n    \"id\" : \"10\",\n    \"short_desc\" : \"1GBPS Unmetered\",\n    \"long_desc\" : \"\"\n  }, {\n    \"monthly_price\" : \"0\",\n    \"id\" : \"10\",\n    \"short_desc\" : \"1GBPS Unmetered\",\n    \"long_desc\" : \"\"\n  } ],\n  \"ips\" : [ {\n    \"monthly_price\" : \"0\",\n    \"id\" : \"9\",\n    \"short_desc\" : \"1 Vlan Ip (/30)\",\n    \"long_desc\" : \"1 IP In personal Vlan\"\n  }, {\n    \"monthly_price\" : \"0\",\n    \"id\" : \"9\",\n    \"short_desc\" : \"1 Vlan Ip (/30)\",\n    \"long_desc\" : \"1 IP In personal Vlan\"\n  } ],\n  \"cp\" : [ {\n    \"monthly_price\" : \"0\",\n    \"os_type\" : \"\",\n    \"id\" : \"1\",\n    \"short_desc\" : \"None\",\n    \"long_desc\" : \"\"\n  }, {\n    \"monthly_price\" : \"0\",\n    \"os_type\" : \"\",\n    \"id\" : \"1\",\n    \"short_desc\" : \"None\",\n    \"long_desc\" : \"\"\n  } ],\n  \"raid\" : [ {\n    \"monthly_price\" : \"0\",\n    \"id\" : \"0\",\n    \"short_desc\" : \"No Raid\",\n    \"long_desc\" : \"No Raid\"\n  }, {\n    \"monthly_price\" : \"0\",\n    \"id\" : \"0\",\n    \"short_desc\" : \"No Raid\",\n    \"long_desc\" : \"No Raid\"\n  } ]\n}", InlineResponse20027.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<InlineResponse20027>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<InlineResponse20027>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<ServerOrder> getNewServer() {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<ServerOrder>(objectMapper.readValue("{\n  \"memory_li\" : {\n    \"254\" : {\n      \"65\" : {\n        \"drive_type\" : \"lff\",\n        \"monthly_price\" : 50,\n        \"img\" : \"hd.jpg\",\n        \"size\" : \"3000\",\n        \"hidden\" : \"0\",\n        \"price\" : \"0\",\n        \"manu\" : \"manu\",\n        \"monthly_price_display\" : \"$50.00\",\n        \"id\" : \"65\",\n        \"short_desc\" : \"20TB SATA\",\n        \"type\" : \"type\",\n        \"long_desc\" : \"long_desc\"\n      }\n    }\n  },\n  \"raid_li\" : [ {\n    \"monthly_price\" : 50,\n    \"img\" : \"raid.png\",\n    \"price\" : 50,\n    \"monthly_price_display\" : \"$50.00\",\n    \"active\" : \"1\",\n    \"id\" : \"7\",\n    \"short_desc\" : \"Hardware Raid 5\",\n    \"price_display\" : \"$50.00\",\n    \"long_desc\" : \"Hardware Raid 5\"\n  }, {\n    \"monthly_price\" : 50,\n    \"img\" : \"raid.png\",\n    \"price\" : 50,\n    \"monthly_price_display\" : \"$50.00\",\n    \"active\" : \"1\",\n    \"id\" : \"7\",\n    \"short_desc\" : \"Hardware Raid 5\",\n    \"price_display\" : \"$50.00\",\n    \"long_desc\" : \"Hardware Raid 5\"\n  } ],\n  \"cpu_li\" : {\n    \"254\" : {\n      \"num_cpus\" : \"1\",\n      \"img\" : \"ryzen.png\",\n      \"max_lff\" : \"4\",\n      \"type\" : \"AMD\",\n      \"max_sff\" : \"4\",\n      \"speed\" : \"4.7\",\n      \"hd_ids\" : \"\",\n      \"price\" : 0,\n      \"max_ram\" : \"128\",\n      \"max_nve\" : \"2\",\n      \"monthly_price_display\" : \"$75.00\",\n      \"id\" : \"254\",\n      \"price_display\" : \"$0.00\",\n      \"min_ram\" : \"128\",\n      \"monthly_price\" : 75,\n      \"cache\" : \"cache\",\n      \"visible\" : \"yes\",\n      \"num_cores\" : \"12\",\n      \"manu\" : \"manu\",\n      \"active\" : \"1\",\n      \"benchmark\" : \"121148\",\n      \"long_desc\" : \"High core and thread count...\",\n      \"fsb\" : \"fsb\",\n      \"location\" : \"New York\",\n      \"short_desc\" : \"AMD RYZEN 7900X\"\n    }\n  },\n  \"field_label\" : {\n    \"memory\" : \"\",\n    \"os\" : \"\",\n    \"bandwidth\" : \"\",\n    \"hd\" : \"\",\n    \"ips\" : \"\",\n    \"cp\" : \"\",\n    \"raid\" : \"\"\n  },\n  \"cp_li\" : {\n    \"9\" : {\n      \"monthly_price\" : 0,\n      \"img\" : \"cpanel.gif\",\n      \"types\" : [ \"1\", \"2\", \"4\", \"5\", \"8\", \"17\", \"23\", \"30\", \"51\" ],\n      \"price\" : 80,\n      \"os_type\" : \"os_type\",\n      \"monthly_price_display\" : \"$0.00\",\n      \"id\" : \"9\",\n      \"short_desc\" : \"cPanel ($45+)\",\n      \"price_display\" : \"$80.00\",\n      \"long_desc\" : \"long_desc\"\n    }\n  },\n  \"cpu\" : 184,\n  \"os_li\" : {\n    \"51\" : {\n      \"monthly_price\" : 0,\n      \"img\" : \"img\",\n      \"price\" : 0,\n      \"monthly_price_display\" : \"$0.00\",\n      \"active\" : \"1\",\n      \"id\" : \"51\",\n      \"short_desc\" : \"AlmaLinux\",\n      \"price_display\" : \"$0.00\",\n      \"long_desc\" : \"long_desc\"\n    }\n  },\n  \"form_values\" : {\n    \"memory\" : 22,\n    \"os\" : \"5\",\n    \"bandwidth\" : \"3\",\n    \"hd\" : \"16\",\n    \"ips\" : \"9\",\n    \"cp\" : 5,\n    \"raid\" : \"0\"\n  },\n  \"ips_li\" : {\n    \"9\" : {\n      \"monthly_price\" : 0,\n      \"img\" : \"ips.jpg\",\n      \"price\" : 0,\n      \"qty\" : \"1\",\n      \"monthly_price_display\" : \"$0.00\",\n      \"id\" : \"9\",\n      \"short_desc\" : \"1 Vlan Ip (/30)\",\n      \"price_display\" : \"$0.00\",\n      \"long_desc\" : \"1 IP In personal Vlan\"\n    }\n  },\n  \"bandwidth_li\" : {\n    \"15\" : {\n      \"monthly_price\" : 15,\n      \"img\" : \"bandwidth.jpg\",\n      \"price\" : 0,\n      \"qty\" : \"4000\",\n      \"monthly_price_display\" : \"$15.00\",\n      \"active\" : \"1\",\n      \"id\" : \"15\",\n      \"short_desc\" : \"150TB (10Gb Port)\",\n      \"price_display\" : \"$0.00\",\n      \"type\" : \"Standard\",\n      \"long_desc\" : \" - 2000GB Bandwidth...\"\n    }\n  },\n  \"config_ids\" : {\n    \"memory\" : 22,\n    \"os\" : \"5\",\n    \"bandwidth\" : \"3\",\n    \"hd\" : \"16\",\n    \"ips\" : \"9\",\n    \"cp\" : 5,\n    \"raid\" : \"0\"\n  }\n}", ServerOrder.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<ServerOrder>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<ServerOrder>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<Server> getServerInfo(@Parameter(in = ParameterIn.PATH, description = "Server ID number.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<Server>(objectMapper.readValue("{\n  \"serviceExtra\" : [ \"serviceExtra\", \"serviceExtra\" ],\n  \"package\" : \"package\",\n  \"networkInfo\" : {\n    \"vlans\" : [ ],\n    \"assets\" : {\n      \"3497\" : {\n        \"col\" : \"06\",\n        \"vlans\" : [ ],\n        \"ipmi_client_password\" : \"\",\n        \"switchports\" : [ 10414 ],\n        \"description\" : \"\",\n        \"external_id\" : \"\",\n        \"asset_id\" : \"1\",\n        \"ipmi_admin_username\" : \"\",\n        \"ipmi_working\" : \"0\",\n        \"mac\" : \"\",\n        \"hostname\" : \"myserver.host.com\",\n        \"primary_ipv4\" : \"1.2.3.250\",\n        \"overdue\" : \"0\",\n        \"create_timestamp\" : \"\",\n        \"update_timestamp\" : \"\",\n        \"asset_name\" : \"server\",\n        \"primary_ipv6\" : \"\",\n        \"unit_sub\" : \"0\",\n        \"ipmi_mac\" : \"0c:c4:7a:af:35:00\",\n        \"billing_status\" : \"active\",\n        \"company\" : \"int\",\n        \"model\" : \"SYS-6018R-TDW\",\n        \"id\" : 3497,\n        \"row\" : \"017\",\n        \"rack_y\" : \"5\",\n        \"ipmi_ip\" : \"10.8.69.7\",\n        \"make\" : \"Supermicro\",\n        \"rack_location\" : \"2\",\n        \"rack_x\" : \"25\",\n        \"asset_tag\" : \"\",\n        \"rack\" : \"68\",\n        \"comments\" : \"\",\n        \"type_id\" : \"1\",\n        \"ipmi_updated\" : \"\",\n        \"ipmi_admin_password\" : \"\",\n        \"datacenter\" : \"2\",\n        \"unit_start\" : \"37\",\n        \"rack_name\" : \"112.16\",\n        \"rack_id\" : \"68\",\n        \"rack_size\" : \"44\",\n        \"unit_end\" : \"37\",\n        \"comment\" : \"\",\n        \"lease\" : {\n          \"authenticated\" : false,\n          \"mac\" : \"0c:c4:7a:af:35:00\",\n          \"group\" : \"1\"\n        },\n        \"customer_id\" : \"int5377\",\n        \"order_id\" : \"16058\",\n        \"vlans6\" : [ ],\n        \"ipmi_client_username\" : \"\",\n        \"status\" : \"active\"\n      }\n    },\n    \"switchports\" : {\n      \"10414\" : {\n        \"vlans\" : [ ],\n        \"switchport_id\" : 10414,\n        \"port\" : \"Ethernet1/33\",\n        \"justport\" : \"33\",\n        \"switch_id\" : \"118\",\n        \"asset_id\" : 3497,\n        \"graph_id\" : \"12622\",\n        \"vlans6\" : [ ],\n        \"switch\" : \"edge1\",\n        \"blade\" : \"Ethernet1\"\n      }\n    },\n    \"vlans6\" : [ ]\n  },\n  \"client_links\" : [ {\n    \"link\" : \"link\",\n    \"icon\" : \"icon\",\n    \"label\" : \"label\",\n    \"icon_text\" : \"icon_text\",\n    \"help_text\" : \"help_text\"\n  }, {\n    \"link\" : \"link\",\n    \"icon\" : \"icon\",\n    \"label\" : \"label\",\n    \"icon_text\" : \"icon_text\",\n    \"help_text\" : \"help_text\"\n  } ],\n  \"billingDetails\" : {\n    \"service_currency\" : \"service_currency\",\n    \"service_extra\" : [ \"service_extra\", \"service_extra\" ],\n    \"service_payment_status\" : \"service_payment_status\",\n    \"service_next_invoice_date\" : \"service_next_invoice_date\",\n    \"service_frequency\" : \"service_frequency\",\n    \"service_last_invoice_date\" : \"service_last_invoice_date\",\n    \"service_currency_symbol\" : \"service_currency_symbol\",\n    \"service_extra_json\" : \"service_extra_json\",\n    \"service_cost_info\" : \"service_cost_info\",\n    \"next_date\" : \"next_date\"\n  },\n  \"ipmiAuth\" : true,\n  \"extraInfoTables\" : {\n    \"assets\" : {\n      \"title\" : \"Assets\",\n      \"size\" : 2,\n      \"type\" : \"table\",\n      \"header\" : [ \"Id\", \"Hostname\", \"Description\", \"Location Name\", \"Rack Name\", \"Status\", \"Primary Ipv4\", \"Comments\" ],\n      \"rows\" : [ [ \"3497\", \"myserver.host.com\", \"CPU:..............2x Intel Xeon E5-2620v4 @2.10GHz\r\nMemory:...........128GB DDR3 1600MHz\r\nHard Drive 1:.....Crucial 500 GB SSD\r\nHard Drive 2:.....Crucial 500 GB SSD\r\nRAID:.............none\r\nOS:...............Ubuntu 20\r\nControl Panel:....none\r\nNetwork...........10G Card\r\nIP(s):............Vlan 3497\r\nBandwidth:........10Tb @ 10gb port\", \"TEB2\", \"112.16\", \"active\", \"1.2.3.250\", \"\" ] ]\n    }\n  },\n  \"serviceInfo\" : {\n    \"server_total_cost\" : \"230\",\n    \"server_location\" : \"\",\n    \"server_invoice\" : \"18738142\",\n    \"server_setup\" : \"0\",\n    \"server_dedicated_cpu\" : \"38\",\n    \"server_status\" : \"active\",\n    \"server_rep\" : \"0\",\n    \"server_hardware_ordered\" : \"0\",\n    \"server_dedicated_tag\" : \"0\",\n    \"server_discount\" : \"\",\n    \"server_root\" : \"\",\n    \"server_custid\" : \"771282\",\n    \"server_welcome_email\" : \"1\",\n    \"server_extra\" : \"[]\",\n    \"server_ips\" : \"0\",\n    \"server_dedicated_bandwidth\" : \"3\",\n    \"server_currency\" : \"USD\",\n    \"server_comment\" : \"\",\n    \"server_initial_bill\" : \"0\",\n    \"server_dedicated_memory\" : \"22\",\n    \"server_date\" : \"1588972956\",\n    \"server_id\" : \"16058\",\n    \"server_billed\" : \"0\",\n    \"server_hostname\" : \"myserver.host.com\",\n    \"server_dedicated_hd2\" : \"\",\n    \"server_dedicated_hd1\" : \"20\",\n    \"server_dedicated_cp\" : \"\",\n    \"server_dedicated_raid\" : \"0\",\n    \"server_dedicated_ips\" : \"5\",\n    \"server_hardware\" : \"0\",\n    \"server_monthly_bill\" : \"0\",\n    \"server_custom_tag\" : \"\",\n    \"server_order_date\" : \"2020-05-08T17:22:36.000Z\",\n    \"server_coupon\" : \"0\",\n    \"server_type\" : \"600\",\n    \"server_dedicated_os\" : \"30\"\n  },\n  \"custCurrencySymbol\" : \"custCurrencySymbol\",\n  \"locations\" : {\n    \"1\" : {\n      \"location_long\" : \"location_long\",\n      \"location_name\" : \"location_name\",\n      \"location_ipmi_group\" : 6,\n      \"location_description\" : \"location_description\",\n      \"location_id\" : 0,\n      \"location_lat\" : \"location_lat\"\n    }\n  },\n  \"custCurrency\" : \"custCurrency\"\n}", Server.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<Server>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<Server>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<ChargeInvoiceRows> getServerInvoices(@Parameter(in = ParameterIn.PATH, description = "Server ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<List<ServerRow>> getServerList() {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<List<ServerRow>>(objectMapper.readValue("[ {\n  \"server_id\" : \"8404\",\n  \"account_lid\" : \"detain@interserver.net\",\n  \"server_hostname\" : \"testsignup.is.net\",\n  \"server_status\" : \"deleted\"\n}, {\n  \"server_id\" : \"8404\",\n  \"account_lid\" : \"detain@interserver.net\",\n  \"server_hostname\" : \"testsignup.is.net\",\n  \"server_status\" : \"deleted\"\n} ]", List.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<List<ServerRow>>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<List<ServerRow>>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<ReverseDnsEntries> getServerReverseDns(@Parameter(in = ParameterIn.PATH, description = "Server ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<SuccessTextResponse> getServersWelcomeEmail(@Parameter(in = ParameterIn.PATH, description = "Server ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<ServersBuyNowResponse> placeBuyNowServer(@Parameter(in = ParameterIn.DEFAULT, description = "", schema=@Schema()) @Valid @RequestBody OrderBuyNowServerBody body
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<ServersBuyNowResponse>(objectMapper.readValue("{\n  \"success\" : true,\n  \"text\" : \"Server order is placed.\",\n  \"order_details\" : {\n    \"service_id\" : 1234,\n    \"invoice_id\" : 2342355\n  }\n}", ServersBuyNowResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<ServersBuyNowResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<ServersBuyNowResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<TextResponse> postServerReverseDns(@Parameter(in = ParameterIn.PATH, description = "Server ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<Void> putServers() {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<ServerIpmiLiveInfo> serverIpmiLiveGet(@Parameter(in = ParameterIn.PATH, description = "Server ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<ServerIpmiLiveInfo>(objectMapper.readValue("{\n  \"text\" : \"Setup Complete\",\n  \"public_ip\" : \"1.2.3.4\",\n  \"allowed_ip\" : \"1.2.3.4\",\n  \"client_username\" : \"user\",\n  \"client_password\" : \"pass\"\n}", ServerIpmiLiveInfo.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<ServerIpmiLiveInfo>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<ServerIpmiLiveInfo>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<ServerIpmiLiveInfo> serverIpmiLivePost(@Parameter(in = ParameterIn.PATH, description = "Server ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="asset", required=true)  Integer asset
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="ip", required=true)  String ip
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<ServerIpmiLiveInfo>(objectMapper.readValue("{\n  \"text\" : \"Setup Complete\",\n  \"public_ip\" : \"1.2.3.4\",\n  \"allowed_ip\" : \"1.2.3.4\",\n  \"client_username\" : \"user\",\n  \"client_password\" : \"pass\"\n}", ServerIpmiLiveInfo.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<ServerIpmiLiveInfo>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<ServerIpmiLiveInfo>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<TextResponse> serverIpmiPowerGet(@Parameter(in = ParameterIn.PATH, description = "Server ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<TextResponse> serverIpmiPowerPost(@Parameter(in = ParameterIn.PATH, description = "Server ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="asset", required=true)  Integer asset
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema(allowableValues={ "cycle", "reset", "on", "off", "soft" }
)) @RequestPart(value="action", required=true)  String action
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

    public ResponseEntity<InlineResponse20020> serversCancel(@Parameter(in = ParameterIn.PATH, description = "Server ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<InlineResponse20020>(objectMapper.readValue("{\n  \"success\" : true,\n  \"text\" : \"Servers is canceled.\"\n}", InlineResponse20020.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<InlineResponse20020>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<InlineResponse20020>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<SuccessTextResponse> updateServerInfo(@Parameter(in = ParameterIn.PATH, description = "Server ID number.", required=true, schema=@Schema()) @PathVariable("id") String id
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
