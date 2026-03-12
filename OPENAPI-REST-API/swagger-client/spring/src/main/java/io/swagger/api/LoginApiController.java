package io.swagger.api;

import io.swagger.model.LoginErrorResponse;
import io.swagger.model.LoginInfo;
import io.swagger.model.LoginSubmissionExample;
import io.swagger.model.LoginSubmissionExampleGrecaptcharesponse;
import io.swagger.model.LoginSuccessResponse;
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
public class LoginApiController implements LoginApi {

    private static final Logger log = LoggerFactory.getLogger(LoginApiController.class);

    private final ObjectMapper objectMapper;

    private final HttpServletRequest request;

    @org.springframework.beans.factory.annotation.Autowired
    public LoginApiController(ObjectMapper objectMapper, HttpServletRequest request) {
        this.objectMapper = objectMapper;
        this.request = request;
    }

    public ResponseEntity<LoginInfo> getLoginInfo() {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<LoginInfo>(objectMapper.readValue("{\n  \"logo\" : \"//my.interserver.net/images/logos/mystaging.png\",\n  \"captcha\" : \"data:image/jpeg;base64,/9j/\",\n  \"language\" : \"en-US\",\n  \"counts\" : {\n    \"vps\" : 290201,\n    \"websites\" : 205172,\n    \"servers\" : 27940\n  }\n}", LoginInfo.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<LoginInfo>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<LoginInfo>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<LoginSuccessResponse> submitLogin(@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="login", required=true)  String login
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="passwd", required=true)  String passwd
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="remember", required=true)  String remember
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="g-recaptcha-response", required=true)  LoginSubmissionExampleGrecaptcharesponse gRecaptchaResponse
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="tfa", required=true)  String tfa
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<LoginSuccessResponse>(objectMapper.readValue("{\n  \"sessionId\" : \"zzzzzzzzzzzzzz\",\n  \"account_id\" : 123,\n  \"account_lid\" : \"my@user.com\",\n  \"ima\" : \"client\",\n  \"gravatar\" : \"https://gravatar.com/user/image.png\"\n}", LoginSuccessResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<LoginSuccessResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<LoginSuccessResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

}
