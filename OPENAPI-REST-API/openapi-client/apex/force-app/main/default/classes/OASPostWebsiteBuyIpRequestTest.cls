@isTest
private class OASPostWebsiteBuyIpRequestTest {
    @isTest
    private static void equalsSameInstance() {
        OASPostWebsiteBuyIpRequest postWebsiteBuyIpRequest1 = OASPostWebsiteBuyIpRequest.getExample();
        OASPostWebsiteBuyIpRequest postWebsiteBuyIpRequest2 = postWebsiteBuyIpRequest1;
        OASPostWebsiteBuyIpRequest postWebsiteBuyIpRequest3 = new OASPostWebsiteBuyIpRequest();
        OASPostWebsiteBuyIpRequest postWebsiteBuyIpRequest4 = postWebsiteBuyIpRequest3;

        System.assert(postWebsiteBuyIpRequest1.equals(postWebsiteBuyIpRequest2));
        System.assert(postWebsiteBuyIpRequest2.equals(postWebsiteBuyIpRequest1));
        System.assert(postWebsiteBuyIpRequest1.equals(postWebsiteBuyIpRequest1));
        System.assert(postWebsiteBuyIpRequest3.equals(postWebsiteBuyIpRequest4));
        System.assert(postWebsiteBuyIpRequest4.equals(postWebsiteBuyIpRequest3));
        System.assert(postWebsiteBuyIpRequest3.equals(postWebsiteBuyIpRequest3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASPostWebsiteBuyIpRequest postWebsiteBuyIpRequest1 = OASPostWebsiteBuyIpRequest.getExample();
        OASPostWebsiteBuyIpRequest postWebsiteBuyIpRequest2 = OASPostWebsiteBuyIpRequest.getExample();
        OASPostWebsiteBuyIpRequest postWebsiteBuyIpRequest3 = new OASPostWebsiteBuyIpRequest();
        OASPostWebsiteBuyIpRequest postWebsiteBuyIpRequest4 = new OASPostWebsiteBuyIpRequest();

        System.assert(postWebsiteBuyIpRequest1.equals(postWebsiteBuyIpRequest2));
        System.assert(postWebsiteBuyIpRequest2.equals(postWebsiteBuyIpRequest1));
        System.assert(postWebsiteBuyIpRequest3.equals(postWebsiteBuyIpRequest4));
        System.assert(postWebsiteBuyIpRequest4.equals(postWebsiteBuyIpRequest3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASPostWebsiteBuyIpRequest postWebsiteBuyIpRequest1 = OASPostWebsiteBuyIpRequest.getExample();
        OASPostWebsiteBuyIpRequest postWebsiteBuyIpRequest2 = new OASPostWebsiteBuyIpRequest();

        System.assertEquals(false, postWebsiteBuyIpRequest1.equals('foo'));
        System.assertEquals(false, postWebsiteBuyIpRequest2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASPostWebsiteBuyIpRequest postWebsiteBuyIpRequest1 = OASPostWebsiteBuyIpRequest.getExample();
        OASPostWebsiteBuyIpRequest postWebsiteBuyIpRequest2 = new OASPostWebsiteBuyIpRequest();
        OASPostWebsiteBuyIpRequest postWebsiteBuyIpRequest3;

        System.assertEquals(false, postWebsiteBuyIpRequest1.equals(postWebsiteBuyIpRequest3));
        System.assertEquals(false, postWebsiteBuyIpRequest2.equals(postWebsiteBuyIpRequest3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASPostWebsiteBuyIpRequest postWebsiteBuyIpRequest1 = OASPostWebsiteBuyIpRequest.getExample();
        OASPostWebsiteBuyIpRequest postWebsiteBuyIpRequest2 = new OASPostWebsiteBuyIpRequest();

        System.assertEquals(postWebsiteBuyIpRequest1.hashCode(), postWebsiteBuyIpRequest1.hashCode());
        System.assertEquals(postWebsiteBuyIpRequest2.hashCode(), postWebsiteBuyIpRequest2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASPostWebsiteBuyIpRequest postWebsiteBuyIpRequest1 = OASPostWebsiteBuyIpRequest.getExample();
        OASPostWebsiteBuyIpRequest postWebsiteBuyIpRequest2 = OASPostWebsiteBuyIpRequest.getExample();
        OASPostWebsiteBuyIpRequest postWebsiteBuyIpRequest3 = new OASPostWebsiteBuyIpRequest();
        OASPostWebsiteBuyIpRequest postWebsiteBuyIpRequest4 = new OASPostWebsiteBuyIpRequest();

        System.assert(postWebsiteBuyIpRequest1.equals(postWebsiteBuyIpRequest2));
        System.assert(postWebsiteBuyIpRequest3.equals(postWebsiteBuyIpRequest4));
        System.assertEquals(postWebsiteBuyIpRequest1.hashCode(), postWebsiteBuyIpRequest2.hashCode());
        System.assertEquals(postWebsiteBuyIpRequest3.hashCode(), postWebsiteBuyIpRequest4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASPostWebsiteBuyIpRequest postWebsiteBuyIpRequest = new OASPostWebsiteBuyIpRequest();
        System.assertEquals(new Map<String, String>(), postWebsiteBuyIpRequest.ips);
    }
}
