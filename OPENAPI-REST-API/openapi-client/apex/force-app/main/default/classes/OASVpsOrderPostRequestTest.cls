@isTest
private class OASVpsOrderPostRequestTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsOrderPostRequest vpsOrderPostRequest1 = OASVpsOrderPostRequest.getExample();
        OASVpsOrderPostRequest vpsOrderPostRequest2 = vpsOrderPostRequest1;
        OASVpsOrderPostRequest vpsOrderPostRequest3 = new OASVpsOrderPostRequest();
        OASVpsOrderPostRequest vpsOrderPostRequest4 = vpsOrderPostRequest3;

        System.assert(vpsOrderPostRequest1.equals(vpsOrderPostRequest2));
        System.assert(vpsOrderPostRequest2.equals(vpsOrderPostRequest1));
        System.assert(vpsOrderPostRequest1.equals(vpsOrderPostRequest1));
        System.assert(vpsOrderPostRequest3.equals(vpsOrderPostRequest4));
        System.assert(vpsOrderPostRequest4.equals(vpsOrderPostRequest3));
        System.assert(vpsOrderPostRequest3.equals(vpsOrderPostRequest3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsOrderPostRequest vpsOrderPostRequest1 = OASVpsOrderPostRequest.getExample();
        OASVpsOrderPostRequest vpsOrderPostRequest2 = OASVpsOrderPostRequest.getExample();
        OASVpsOrderPostRequest vpsOrderPostRequest3 = new OASVpsOrderPostRequest();
        OASVpsOrderPostRequest vpsOrderPostRequest4 = new OASVpsOrderPostRequest();

        System.assert(vpsOrderPostRequest1.equals(vpsOrderPostRequest2));
        System.assert(vpsOrderPostRequest2.equals(vpsOrderPostRequest1));
        System.assert(vpsOrderPostRequest3.equals(vpsOrderPostRequest4));
        System.assert(vpsOrderPostRequest4.equals(vpsOrderPostRequest3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsOrderPostRequest vpsOrderPostRequest1 = OASVpsOrderPostRequest.getExample();
        OASVpsOrderPostRequest vpsOrderPostRequest2 = new OASVpsOrderPostRequest();

        System.assertEquals(false, vpsOrderPostRequest1.equals('foo'));
        System.assertEquals(false, vpsOrderPostRequest2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsOrderPostRequest vpsOrderPostRequest1 = OASVpsOrderPostRequest.getExample();
        OASVpsOrderPostRequest vpsOrderPostRequest2 = new OASVpsOrderPostRequest();
        OASVpsOrderPostRequest vpsOrderPostRequest3;

        System.assertEquals(false, vpsOrderPostRequest1.equals(vpsOrderPostRequest3));
        System.assertEquals(false, vpsOrderPostRequest2.equals(vpsOrderPostRequest3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsOrderPostRequest vpsOrderPostRequest1 = OASVpsOrderPostRequest.getExample();
        OASVpsOrderPostRequest vpsOrderPostRequest2 = new OASVpsOrderPostRequest();

        System.assertEquals(vpsOrderPostRequest1.hashCode(), vpsOrderPostRequest1.hashCode());
        System.assertEquals(vpsOrderPostRequest2.hashCode(), vpsOrderPostRequest2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsOrderPostRequest vpsOrderPostRequest1 = OASVpsOrderPostRequest.getExample();
        OASVpsOrderPostRequest vpsOrderPostRequest2 = OASVpsOrderPostRequest.getExample();
        OASVpsOrderPostRequest vpsOrderPostRequest3 = new OASVpsOrderPostRequest();
        OASVpsOrderPostRequest vpsOrderPostRequest4 = new OASVpsOrderPostRequest();

        System.assert(vpsOrderPostRequest1.equals(vpsOrderPostRequest2));
        System.assert(vpsOrderPostRequest3.equals(vpsOrderPostRequest4));
        System.assertEquals(vpsOrderPostRequest1.hashCode(), vpsOrderPostRequest2.hashCode());
        System.assertEquals(vpsOrderPostRequest3.hashCode(), vpsOrderPostRequest4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASVpsOrderPostRequest vpsOrderPostRequest = new OASVpsOrderPostRequest();
        System.assertEquals(1, vpsOrderPostRequest.slices);
        System.assertEquals(1, vpsOrderPostRequest.period);
        System.assertEquals(1, vpsOrderPostRequest.location);
        System.assertEquals('', vpsOrderPostRequest.hostname);
        System.assertEquals('', vpsOrderPostRequest.coupon);
        System.assertEquals('', vpsOrderPostRequest.comment);
        System.assertEquals(null, vpsOrderPostRequest.osDistro);
        System.assertEquals(null, vpsOrderPostRequest.vpsPlatform);
        System.assertEquals(null, vpsOrderPostRequest.osVersion);
        System.assertEquals(null, vpsOrderPostRequest.rootpass);
        System.assertEquals(null, vpsOrderPostRequest.controlpanel);
    }
}
