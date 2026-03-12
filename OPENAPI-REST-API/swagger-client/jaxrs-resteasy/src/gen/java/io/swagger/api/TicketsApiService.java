package io.swagger.api;

import io.swagger.api.*;
import io.swagger.model.*;

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

import java.util.List;
import java.util.Map;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;


public interface TicketsApiService {
      Response addNewTicket(TicketNew body,SecurityContext securityContext) throws NotFoundException;
      Response addNewTicket(String subject,String body,Integer serviceId,String serviceModule,SecurityContext securityContext) throws NotFoundException;
      Response closeTicket(String id,SecurityContext securityContext) throws NotFoundException;
      Response deleteTicketInfo(BigDecimal id,SecurityContext securityContext) throws NotFoundException;
      Response getNewTicket(SecurityContext securityContext) throws NotFoundException;
      Response getTicketInfo(BigDecimal id,SecurityContext securityContext) throws NotFoundException;
      Response getTicketsList(Integer page,String period,String view,SecurityContext securityContext) throws NotFoundException;
      Response postTicketInfo(BigDecimal id,SecurityContext securityContext) throws NotFoundException;
      Response postTicketsList(SecurityContext securityContext) throws NotFoundException;
      Response putTicketInfo(BigDecimal id,SecurityContext securityContext) throws NotFoundException;
      Response replyTicket(BigDecimal id,ReplyTicketRequest body,SecurityContext securityContext) throws NotFoundException;
      Response replyTicket(BigDecimal id,String content,SecurityContext securityContext) throws NotFoundException;
      Response updateTicketInfo(BigDecimal id,UpdateTicket body,SecurityContext securityContext) throws NotFoundException;
      Response updateTicketInfo(BigDecimal id,String ip,String ipAddress,String customerServerAccess,String rootPassword,String sudoUsername,String sudoPassword,Integer port,SecurityContext securityContext) throws NotFoundException;
}
