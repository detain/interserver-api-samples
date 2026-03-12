@isTest
private class OASPostOauthCallback200ResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASPostOauthCallback200Response postOauthCallback200Response1 = OASPostOauthCallback200Response.getExample();
        OASPostOauthCallback200Response postOauthCallback200Response2 = postOauthCallback200Response1;
        OASPostOauthCallback200Response postOauthCallback200Response3 = new OASPostOauthCallback200Response();
        OASPostOauthCallback200Response postOauthCallback200Response4 = postOauthCallback200Response3;

        System.assert(postOauthCallback200Response1.equals(postOauthCallback200Response2));
        System.assert(postOauthCallback200Response2.equals(postOauthCallback200Response1));
        System.assert(postOauthCallback200Response1.equals(postOauthCallback200Response1));
        System.assert(postOauthCallback200Response3.equals(postOauthCallback200Response4));
        System.assert(postOauthCallback200Response4.equals(postOauthCallback200Response3));
        System.assert(postOauthCallback200Response3.equals(postOauthCallback200Response3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASPostOauthCallback200Response postOauthCallback200Response1 = OASPostOauthCallback200Response.getExample();
        OASPostOauthCallback200Response postOauthCallback200Response2 = OASPostOauthCallback200Response.getExample();
        OASPostOauthCallback200Response postOauthCallback200Response3 = new OASPostOauthCallback200Response();
        OASPostOauthCallback200Response postOauthCallback200Response4 = new OASPostOauthCallback200Response();

        System.assert(postOauthCallback200Response1.equals(postOauthCallback200Response2));
        System.assert(postOauthCallback200Response2.equals(postOauthCallback200Response1));
        System.assert(postOauthCallback200Response3.equals(postOauthCallback200Response4));
        System.assert(postOauthCallback200Response4.equals(postOauthCallback200Response3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASPostOauthCallback200Response postOauthCallback200Response1 = OASPostOauthCallback200Response.getExample();
        OASPostOauthCallback200Response postOauthCallback200Response2 = new OASPostOauthCallback200Response();

        System.assertEquals(false, postOauthCallback200Response1.equals('foo'));
        System.assertEquals(false, postOauthCallback200Response2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASPostOauthCallback200Response postOauthCallback200Response1 = OASPostOauthCallback200Response.getExample();
        OASPostOauthCallback200Response postOauthCallback200Response2 = new OASPostOauthCallback200Response();
        OASPostOauthCallback200Response postOauthCallback200Response3;

        System.assertEquals(false, postOauthCallback200Response1.equals(postOauthCallback200Response3));
        System.assertEquals(false, postOauthCallback200Response2.equals(postOauthCallback200Response3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASPostOauthCallback200Response postOauthCallback200Response1 = OASPostOauthCallback200Response.getExample();
        OASPostOauthCallback200Response postOauthCallback200Response2 = new OASPostOauthCallback200Response();

        System.assertEquals(postOauthCallback200Response1.hashCode(), postOauthCallback200Response1.hashCode());
        System.assertEquals(postOauthCallback200Response2.hashCode(), postOauthCallback200Response2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASPostOauthCallback200Response postOauthCallback200Response1 = OASPostOauthCallback200Response.getExample();
        OASPostOauthCallback200Response postOauthCallback200Response2 = OASPostOauthCallback200Response.getExample();
        OASPostOauthCallback200Response postOauthCallback200Response3 = new OASPostOauthCallback200Response();
        OASPostOauthCallback200Response postOauthCallback200Response4 = new OASPostOauthCallback200Response();

        System.assert(postOauthCallback200Response1.equals(postOauthCallback200Response2));
        System.assert(postOauthCallback200Response3.equals(postOauthCallback200Response4));
        System.assertEquals(postOauthCallback200Response1.hashCode(), postOauthCallback200Response2.hashCode());
        System.assertEquals(postOauthCallback200Response3.hashCode(), postOauthCallback200Response4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASPostOauthCallback200Response postOauthCallback200Response = new OASPostOauthCallback200Response();
        Map<String, String> x-property-mappings = postOauthCallback200Response.getx-property-mappings();
        System.assertEquals('accountId', x-property-mappings.get('account_id'));
        System.assertEquals('errorCode', x-property-mappings.get('error_code'));
    }
}
