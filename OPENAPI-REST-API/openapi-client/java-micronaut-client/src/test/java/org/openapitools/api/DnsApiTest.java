package org.openapitools.api;

import org.openapitools.model.DnsListItem;
import org.openapitools.model.DnsRecord;
import org.openapitools.model.DnsRecordType;
import org.openapitools.model.GetAccountInfo401Response;
import io.micronaut.test.extensions.junit5.annotation.MicronautTest;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Disabled;
import jakarta.inject.Inject;
import java.util.Arrays;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.HashSet;

/**
 * API tests for DnsApi
 */
@MicronautTest
public class DnsApiTest {

    @Inject
    DnsApi api;

    
    /**
     * Create DNS Domain
     *
     * Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer&#39;s DNS servers. Use &#x60;/dns/{id}&#x60; to manage records after creation.
     */
    @Test
    @Disabled("Not Implemented")
    public void addDnsDomainTest() {
        // given
        String domain = "example";
        String ip = "example";

        // when
        api.addDnsDomain(domain, ip).block();

        // then
        // TODO implement the addDnsDomainTest()
    }

    
    /**
     * Add DNS Record to Domain
     *
     * Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; afterward to confirm the record was created.
     */
    @Test
    @Disabled("Not Implemented")
    public void addDnsRecordTest() {
        // given
        String id = "472";
        String name = "example";
        DnsRecordType type = DnsRecordType.fromValue("A");
        String content = "example";
        Integer ttl = 86400;
        Integer prio = 0;

        // when
        api.addDnsRecord(id, name, type, content, ttl, prio).block();

        // then
        // TODO implement the addDnsRecordTest()
    }

    
    /**
     * Delete DNS Domain
     *
     * Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.
     */
    @Test
    @Disabled("Not Implemented")
    public void deleteDnsDomainTest() {
        // given
        String id = "example";

        // when
        api.deleteDnsDomain(id).block();

        // then
        // TODO implement the deleteDnsDomainTest()
    }

    
    /**
     * Delete DNS Record
     *
     * Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; to verify the record has been removed.
     */
    @Test
    @Disabled("Not Implemented")
    public void deleteDnsRecordTest() {
        // given
        Integer domainId = 56;
        Integer recordId = 56;

        // when
        api.deleteDnsRecord(domainId, recordId).block();

        // then
        // TODO implement the deleteDnsRecordTest()
    }

    
    /**
     * List Domain DNS Records
     *
     * Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record &#x60;id&#x60; values with &#x60;/dns/{domainId}/{recordId}&#x60; to update or delete individual records.
     */
    @Test
    @Disabled("Not Implemented")
    public void getDnsDomainTest() {
        // given
        Integer id = 56;

        // when
        List<DnsRecord> body = api.getDnsDomain(id).block();

        // then
        // TODO implement the getDnsDomainTest()
    }

    
    /**
     * List DNS Domains
     *
     * Returns the DNS domains on your account along with their primary A record content. Use the &#x60;id&#x60; from each entry with &#x60;/dns/{id}&#x60; to retrieve the full record set, or to add, update, and delete individual records.
     */
    @Test
    @Disabled("Not Implemented")
    public void getDnsListTest() {
        // given

        // when
        List<DnsListItem> body = api.getDnsList().block();

        // then
        // TODO implement the getDnsListTest()
    }

    
    /**
     * Update DNS Record
     *
     * Updates an existing DNS record with new values. Use &#x60;GET /dns/{id}&#x60; to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.
     */
    @Test
    @Disabled("Not Implemented")
    public void updateDnsRecordTest() {
        // given
        Integer domainId = 56;
        Integer recordId = 56;
        String name = "example";
        DnsRecordType type = DnsRecordType.fromValue("A");
        String content = "example";
        String ttl = "example";
        String prio = "example";
        String disabled = "example";
        String ordername = "example";
        String auth = "example";

        // when
        api.updateDnsRecord(domainId, recordId, name, type, content, ttl, prio, disabled, ordername, auth).block();

        // then
        // TODO implement the updateDnsRecordTest()
    }

    
}
