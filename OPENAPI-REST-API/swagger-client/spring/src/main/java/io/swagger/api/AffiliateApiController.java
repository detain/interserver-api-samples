package io.swagger.api;

import io.swagger.model.AffiliateBannerRow;
import io.swagger.model.AffiliateDockSetup;
import io.swagger.model.AffiliatePaymentSetup;
import io.swagger.model.AffiliateTrafficRow;
import io.swagger.model.InlineResponse401;
import io.swagger.model.MonthlyCounts;
import io.swagger.model.StatusMonthlyBreakdown;
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
public class AffiliateApiController implements AffiliateApi {

    private static final Logger log = LoggerFactory.getLogger(AffiliateApiController.class);

    private final ObjectMapper objectMapper;

    private final HttpServletRequest request;

    @org.springframework.beans.factory.annotation.Autowired
    public AffiliateApiController(ObjectMapper objectMapper, HttpServletRequest request) {
        this.objectMapper = objectMapper;
        this.request = request;
    }

    public ResponseEntity<List<AffiliateBannerRow>> getAffiliateBanners() {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<List<AffiliateBannerRow>>(objectMapper.readValue("[ {\n  \"image\" : \"12946798.gif\",\n  \"width\" : \"125\",\n  \"height\" : \"125\"\n}, {\n  \"image\" : \"12946798.gif\",\n  \"width\" : \"125\",\n  \"height\" : \"125\"\n} ]", List.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<List<AffiliateBannerRow>>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<List<AffiliateBannerRow>>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<TextResponse> getAffiliateRichReport() {
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

    public ResponseEntity<StatusMonthlyBreakdown> getAffiliateSalesGraph(@Parameter(in = ParameterIn.QUERY, description = "Number of days of sales history to include in the graph data. Determines the time window for the returned data points." ,schema=@Schema()) @Valid @RequestParam(value = "days", required = false) Integer days
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<StatusMonthlyBreakdown>(objectMapper.readValue("{\n  \"default\" : {\n    \"key\" : 0\n  }\n}", StatusMonthlyBreakdown.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<StatusMonthlyBreakdown>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<StatusMonthlyBreakdown>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<TextResponse> getAffiliateSalesReport() {
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

    public ResponseEntity<MonthlyCounts> getAffiliateTrafficGraph(@Parameter(in = ParameterIn.QUERY, description = "Number of days of traffic history to include in the graph data. Determines the time window for the returned data points." ,schema=@Schema()) @Valid @RequestParam(value = "days", required = false) Integer days
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<MonthlyCounts>(objectMapper.readValue("{\n  \"key\" : 0\n}", MonthlyCounts.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<MonthlyCounts>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<MonthlyCounts>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<List<AffiliateTrafficRow>> getAffiliateWebTraffic() {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<List<AffiliateTrafficRow>>(objectMapper.readValue("[ {\n  \"traffic_id\" : \"91839913\",\n  \"traffic_ip\" : \"2a06:98c0:3600::\",\n  \"traffic_url\" : \"https://www.interserver.net/webhosting/?id=8\",\n  \"traffic_affiliate\" : \"8\",\n  \"traffic_referrer\" : \"\",\n  \"traffic_timestamp\" : \"2023-09-30 06:30:27\"\n}, {\n  \"traffic_id\" : \"91839913\",\n  \"traffic_ip\" : \"2a06:98c0:3600::\",\n  \"traffic_url\" : \"https://www.interserver.net/webhosting/?id=8\",\n  \"traffic_affiliate\" : \"8\",\n  \"traffic_referrer\" : \"\",\n  \"traffic_timestamp\" : \"2023-09-30 06:30:27\"\n} ]", List.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<List<AffiliateTrafficRow>>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<List<AffiliateTrafficRow>>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<TextResponse> updateAffiliateDockSetup(@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="affiliate_dock_title", required=true)  String affiliateDockTitle
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="affiliate_dock_description", required=true)  String affiliateDockDescription
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="referrer_coupon", required=true)  String referrerCoupon
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

    public ResponseEntity<TextResponse> updateAffiliateLandingPage(@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="affiliate_dock_title", required=true)  String affiliateDockTitle
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="affiliate_dock_description", required=true)  String affiliateDockDescription
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="referrer_coupon", required=true)  String referrerCoupon
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

    public ResponseEntity<TextResponse> updateAffiliatePaymentSetup(@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="affiliate_paypal", required=true)  String affiliatePaypal
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true,schema=@Schema()) @RequestPart(value="affiliate_payment_method", required=true)  String affiliatePaymentMethod
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

}
