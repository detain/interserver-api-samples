package io.swagger.api;

import java.math.BigDecimal;
import io.swagger.model.CloseTicketResponseSchema;
import io.swagger.model.InlineResponse401;
import io.swagger.model.ReplyTicketRequest;
import io.swagger.model.ReplyTicketResponseSchema;
import io.swagger.model.TicketNew;
import io.swagger.model.TicketNewResponse;
import io.swagger.model.Tickets;
import io.swagger.model.UpdateTicket;
import io.swagger.model.UpdateTicketResponseSchema;
import io.swagger.model.ViewTicketResponse;
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
public class TicketsApiController implements TicketsApi {

    private static final Logger log = LoggerFactory.getLogger(TicketsApiController.class);

    private final ObjectMapper objectMapper;

    private final HttpServletRequest request;

    @org.springframework.beans.factory.annotation.Autowired
    public TicketsApiController(ObjectMapper objectMapper, HttpServletRequest request) {
        this.objectMapper = objectMapper;
        this.request = request;
    }

    public ResponseEntity<TicketNewResponse> addNewTicket(@Parameter(in = ParameterIn.DEFAULT, description = "", required=true, schema=@Schema()) @Valid @RequestBody TicketNew body
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<TicketNewResponse>(objectMapper.readValue("{\n  \"success\" : true,\n  \"text\" : \"Ticket is created!\",\n  \"ticket_id\" : 1759653\n}", TicketNewResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<TicketNewResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<TicketNewResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<CloseTicketResponseSchema> closeTicket(@Parameter(in = ParameterIn.PATH, description = "Ticket ID", required=true, schema=@Schema()) @PathVariable("id") String id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<CloseTicketResponseSchema>(objectMapper.readValue("{\n  \"success\" : true,\n  \"text\" : \"Ticket is closed!\"\n}", CloseTicketResponseSchema.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<CloseTicketResponseSchema>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<CloseTicketResponseSchema>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<ViewTicketResponse> deleteTicketInfo(@Parameter(in = ParameterIn.PATH, description = "Ticket ID number.", required=true, schema=@Schema()) @PathVariable("id") BigDecimal id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<ViewTicketResponse>(objectMapper.readValue("{\n  \"success\" : true,\n  \"ticket\" : {\n    \"ticketid\" : 123456,\n    \"ticketmaskid\" : \"UAX-553-25735\",\n    \"department\" : \"General\",\n    \"status\" : \"Closed\",\n    \"priority\" : \"Standard\",\n    \"subject\" : \"Regarding ssl doubts\",\n    \"created_on\" : \"19 November, 2025 07:24 pm\",\n    \"updated_on\" : \"20 November, 2025 05:41 pm\"\n  },\n  \"ticket_custom_fields\" : {\n    \"Customer Server Access\" : \"y\",\n    \"Ip Address\" : \"68.23.3.5\",\n    \"Root Password\" : \"fsdnbfsd\",\n    \"Sudo User\" : \"jjog\",\n    \"Sudo Password\" : 123,\n    \"Port\" : 22\n  },\n  \"ticket_posts\" : [ {\n    \"post_id\" : 24244,\n    \"date\" : \"20 November, 2025 05:41 pm\",\n    \"contents\" : \"Testing ticket reply from api\",\n    \"creator\" : \"User\",\n    \"creator_email\" : \"abc@email.com\",\n    \"creator_name\" : \"ABC DEF\",\n    \"hasattachments\" : 0\n  }, {\n    \"post_id\" : 24244,\n    \"date\" : \"21 November, 2025 05:41 pm\",\n    \"contents\" : \"Test 234\",\n    \"creator\" : \"User\",\n    \"creator_email\" : \"john@email.com\",\n    \"creator_name\" : \"John Wick\",\n    \"hasattachments\" : 1,\n    \"attachment_download\" : \"https:my.interserver.net/download_link?id=xxx\"\n  } ]\n}", ViewTicketResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<ViewTicketResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<ViewTicketResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<Void> getNewTicket() {
        String accept = request.getHeader("Accept");
        return new ResponseEntity<Void>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<ViewTicketResponse> getTicketInfo(@Parameter(in = ParameterIn.PATH, description = "Ticket ID number.", required=true, schema=@Schema()) @PathVariable("id") BigDecimal id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<ViewTicketResponse>(objectMapper.readValue("{\n  \"success\" : true,\n  \"ticket\" : {\n    \"ticketid\" : 123456,\n    \"ticketmaskid\" : \"UAX-553-25735\",\n    \"department\" : \"General\",\n    \"status\" : \"Closed\",\n    \"priority\" : \"Standard\",\n    \"subject\" : \"Regarding ssl doubts\",\n    \"created_on\" : \"19 November, 2025 07:24 pm\",\n    \"updated_on\" : \"20 November, 2025 05:41 pm\"\n  },\n  \"ticket_custom_fields\" : {\n    \"Customer Server Access\" : \"y\",\n    \"Ip Address\" : \"68.23.3.5\",\n    \"Root Password\" : \"fsdnbfsd\",\n    \"Sudo User\" : \"jjog\",\n    \"Sudo Password\" : 123,\n    \"Port\" : 22\n  },\n  \"ticket_posts\" : [ {\n    \"post_id\" : 24244,\n    \"date\" : \"20 November, 2025 05:41 pm\",\n    \"contents\" : \"Testing ticket reply from api\",\n    \"creator\" : \"User\",\n    \"creator_email\" : \"abc@email.com\",\n    \"creator_name\" : \"ABC DEF\",\n    \"hasattachments\" : 0\n  }, {\n    \"post_id\" : 24244,\n    \"date\" : \"21 November, 2025 05:41 pm\",\n    \"contents\" : \"Test 234\",\n    \"creator\" : \"User\",\n    \"creator_email\" : \"john@email.com\",\n    \"creator_name\" : \"John Wick\",\n    \"hasattachments\" : 1,\n    \"attachment_download\" : \"https:my.interserver.net/download_link?id=xxx\"\n  } ]\n}", ViewTicketResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<ViewTicketResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<ViewTicketResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<Tickets> getTicketsList(@Parameter(in = ParameterIn.QUERY, description = "Page number for paginated results." ,schema=@Schema( defaultValue="1")) @Valid @RequestParam(value = "page", required = false, defaultValue="1") Integer page
,@Parameter(in = ParameterIn.QUERY, description = "How far back to show tickets from. Value is in days." ,schema=@Schema(allowableValues={ "30", "90", "365", "1825", "all" }
, defaultValue="30")) @Valid @RequestParam(value = "period", required = false, defaultValue="30") String period
,@Parameter(in = ParameterIn.QUERY, description = "The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types." ,schema=@Schema(allowableValues={ "Open", "Closed", "On Hold", "In Progress" }
)) @Valid @RequestParam(value = "view", required = false) String view
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<Tickets>(objectMapper.readValue("{\n  \"ima\" : \"client\",\n  \"custid\" : \"223513\",\n  \"view\" : \"Open\",\n  \"currentPage\" : 1,\n  \"limit\" : 50,\n  \"sortcol\" : 6,\n  \"sortdir\" : 1,\n  \"rowsOffset\" : 0,\n  \"tickets\" : [ ],\n  \"pages\" : 7,\n  \"rowsTotal\" : 311,\n  \"inboxCount\" : 311,\n  \"countArray\" : {\n    \"Open\" : 3,\n    \"On Hold\" : 3,\n    \"Closed\" : 305\n  },\n  \"viewText\" : \"Inbox\"\n}", Tickets.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<Tickets>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<Tickets>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<ViewTicketResponse> postTicketInfo(@Parameter(in = ParameterIn.PATH, description = "Ticket ID number.", required=true, schema=@Schema()) @PathVariable("id") BigDecimal id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<ViewTicketResponse>(objectMapper.readValue("{\n  \"success\" : true,\n  \"ticket\" : {\n    \"ticketid\" : 123456,\n    \"ticketmaskid\" : \"UAX-553-25735\",\n    \"department\" : \"General\",\n    \"status\" : \"Closed\",\n    \"priority\" : \"Standard\",\n    \"subject\" : \"Regarding ssl doubts\",\n    \"created_on\" : \"19 November, 2025 07:24 pm\",\n    \"updated_on\" : \"20 November, 2025 05:41 pm\"\n  },\n  \"ticket_custom_fields\" : {\n    \"Customer Server Access\" : \"y\",\n    \"Ip Address\" : \"68.23.3.5\",\n    \"Root Password\" : \"fsdnbfsd\",\n    \"Sudo User\" : \"jjog\",\n    \"Sudo Password\" : 123,\n    \"Port\" : 22\n  },\n  \"ticket_posts\" : [ {\n    \"post_id\" : 24244,\n    \"date\" : \"20 November, 2025 05:41 pm\",\n    \"contents\" : \"Testing ticket reply from api\",\n    \"creator\" : \"User\",\n    \"creator_email\" : \"abc@email.com\",\n    \"creator_name\" : \"ABC DEF\",\n    \"hasattachments\" : 0\n  }, {\n    \"post_id\" : 24244,\n    \"date\" : \"21 November, 2025 05:41 pm\",\n    \"contents\" : \"Test 234\",\n    \"creator\" : \"User\",\n    \"creator_email\" : \"john@email.com\",\n    \"creator_name\" : \"John Wick\",\n    \"hasattachments\" : 1,\n    \"attachment_download\" : \"https:my.interserver.net/download_link?id=xxx\"\n  } ]\n}", ViewTicketResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<ViewTicketResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<ViewTicketResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<Tickets> postTicketsList() {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<Tickets>(objectMapper.readValue("{\n  \"ima\" : \"client\",\n  \"custid\" : \"223513\",\n  \"view\" : \"Open\",\n  \"currentPage\" : 1,\n  \"limit\" : 50,\n  \"sortcol\" : 6,\n  \"sortdir\" : 1,\n  \"rowsOffset\" : 0,\n  \"tickets\" : [ ],\n  \"pages\" : 7,\n  \"rowsTotal\" : 311,\n  \"inboxCount\" : 311,\n  \"countArray\" : {\n    \"Open\" : 3,\n    \"On Hold\" : 3,\n    \"Closed\" : 305\n  },\n  \"viewText\" : \"Inbox\"\n}", Tickets.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<Tickets>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<Tickets>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<ViewTicketResponse> putTicketInfo(@Parameter(in = ParameterIn.PATH, description = "Ticket ID number.", required=true, schema=@Schema()) @PathVariable("id") BigDecimal id
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<ViewTicketResponse>(objectMapper.readValue("{\n  \"success\" : true,\n  \"ticket\" : {\n    \"ticketid\" : 123456,\n    \"ticketmaskid\" : \"UAX-553-25735\",\n    \"department\" : \"General\",\n    \"status\" : \"Closed\",\n    \"priority\" : \"Standard\",\n    \"subject\" : \"Regarding ssl doubts\",\n    \"created_on\" : \"19 November, 2025 07:24 pm\",\n    \"updated_on\" : \"20 November, 2025 05:41 pm\"\n  },\n  \"ticket_custom_fields\" : {\n    \"Customer Server Access\" : \"y\",\n    \"Ip Address\" : \"68.23.3.5\",\n    \"Root Password\" : \"fsdnbfsd\",\n    \"Sudo User\" : \"jjog\",\n    \"Sudo Password\" : 123,\n    \"Port\" : 22\n  },\n  \"ticket_posts\" : [ {\n    \"post_id\" : 24244,\n    \"date\" : \"20 November, 2025 05:41 pm\",\n    \"contents\" : \"Testing ticket reply from api\",\n    \"creator\" : \"User\",\n    \"creator_email\" : \"abc@email.com\",\n    \"creator_name\" : \"ABC DEF\",\n    \"hasattachments\" : 0\n  }, {\n    \"post_id\" : 24244,\n    \"date\" : \"21 November, 2025 05:41 pm\",\n    \"contents\" : \"Test 234\",\n    \"creator\" : \"User\",\n    \"creator_email\" : \"john@email.com\",\n    \"creator_name\" : \"John Wick\",\n    \"hasattachments\" : 1,\n    \"attachment_download\" : \"https:my.interserver.net/download_link?id=xxx\"\n  } ]\n}", ViewTicketResponse.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<ViewTicketResponse>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<ViewTicketResponse>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<ReplyTicketResponseSchema> replyTicket(@Parameter(in = ParameterIn.PATH, description = "The ticket ID number.", required=true, schema=@Schema()) @PathVariable("id") BigDecimal id
,@Parameter(in = ParameterIn.DEFAULT, description = "", schema=@Schema()) @Valid @RequestBody ReplyTicketRequest body
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<ReplyTicketResponseSchema>(objectMapper.readValue("{\n  \"success\" : true,\n  \"post_id\" : 234452\n}", ReplyTicketResponseSchema.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<ReplyTicketResponseSchema>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<ReplyTicketResponseSchema>(HttpStatus.NOT_IMPLEMENTED);
    }

    public ResponseEntity<UpdateTicketResponseSchema> updateTicketInfo(@Parameter(in = ParameterIn.PATH, description = "The ticket ID number.", required=true, schema=@Schema()) @PathVariable("id") BigDecimal id
,@Parameter(in = ParameterIn.DEFAULT, description = "", schema=@Schema()) @Valid @RequestBody UpdateTicket body
) {
        String accept = request.getHeader("Accept");
        if (accept != null && accept.contains("application/json")) {
            try {
                return new ResponseEntity<UpdateTicketResponseSchema>(objectMapper.readValue("{\n  \"success\" : true,\n  \"message\" : \"Ticket is updated!\"\n}", UpdateTicketResponseSchema.class), HttpStatus.NOT_IMPLEMENTED);
            } catch (IOException e) {
                log.error("Couldn't serialize response for content type application/json", e);
                return new ResponseEntity<UpdateTicketResponseSchema>(HttpStatus.INTERNAL_SERVER_ERROR);
            }
        }

        return new ResponseEntity<UpdateTicketResponseSchema>(HttpStatus.NOT_IMPLEMENTED);
    }

}
