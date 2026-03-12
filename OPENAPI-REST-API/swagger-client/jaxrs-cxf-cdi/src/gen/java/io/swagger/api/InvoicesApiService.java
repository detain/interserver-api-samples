package io.swagger.api;

import io.swagger.api.*;
import io.swagger.model.*;

import org.apache.cxf.jaxrs.ext.multipart.Attachment;
import org.apache.cxf.jaxrs.ext.multipart.Multipart;

import io.swagger.model.InlineResponse401;
import io.swagger.model.Invoice;

import java.util.List;

import java.io.InputStream;

import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;


public interface InvoicesApiService {
      public Response getInvoices(String searchString, Integer skip, Integer limit, SecurityContext securityContext);
}
