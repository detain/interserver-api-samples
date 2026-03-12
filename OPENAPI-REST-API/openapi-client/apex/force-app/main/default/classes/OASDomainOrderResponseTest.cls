@isTest
private class OASDomainOrderResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASDomainOrderResponse domainOrderResponse1 = OASDomainOrderResponse.getExample();
        OASDomainOrderResponse domainOrderResponse2 = domainOrderResponse1;
        OASDomainOrderResponse domainOrderResponse3 = new OASDomainOrderResponse();
        OASDomainOrderResponse domainOrderResponse4 = domainOrderResponse3;

        System.assert(domainOrderResponse1.equals(domainOrderResponse2));
        System.assert(domainOrderResponse2.equals(domainOrderResponse1));
        System.assert(domainOrderResponse1.equals(domainOrderResponse1));
        System.assert(domainOrderResponse3.equals(domainOrderResponse4));
        System.assert(domainOrderResponse4.equals(domainOrderResponse3));
        System.assert(domainOrderResponse3.equals(domainOrderResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDomainOrderResponse domainOrderResponse1 = OASDomainOrderResponse.getExample();
        OASDomainOrderResponse domainOrderResponse2 = OASDomainOrderResponse.getExample();
        OASDomainOrderResponse domainOrderResponse3 = new OASDomainOrderResponse();
        OASDomainOrderResponse domainOrderResponse4 = new OASDomainOrderResponse();

        System.assert(domainOrderResponse1.equals(domainOrderResponse2));
        System.assert(domainOrderResponse2.equals(domainOrderResponse1));
        System.assert(domainOrderResponse3.equals(domainOrderResponse4));
        System.assert(domainOrderResponse4.equals(domainOrderResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDomainOrderResponse domainOrderResponse1 = OASDomainOrderResponse.getExample();
        OASDomainOrderResponse domainOrderResponse2 = new OASDomainOrderResponse();

        System.assertEquals(false, domainOrderResponse1.equals('foo'));
        System.assertEquals(false, domainOrderResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDomainOrderResponse domainOrderResponse1 = OASDomainOrderResponse.getExample();
        OASDomainOrderResponse domainOrderResponse2 = new OASDomainOrderResponse();
        OASDomainOrderResponse domainOrderResponse3;

        System.assertEquals(false, domainOrderResponse1.equals(domainOrderResponse3));
        System.assertEquals(false, domainOrderResponse2.equals(domainOrderResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDomainOrderResponse domainOrderResponse1 = OASDomainOrderResponse.getExample();
        OASDomainOrderResponse domainOrderResponse2 = new OASDomainOrderResponse();

        System.assertEquals(domainOrderResponse1.hashCode(), domainOrderResponse1.hashCode());
        System.assertEquals(domainOrderResponse2.hashCode(), domainOrderResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDomainOrderResponse domainOrderResponse1 = OASDomainOrderResponse.getExample();
        OASDomainOrderResponse domainOrderResponse2 = OASDomainOrderResponse.getExample();
        OASDomainOrderResponse domainOrderResponse3 = new OASDomainOrderResponse();
        OASDomainOrderResponse domainOrderResponse4 = new OASDomainOrderResponse();

        System.assert(domainOrderResponse1.equals(domainOrderResponse2));
        System.assert(domainOrderResponse3.equals(domainOrderResponse4));
        System.assertEquals(domainOrderResponse1.hashCode(), domainOrderResponse2.hashCode());
        System.assertEquals(domainOrderResponse3.hashCode(), domainOrderResponse4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASDomainOrderResponse domainOrderResponse = new OASDomainOrderResponse();
        Map<String, String> x-property-mappings = domainOrderResponse.getx-property-mappings();
        System.assertEquals('oPSVersion', x-property-mappings.get('_OPS_version'));
        System.assertEquals('isSuccess', x-property-mappings.get('is_success'));
        System.assertEquals('responseText', x-property-mappings.get('response_text'));
        System.assertEquals('r_object', x-property-mappings.get('object'));
        System.assertEquals('responseCode', x-property-mappings.get('response_code'));
    }
}
