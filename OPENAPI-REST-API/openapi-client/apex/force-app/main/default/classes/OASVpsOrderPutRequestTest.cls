@isTest
private class OASVpsOrderPutRequestTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsOrderPutRequest vpsOrderPutRequest1 = OASVpsOrderPutRequest.getExample();
        OASVpsOrderPutRequest vpsOrderPutRequest2 = vpsOrderPutRequest1;
        OASVpsOrderPutRequest vpsOrderPutRequest3 = new OASVpsOrderPutRequest();
        OASVpsOrderPutRequest vpsOrderPutRequest4 = vpsOrderPutRequest3;

        System.assert(vpsOrderPutRequest1.equals(vpsOrderPutRequest2));
        System.assert(vpsOrderPutRequest2.equals(vpsOrderPutRequest1));
        System.assert(vpsOrderPutRequest1.equals(vpsOrderPutRequest1));
        System.assert(vpsOrderPutRequest3.equals(vpsOrderPutRequest4));
        System.assert(vpsOrderPutRequest4.equals(vpsOrderPutRequest3));
        System.assert(vpsOrderPutRequest3.equals(vpsOrderPutRequest3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsOrderPutRequest vpsOrderPutRequest1 = OASVpsOrderPutRequest.getExample();
        OASVpsOrderPutRequest vpsOrderPutRequest2 = OASVpsOrderPutRequest.getExample();
        OASVpsOrderPutRequest vpsOrderPutRequest3 = new OASVpsOrderPutRequest();
        OASVpsOrderPutRequest vpsOrderPutRequest4 = new OASVpsOrderPutRequest();

        System.assert(vpsOrderPutRequest1.equals(vpsOrderPutRequest2));
        System.assert(vpsOrderPutRequest2.equals(vpsOrderPutRequest1));
        System.assert(vpsOrderPutRequest3.equals(vpsOrderPutRequest4));
        System.assert(vpsOrderPutRequest4.equals(vpsOrderPutRequest3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsOrderPutRequest vpsOrderPutRequest1 = OASVpsOrderPutRequest.getExample();
        OASVpsOrderPutRequest vpsOrderPutRequest2 = new OASVpsOrderPutRequest();

        System.assertEquals(false, vpsOrderPutRequest1.equals('foo'));
        System.assertEquals(false, vpsOrderPutRequest2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsOrderPutRequest vpsOrderPutRequest1 = OASVpsOrderPutRequest.getExample();
        OASVpsOrderPutRequest vpsOrderPutRequest2 = new OASVpsOrderPutRequest();
        OASVpsOrderPutRequest vpsOrderPutRequest3;

        System.assertEquals(false, vpsOrderPutRequest1.equals(vpsOrderPutRequest3));
        System.assertEquals(false, vpsOrderPutRequest2.equals(vpsOrderPutRequest3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsOrderPutRequest vpsOrderPutRequest1 = OASVpsOrderPutRequest.getExample();
        OASVpsOrderPutRequest vpsOrderPutRequest2 = new OASVpsOrderPutRequest();

        System.assertEquals(vpsOrderPutRequest1.hashCode(), vpsOrderPutRequest1.hashCode());
        System.assertEquals(vpsOrderPutRequest2.hashCode(), vpsOrderPutRequest2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsOrderPutRequest vpsOrderPutRequest1 = OASVpsOrderPutRequest.getExample();
        OASVpsOrderPutRequest vpsOrderPutRequest2 = OASVpsOrderPutRequest.getExample();
        OASVpsOrderPutRequest vpsOrderPutRequest3 = new OASVpsOrderPutRequest();
        OASVpsOrderPutRequest vpsOrderPutRequest4 = new OASVpsOrderPutRequest();

        System.assert(vpsOrderPutRequest1.equals(vpsOrderPutRequest2));
        System.assert(vpsOrderPutRequest3.equals(vpsOrderPutRequest4));
        System.assertEquals(vpsOrderPutRequest1.hashCode(), vpsOrderPutRequest2.hashCode());
        System.assertEquals(vpsOrderPutRequest3.hashCode(), vpsOrderPutRequest4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASVpsOrderPutRequest vpsOrderPutRequest = new OASVpsOrderPutRequest();
        System.assertEquals(1, vpsOrderPutRequest.slices);
        System.assertEquals(1, vpsOrderPutRequest.period);
        System.assertEquals(1, vpsOrderPutRequest.location);
        System.assertEquals('', vpsOrderPutRequest.hostname);
        System.assertEquals('', vpsOrderPutRequest.coupon);
        System.assertEquals('', vpsOrderPutRequest.comment);
        System.assertEquals(null, vpsOrderPutRequest.osDistro);
        System.assertEquals(null, vpsOrderPutRequest.vpsPlatform);
        System.assertEquals(null, vpsOrderPutRequest.osVersion);
        System.assertEquals(null, vpsOrderPutRequest.rootpass);
        System.assertEquals(null, vpsOrderPutRequest.controlpanel);
    }
}
