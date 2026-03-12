@isTest
private class OASDomainSearchResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASDomainSearchResponse domainSearchResponse1 = OASDomainSearchResponse.getExample();
        OASDomainSearchResponse domainSearchResponse2 = domainSearchResponse1;
        OASDomainSearchResponse domainSearchResponse3 = new OASDomainSearchResponse();
        OASDomainSearchResponse domainSearchResponse4 = domainSearchResponse3;

        System.assert(domainSearchResponse1.equals(domainSearchResponse2));
        System.assert(domainSearchResponse2.equals(domainSearchResponse1));
        System.assert(domainSearchResponse1.equals(domainSearchResponse1));
        System.assert(domainSearchResponse3.equals(domainSearchResponse4));
        System.assert(domainSearchResponse4.equals(domainSearchResponse3));
        System.assert(domainSearchResponse3.equals(domainSearchResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDomainSearchResponse domainSearchResponse1 = OASDomainSearchResponse.getExample();
        OASDomainSearchResponse domainSearchResponse2 = OASDomainSearchResponse.getExample();
        OASDomainSearchResponse domainSearchResponse3 = new OASDomainSearchResponse();
        OASDomainSearchResponse domainSearchResponse4 = new OASDomainSearchResponse();

        System.assert(domainSearchResponse1.equals(domainSearchResponse2));
        System.assert(domainSearchResponse2.equals(domainSearchResponse1));
        System.assert(domainSearchResponse3.equals(domainSearchResponse4));
        System.assert(domainSearchResponse4.equals(domainSearchResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDomainSearchResponse domainSearchResponse1 = OASDomainSearchResponse.getExample();
        OASDomainSearchResponse domainSearchResponse2 = new OASDomainSearchResponse();

        System.assertEquals(false, domainSearchResponse1.equals('foo'));
        System.assertEquals(false, domainSearchResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDomainSearchResponse domainSearchResponse1 = OASDomainSearchResponse.getExample();
        OASDomainSearchResponse domainSearchResponse2 = new OASDomainSearchResponse();
        OASDomainSearchResponse domainSearchResponse3;

        System.assertEquals(false, domainSearchResponse1.equals(domainSearchResponse3));
        System.assertEquals(false, domainSearchResponse2.equals(domainSearchResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDomainSearchResponse domainSearchResponse1 = OASDomainSearchResponse.getExample();
        OASDomainSearchResponse domainSearchResponse2 = new OASDomainSearchResponse();

        System.assertEquals(domainSearchResponse1.hashCode(), domainSearchResponse1.hashCode());
        System.assertEquals(domainSearchResponse2.hashCode(), domainSearchResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDomainSearchResponse domainSearchResponse1 = OASDomainSearchResponse.getExample();
        OASDomainSearchResponse domainSearchResponse2 = OASDomainSearchResponse.getExample();
        OASDomainSearchResponse domainSearchResponse3 = new OASDomainSearchResponse();
        OASDomainSearchResponse domainSearchResponse4 = new OASDomainSearchResponse();

        System.assert(domainSearchResponse1.equals(domainSearchResponse2));
        System.assert(domainSearchResponse3.equals(domainSearchResponse4));
        System.assertEquals(domainSearchResponse1.hashCode(), domainSearchResponse2.hashCode());
        System.assertEquals(domainSearchResponse3.hashCode(), domainSearchResponse4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASDomainSearchResponse domainSearchResponse = new OASDomainSearchResponse();
        Map<String, String> x-property-mappings = domainSearchResponse.getx-property-mappings();
        System.assertEquals('responseText', x-property-mappings.get('response_text'));
        System.assertEquals('responseTime', x-property-mappings.get('response_time'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASDomainSearchResponse domainSearchResponse = new OASDomainSearchResponse();
        System.assertEquals(new List<Object>(), domainSearchResponse.lookup);
        System.assertEquals(new List<Object>(), domainSearchResponse.suggest);
        System.assertEquals(new List<String>(), domainSearchResponse.tlds);
        System.assertEquals(null, domainSearchResponse.success);
        System.assertEquals(null, domainSearchResponse.responseText);
        System.assertEquals(null, domainSearchResponse.responseTime);
    }
}
