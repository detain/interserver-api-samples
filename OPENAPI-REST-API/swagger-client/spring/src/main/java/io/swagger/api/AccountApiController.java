package io.swagger.api;

import io.swagger.model.Account2faBody1;
import io.swagger.model.AccountFeatures;
import io.swagger.model.AccountInfo;
import io.swagger.model.AccountInfoPost;
import io.swagger.model.AccountSshKey;
import io.swagger.model.BillingAddCcRequest;
import io.swagger.model.GenericResponse;
import io.swagger.model.InlineResponse200;
import io.swagger.model.InlineResponse401;
import io.swagger.model.IpLimitRange;
import io.swagger.model.PasswordRequest;
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
public class AccountApiController implements AccountApi {

    private static final Logger log = LoggerFactory.getLogger(AccountApiController.class);

    private final ObjectMapper objectMapper;

    private final HttpServletRequest request;

    @org.springframework.beans.factory.annotation.Autowired
    public AccountApiController(ObjectMapper objectMapper, HttpServletRequest request) {
        this.objectMapper = objectMapper;
        this.request = request;
    }

    public ResponseEntity<SuccessTextResponse> addAccountCreditCard(@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="name", required=true)  String name
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="address", required=true)  String address
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="city", required=true)  String city
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="state", required=true)  String state
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="country", required=true)  String country
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="zip", required=true)  String zip
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="cc", required=true)  String cc
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="cc_exp", required=true)  String ccExp
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="cc_ccv2", required=true)  String ccCcv2
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

    public ResponseEntity<TextResponse> changeAccountUsername() {
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

    public ResponseEntity<String> deleteAccountCreditCard(@Parameter(in = ParameterIn.PATH, description = "The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`.", required=true, schema=@Schema()) @PathVariable("id") String id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<String>(objectMapper.readValue("\"\"", String.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<String>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<String>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<SuccessTextResponse> deleteAccountOauthName(@Parameter(in = ParameterIn.PATH, description = "", required=true, schema=@Schema()) @PathVariable("name") String name
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

    public ResponseEntity<SuccessTextResponse> deleteAccountTfa() {
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

    public ResponseEntity<GenericResponse> deleteIpLimit(@Parameter(in = ParameterIn.DEFAULT, description = "", schema=@Schema()) @Valid @RequestBody IpLimitRange body
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

    public ResponseEntity<AccountInfo> getAccountInfo() {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<AccountInfo>(objectMapper.readValue("{\n  \"custid\" : \"98651\",\n  \"ima\" : \"client\",\n  \"data\" : {\n    \"group\" : \"0\",\n    \"address\" : \"112 Uber St.\",\n    \"city\" : \"Townsville\",\n    \"country\" : \"US\",\n    \"disable_cc\" : \"0\",\n    \"fraudrecord_score\" : \"0\",\n    \"ima\" : \"client\",\n    \"name\" : \"John Doe\",\n    \"payment_method\" : \"paypal\",\n    \"phone\" : \"8675309\",\n    \"pin\" : \"000000\",\n    \"state\" : \"PA\",\n    \"status\" : \"active\",\n    \"zip\" : \"11111\",\n    \"account_id\" : \"98651\",\n    \"account_lid\" : \"user@domain.com\",\n    \"address2\" : \"\",\n    \"affiliate_dock_description\" : \"Use this coupon when placing an order to get the first month of hosting for only 1 penny.\",\n    \"affiliate_dock_title\" : \"Exclusive offer to viewers\",\n    \"affiliate_payment_method\" : \"paypal\",\n    \"affiliate_paypal\" : \"user@domain.com\",\n    \"cc\" : \"************1111\",\n    \"cc_auto\" : \"0\",\n    \"cc_exp\" : \"05/2019\",\n    \"cc_type\" : \"visa\",\n    \"cc_whitelist\" : \"1\",\n    \"ccs\" : {\n      \"1\" : {\n        \"cc\" : \"************1111\",\n        \"cc_exp\" : \"05/2019\",\n        \"name\" : \"John Doe\",\n        \"country\" : \"US\",\n        \"verified\" : true\n      },\n      \"5\" : {\n        \"cc\" : \"************2222\",\n        \"cc_exp\" : \"05/2019\",\n        \"name\" : \"John Doe\",\n        \"address\" : \"123 Uber St\",\n        \"city\" : \"Townsville\",\n        \"state\" : \"PA\",\n        \"zip\" : \"11122\",\n        \"country\" : \"US\",\n        \"maxmind_riskscore\" : \"0.25\",\n        \"maxmind\" : {\n          \"distance\" : \"0\",\n          \"countryMatch\" : \"Yes\",\n          \"countryCode\" : \"US\",\n          \"freeMail\" : \"No\",\n          \"anonymousProxy\" : \"No\",\n          \"binMatch\" : \"No\",\n          \"binCountry\" : \"IN\",\n          \"err\" : \"\",\n          \"proxyScore\" : \"0.00\",\n          \"ip_region\" : \"PA\",\n          \"ip_city\" : \"Townsville\",\n          \"ip_latitude\" : \"40.175\",\n          \"ip_longitude\" : \"-76.1817\",\n          \"binName\" : \"state bank of india\",\n          \"ip_isp\" : \"PenTeleData\",\n          \"ip_org\" : \"PenTeleData\",\n          \"binNameMatch\" : \"NA\",\n          \"binPhoneMatch\" : \"NA\",\n          \"binPhone\" : \"\",\n          \"custPhoneInBillingLoc\" : \"NotFound\",\n          \"highRiskCountry\" : \"No\",\n          \"queriesRemaining\" : \"2764\",\n          \"cityPostalMatch\" : \"Yes\",\n          \"shipCityPostalMatch\" : \"\",\n          \"maxmindID\" : \"7IVXKOVV\",\n          \"ip_asnum\" : \"AS3737 AS-PTD\",\n          \"ip_userType\" : \"residential\",\n          \"ip_countryConf\" : \"99\",\n          \"ip_regionConf\" : \"99\",\n          \"ip_cityConf\" : \"30\",\n          \"ip_postalCode\" : \"11122\",\n          \"ip_postalConf\" : \"30\",\n          \"ip_accuracyRadius\" : \"20\",\n          \"ip_netSpeedCell\" : \"Cable/DSL\",\n          \"ip_metroCode\" : \"566\",\n          \"ip_areaCode\" : \"\",\n          \"ip_timeZone\" : \"America/New_York\",\n          \"ip_regionName\" : \"Pennsylvania\",\n          \"ip_domain\" : \"ptd.net\",\n          \"ip_countryName\" : \"United States\",\n          \"ip_continentCode\" : \"NA\",\n          \"ip_corporateProxy\" : \"No\",\n          \"isTransProxy\" : \"No\",\n          \"carderEmail\" : \"No\",\n          \"highRiskUsername\" : \"No\",\n          \"highRiskPassword\" : \"No\",\n          \"riskScore\" : 0.25,\n          \"prepaid\" : \"No\",\n          \"minfraud_version\" : \"1.3\",\n          \"service_level\" : \"premium\",\n          \"female_name\" : \"no\"\n        },\n        \"verified\" : true\n      },\n      \"6\" : {\n        \"cc\" : \"************1111\",\n        \"cc_exp\" : \"05/2021\",\n        \"name\" : \"John Doe\",\n        \"city\" : \"Townsville\",\n        \"state\" : \"PA\",\n        \"zip\" : \"11122\",\n        \"country\" : \"US\",\n        \"maxmind_riskscore\" : \"0.48\",\n        \"maxmind\" : {\n          \"distance\" : \"0\",\n          \"countryMatch\" : \"Yes\",\n          \"countryCode\" : \"US\",\n          \"freeMail\" : \"No\",\n          \"anonymousProxy\" : \"No\",\n          \"binMatch\" : \"Yes\",\n          \"binCountry\" : \"US\",\n          \"err\" : \"\",\n          \"proxyScore\" : \"0.00\",\n          \"ip_region\" : \"PA\",\n          \"ip_city\" : \"Townsville\",\n          \"ip_latitude\" : \"40.175\",\n          \"ip_longitude\" : \"-76.1817\",\n          \"binName\" : \"Bank of No Hope\",\n          \"ip_isp\" : \"PenTeleData\",\n          \"ip_org\" : \"PenTeleData\",\n          \"binNameMatch\" : \"NA\",\n          \"binPhoneMatch\" : \"NA\",\n          \"binPhone\" : \"1234561234\",\n          \"custPhoneInBillingLoc\" : \"NotFound\",\n          \"highRiskCountry\" : \"No\",\n          \"queriesRemaining\" : \"2765\",\n          \"cityPostalMatch\" : \"Yes\",\n          \"shipCityPostalMatch\" : \"\",\n          \"maxmindID\" : \"AAAAAZZZZZ\",\n          \"ip_asnum\" : \"AS3737 AS-PTD\",\n          \"ip_userType\" : \"residential\",\n          \"ip_countryConf\" : \"99\",\n          \"ip_regionConf\" : \"99\",\n          \"ip_cityConf\" : \"30\",\n          \"ip_postalCode\" : \"11122\",\n          \"ip_postalConf\" : \"30\",\n          \"ip_accuracyRadius\" : \"20\",\n          \"ip_netSpeedCell\" : \"Cable/DSL\",\n          \"ip_metroCode\" : \"566\",\n          \"ip_areaCode\" : \"\",\n          \"ip_timeZone\" : \"America/New_York\",\n          \"ip_regionName\" : \"Pennsylvania\",\n          \"ip_domain\" : \"ptd.net\",\n          \"ip_countryName\" : \"United States\",\n          \"ip_continentCode\" : \"NA\",\n          \"ip_corporateProxy\" : \"No\",\n          \"isTransProxy\" : \"No\",\n          \"carderEmail\" : \"No\",\n          \"highRiskUsername\" : \"No\",\n          \"highRiskPassword\" : \"No\",\n          \"riskScore\" : 0.48,\n          \"prepaid\" : \"No\",\n          \"minfraud_version\" : \"1.3\",\n          \"service_level\" : \"premium\",\n          \"female_name\" : \"no\"\n        },\n        \"verified\" : true\n      }\n    },\n    \"ccs_added\" : \"14\",\n    \"company\" : \"InterServer, Inc.\",\n    \"currency\" : \"USD\",\n    \"disable_reinstall\" : \"0\",\n    \"disable_reset\" : \"0\",\n    \"email\" : \"user@domain.com\",\n    \"email_abuse\" : \"\",\n    \"email_settings\" : {\n      \"admin/cc_bad_response\" : \"1\",\n      \"admin/mass_communications.tpl\" : \"1\"\n    },\n    \"extra\" : {\n      \"private_whois\" : \"0\"\n    },\n    \"facebook_id\" : \"111111111111111\",\n    \"facebook_url\" : \"https://www.facebook.com/111111111111111\",\n    \"firstname\" : \"John\",\n    \"fraudrecord\" : {\n      \"score\" : \"0\",\n      \"count\" : \"0\",\n      \"reliability\" : \"0.0\",\n      \"code\" : \"zxcvzxcvzxcv\"\n    },\n    \"github_id\" : \"2222222\",\n    \"github_url\" : \"https://github.com/user\",\n    \"google_id\" : \"355431342512341234\",\n    \"google_url\" : \"https://plus.google.com/+JohnDoe\",\n    \"innertell_id\" : \"2222222\",\n    \"lastname\" : \"Doe\",\n    \"locale\" : \"auto\",\n    \"maxmind\" : {\n      \"distance\" : \"6146\",\n      \"countryMatch\" : \"No\",\n      \"countryCode\" : \"US\",\n      \"freeMail\" : \"No\",\n      \"anonymousProxy\" : \"No\",\n      \"score\" : \"5.00\",\n      \"binMatch\" : \"NotFound\",\n      \"binCountry\" : \"\",\n      \"err\" : \"CITY_NOT_FOUND\",\n      \"proxyScore\" : \"0.00\",\n      \"ip_region\" : \"PA\",\n      \"ip_city\" : \"Townsville\",\n      \"ip_latitude\" : \"40.1767\",\n      \"ip_longitude\" : \"-76.4297\",\n      \"binName\" : \"\",\n      \"ip_isp\" : \"PenTeleData\",\n      \"ip_org\" : \"PenTeleData\",\n      \"binNameMatch\" : \"NA\",\n      \"binPhoneMatch\" : \"NA\",\n      \"binPhone\" : \"\",\n      \"custPhoneInBillingLoc\" : \"\",\n      \"highRiskCountry\" : \"No\",\n      \"queriesRemaining\" : \"171\",\n      \"cityPostalMatch\" : \"\",\n      \"shipCityPostalMatch\" : \"\",\n      \"maxmindID\" : \"HMOCUJP7\",\n      \"ip_asnum\" : \"AS3737 PenTeleData Inc.\",\n      \"ip_userType\" : \"residential\",\n      \"ip_countryConf\" : \"99\",\n      \"ip_regionConf\" : \"97\",\n      \"ip_cityConf\" : \"30\",\n      \"ip_postalCode\" : \"11122\",\n      \"ip_postalConf\" : \"30\",\n      \"ip_accuracyRadius\" : \"10\",\n      \"ip_netSpeedCell\" : \"Dialup\",\n      \"ip_metroCode\" : \"566\",\n      \"ip_areaCode\" : \"333\",\n      \"ip_timeZone\" : \"America/New_York\",\n      \"ip_regionName\" : \"Pennsylvania\",\n      \"ip_domain\" : \"ptd.net\",\n      \"ip_countryName\" : \"United States\",\n      \"ip_continentCode\" : \"NA\",\n      \"ip_corporateProxy\" : \"No\",\n      \"carderEmail\" : \"No\",\n      \"highRiskUsername\" : \"No\",\n      \"riskScore\" : \"4.82\",\n      \"explanation\" : \"You should review this order carefully, as it is considered high risk. We suggest you be very cautious about accepting this order. This order is higher risk because the distance between the billing address and the user's actual location is so great. The order is higher risk because the billing country and the country in which the IP address is located don't match\",\n      \"female_name\" : \"no\"\n    },\n    \"maxmind_score\" : \"0\",\n    \"mb_id\" : \"4769\",\n    \"modernbill_id\" : \"1234\",\n    \"picture\" : \"https://avatars3.githubusercontent.com/u/1364504\",\n    \"referrer_coupon\" : \"detainaffiliatecoupon\",\n    \"reseller_markup\" : \"10\",\n    \"username\" : \"user@domain.com\",\n    \"ssh_key\" : \"zzzz\",\n    \"ssh_key_wrapped\" : \"zzzz\",\n    \"api_key\" : \"aaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbccccccccccccccccccc\",\n    \"api_key_wrapped\" : \"aaaaaaaaaaaaaaaaaaaaaaa<br>bbbbbbbbbbbbb<br>ccccccccccccccccccc\",\n    \"2fa_google_key\" : \"ssssssssssssssssssssssssss\",\n    \"2fa_google_enabled\" : true,\n    \"2fa_google\" : 1,\n    \"2fa_google_split\" : \"zzzz zzzz zzzz zzzz \",\n    \"2fa_google_qr\" : \"data:image/png;base64,zzz\"\n  },\n  \"ip\" : \"1.2.3.4\",\n  \"oauthproviders\" : [ ],\n  \"oauthconfig\" : {\n    \"callback\" : \"https://my.interserver.net/oauth/callback.php\",\n    \"providers\" : {\n      \"Twitter\" : {\n        \"enabled\" : false,\n        \"linked\" : false\n      },\n      \"Facebook\" : {\n        \"enabled\" : true,\n        \"account\" : \"111111111111111111111\",\n        \"url\" : \"https://www.facebook.com/111111111111111111111\",\n        \"linked\" : true\n      },\n      \"Google\" : {\n        \"enabled\" : true,\n        \"account\" : \"111111111111111111111\",\n        \"url\" : \"https://plus.google.com/+UserName\",\n        \"linked\" : true\n      },\n      \"GitHub\" : {\n        \"enabled\" : true,\n        \"account\" : \"111111111111111111111\",\n        \"url\" : \"https://github.com/detain\",\n        \"linked\" : true\n      }\n    }\n  },\n  \"oauthadapters\" : [ ],\n  \"limits\" : [ {\n    \"start\" : \"1.1.1.1\",\n    \"end\" : \"1.1.1.254\"\n  }, {\n    \"start\" : \"2600:387:0:809::1b\",\n    \"end\" : \"2600:387:0:809::1b\"\n  } ],\n  \"language\" : \"en-US\",\n  \"countryCurrencies\" : {\n    \"CN\" : [ \"USD\" ],\n    \"BR\" : [ \"USD\", \"BRL\" ],\n    \"RU\" : [ \"USD\" ]\n  },\n  \"enableLocales\" : true,\n  \"enableCurrencies\" : false,\n  \"gravatar\" : \"https://avatars3.githubusercontent.com/u/1364504\"\n}", AccountInfo.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<AccountInfo>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<AccountInfo>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<InlineResponse200> getAccountTfaSetup() {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<InlineResponse200>(objectMapper.readValue("{\n  \"2fa_google_key\" : \"2fa_google_key\",\n  \"2fa_google_split\" : \"2fa_google_split\"\n}", InlineResponse200.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<InlineResponse200>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<InlineResponse200>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<Object> getCountries(@Parameter(in = ParameterIn.QUERY, description = "Get countries by iso2 or iso3 or numcode" ,schema=@Schema(allowableValues={ "iso2", "iso3", "numcode" }
)) @Valid @RequestParam(value = "fetch_by", required = false) String fetchBy
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<Object>(objectMapper.readValue("{ }", Object.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<Object>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<Object>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<List<String>> getTimezones() {
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

    public ResponseEntity<SuccessTextResponse> logoutAccountOauth(@Parameter(in = ParameterIn.PATH, description = "", required=true, schema=@Schema()) @PathVariable("name") String name
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

    public ResponseEntity<SuccessTextResponse> updateAccountApiKey() {
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

    public ResponseEntity<String> updateAccountCreditCard(@Parameter(in = ParameterIn.PATH, description = "The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<String>(objectMapper.readValue("\"\"", String.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<String>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<String>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<SuccessTextResponse> updateAccountFeatures(@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="disable_reset", required=true)  Integer disableReset
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="disable_reinstall", required=true)  Integer disableReinstall
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

    public ResponseEntity<SuccessTextResponse> updateAccountInfo(@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="name", required=true)  String name
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="company", required=true)  String company
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="address", required=true)  String address
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="address2", required=true)  String address2
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="city", required=true)  String city
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="state", required=true)  String state
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="zip", required=true)  String zip
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="country", required=true)  String country
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="phone", required=true)  String phone
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="locale", required=true)  String locale
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="email_invoices", required=true)  String emailInvoices
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="email_abuse", required=true)  String emailAbuse
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="disable_reset", required=true)  Boolean disableReset
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="disable_reinstall", required=true)  Boolean disableReinstall
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="disable_server_notifications", required=true)  Boolean disableServerNotifications
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="disable_email_notifications", required=true)  Boolean disableEmailNotifications
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="gstin", required=true)  String gstin
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

    public ResponseEntity<SuccessTextResponse> updateAccountIpLimits(@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="start", required=true)  String start
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="end", required=true)  String end
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

    public ResponseEntity<TextResponse> updateAccountPassword(@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="password", required=true)  String password
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

    public ResponseEntity<SuccessTextResponse> updateAccountSshKey(@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="ssh_key", required=true)  String sshKey
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

    public ResponseEntity<SuccessTextResponse> updateAccountTfa(@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="2fa_google_code", required=true)  String _2faGoogleCode
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
