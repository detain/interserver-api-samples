package io.swagger.api.impl;

import io.swagger.api.*;
import io.swagger.model.*;
import org.jboss.resteasy.plugins.providers.multipart.MultipartFormDataInput;

import io.swagger.model.ChargeInvoiceRows;
import io.swagger.model.DenyRuleNew;
import io.swagger.model.DenyRuleRecord;
import io.swagger.model.EmailAddress;
import io.swagger.model.EmailAddressName;
import io.swagger.model.GenericResponse;
import io.swagger.model.InlineResponse2008;
import io.swagger.model.InlineResponse401;
import io.swagger.model.MailAlertRequest;
import io.swagger.model.MailAlertUpdateRequest;
import io.swagger.model.MailAlertsResponse;
import io.swagger.model.MailAttachment;
import io.swagger.model.MailBlocks;
import io.swagger.model.MailDelistRequest;
import io.swagger.model.MailDelistResponse;
import io.swagger.model.MailDeliverabilityResponse;
import io.swagger.model.MailLog;
import io.swagger.model.MailOrder;
import io.swagger.model.MailRow;
import io.swagger.model.MailSchema;
import io.swagger.model.MailStatsType;
import io.swagger.model.SendMail;
import io.swagger.model.SendMailAdv;
import io.swagger.model.SuccessTextResponse;

import java.util.List;
import java.util.Map;

import java.io.InputStream;

import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;


public class MailApiServiceImpl implements MailApi {
      public Response addMail(SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response addRule(DenyRuleNew body,Integer id,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response addRule(String user,String type,String data,Integer id,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response createMailAlert(MailAlertRequest body,Integer id,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response createMailAlert(String type,String value,String to,String enabled,Integer id,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response deleteMailAlert(Integer id,Integer alertId,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response deleteRule(Integer id,String rule,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response delistBlock(MultipartFormDataInput input,String email,Integer id,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response delistBlock(MultipartFormDataInput input,EmailAddress body,Integer id,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response getMailAlerts(Integer id,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response getMailBlocks(Integer id,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response getMailDelist(Integer id,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response getMailDeliverability(Integer id,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response getMailInfo(Integer id,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response getMailInvoices(Integer id,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response getMailList(SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response getMailWelcomeEmail(Integer id,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response getNewMail(SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response getRules(Integer id,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response getStats(Integer id,String time,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response mailCancel(Integer id,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response postMailDelist(MailDelistRequest body,Integer id,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response postMailDelist(String unblock,Integer id,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response putMail(SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response resetMailPassword(Integer id,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response sendAdvMail(SendMailAdv body,Integer id,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response sendAdvMail(String subject,String body,EmailAddressName from,List<EmailAddressName> to,List<EmailAddressName> replyto,List<EmailAddressName> cc,List<EmailAddressName> bcc,List<MailAttachment> attachments,Long id2,Integer id,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response sendMail(SendMail body,Integer id,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response sendMail(String to,String from,String subject,String body,Integer id,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response updateMailAlert(MailAlertUpdateRequest body,Integer id,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response updateMailAlert(Integer alertId,String type,String value,String to,String enabled,Integer id,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response updateMailInfo(String id,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response viewMailLog(Integer id,Long id,String origin,String mx,String from,String to,String subject,String mailid,Integer skip,Integer limit,Long startDate,Long endDate,String delivered,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
}
