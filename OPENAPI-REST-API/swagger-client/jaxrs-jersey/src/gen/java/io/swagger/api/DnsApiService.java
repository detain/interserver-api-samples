package io.swagger.api;

import io.swagger.api.*;
import io.swagger.model.*;

import org.glassfish.jersey.media.multipart.FormDataContentDisposition;

import io.swagger.model.DnsListItem;
import io.swagger.model.DnsNewDomain;
import io.swagger.model.DnsNewRecord;
import io.swagger.model.DnsRecord;
import io.swagger.model.DnsRecordType;
import io.swagger.model.DnsUpdateRecord;
import io.swagger.model.InlineResponse401;

import java.util.Map;
import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;
import javax.validation.constraints.*;

public abstract class DnsApiService {
    public abstract Response addDnsDomain(String domain,String ip,SecurityContext securityContext) throws NotFoundException;
    public abstract Response addDnsDomain(DnsNewDomain body,SecurityContext securityContext) throws NotFoundException;
    public abstract Response addDnsRecord(String name,DnsRecordType type,String content,Integer ttl,Integer prio,String id,SecurityContext securityContext) throws NotFoundException;
    public abstract Response addDnsRecord(DnsNewRecord body,String id,SecurityContext securityContext) throws NotFoundException;
    public abstract Response deleteDnsDomain(String id,SecurityContext securityContext) throws NotFoundException;
    public abstract Response deleteDnsRecord(Integer domainId,Integer recordId,SecurityContext securityContext) throws NotFoundException;
    public abstract Response getDnsDomain(Integer id,SecurityContext securityContext) throws NotFoundException;
    public abstract Response getDnsList(SecurityContext securityContext) throws NotFoundException;
    public abstract Response updateDnsRecord(String name,DnsRecordType type,String content,String ttl,String prio,String disabled,String ordername,String auth,Integer domainId,Integer recordId,SecurityContext securityContext) throws NotFoundException;
    public abstract Response updateDnsRecord(DnsUpdateRecord body,Integer domainId,Integer recordId,SecurityContext securityContext) throws NotFoundException;
}
