package io.swagger.api;

import io.swagger.model.InlineResponse401;
import io.swagger.model.ServicesInfo;
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
public class InfoApiController implements InfoApi {

    private static final Logger log = LoggerFactory.getLogger(InfoApiController.class);

    private final ObjectMapper objectMapper;

    private final HttpServletRequest request;

    @org.springframework.beans.factory.annotation.Autowired
    public InfoApiController(ObjectMapper objectMapper, HttpServletRequest request) {
        this.objectMapper = objectMapper;
        this.request = request;
    }

    public ResponseEntity<ServicesInfo> getInfo() {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<ServicesInfo>(objectMapper.readValue("{\n  \"modules\" : {\n    \"domains\" : {\n      \"SERVICE_ID_OFFSET\" : 10000,\n      \"USE_REPEAT_INVOICE\" : true,\n      \"USE_PACKAGES\" : true,\n      \"BILLING_DAYS_OFFSET\" : 45,\n      \"IMGNAME\" : \"domain.png\",\n      \"REPEAT_BILLING_METHOD\" : 2,\n      \"DELETE_PENDING_DAYS\" : 45,\n      \"SUSPEND_DAYS\" : 14,\n      \"SUSPEND_WARNING_DAYS\" : 7,\n      \"TITLE\" : \"Domain Registrations\",\n      \"MENUNAME\" : \"Domains\",\n      \"EMAIL_FROM\" : \"support@interserver.net\",\n      \"TBLNAME\" : \"Domains\",\n      \"TABLE\" : \"domains\",\n      \"TITLE_FIELD\" : \"domain_hostname\",\n      \"PREFIX\" : \"domain\"\n    },\n    \"vps\" : {\n      \"SERVICE_ID_OFFSET\" : 0,\n      \"USE_REPEAT_INVOICE\" : true,\n      \"USE_PACKAGES\" : true,\n      \"BILLING_DAYS_OFFSET\" : 0,\n      \"IMGNAME\" : \"root-server.png\",\n      \"REPEAT_BILLING_METHOD\" : 2,\n      \"DELETE_PENDING_DAYS\" : 45,\n      \"SUSPEND_DAYS\" : 14,\n      \"SUSPEND_WARNING_DAYS\" : 7,\n      \"TITLE\" : \"VPS\",\n      \"MENUNAME\" : \"VPS\",\n      \"EMAIL_FROM\" : \"support@interserver.net\",\n      \"TBLNAME\" : \"VPS\",\n      \"TABLE\" : \"vps\",\n      \"TITLE_FIELD\" : \"vps_hostname\",\n      \"TITLE_FIELD2\" : \"vps_ip\",\n      \"TITLE_FIELD3\" : \"vps_vzid\",\n      \"PREFIX\" : \"vps\"\n    }\n  },\n  \"services\" : {\n    \"31\" : {\n      \"services_id\" : 31,\n      \"services_name\" : \"OpenVZ VPS Slice\",\n      \"services_cost\" : 6,\n      \"services_currency\" : \"USD\",\n      \"services_category\" : 1,\n      \"services_buyable\" : true,\n      \"services_type\" : 6,\n      \"services_field1\" : \"slice\",\n      \"services_field2\" : \"\",\n      \"services_module\" : \"vps\"\n    },\n    \"32\" : {\n      \"services_id\" : 32,\n      \"services_name\" : \"KVM Windows VPS Slice\",\n      \"services_cost\" : 10,\n      \"services_currency\" : \"USD\",\n      \"services_category\" : 2,\n      \"services_buyable\" : true,\n      \"services_type\" : 1,\n      \"services_field1\" : \"slice\",\n      \"services_field2\" : \"\",\n      \"services_module\" : \"vps\"\n    }\n  },\n  \"serviceTypes\" : {\n    \"1\" : {\n      \"st_id\" : 1,\n      \"st_name\" : \"KVM Windows\",\n      \"st_category\" : 2,\n      \"st_module\" : \"vps\"\n    },\n    \"2\" : {\n      \"st_id\" : 2,\n      \"st_name\" : \"KVM Linux\",\n      \"st_category\" : 2,\n      \"st_module\" : \"vps\"\n    },\n    \"3\" : {\n      \"st_id\" : 3,\n      \"st_name\" : \"Cloud KVM Windows\",\n      \"st_category\" : 3,\n      \"st_module\" : \"vps\"\n    }\n  },\n  \"serviceCategories\" : {\n    \"1\" : {\n      \"category_id\" : 1,\n      \"category_name\" : \"OpenVZ Virtual Servers\",\n      \"category_tag\" : \"openvz\",\n      \"category_module\" : \"vps\"\n    },\n    \"2\" : {\n      \"category_id\" : 2,\n      \"category_name\" : \"KVM Virtual Servers\",\n      \"category_tag\" : \"kvm\",\n      \"category_module\" : \"vps\"\n    },\n    \"3\" : {\n      \"category_id\" : 3,\n      \"category_name\" : \"Xen Virtual Servers\",\n      \"category_tag\" : \"xen\",\n      \"category_module\" : \"vps\"\n    }\n  }\n}", ServicesInfo.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<ServicesInfo>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<ServicesInfo>(HttpStatus.NOT_IMPLEMENTED);
    }

}
