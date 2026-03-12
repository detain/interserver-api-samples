package io.swagger.api;

import io.swagger.api.*;
import io.swagger.model.*;

import org.apache.cxf.jaxrs.ext.multipart.Attachment;
import org.apache.cxf.jaxrs.ext.multipart.Multipart;

import io.swagger.model.DnsListItem;
import io.swagger.model.DnsNewDomain;
import io.swagger.model.DnsNewRecord;
import io.swagger.model.DnsRecord;
import io.swagger.model.DnsRecordType;
import io.swagger.model.DnsUpdateRecord;
import io.swagger.model.InlineResponse401;

import java.util.List;

import java.io.InputStream;

import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;


public interface DnsApiService {
      public Response addDnsDomain(String domain, String ip, SecurityContext securityContext);
      public Response addDnsDomain(DnsNewDomain body, SecurityContext securityContext);
      public Response addDnsRecord(String name, DnsRecordType type, String content, Integer ttl, Integer prio, String id, SecurityContext securityContext);
      public Response addDnsRecord(DnsNewRecord body, String id, SecurityContext securityContext);
      public Response deleteDnsDomain(String id, SecurityContext securityContext);
      public Response deleteDnsRecord(Integer domainId, Integer recordId, SecurityContext securityContext);
      public Response getDnsDomain(Integer id, SecurityContext securityContext);
      public Response getDnsList(SecurityContext securityContext);
      public Response updateDnsRecord(String name, DnsRecordType type, String content, String ttl, String prio, String disabled, String ordername, String auth, Integer domainId, Integer recordId, SecurityContext securityContext);
      public Response updateDnsRecord(DnsUpdateRecord body, Integer domainId, Integer recordId, SecurityContext securityContext);
}
