@isTest
private class OASPostWebsiteBuyIp200ResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASPostWebsiteBuyIp200Response postWebsiteBuyIp200Response1 = OASPostWebsiteBuyIp200Response.getExample();
        OASPostWebsiteBuyIp200Response postWebsiteBuyIp200Response2 = postWebsiteBuyIp200Response1;
        OASPostWebsiteBuyIp200Response postWebsiteBuyIp200Response3 = new OASPostWebsiteBuyIp200Response();
        OASPostWebsiteBuyIp200Response postWebsiteBuyIp200Response4 = postWebsiteBuyIp200Response3;

        System.assert(postWebsiteBuyIp200Response1.equals(postWebsiteBuyIp200Response2));
        System.assert(postWebsiteBuyIp200Response2.equals(postWebsiteBuyIp200Response1));
        System.assert(postWebsiteBuyIp200Response1.equals(postWebsiteBuyIp200Response1));
        System.assert(postWebsiteBuyIp200Response3.equals(postWebsiteBuyIp200Response4));
        System.assert(postWebsiteBuyIp200Response4.equals(postWebsiteBuyIp200Response3));
        System.assert(postWebsiteBuyIp200Response3.equals(postWebsiteBuyIp200Response3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASPostWebsiteBuyIp200Response postWebsiteBuyIp200Response1 = OASPostWebsiteBuyIp200Response.getExample();
        OASPostWebsiteBuyIp200Response postWebsiteBuyIp200Response2 = OASPostWebsiteBuyIp200Response.getExample();
        OASPostWebsiteBuyIp200Response postWebsiteBuyIp200Response3 = new OASPostWebsiteBuyIp200Response();
        OASPostWebsiteBuyIp200Response postWebsiteBuyIp200Response4 = new OASPostWebsiteBuyIp200Response();

        System.assert(postWebsiteBuyIp200Response1.equals(postWebsiteBuyIp200Response2));
        System.assert(postWebsiteBuyIp200Response2.equals(postWebsiteBuyIp200Response1));
        System.assert(postWebsiteBuyIp200Response3.equals(postWebsiteBuyIp200Response4));
        System.assert(postWebsiteBuyIp200Response4.equals(postWebsiteBuyIp200Response3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASPostWebsiteBuyIp200Response postWebsiteBuyIp200Response1 = OASPostWebsiteBuyIp200Response.getExample();
        OASPostWebsiteBuyIp200Response postWebsiteBuyIp200Response2 = new OASPostWebsiteBuyIp200Response();

        System.assertEquals(false, postWebsiteBuyIp200Response1.equals('foo'));
        System.assertEquals(false, postWebsiteBuyIp200Response2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASPostWebsiteBuyIp200Response postWebsiteBuyIp200Response1 = OASPostWebsiteBuyIp200Response.getExample();
        OASPostWebsiteBuyIp200Response postWebsiteBuyIp200Response2 = new OASPostWebsiteBuyIp200Response();
        OASPostWebsiteBuyIp200Response postWebsiteBuyIp200Response3;

        System.assertEquals(false, postWebsiteBuyIp200Response1.equals(postWebsiteBuyIp200Response3));
        System.assertEquals(false, postWebsiteBuyIp200Response2.equals(postWebsiteBuyIp200Response3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASPostWebsiteBuyIp200Response postWebsiteBuyIp200Response1 = OASPostWebsiteBuyIp200Response.getExample();
        OASPostWebsiteBuyIp200Response postWebsiteBuyIp200Response2 = new OASPostWebsiteBuyIp200Response();

        System.assertEquals(postWebsiteBuyIp200Response1.hashCode(), postWebsiteBuyIp200Response1.hashCode());
        System.assertEquals(postWebsiteBuyIp200Response2.hashCode(), postWebsiteBuyIp200Response2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASPostWebsiteBuyIp200Response postWebsiteBuyIp200Response1 = OASPostWebsiteBuyIp200Response.getExample();
        OASPostWebsiteBuyIp200Response postWebsiteBuyIp200Response2 = OASPostWebsiteBuyIp200Response.getExample();
        OASPostWebsiteBuyIp200Response postWebsiteBuyIp200Response3 = new OASPostWebsiteBuyIp200Response();
        OASPostWebsiteBuyIp200Response postWebsiteBuyIp200Response4 = new OASPostWebsiteBuyIp200Response();

        System.assert(postWebsiteBuyIp200Response1.equals(postWebsiteBuyIp200Response2));
        System.assert(postWebsiteBuyIp200Response3.equals(postWebsiteBuyIp200Response4));
        System.assertEquals(postWebsiteBuyIp200Response1.hashCode(), postWebsiteBuyIp200Response2.hashCode());
        System.assertEquals(postWebsiteBuyIp200Response3.hashCode(), postWebsiteBuyIp200Response4.hashCode());
    }
}
