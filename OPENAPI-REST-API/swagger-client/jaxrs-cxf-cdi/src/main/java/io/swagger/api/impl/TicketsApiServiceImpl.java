package io.swagger.api.impl;

import io.swagger.api.*;
import io.swagger.model.*;

import org.apache.cxf.jaxrs.ext.multipart.Attachment;

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

import java.io.InputStream;

import javax.enterprise.context.RequestScoped;
import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;

@RequestScoped

public class TicketsApiServiceImpl implements TicketsApiService {
      @Override
      public Response addNewTicket(TicketNew body, SecurityContext securityContext) {
      // do some magic!
      return Response.ok().entity("magic!").build();
  }
      @Override
      public Response addNewTicket(String subject, String body, Integer serviceId, String serviceModule, SecurityContext securityContext) {
      // do some magic!
      return Response.ok().entity("magic!").build();
  }
      @Override
      public Response closeTicket(String id, SecurityContext securityContext) {
      // do some magic!
      return Response.ok().entity("magic!").build();
  }
      @Override
      public Response deleteTicketInfo(BigDecimal id, SecurityContext securityContext) {
      // do some magic!
      return Response.ok().entity("magic!").build();
  }
      @Override
      public Response getNewTicket(SecurityContext securityContext) {
      // do some magic!
      return Response.ok().entity("magic!").build();
  }
      @Override
      public Response getTicketInfo(BigDecimal id, SecurityContext securityContext) {
      // do some magic!
      return Response.ok().entity("magic!").build();
  }
      @Override
      public Response getTicketsList(Integer page, String period, String view, SecurityContext securityContext) {
      // do some magic!
      return Response.ok().entity("magic!").build();
  }
      @Override
      public Response postTicketInfo(BigDecimal id, SecurityContext securityContext) {
      // do some magic!
      return Response.ok().entity("magic!").build();
  }
      @Override
      public Response postTicketsList(SecurityContext securityContext) {
      // do some magic!
      return Response.ok().entity("magic!").build();
  }
      @Override
      public Response putTicketInfo(BigDecimal id, SecurityContext securityContext) {
      // do some magic!
      return Response.ok().entity("magic!").build();
  }
      @Override
      public Response replyTicket(BigDecimal id, ReplyTicketRequest body, SecurityContext securityContext) {
      // do some magic!
      return Response.ok().entity("magic!").build();
  }
      @Override
      public Response replyTicket(BigDecimal id, String content, SecurityContext securityContext) {
      // do some magic!
      return Response.ok().entity("magic!").build();
  }
      @Override
      public Response updateTicketInfo(BigDecimal id, UpdateTicket body, SecurityContext securityContext) {
      // do some magic!
      return Response.ok().entity("magic!").build();
  }
      @Override
      public Response updateTicketInfo(BigDecimal id, String ip, String ipAddress, String customerServerAccess, String rootPassword, String sudoUsername, String sudoPassword, Integer port, SecurityContext securityContext) {
      // do some magic!
      return Response.ok().entity("magic!").build();
  }
}
