package io.swagger.api;

import io.swagger.model.DnsListItem;
import io.swagger.model.DnsNewDomain;
import io.swagger.model.DnsNewRecord;
import io.swagger.model.DnsRecord;
import io.swagger.model.DnsRecordType;
import io.swagger.model.DnsUpdateRecord;
import io.swagger.model.InlineResponse401;

import io.micronaut.http.HttpResponse;
import io.micronaut.http.HttpStatus;
import io.micronaut.test.extensions.junit5.annotation.MicronautTest;
import org.junit.jupiter.api.Test;
import jakarta.inject.Inject;

import java.util.*;

import static org.junit.jupiter.api.Assumptions.assumeTrue;

@MicronautTest
class DnsApiControllerTest {

    @Inject
    private DnsApi api;

    @Test
    void addDnsDomainFormTest() {
        String domain = null;
        String ip = null;
        try {
            //TODO: api.addDnsDomain(domain, ip).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void addDnsRecordFormTest() {
        String name = null;
        DnsRecordType type = null;
        String content = null;
        Integer ttl = null;
        Integer prio = null;
        String id = null;
        try {
            //TODO: api.addDnsRecord(name, type, content, ttl, prio, id).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void deleteDnsDomainTest() {
        String id = null;
        try {
            //TODO: api.deleteDnsDomain(id).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void deleteDnsRecordTest() {
        Integer domainId = null;
        Integer recordId = null;
        try {
            //TODO: api.deleteDnsRecord(domainId, recordId).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void getDnsDomainTest() {
        Integer id = null;
        try {
            //TODO: api.getDnsDomain(id).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void getDnsListTest() {
        try {
            //TODO: api.getDnsList().blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void updateDnsRecordFormTest() {
        String name = null;
        DnsRecordType type = null;
        String content = null;
        String ttl = null;
        String prio = null;
        String disabled = null;
        String ordername = null;
        String auth = null;
        Integer domainId = null;
        Integer recordId = null;
        try {
            //TODO: api.updateDnsRecord(name, type, content, ttl, prio, disabled, ordername, auth, domainId, recordId).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

}
