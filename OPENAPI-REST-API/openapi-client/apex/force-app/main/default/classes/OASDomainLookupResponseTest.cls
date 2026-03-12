@isTest
private class OASDomainLookupResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASDomainLookupResponse domainLookupResponse1 = OASDomainLookupResponse.getExample();
        OASDomainLookupResponse domainLookupResponse2 = domainLookupResponse1;
        OASDomainLookupResponse domainLookupResponse3 = new OASDomainLookupResponse();
        OASDomainLookupResponse domainLookupResponse4 = domainLookupResponse3;

        System.assert(domainLookupResponse1.equals(domainLookupResponse2));
        System.assert(domainLookupResponse2.equals(domainLookupResponse1));
        System.assert(domainLookupResponse1.equals(domainLookupResponse1));
        System.assert(domainLookupResponse3.equals(domainLookupResponse4));
        System.assert(domainLookupResponse4.equals(domainLookupResponse3));
        System.assert(domainLookupResponse3.equals(domainLookupResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDomainLookupResponse domainLookupResponse1 = OASDomainLookupResponse.getExample();
        OASDomainLookupResponse domainLookupResponse2 = OASDomainLookupResponse.getExample();
        OASDomainLookupResponse domainLookupResponse3 = new OASDomainLookupResponse();
        OASDomainLookupResponse domainLookupResponse4 = new OASDomainLookupResponse();

        System.assert(domainLookupResponse1.equals(domainLookupResponse2));
        System.assert(domainLookupResponse2.equals(domainLookupResponse1));
        System.assert(domainLookupResponse3.equals(domainLookupResponse4));
        System.assert(domainLookupResponse4.equals(domainLookupResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDomainLookupResponse domainLookupResponse1 = OASDomainLookupResponse.getExample();
        OASDomainLookupResponse domainLookupResponse2 = new OASDomainLookupResponse();

        System.assertEquals(false, domainLookupResponse1.equals('foo'));
        System.assertEquals(false, domainLookupResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDomainLookupResponse domainLookupResponse1 = OASDomainLookupResponse.getExample();
        OASDomainLookupResponse domainLookupResponse2 = new OASDomainLookupResponse();
        OASDomainLookupResponse domainLookupResponse3;

        System.assertEquals(false, domainLookupResponse1.equals(domainLookupResponse3));
        System.assertEquals(false, domainLookupResponse2.equals(domainLookupResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDomainLookupResponse domainLookupResponse1 = OASDomainLookupResponse.getExample();
        OASDomainLookupResponse domainLookupResponse2 = new OASDomainLookupResponse();

        System.assertEquals(domainLookupResponse1.hashCode(), domainLookupResponse1.hashCode());
        System.assertEquals(domainLookupResponse2.hashCode(), domainLookupResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDomainLookupResponse domainLookupResponse1 = OASDomainLookupResponse.getExample();
        OASDomainLookupResponse domainLookupResponse2 = OASDomainLookupResponse.getExample();
        OASDomainLookupResponse domainLookupResponse3 = new OASDomainLookupResponse();
        OASDomainLookupResponse domainLookupResponse4 = new OASDomainLookupResponse();

        System.assert(domainLookupResponse1.equals(domainLookupResponse2));
        System.assert(domainLookupResponse3.equals(domainLookupResponse4));
        System.assertEquals(domainLookupResponse1.hashCode(), domainLookupResponse2.hashCode());
        System.assertEquals(domainLookupResponse3.hashCode(), domainLookupResponse4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASDomainLookupResponse domainLookupResponse = new OASDomainLookupResponse();
        Map<String, String> x-property-mappings = domainLookupResponse.getx-property-mappings();
        System.assertEquals('domainService', x-property-mappings.get('domain_service'));
        System.assertEquals('whoisPrivacy', x-property-mappings.get('whois_privacy'));
        System.assertEquals('r_new', x-property-mappings.get('new'));
    }
}
