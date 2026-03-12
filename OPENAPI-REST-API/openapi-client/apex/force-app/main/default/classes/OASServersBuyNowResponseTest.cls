@isTest
private class OASServersBuyNowResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASServersBuyNowResponse serversBuyNowResponse1 = OASServersBuyNowResponse.getExample();
        OASServersBuyNowResponse serversBuyNowResponse2 = serversBuyNowResponse1;
        OASServersBuyNowResponse serversBuyNowResponse3 = new OASServersBuyNowResponse();
        OASServersBuyNowResponse serversBuyNowResponse4 = serversBuyNowResponse3;

        System.assert(serversBuyNowResponse1.equals(serversBuyNowResponse2));
        System.assert(serversBuyNowResponse2.equals(serversBuyNowResponse1));
        System.assert(serversBuyNowResponse1.equals(serversBuyNowResponse1));
        System.assert(serversBuyNowResponse3.equals(serversBuyNowResponse4));
        System.assert(serversBuyNowResponse4.equals(serversBuyNowResponse3));
        System.assert(serversBuyNowResponse3.equals(serversBuyNowResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServersBuyNowResponse serversBuyNowResponse1 = OASServersBuyNowResponse.getExample();
        OASServersBuyNowResponse serversBuyNowResponse2 = OASServersBuyNowResponse.getExample();
        OASServersBuyNowResponse serversBuyNowResponse3 = new OASServersBuyNowResponse();
        OASServersBuyNowResponse serversBuyNowResponse4 = new OASServersBuyNowResponse();

        System.assert(serversBuyNowResponse1.equals(serversBuyNowResponse2));
        System.assert(serversBuyNowResponse2.equals(serversBuyNowResponse1));
        System.assert(serversBuyNowResponse3.equals(serversBuyNowResponse4));
        System.assert(serversBuyNowResponse4.equals(serversBuyNowResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServersBuyNowResponse serversBuyNowResponse1 = OASServersBuyNowResponse.getExample();
        OASServersBuyNowResponse serversBuyNowResponse2 = new OASServersBuyNowResponse();

        System.assertEquals(false, serversBuyNowResponse1.equals('foo'));
        System.assertEquals(false, serversBuyNowResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServersBuyNowResponse serversBuyNowResponse1 = OASServersBuyNowResponse.getExample();
        OASServersBuyNowResponse serversBuyNowResponse2 = new OASServersBuyNowResponse();
        OASServersBuyNowResponse serversBuyNowResponse3;

        System.assertEquals(false, serversBuyNowResponse1.equals(serversBuyNowResponse3));
        System.assertEquals(false, serversBuyNowResponse2.equals(serversBuyNowResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServersBuyNowResponse serversBuyNowResponse1 = OASServersBuyNowResponse.getExample();
        OASServersBuyNowResponse serversBuyNowResponse2 = new OASServersBuyNowResponse();

        System.assertEquals(serversBuyNowResponse1.hashCode(), serversBuyNowResponse1.hashCode());
        System.assertEquals(serversBuyNowResponse2.hashCode(), serversBuyNowResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServersBuyNowResponse serversBuyNowResponse1 = OASServersBuyNowResponse.getExample();
        OASServersBuyNowResponse serversBuyNowResponse2 = OASServersBuyNowResponse.getExample();
        OASServersBuyNowResponse serversBuyNowResponse3 = new OASServersBuyNowResponse();
        OASServersBuyNowResponse serversBuyNowResponse4 = new OASServersBuyNowResponse();

        System.assert(serversBuyNowResponse1.equals(serversBuyNowResponse2));
        System.assert(serversBuyNowResponse3.equals(serversBuyNowResponse4));
        System.assertEquals(serversBuyNowResponse1.hashCode(), serversBuyNowResponse2.hashCode());
        System.assertEquals(serversBuyNowResponse3.hashCode(), serversBuyNowResponse4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASServersBuyNowResponse serversBuyNowResponse = new OASServersBuyNowResponse();
        Map<String, String> x-property-mappings = serversBuyNowResponse.getx-property-mappings();
        System.assertEquals('orderDetails', x-property-mappings.get('order_details'));
    }
}
