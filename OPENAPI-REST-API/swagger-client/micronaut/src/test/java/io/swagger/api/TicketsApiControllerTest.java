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

import io.micronaut.http.HttpResponse;
import io.micronaut.http.HttpStatus;
import io.micronaut.test.extensions.junit5.annotation.MicronautTest;
import org.junit.jupiter.api.Test;
import jakarta.inject.Inject;

import java.util.*;

import static org.junit.jupiter.api.Assumptions.assumeTrue;

@MicronautTest
class TicketsApiControllerTest {

    @Inject
    private TicketsApi api;

    @Test
    void addNewTicketTest() {
        TicketNew body = null;
        try {
            //TODO: api.addNewTicket(body).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void closeTicketTest() {
        String id = null;
        try {
            //TODO: api.closeTicket(id).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void deleteTicketInfoTest() {
        BigDecimal id = null;
        try {
            //TODO: api.deleteTicketInfo(id).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void getNewTicketTest() {
        try {
            //TODO: api.getNewTicket().blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void getTicketInfoTest() {
        BigDecimal id = null;
        try {
            //TODO: api.getTicketInfo(id).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void getTicketsListTest() {
        Integer page = null;
        String period = null;
        String view = null;
        try {
            //TODO: api.getTicketsList(page, period, view).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void postTicketInfoTest() {
        BigDecimal id = null;
        try {
            //TODO: api.postTicketInfo(id).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void postTicketsListTest() {
        try {
            //TODO: api.postTicketsList().blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void putTicketInfoTest() {
        BigDecimal id = null;
        try {
            //TODO: api.putTicketInfo(id).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void replyTicketTest() {
        BigDecimal id = null;
        ReplyTicketRequest body = null;
        try {
            //TODO: api.replyTicket(id, body).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void updateTicketInfoTest() {
        BigDecimal id = null;
        UpdateTicket body = null;
        try {
            //TODO: api.updateTicketInfo(id, body).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

}
