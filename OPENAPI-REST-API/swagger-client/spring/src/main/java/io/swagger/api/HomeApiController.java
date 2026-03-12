package io.swagger.api;

import io.swagger.model.Home;
import io.swagger.model.InlineResponse401;
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
public class HomeApiController implements HomeApi {

    private static final Logger log = LoggerFactory.getLogger(HomeApiController.class);

    private final ObjectMapper objectMapper;

    private final HttpServletRequest request;

    @org.springframework.beans.factory.annotation.Autowired
    public HomeApiController(ObjectMapper objectMapper, HttpServletRequest request) {
        this.objectMapper = objectMapper;
        this.request = request;
    }

    public ResponseEntity<Home> getHome() {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<Home>(objectMapper.readValue("{\n  \"amount\" : \"$23.50\",\n  \"invoice_list\" : 5,\n  \"tickets\" : [ \"tickets\", \"tickets\" ],\n  \"last_login\" : \"14:58:pm - 17 Aug, 2023\",\n  \"services\" : {\n    \"licenses\" : {\n      \"count\" : 1,\n      \"links\" : {\n        \"386522\" : \"1.2.3.4\"\n      }\n    },\n    \"servers\" : {\n      \"count\" : 1,\n      \"links\" : {\n        \"16058\" : \"anotherserver.com\"\n      }\n    },\n    \"webhosting\" : {\n      \"count\" : 8,\n      \"links\" : {\n        \"376359\" : \"Doefamily.com\",\n        \"376473\" : \"fancytush.com\",\n        \"386218\" : \"admincoded.net\"\n      }\n    },\n    \"vps\" : {\n      \"count\" : 20,\n      \"links\" : {\n        \"2500081\" : \"vps2500081\",\n        \"465503\" : \"vps465503\",\n        \"2578866\" : \"vps2578866\"\n      }\n    },\n    \"domains\" : {\n      \"count\" : 5,\n      \"links\" : {\n        \"376503\" : \"hostingenuity.com\",\n        \"592337\" : \"detain.dev\",\n        \"376114\" : \"pimpmy.website\"\n      }\n    },\n    \"backups\" : {\n      \"count\" : 0,\n      \"links\" : [ \"links\", \"links\" ]\n    }\n  },\n  \"AFFILIATE_AMOUNT\" : \"100\",\n  \"ticketStatusView\" : {\n    \"4\" : \"Open\",\n    \"5\" : \"On Hold\",\n    \"6\" : \"Closed\"\n  },\n  \"full_name\" : \"John\",\n  \"balance\" : \"$0.60\",\n  \"last_login_ip\" : \"99.88.77.66\",\n  \"ticketStatus\" : {\n    \"On Hold\" : 5,\n    \"Open\" : 4\n  },\n  \"currency\" : \"$\",\n  \"details\" : {\n    \"modules\" : {\n      \"licenses\" : {\n        \"heading\" : \"Licenses\",\n        \"buy_link\" : \"order_license\",\n        \"icon\" : \"id-card\",\n        \"list_link\" : \"view_licenses_list\",\n        \"view_link\" : \"view_license\"\n      },\n      \"servers\" : {\n        \"heading\" : \"Dedicated Servers\",\n        \"buy_link\" : \"order_server\",\n        \"icon\" : \"server\",\n        \"list_link\" : \"view_servers_list\",\n        \"view_link\" : \"view_server\"\n      },\n      \"quickservers\" : {\n        \"heading\" : \"Quick Servers\",\n        \"buy_link\" : \"order_quickserver\",\n        \"icon\" : \"database\",\n        \"list_link\" : \"view_quickservers_list\",\n        \"view_link\" : \"view_qs\"\n      },\n      \"webhosting\" : {\n        \"heading\" : \"Web Hosting\",\n        \"buy_link\" : \"order_website\",\n        \"icon\" : \"window-maximize\",\n        \"list_link\" : \"view_websites_list\",\n        \"view_link\" : \"view_website\"\n      },\n      \"vps\" : {\n        \"heading\" : \"VPS\",\n        \"buy_link\" : \"order_vps\",\n        \"icon\" : \"cloud-meatball\",\n        \"list_link\" : \"view_vps_list\",\n        \"view_link\" : \"view_vps\"\n      },\n      \"domains\" : {\n        \"heading\" : \"Domains\",\n        \"buy_link\" : \"domain_order\",\n        \"icon\" : \"globe\",\n        \"list_link\" : \"view_domains_list\",\n        \"view_link\" : \"view_domain\"\n      },\n      \"backups\" : {\n        \"heading\" : \"Storages\",\n        \"buy_link\" : \"order_storage\",\n        \"icon\" : \"warehouse\",\n        \"list_link\" : \"view_backups_list\",\n        \"view_link\" : \"view_backup\"\n      }\n    }\n  },\n  \"email\" : \"user@domain.com\"\n}", Home.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<Home>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<Home>(HttpStatus.NOT_IMPLEMENTED);
    }

}
