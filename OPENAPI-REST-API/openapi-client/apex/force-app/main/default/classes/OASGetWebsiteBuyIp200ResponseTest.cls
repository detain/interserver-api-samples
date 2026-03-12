@isTest
private class OASGetWebsiteBuyIp200ResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASGetWebsiteBuyIp200Response getWebsiteBuyIp200Response1 = OASGetWebsiteBuyIp200Response.getExample();
        OASGetWebsiteBuyIp200Response getWebsiteBuyIp200Response2 = getWebsiteBuyIp200Response1;
        OASGetWebsiteBuyIp200Response getWebsiteBuyIp200Response3 = new OASGetWebsiteBuyIp200Response();
        OASGetWebsiteBuyIp200Response getWebsiteBuyIp200Response4 = getWebsiteBuyIp200Response3;

        System.assert(getWebsiteBuyIp200Response1.equals(getWebsiteBuyIp200Response2));
        System.assert(getWebsiteBuyIp200Response2.equals(getWebsiteBuyIp200Response1));
        System.assert(getWebsiteBuyIp200Response1.equals(getWebsiteBuyIp200Response1));
        System.assert(getWebsiteBuyIp200Response3.equals(getWebsiteBuyIp200Response4));
        System.assert(getWebsiteBuyIp200Response4.equals(getWebsiteBuyIp200Response3));
        System.assert(getWebsiteBuyIp200Response3.equals(getWebsiteBuyIp200Response3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASGetWebsiteBuyIp200Response getWebsiteBuyIp200Response1 = OASGetWebsiteBuyIp200Response.getExample();
        OASGetWebsiteBuyIp200Response getWebsiteBuyIp200Response2 = OASGetWebsiteBuyIp200Response.getExample();
        OASGetWebsiteBuyIp200Response getWebsiteBuyIp200Response3 = new OASGetWebsiteBuyIp200Response();
        OASGetWebsiteBuyIp200Response getWebsiteBuyIp200Response4 = new OASGetWebsiteBuyIp200Response();

        System.assert(getWebsiteBuyIp200Response1.equals(getWebsiteBuyIp200Response2));
        System.assert(getWebsiteBuyIp200Response2.equals(getWebsiteBuyIp200Response1));
        System.assert(getWebsiteBuyIp200Response3.equals(getWebsiteBuyIp200Response4));
        System.assert(getWebsiteBuyIp200Response4.equals(getWebsiteBuyIp200Response3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASGetWebsiteBuyIp200Response getWebsiteBuyIp200Response1 = OASGetWebsiteBuyIp200Response.getExample();
        OASGetWebsiteBuyIp200Response getWebsiteBuyIp200Response2 = new OASGetWebsiteBuyIp200Response();

        System.assertEquals(false, getWebsiteBuyIp200Response1.equals('foo'));
        System.assertEquals(false, getWebsiteBuyIp200Response2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASGetWebsiteBuyIp200Response getWebsiteBuyIp200Response1 = OASGetWebsiteBuyIp200Response.getExample();
        OASGetWebsiteBuyIp200Response getWebsiteBuyIp200Response2 = new OASGetWebsiteBuyIp200Response();
        OASGetWebsiteBuyIp200Response getWebsiteBuyIp200Response3;

        System.assertEquals(false, getWebsiteBuyIp200Response1.equals(getWebsiteBuyIp200Response3));
        System.assertEquals(false, getWebsiteBuyIp200Response2.equals(getWebsiteBuyIp200Response3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASGetWebsiteBuyIp200Response getWebsiteBuyIp200Response1 = OASGetWebsiteBuyIp200Response.getExample();
        OASGetWebsiteBuyIp200Response getWebsiteBuyIp200Response2 = new OASGetWebsiteBuyIp200Response();

        System.assertEquals(getWebsiteBuyIp200Response1.hashCode(), getWebsiteBuyIp200Response1.hashCode());
        System.assertEquals(getWebsiteBuyIp200Response2.hashCode(), getWebsiteBuyIp200Response2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASGetWebsiteBuyIp200Response getWebsiteBuyIp200Response1 = OASGetWebsiteBuyIp200Response.getExample();
        OASGetWebsiteBuyIp200Response getWebsiteBuyIp200Response2 = OASGetWebsiteBuyIp200Response.getExample();
        OASGetWebsiteBuyIp200Response getWebsiteBuyIp200Response3 = new OASGetWebsiteBuyIp200Response();
        OASGetWebsiteBuyIp200Response getWebsiteBuyIp200Response4 = new OASGetWebsiteBuyIp200Response();

        System.assert(getWebsiteBuyIp200Response1.equals(getWebsiteBuyIp200Response2));
        System.assert(getWebsiteBuyIp200Response3.equals(getWebsiteBuyIp200Response4));
        System.assertEquals(getWebsiteBuyIp200Response1.hashCode(), getWebsiteBuyIp200Response2.hashCode());
        System.assertEquals(getWebsiteBuyIp200Response3.hashCode(), getWebsiteBuyIp200Response4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASGetWebsiteBuyIp200Response getWebsiteBuyIp200Response = new OASGetWebsiteBuyIp200Response();
        System.assertEquals(new Map<String, String>(), getWebsiteBuyIp200Response.ips);
    }
}
