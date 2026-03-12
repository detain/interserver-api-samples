@isTest
private class OASDomainDnssecRequestTest {
    @isTest
    private static void equalsSameInstance() {
        OASDomainDnssecRequest domainDnssecRequest1 = OASDomainDnssecRequest.getExample();
        OASDomainDnssecRequest domainDnssecRequest2 = domainDnssecRequest1;
        OASDomainDnssecRequest domainDnssecRequest3 = new OASDomainDnssecRequest();
        OASDomainDnssecRequest domainDnssecRequest4 = domainDnssecRequest3;

        System.assert(domainDnssecRequest1.equals(domainDnssecRequest2));
        System.assert(domainDnssecRequest2.equals(domainDnssecRequest1));
        System.assert(domainDnssecRequest1.equals(domainDnssecRequest1));
        System.assert(domainDnssecRequest3.equals(domainDnssecRequest4));
        System.assert(domainDnssecRequest4.equals(domainDnssecRequest3));
        System.assert(domainDnssecRequest3.equals(domainDnssecRequest3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDomainDnssecRequest domainDnssecRequest1 = OASDomainDnssecRequest.getExample();
        OASDomainDnssecRequest domainDnssecRequest2 = OASDomainDnssecRequest.getExample();
        OASDomainDnssecRequest domainDnssecRequest3 = new OASDomainDnssecRequest();
        OASDomainDnssecRequest domainDnssecRequest4 = new OASDomainDnssecRequest();

        System.assert(domainDnssecRequest1.equals(domainDnssecRequest2));
        System.assert(domainDnssecRequest2.equals(domainDnssecRequest1));
        System.assert(domainDnssecRequest3.equals(domainDnssecRequest4));
        System.assert(domainDnssecRequest4.equals(domainDnssecRequest3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDomainDnssecRequest domainDnssecRequest1 = OASDomainDnssecRequest.getExample();
        OASDomainDnssecRequest domainDnssecRequest2 = new OASDomainDnssecRequest();

        System.assertEquals(false, domainDnssecRequest1.equals('foo'));
        System.assertEquals(false, domainDnssecRequest2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDomainDnssecRequest domainDnssecRequest1 = OASDomainDnssecRequest.getExample();
        OASDomainDnssecRequest domainDnssecRequest2 = new OASDomainDnssecRequest();
        OASDomainDnssecRequest domainDnssecRequest3;

        System.assertEquals(false, domainDnssecRequest1.equals(domainDnssecRequest3));
        System.assertEquals(false, domainDnssecRequest2.equals(domainDnssecRequest3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDomainDnssecRequest domainDnssecRequest1 = OASDomainDnssecRequest.getExample();
        OASDomainDnssecRequest domainDnssecRequest2 = new OASDomainDnssecRequest();

        System.assertEquals(domainDnssecRequest1.hashCode(), domainDnssecRequest1.hashCode());
        System.assertEquals(domainDnssecRequest2.hashCode(), domainDnssecRequest2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDomainDnssecRequest domainDnssecRequest1 = OASDomainDnssecRequest.getExample();
        OASDomainDnssecRequest domainDnssecRequest2 = OASDomainDnssecRequest.getExample();
        OASDomainDnssecRequest domainDnssecRequest3 = new OASDomainDnssecRequest();
        OASDomainDnssecRequest domainDnssecRequest4 = new OASDomainDnssecRequest();

        System.assert(domainDnssecRequest1.equals(domainDnssecRequest2));
        System.assert(domainDnssecRequest3.equals(domainDnssecRequest4));
        System.assertEquals(domainDnssecRequest1.hashCode(), domainDnssecRequest2.hashCode());
        System.assertEquals(domainDnssecRequest3.hashCode(), domainDnssecRequest4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASDomainDnssecRequest domainDnssecRequest = new OASDomainDnssecRequest();
        Map<String, String> x-property-mappings = domainDnssecRequest.getx-property-mappings();
        System.assertEquals('digestType', x-property-mappings.get('digest_type'));
        System.assertEquals('keyTag', x-property-mappings.get('key_tag'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASDomainDnssecRequest domainDnssecRequest = new OASDomainDnssecRequest();
        System.assertEquals(new List<Integer>(), domainDnssecRequest.algorithm);
        System.assertEquals(new List<Integer>(), domainDnssecRequest.digestType);
        System.assertEquals(new List<String>(), domainDnssecRequest.digest);
        System.assertEquals(new List<Integer>(), domainDnssecRequest.keyTag);
    }
}
