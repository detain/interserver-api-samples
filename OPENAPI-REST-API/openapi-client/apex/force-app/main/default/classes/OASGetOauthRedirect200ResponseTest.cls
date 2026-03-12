@isTest
private class OASGetOauthRedirect200ResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASGetOauthRedirect200Response getOauthRedirect200Response1 = OASGetOauthRedirect200Response.getExample();
        OASGetOauthRedirect200Response getOauthRedirect200Response2 = getOauthRedirect200Response1;
        OASGetOauthRedirect200Response getOauthRedirect200Response3 = new OASGetOauthRedirect200Response();
        OASGetOauthRedirect200Response getOauthRedirect200Response4 = getOauthRedirect200Response3;

        System.assert(getOauthRedirect200Response1.equals(getOauthRedirect200Response2));
        System.assert(getOauthRedirect200Response2.equals(getOauthRedirect200Response1));
        System.assert(getOauthRedirect200Response1.equals(getOauthRedirect200Response1));
        System.assert(getOauthRedirect200Response3.equals(getOauthRedirect200Response4));
        System.assert(getOauthRedirect200Response4.equals(getOauthRedirect200Response3));
        System.assert(getOauthRedirect200Response3.equals(getOauthRedirect200Response3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASGetOauthRedirect200Response getOauthRedirect200Response1 = OASGetOauthRedirect200Response.getExample();
        OASGetOauthRedirect200Response getOauthRedirect200Response2 = OASGetOauthRedirect200Response.getExample();
        OASGetOauthRedirect200Response getOauthRedirect200Response3 = new OASGetOauthRedirect200Response();
        OASGetOauthRedirect200Response getOauthRedirect200Response4 = new OASGetOauthRedirect200Response();

        System.assert(getOauthRedirect200Response1.equals(getOauthRedirect200Response2));
        System.assert(getOauthRedirect200Response2.equals(getOauthRedirect200Response1));
        System.assert(getOauthRedirect200Response3.equals(getOauthRedirect200Response4));
        System.assert(getOauthRedirect200Response4.equals(getOauthRedirect200Response3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASGetOauthRedirect200Response getOauthRedirect200Response1 = OASGetOauthRedirect200Response.getExample();
        OASGetOauthRedirect200Response getOauthRedirect200Response2 = new OASGetOauthRedirect200Response();

        System.assertEquals(false, getOauthRedirect200Response1.equals('foo'));
        System.assertEquals(false, getOauthRedirect200Response2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASGetOauthRedirect200Response getOauthRedirect200Response1 = OASGetOauthRedirect200Response.getExample();
        OASGetOauthRedirect200Response getOauthRedirect200Response2 = new OASGetOauthRedirect200Response();
        OASGetOauthRedirect200Response getOauthRedirect200Response3;

        System.assertEquals(false, getOauthRedirect200Response1.equals(getOauthRedirect200Response3));
        System.assertEquals(false, getOauthRedirect200Response2.equals(getOauthRedirect200Response3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASGetOauthRedirect200Response getOauthRedirect200Response1 = OASGetOauthRedirect200Response.getExample();
        OASGetOauthRedirect200Response getOauthRedirect200Response2 = new OASGetOauthRedirect200Response();

        System.assertEquals(getOauthRedirect200Response1.hashCode(), getOauthRedirect200Response1.hashCode());
        System.assertEquals(getOauthRedirect200Response2.hashCode(), getOauthRedirect200Response2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASGetOauthRedirect200Response getOauthRedirect200Response1 = OASGetOauthRedirect200Response.getExample();
        OASGetOauthRedirect200Response getOauthRedirect200Response2 = OASGetOauthRedirect200Response.getExample();
        OASGetOauthRedirect200Response getOauthRedirect200Response3 = new OASGetOauthRedirect200Response();
        OASGetOauthRedirect200Response getOauthRedirect200Response4 = new OASGetOauthRedirect200Response();

        System.assert(getOauthRedirect200Response1.equals(getOauthRedirect200Response2));
        System.assert(getOauthRedirect200Response3.equals(getOauthRedirect200Response4));
        System.assertEquals(getOauthRedirect200Response1.hashCode(), getOauthRedirect200Response2.hashCode());
        System.assertEquals(getOauthRedirect200Response3.hashCode(), getOauthRedirect200Response4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASGetOauthRedirect200Response getOauthRedirect200Response = new OASGetOauthRedirect200Response();
        Map<String, String> x-property-mappings = getOauthRedirect200Response.getx-property-mappings();
        System.assertEquals('redirectUrl', x-property-mappings.get('redirect_url'));
    }
}
