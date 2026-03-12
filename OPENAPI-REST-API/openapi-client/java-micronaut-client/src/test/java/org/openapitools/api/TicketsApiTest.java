package org.openapitools.api;

import java.math.BigDecimal;
import org.openapitools.model.CloseTicketResponseSchema;
import org.openapitools.model.GetAccountInfo401Response;
import org.openapitools.model.ReplyTicketRequest;
import org.openapitools.model.ReplyTicketResponseSchema;
import org.openapitools.model.TicketNew;
import org.openapitools.model.TicketNewResponse;
import org.openapitools.model.Tickets;
import org.openapitools.model.UpdateTicket;
import org.openapitools.model.UpdateTicketResponseSchema;
import org.openapitools.model.ViewTicketResponse;
import io.micronaut.test.extensions.junit5.annotation.MicronautTest;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Disabled;
import jakarta.inject.Inject;
import java.util.Arrays;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.HashSet;

/**
 * API tests for TicketsApi
 */
@MicronautTest
public class TicketsApiTest {

    @Inject
    TicketsApi api;

    
    /**
     * Create New Ticket
     *
     * Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.
     */
    @Test
    @Disabled("Not Implemented")
    public void addNewTicketTest() {
        // given
        TicketNew ticketNew = new TicketNew("example", "example");

        // when
        TicketNewResponse body = api.addNewTicket(ticketNew).block();

        // then
        // TODO implement the addNewTicketTest()
    }

    
    /**
     * Close Ticket
     *
     * Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.
     */
    @Test
    @Disabled("Not Implemented")
    public void closeTicketTest() {
        // given
        String id = "1511222";

        // when
        CloseTicketResponseSchema body = api.closeTicket(id).block();

        // then
        // TODO implement the closeTicketTest()
    }

    
    /**
     * Close Ticket
     *
     * Closes the support ticket.
     */
    @Test
    @Disabled("Not Implemented")
    public void deleteTicketInfoTest() {
        // given
        BigDecimal id = new BigDecimal(78);

        // when
        ViewTicketResponse body = api.deleteTicketInfo(id).block();

        // then
        // TODO implement the deleteTicketInfoTest()
    }

    
    /**
     * Gets Information for creating a new ticket.
     *
     * Returns the form data needed to create a new support ticket, such as available departments and service categories.
     */
    @Test
    @Disabled("Not Implemented")
    public void getNewTicketTest() {
        // given

        // when
        api.getNewTicket().block();

        // then
        // TODO implement the getNewTicketTest()
    }

    
    /**
     * Get Ticket Information
     *
     * Returns the full details of a support ticket including its history of replies.
     */
    @Test
    @Disabled("Not Implemented")
    public void getTicketInfoTest() {
        // given
        BigDecimal id = new BigDecimal(78);

        // when
        ViewTicketResponse body = api.getTicketInfo(id).block();

        // then
        // TODO implement the getTicketInfoTest()
    }

    
    /**
     * List Support Tickets
     *
     * Returns a paginated list of support tickets on the account. Filter by status and time period.
     */
    @Test
    @Disabled("Not Implemented")
    public void getTicketsListTest() {
        // given
        Integer page = 1;
        String period = "30";
        String view = "example";

        // when
        Tickets body = api.getTicketsList(page, period, view).block();

        // then
        // TODO implement the getTicketsListTest()
    }

    
    /**
     * Reply To Ticket
     *
     * Adds a reply to an existing support ticket.
     */
    @Test
    @Disabled("Not Implemented")
    public void postTicketInfoTest() {
        // given
        BigDecimal id = new BigDecimal(78);

        // when
        ViewTicketResponse body = api.postTicketInfo(id).block();

        // then
        // TODO implement the postTicketInfoTest()
    }

    
    /**
     * Search Support Tickets
     *
     * Searches support tickets by email, subject, or ticket mask ID.
     */
    @Test
    @Disabled("Not Implemented")
    public void postTicketsListTest() {
        // given

        // when
        Tickets body = api.postTicketsList().block();

        // then
        // TODO implement the postTicketsListTest()
    }

    
    /**
     * Update Ticket
     *
     * Updates a support ticket&#39;s properties such as subject or status.
     */
    @Test
    @Disabled("Not Implemented")
    public void putTicketInfoTest() {
        // given
        BigDecimal id = new BigDecimal(78);

        // when
        ViewTicketResponse body = api.putTicketInfo(id).block();

        // then
        // TODO implement the putTicketInfoTest()
    }

    
    /**
     * Reply Ticket
     *
     * Posts a reply to an existing support ticket thread.
     */
    @Test
    @Disabled("Not Implemented")
    public void replyTicketTest() {
        // given
        BigDecimal id = new BigDecimal(78);
        ReplyTicketRequest replyTicketRequest = new ReplyTicketRequest();

        // when
        ReplyTicketResponseSchema body = api.replyTicket(id, replyTicketRequest).block();

        // then
        // TODO implement the replyTicketTest()
    }

    
    /**
     * Update Ticket
     *
     * Updates a support ticket&#39;s subject or body content.
     */
    @Test
    @Disabled("Not Implemented")
    public void updateTicketInfoTest() {
        // given
        BigDecimal id = new BigDecimal(78);
        UpdateTicket updateTicket = new UpdateTicket();

        // when
        UpdateTicketResponseSchema body = api.updateTicketInfo(id, updateTicket).block();

        // then
        // TODO implement the updateTicketInfoTest()
    }

    
}
