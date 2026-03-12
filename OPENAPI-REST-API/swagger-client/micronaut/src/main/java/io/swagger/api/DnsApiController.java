package io.swagger.api;

import io.swagger.model.DnsListItem;

import io.swagger.model.DnsNewDomain;

import io.swagger.model.DnsNewRecord;

import io.swagger.model.DnsRecord;

import io.swagger.model.DnsRecordType;

import io.swagger.model.DnsUpdateRecord;

import io.swagger.model.InlineResponse401;

import io.micronaut.http.annotation.Controller;
import io.micronaut.http.HttpResponse;
import io.reactivex.rxjava3.core.Single;

import javax.annotation.Nullable;
import javax.validation.Valid;
import javax.validation.constraints.*;
import java.util.List;
import java.util.Map;

@Controller
public class DnsApiController implements DnsApi {

    @Override
    public Single<HttpResponse<Void>> addDnsDomain(@NotNull String domain, @NotNull String ip) {
        // TODO: Implement me
        return DnsApi.super.addDnsDomain(domain, ip);
    }

    @Override
    public Single<HttpResponse<Void>> addDnsDomain(@NotNull @Valid DnsNewDomain body) {
        // TODO: Implement me
        return DnsApi.super.addDnsDomain(body);
    }

    @Override
    public Single<HttpResponse<Void>> addDnsRecord(@NotNull String name, @NotNull @Valid DnsRecordType type, @NotNull String content, @NotNull Integer ttl, @NotNull Integer prio, String id) {
        // TODO: Implement me
        return DnsApi.super.addDnsRecord(name, type, content, ttl, prio, id);
    }

    @Override
    public Single<HttpResponse<Void>> addDnsRecord(@NotNull @Valid DnsNewRecord body, String id) {
        // TODO: Implement me
        return DnsApi.super.addDnsRecord(body, id);
    }

    @Override
    public Single<HttpResponse<Void>> deleteDnsDomain(String id) {
        // TODO: Implement me
        return DnsApi.super.deleteDnsDomain(id);
    }

    @Override
    public Single<HttpResponse<Void>> deleteDnsRecord(Integer domainId, Integer recordId) {
        // TODO: Implement me
        return DnsApi.super.deleteDnsRecord(domainId, recordId);
    }

    @Override
    public Single<HttpResponse<List<DnsRecord>>> getDnsDomain(Integer id) {
        // TODO: Implement me
        return DnsApi.super.getDnsDomain(id);
    }

    @Override
    public Single<HttpResponse<List<DnsListItem>>> getDnsList() {
        // TODO: Implement me
        return DnsApi.super.getDnsList();
    }

    @Override
    public Single<HttpResponse<Void>> updateDnsRecord(@NotNull String name, @NotNull @Valid DnsRecordType type, @NotNull String content, @NotNull String ttl, @NotNull String prio, @NotNull String disabled, @NotNull String ordername, @NotNull String auth, Integer domainId, Integer recordId) {
        // TODO: Implement me
        return DnsApi.super.updateDnsRecord(name, type, content, ttl, prio, disabled, ordername, auth, domainId, recordId);
    }

    @Override
    public Single<HttpResponse<Void>> updateDnsRecord(@NotNull @Valid DnsUpdateRecord body, Integer domainId, Integer recordId) {
        // TODO: Implement me
        return DnsApi.super.updateDnsRecord(body, domainId, recordId);
    }
}
