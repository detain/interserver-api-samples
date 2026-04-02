package io.swagger.api.impl;

import io.swagger.api.*;
import io.swagger.model.*;
import org.jboss.resteasy.plugins.providers.multipart.MultipartFormDataInput;
import org.jboss.resteasy.plugins.providers.multipart.MultipartFormDataInput;
import org.jboss.resteasy.plugins.providers.multipart.MultipartFormDataInput;

import io.swagger.model.DnsListItem;
import io.swagger.model.DnsNewDomain;
import io.swagger.model.DnsNewRecord;
import io.swagger.model.DnsRecord;
import io.swagger.model.DnsRecordType;
import io.swagger.model.DnsUpdateRecord;
import io.swagger.model.InlineResponse401;
import io.swagger.model.SuccessTextResponse;

import java.util.List;
import java.util.Map;

import java.io.InputStream;

import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;


public class DnsApiServiceImpl implements DnsApi {
      public Response addDnsDomain(MultipartFormDataInput input,String domain,String ip,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response addDnsDomain(MultipartFormDataInput input,DnsNewDomain body,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response addDnsRecord(MultipartFormDataInput input,String name,DnsRecordType type,String content,Integer ttl,Integer prio,String id,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response addDnsRecord(MultipartFormDataInput input,DnsNewRecord body,String id,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response deleteDnsDomain(String id,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response deleteDnsRecord(Integer domainId,Integer recordId,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response getDnsDomain(Integer id,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response getDnsList(SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response updateDnsRecord(MultipartFormDataInput input,String name,DnsRecordType type,String content,String ttl,String prio,String disabled,String ordername,String auth,Integer domainId,Integer recordId,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response updateDnsRecord(MultipartFormDataInput input,DnsUpdateRecord body,Integer domainId,Integer recordId,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
}
