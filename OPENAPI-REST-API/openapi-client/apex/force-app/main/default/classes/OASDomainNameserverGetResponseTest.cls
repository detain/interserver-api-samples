@isTest
private class OASDomainNameserverGetResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASDomainNameserverGetResponse domainNameserverGetResponse1 = OASDomainNameserverGetResponse.getExample();
        OASDomainNameserverGetResponse domainNameserverGetResponse2 = domainNameserverGetResponse1;
        OASDomainNameserverGetResponse domainNameserverGetResponse3 = new OASDomainNameserverGetResponse();
        OASDomainNameserverGetResponse domainNameserverGetResponse4 = domainNameserverGetResponse3;

        System.assert(domainNameserverGetResponse1.equals(domainNameserverGetResponse2));
        System.assert(domainNameserverGetResponse2.equals(domainNameserverGetResponse1));
        System.assert(domainNameserverGetResponse1.equals(domainNameserverGetResponse1));
        System.assert(domainNameserverGetResponse3.equals(domainNameserverGetResponse4));
        System.assert(domainNameserverGetResponse4.equals(domainNameserverGetResponse3));
        System.assert(domainNameserverGetResponse3.equals(domainNameserverGetResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDomainNameserverGetResponse domainNameserverGetResponse1 = OASDomainNameserverGetResponse.getExample();
        OASDomainNameserverGetResponse domainNameserverGetResponse2 = OASDomainNameserverGetResponse.getExample();
        OASDomainNameserverGetResponse domainNameserverGetResponse3 = new OASDomainNameserverGetResponse();
        OASDomainNameserverGetResponse domainNameserverGetResponse4 = new OASDomainNameserverGetResponse();

        System.assert(domainNameserverGetResponse1.equals(domainNameserverGetResponse2));
        System.assert(domainNameserverGetResponse2.equals(domainNameserverGetResponse1));
        System.assert(domainNameserverGetResponse3.equals(domainNameserverGetResponse4));
        System.assert(domainNameserverGetResponse4.equals(domainNameserverGetResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDomainNameserverGetResponse domainNameserverGetResponse1 = OASDomainNameserverGetResponse.getExample();
        OASDomainNameserverGetResponse domainNameserverGetResponse2 = new OASDomainNameserverGetResponse();

        System.assertEquals(false, domainNameserverGetResponse1.equals('foo'));
        System.assertEquals(false, domainNameserverGetResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDomainNameserverGetResponse domainNameserverGetResponse1 = OASDomainNameserverGetResponse.getExample();
        OASDomainNameserverGetResponse domainNameserverGetResponse2 = new OASDomainNameserverGetResponse();
        OASDomainNameserverGetResponse domainNameserverGetResponse3;

        System.assertEquals(false, domainNameserverGetResponse1.equals(domainNameserverGetResponse3));
        System.assertEquals(false, domainNameserverGetResponse2.equals(domainNameserverGetResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDomainNameserverGetResponse domainNameserverGetResponse1 = OASDomainNameserverGetResponse.getExample();
        OASDomainNameserverGetResponse domainNameserverGetResponse2 = new OASDomainNameserverGetResponse();

        System.assertEquals(domainNameserverGetResponse1.hashCode(), domainNameserverGetResponse1.hashCode());
        System.assertEquals(domainNameserverGetResponse2.hashCode(), domainNameserverGetResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDomainNameserverGetResponse domainNameserverGetResponse1 = OASDomainNameserverGetResponse.getExample();
        OASDomainNameserverGetResponse domainNameserverGetResponse2 = OASDomainNameserverGetResponse.getExample();
        OASDomainNameserverGetResponse domainNameserverGetResponse3 = new OASDomainNameserverGetResponse();
        OASDomainNameserverGetResponse domainNameserverGetResponse4 = new OASDomainNameserverGetResponse();

        System.assert(domainNameserverGetResponse1.equals(domainNameserverGetResponse2));
        System.assert(domainNameserverGetResponse3.equals(domainNameserverGetResponse4));
        System.assertEquals(domainNameserverGetResponse1.hashCode(), domainNameserverGetResponse2.hashCode());
        System.assertEquals(domainNameserverGetResponse3.hashCode(), domainNameserverGetResponse4.hashCode());
    }
}
