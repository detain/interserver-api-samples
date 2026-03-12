package io.swagger.api;

import io.swagger.api.*;
import io.swagger.model.*;

import org.apache.cxf.jaxrs.ext.multipart.Attachment;
import org.apache.cxf.jaxrs.ext.multipart.Multipart;

import io.swagger.model.ChargeInvoiceRows;
import io.swagger.model.InlineResponse20020;
import io.swagger.model.InlineResponse401;
import io.swagger.model.SuccessTextResponse;

import java.util.List;

import java.io.InputStream;

import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;


public interface SslApiService {
      public Response addSsl(SecurityContext securityContext);
      public Response getNewSsl(SecurityContext securityContext);
      public Response getSslInfo(Integer id, SecurityContext securityContext);
      public Response getSslInvoices(Integer id, SecurityContext securityContext);
      public Response getSslList(SecurityContext securityContext);
      public Response getSslWelcomeEmail(Integer id, SecurityContext securityContext);
      public Response putSsl(SecurityContext securityContext);
      public Response sslCancel(Integer id, SecurityContext securityContext);
      public Response updateSslInfo(String id, SecurityContext securityContext);
}
