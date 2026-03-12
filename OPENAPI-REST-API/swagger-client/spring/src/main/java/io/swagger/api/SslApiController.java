package io.swagger.api;

import io.swagger.model.ChargeInvoiceRows;
import io.swagger.model.InlineResponse20020;
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
public class SslApiController implements SslApi {

    private static final Logger log = LoggerFactory.getLogger(SslApiController.class);

    private final ObjectMapper objectMapper;

    private final HttpServletRequest request;

    @org.springframework.beans.factory.annotation.Autowired
    public SslApiController(ObjectMapper objectMapper, HttpServletRequest request) {
        this.objectMapper = objectMapper;
        this.request = request;
    }

    public ResponseEntity<Void> addSsl() {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<Void> getNewSsl() {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<Void> getSslInfo(@Parameter(in = ParameterIn.PATH, description = "SSL certificate ID number.", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<ChargeInvoiceRows> getSslInvoices(@Parameter(in = ParameterIn.PATH, description = "SSL Cert ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<Void> getSslList() {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<SuccessTextResponse> getSslWelcomeEmail(@Parameter(in = ParameterIn.PATH, description = "SSL Cert ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
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

    public ResponseEntity<Void> putSsl() {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<InlineResponse20020> sslCancel(@Parameter(in = ParameterIn.PATH, description = "SSL Cert ID number", required=true, schema=@Schema()) @PathVariable("id") Integer id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<InlineResponse20020>(objectMapper.readValue("{\n  \"success\" : true,\n  \"text\" : \"SSL is canceled.\"\n}", InlineResponse20020.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<InlineResponse20020>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<InlineResponse20020>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<Void> updateSslInfo(@Parameter(in = ParameterIn.PATH, description = "SSL certificate ID number.", required=true, schema=@Schema()) @PathVariable("id") String id
) {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

}
