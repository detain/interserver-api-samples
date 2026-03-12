@isTest
private class OASPlaceBuyNowServerRequestTest {
    @isTest
    private static void equalsSameInstance() {
        OASPlaceBuyNowServerRequest placeBuyNowServerRequest1 = OASPlaceBuyNowServerRequest.getExample();
        OASPlaceBuyNowServerRequest placeBuyNowServerRequest2 = placeBuyNowServerRequest1;
        OASPlaceBuyNowServerRequest placeBuyNowServerRequest3 = new OASPlaceBuyNowServerRequest();
        OASPlaceBuyNowServerRequest placeBuyNowServerRequest4 = placeBuyNowServerRequest3;

        System.assert(placeBuyNowServerRequest1.equals(placeBuyNowServerRequest2));
        System.assert(placeBuyNowServerRequest2.equals(placeBuyNowServerRequest1));
        System.assert(placeBuyNowServerRequest1.equals(placeBuyNowServerRequest1));
        System.assert(placeBuyNowServerRequest3.equals(placeBuyNowServerRequest4));
        System.assert(placeBuyNowServerRequest4.equals(placeBuyNowServerRequest3));
        System.assert(placeBuyNowServerRequest3.equals(placeBuyNowServerRequest3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASPlaceBuyNowServerRequest placeBuyNowServerRequest1 = OASPlaceBuyNowServerRequest.getExample();
        OASPlaceBuyNowServerRequest placeBuyNowServerRequest2 = OASPlaceBuyNowServerRequest.getExample();
        OASPlaceBuyNowServerRequest placeBuyNowServerRequest3 = new OASPlaceBuyNowServerRequest();
        OASPlaceBuyNowServerRequest placeBuyNowServerRequest4 = new OASPlaceBuyNowServerRequest();

        System.assert(placeBuyNowServerRequest1.equals(placeBuyNowServerRequest2));
        System.assert(placeBuyNowServerRequest2.equals(placeBuyNowServerRequest1));
        System.assert(placeBuyNowServerRequest3.equals(placeBuyNowServerRequest4));
        System.assert(placeBuyNowServerRequest4.equals(placeBuyNowServerRequest3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASPlaceBuyNowServerRequest placeBuyNowServerRequest1 = OASPlaceBuyNowServerRequest.getExample();
        OASPlaceBuyNowServerRequest placeBuyNowServerRequest2 = new OASPlaceBuyNowServerRequest();

        System.assertEquals(false, placeBuyNowServerRequest1.equals('foo'));
        System.assertEquals(false, placeBuyNowServerRequest2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASPlaceBuyNowServerRequest placeBuyNowServerRequest1 = OASPlaceBuyNowServerRequest.getExample();
        OASPlaceBuyNowServerRequest placeBuyNowServerRequest2 = new OASPlaceBuyNowServerRequest();
        OASPlaceBuyNowServerRequest placeBuyNowServerRequest3;

        System.assertEquals(false, placeBuyNowServerRequest1.equals(placeBuyNowServerRequest3));
        System.assertEquals(false, placeBuyNowServerRequest2.equals(placeBuyNowServerRequest3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASPlaceBuyNowServerRequest placeBuyNowServerRequest1 = OASPlaceBuyNowServerRequest.getExample();
        OASPlaceBuyNowServerRequest placeBuyNowServerRequest2 = new OASPlaceBuyNowServerRequest();

        System.assertEquals(placeBuyNowServerRequest1.hashCode(), placeBuyNowServerRequest1.hashCode());
        System.assertEquals(placeBuyNowServerRequest2.hashCode(), placeBuyNowServerRequest2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASPlaceBuyNowServerRequest placeBuyNowServerRequest1 = OASPlaceBuyNowServerRequest.getExample();
        OASPlaceBuyNowServerRequest placeBuyNowServerRequest2 = OASPlaceBuyNowServerRequest.getExample();
        OASPlaceBuyNowServerRequest placeBuyNowServerRequest3 = new OASPlaceBuyNowServerRequest();
        OASPlaceBuyNowServerRequest placeBuyNowServerRequest4 = new OASPlaceBuyNowServerRequest();

        System.assert(placeBuyNowServerRequest1.equals(placeBuyNowServerRequest2));
        System.assert(placeBuyNowServerRequest3.equals(placeBuyNowServerRequest4));
        System.assertEquals(placeBuyNowServerRequest1.hashCode(), placeBuyNowServerRequest2.hashCode());
        System.assertEquals(placeBuyNowServerRequest3.hashCode(), placeBuyNowServerRequest4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASPlaceBuyNowServerRequest placeBuyNowServerRequest = new OASPlaceBuyNowServerRequest();
        Map<String, String> x-property-mappings = placeBuyNowServerRequest.getx-property-mappings();
        System.assertEquals('serverId', x-property-mappings.get('server_id'));
        System.assertEquals('serverHostname', x-property-mappings.get('server_hostname'));
        System.assertEquals('serverRootPassword', x-property-mappings.get('server_root_password'));
    }
}
