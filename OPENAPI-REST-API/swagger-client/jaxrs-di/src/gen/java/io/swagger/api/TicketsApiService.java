package io.swagger.api;

import io.swagger.api.*;
import io.swagger.model.*;

import org.glassfish.jersey.media.multipart.FormDataContentDisposition;

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

import java.util.Map;
import java.util.List;

import java.io.InputStream;

import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;
import javax.validation.constraints.*;

public interface TicketsApiService {
    public Response addNewTicket(TicketNew body,SecurityContext securityContext);
    public Response addNewTicket(String subject,String body,Integer serviceId,String serviceModule,SecurityContext securityContext);
    public Response closeTicket(String id,SecurityContext securityContext);
    public Response deleteTicketInfo(BigDecimal id,SecurityContext securityContext);
    public Response getNewTicket(SecurityContext securityContext);
    public Response getTicketInfo(BigDecimal id,SecurityContext securityContext);
    public Response getTicketsList( Integer page, String period, String view,SecurityContext securityContext);
    public Response postTicketInfo(BigDecimal id,SecurityContext securityContext);
    public Response postTicketsList(SecurityContext securityContext);
    public Response putTicketInfo(BigDecimal id,SecurityContext securityContext);
    public Response replyTicket(BigDecimal id,ReplyTicketRequest body,SecurityContext securityContext);
    public Response replyTicket(BigDecimal id,String content,SecurityContext securityContext);
    public Response updateTicketInfo(BigDecimal id,UpdateTicket body,SecurityContext securityContext);
    public Response updateTicketInfo(BigDecimal id,String ip,String ipAddress,String customerServerAccess,String rootPassword,String sudoUsername,String sudoPassword,Integer port,SecurityContext securityContext);
}
