package io.swagger.api;

import java.math.BigDecimal;
import io.swagger.model.BillingAddCcRequest;
import io.swagger.model.BillingInvoiceDetail;
import io.swagger.model.BillingInvoiceList;
import io.swagger.model.BillingPaymentMethodRequest;
import io.swagger.model.BillingPrepayRequest;
import io.swagger.model.BillingVerifyCcRequest;
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
public class BillingApiController implements BillingApi {

    private static final Logger log = LoggerFactory.getLogger(BillingApiController.class);

    private final ObjectMapper objectMapper;

    private final HttpServletRequest request;

    @org.springframework.beans.factory.annotation.Autowired
    public BillingApiController(ObjectMapper objectMapper, HttpServletRequest request) {
        this.objectMapper = objectMapper;
        this.request = request;
    }

    public ResponseEntity<SuccessTextResponse> addBillingCreditCard(@Parameter(in = ParameterIn.DEFAULT, description = "", required=true, schema=@Schema()) @Valid @RequestBody BillingAddCcRequest body
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

    public ResponseEntity<SuccessTextResponse> addBillingPrepay(@Parameter(in = ParameterIn.DEFAULT, description = "", required=true, schema=@Schema()) @Valid @RequestBody BillingPrepayRequest body
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

    public ResponseEntity<SuccessTextResponse> deleteBillingCreditCard(@Parameter(in = ParameterIn.PATH, description = "The credit card ID to remove. Use IDs from `GET /billing/creditcards`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<SuccessTextResponse> deleteBillingInvoice(@Parameter(in = ParameterIn.PATH, description = "The invoice ID to delete. Only unpaid invoices can be deleted.", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<SuccessTextResponse> deleteBillingPrepay(@Parameter(in = ParameterIn.PATH, description = "The prepay balance ID to delete.", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<Void> getBillingCart() {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<SuccessTextResponse> getBillingCreditCardVerify(@Parameter(in = ParameterIn.PATH, description = "The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<BillingInvoiceDetail> getBillingInvoice(@Parameter(in = ParameterIn.PATH, description = "The invoice ID. Use IDs from `GET /billing/invoices` or from order responses.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<BillingInvoiceDetail>(objectMapper.readValue("{\n  \"key\" : \"\"\n}", BillingInvoiceDetail.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<BillingInvoiceDetail>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<BillingInvoiceDetail>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<BillingInvoiceList> getBillingInvoices() {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<BillingInvoiceList>(objectMapper.readValue("{\n  \"summary\" : { },\n  \"rows\" : [ { }, { } ]\n}", BillingInvoiceList.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<BillingInvoiceList>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<BillingInvoiceList>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<Void> getBillingPrePays() {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<SuccessTextResponse> postBillingCreditCardVerify(@Parameter(in = ParameterIn.PATH, description = "The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
,@Parameter(in = ParameterIn.DEFAULT, description = "", required=true, schema=@Schema()) @Valid @RequestBody BillingVerifyCcRequest body
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

    public ResponseEntity<SuccessTextResponse> updateBillingCreditCard(@Parameter(in = ParameterIn.PATH, description = "The credit card ID. Use IDs from `GET /billing/creditcards` or the response from `POST /billing/creditcards`.", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<SuccessTextResponse> updateBillingPaymentMethod(@Parameter(in = ParameterIn.DEFAULT, description = "", required=true, schema=@Schema()) @Valid @RequestBody BillingPaymentMethodRequest body
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
