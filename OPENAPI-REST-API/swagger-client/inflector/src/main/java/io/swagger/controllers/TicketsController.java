package io.swagger.controllers;

import io.swagger.oas.inflector.models.RequestContext;
import io.swagger.oas.inflector.models.ResponseContext;
import javax.ws.rs.core.Response.Status;

import org.glassfish.jersey.media.multipart.FormDataContentDisposition;
import java.io.File;
import java.util.List;

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


public class TicketsController  {
  /** 
   * Uncomment and implement as you see fit.  These operations will map
   * Directly to operation calls from the routing logic.  Because the inflector
   * Code allows you to implement logic incrementally, they are disabled.
   **/

  /*
    public ResponseContext addNewTicket(RequestContext request , TicketNew body 
) {
        return new ResponseContext().status(Status.INTERNAL_SERVER_ERROR).entity( "Not implemented" );
    }
  */

  /*
    public ResponseContext addNewTicket(RequestContext request ,  String subject
,  String body
,  Integer serviceId
,  String serviceModule
) {
        return new ResponseContext().status(Status.INTERNAL_SERVER_ERROR).entity( "Not implemented" );
    }
  */

  /*
    public ResponseContext closeTicket(RequestContext request , String id 
) {
        return new ResponseContext().status(Status.INTERNAL_SERVER_ERROR).entity( "Not implemented" );
    }
  */

  /*
    public ResponseContext deleteTicketInfo(RequestContext request , BigDecimal id 
) {
        return new ResponseContext().status(Status.INTERNAL_SERVER_ERROR).entity( "Not implemented" );
    }
  */

  /*
    public ResponseContext getNewTicket(RequestContext request ) {
        return new ResponseContext().status(Status.INTERNAL_SERVER_ERROR).entity( "Not implemented" );
    }
  */

  /*
    public ResponseContext getTicketInfo(RequestContext request , BigDecimal id 
) {
        return new ResponseContext().status(Status.INTERNAL_SERVER_ERROR).entity( "Not implemented" );
    }
  */

  /*
    public ResponseContext getTicketsList(RequestContext request , Integer page 
, String period 
, String view 
) {
        return new ResponseContext().status(Status.INTERNAL_SERVER_ERROR).entity( "Not implemented" );
    }
  */

  /*
    public ResponseContext postTicketInfo(RequestContext request , BigDecimal id 
) {
        return new ResponseContext().status(Status.INTERNAL_SERVER_ERROR).entity( "Not implemented" );
    }
  */

  /*
    public ResponseContext postTicketsList(RequestContext request ) {
        return new ResponseContext().status(Status.INTERNAL_SERVER_ERROR).entity( "Not implemented" );
    }
  */

  /*
    public ResponseContext putTicketInfo(RequestContext request , BigDecimal id 
) {
        return new ResponseContext().status(Status.INTERNAL_SERVER_ERROR).entity( "Not implemented" );
    }
  */

  /*
    public ResponseContext replyTicket(RequestContext request , BigDecimal id 
, ReplyTicketRequest body 
) {
        return new ResponseContext().status(Status.INTERNAL_SERVER_ERROR).entity( "Not implemented" );
    }
  */

  /*
    public ResponseContext replyTicket(RequestContext request , BigDecimal id 
,  String content
) {
        return new ResponseContext().status(Status.INTERNAL_SERVER_ERROR).entity( "Not implemented" );
    }
  */

  /*
    public ResponseContext updateTicketInfo(RequestContext request , BigDecimal id 
, UpdateTicket body 
) {
        return new ResponseContext().status(Status.INTERNAL_SERVER_ERROR).entity( "Not implemented" );
    }
  */

  /*
    public ResponseContext updateTicketInfo(RequestContext request , BigDecimal id 
,  String ip
,  String ipAddress
,  String customerServerAccess
,  String rootPassword
,  String sudoUsername
,  String sudoPassword
,  Integer port
) {
        return new ResponseContext().status(Status.INTERNAL_SERVER_ERROR).entity( "Not implemented" );
    }
  */

}

