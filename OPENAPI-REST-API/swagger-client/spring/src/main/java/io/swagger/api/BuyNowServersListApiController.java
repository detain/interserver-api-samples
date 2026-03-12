package io.swagger.api;

import io.swagger.model.BuyItNowList;
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
public class BuyNowServersListApiController implements BuyNowServersListApi {

    private static final Logger log = LoggerFactory.getLogger(BuyNowServersListApiController.class);

    private final ObjectMapper objectMapper;

    private final HttpServletRequest request;

    @org.springframework.beans.factory.annotation.Autowired
    public BuyNowServersListApiController(ObjectMapper objectMapper, HttpServletRequest request) {
        this.objectMapper = objectMapper;
        this.request = request;
    }

    public ResponseEntity<BuyItNowList> getMPServers() {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<BuyItNowList>(objectMapper.readValue("[ {\n  \"disk\" : {\n    \"key\" : \"disk\"\n  },\n  \"memory\" : \"64GB\",\n  \"bandwidth\" : \"1Gbps Unmetered\",\n  \"price\" : 64,\n  \"cpu\" : [ \"\", \"\" ],\n  \"location\" : \"NYC Region\",\n  \"server_id\" : \"11432\",\n  \"ips\" : \"1 Vlan Ip (/30)\"\n}, {\n  \"disk\" : {\n    \"key\" : \"disk\"\n  },\n  \"memory\" : \"64GB\",\n  \"bandwidth\" : \"1Gbps Unmetered\",\n  \"price\" : 64,\n  \"cpu\" : [ \"\", \"\" ],\n  \"location\" : \"NYC Region\",\n  \"server_id\" : \"11432\",\n  \"ips\" : \"1 Vlan Ip (/30)\"\n} ]", BuyItNowList.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<BuyItNowList>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<BuyItNowList>(HttpStatus.NOT_IMPLEMENTED);
    }

}
