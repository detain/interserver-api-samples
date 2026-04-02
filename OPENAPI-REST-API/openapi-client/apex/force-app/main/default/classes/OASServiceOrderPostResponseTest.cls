@isTest
private class OASServiceOrderPostResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASServiceOrderPostResponse serviceOrderPostResponse1 = OASServiceOrderPostResponse.getExample();
        OASServiceOrderPostResponse serviceOrderPostResponse2 = serviceOrderPostResponse1;
        OASServiceOrderPostResponse serviceOrderPostResponse3 = new OASServiceOrderPostResponse();
        OASServiceOrderPostResponse serviceOrderPostResponse4 = serviceOrderPostResponse3;

        System.assert(serviceOrderPostResponse1.equals(serviceOrderPostResponse2));
        System.assert(serviceOrderPostResponse2.equals(serviceOrderPostResponse1));
        System.assert(serviceOrderPostResponse1.equals(serviceOrderPostResponse1));
        System.assert(serviceOrderPostResponse3.equals(serviceOrderPostResponse4));
        System.assert(serviceOrderPostResponse4.equals(serviceOrderPostResponse3));
        System.assert(serviceOrderPostResponse3.equals(serviceOrderPostResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServiceOrderPostResponse serviceOrderPostResponse1 = OASServiceOrderPostResponse.getExample();
        OASServiceOrderPostResponse serviceOrderPostResponse2 = OASServiceOrderPostResponse.getExample();
        OASServiceOrderPostResponse serviceOrderPostResponse3 = new OASServiceOrderPostResponse();
        OASServiceOrderPostResponse serviceOrderPostResponse4 = new OASServiceOrderPostResponse();

        System.assert(serviceOrderPostResponse1.equals(serviceOrderPostResponse2));
        System.assert(serviceOrderPostResponse2.equals(serviceOrderPostResponse1));
        System.assert(serviceOrderPostResponse3.equals(serviceOrderPostResponse4));
        System.assert(serviceOrderPostResponse4.equals(serviceOrderPostResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServiceOrderPostResponse serviceOrderPostResponse1 = OASServiceOrderPostResponse.getExample();
        OASServiceOrderPostResponse serviceOrderPostResponse2 = new OASServiceOrderPostResponse();

        System.assertEquals(false, serviceOrderPostResponse1.equals('foo'));
        System.assertEquals(false, serviceOrderPostResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServiceOrderPostResponse serviceOrderPostResponse1 = OASServiceOrderPostResponse.getExample();
        OASServiceOrderPostResponse serviceOrderPostResponse2 = new OASServiceOrderPostResponse();
        OASServiceOrderPostResponse serviceOrderPostResponse3;

        System.assertEquals(false, serviceOrderPostResponse1.equals(serviceOrderPostResponse3));
        System.assertEquals(false, serviceOrderPostResponse2.equals(serviceOrderPostResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServiceOrderPostResponse serviceOrderPostResponse1 = OASServiceOrderPostResponse.getExample();
        OASServiceOrderPostResponse serviceOrderPostResponse2 = new OASServiceOrderPostResponse();

        System.assertEquals(serviceOrderPostResponse1.hashCode(), serviceOrderPostResponse1.hashCode());
        System.assertEquals(serviceOrderPostResponse2.hashCode(), serviceOrderPostResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServiceOrderPostResponse serviceOrderPostResponse1 = OASServiceOrderPostResponse.getExample();
        OASServiceOrderPostResponse serviceOrderPostResponse2 = OASServiceOrderPostResponse.getExample();
        OASServiceOrderPostResponse serviceOrderPostResponse3 = new OASServiceOrderPostResponse();
        OASServiceOrderPostResponse serviceOrderPostResponse4 = new OASServiceOrderPostResponse();

        System.assert(serviceOrderPostResponse1.equals(serviceOrderPostResponse2));
        System.assert(serviceOrderPostResponse3.equals(serviceOrderPostResponse4));
        System.assertEquals(serviceOrderPostResponse1.hashCode(), serviceOrderPostResponse2.hashCode());
        System.assertEquals(serviceOrderPostResponse3.hashCode(), serviceOrderPostResponse4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASServiceOrderPostResponse serviceOrderPostResponse = new OASServiceOrderPostResponse();
        Map<String, String> x-property-mappings = serviceOrderPostResponse.getx-property-mappings();
        System.assertEquals('r_continue', x-property-mappings.get('continue'));
        System.assertEquals('totalCost', x-property-mappings.get('total_cost'));
        System.assertEquals('realIids', x-property-mappings.get('real_iids'));
        System.assertEquals('invoiceDescription', x-property-mappings.get('invoice_description'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASServiceOrderPostResponse serviceOrderPostResponse = new OASServiceOrderPostResponse();
        System.assertEquals(new List<String>(), serviceOrderPostResponse.errors);
        System.assertEquals(new List<String>(), serviceOrderPostResponse.iids);
        System.assertEquals(new List<String>(), serviceOrderPostResponse.realIids);
        System.assertEquals(null, serviceOrderPostResponse.r_continue);
        System.assertEquals(null, serviceOrderPostResponse.totalCost);
        System.assertEquals(null, serviceOrderPostResponse.iid);
        System.assertEquals(null, serviceOrderPostResponse.serviceId);
        System.assertEquals(null, serviceOrderPostResponse.invoiceDescription);
    }
}
