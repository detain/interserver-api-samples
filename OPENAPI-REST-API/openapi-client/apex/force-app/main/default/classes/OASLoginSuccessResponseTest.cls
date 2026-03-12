@isTest
private class OASLoginSuccessResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASLoginSuccessResponse loginSuccessResponse1 = OASLoginSuccessResponse.getExample();
        OASLoginSuccessResponse loginSuccessResponse2 = loginSuccessResponse1;
        OASLoginSuccessResponse loginSuccessResponse3 = new OASLoginSuccessResponse();
        OASLoginSuccessResponse loginSuccessResponse4 = loginSuccessResponse3;

        System.assert(loginSuccessResponse1.equals(loginSuccessResponse2));
        System.assert(loginSuccessResponse2.equals(loginSuccessResponse1));
        System.assert(loginSuccessResponse1.equals(loginSuccessResponse1));
        System.assert(loginSuccessResponse3.equals(loginSuccessResponse4));
        System.assert(loginSuccessResponse4.equals(loginSuccessResponse3));
        System.assert(loginSuccessResponse3.equals(loginSuccessResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASLoginSuccessResponse loginSuccessResponse1 = OASLoginSuccessResponse.getExample();
        OASLoginSuccessResponse loginSuccessResponse2 = OASLoginSuccessResponse.getExample();
        OASLoginSuccessResponse loginSuccessResponse3 = new OASLoginSuccessResponse();
        OASLoginSuccessResponse loginSuccessResponse4 = new OASLoginSuccessResponse();

        System.assert(loginSuccessResponse1.equals(loginSuccessResponse2));
        System.assert(loginSuccessResponse2.equals(loginSuccessResponse1));
        System.assert(loginSuccessResponse3.equals(loginSuccessResponse4));
        System.assert(loginSuccessResponse4.equals(loginSuccessResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASLoginSuccessResponse loginSuccessResponse1 = OASLoginSuccessResponse.getExample();
        OASLoginSuccessResponse loginSuccessResponse2 = new OASLoginSuccessResponse();

        System.assertEquals(false, loginSuccessResponse1.equals('foo'));
        System.assertEquals(false, loginSuccessResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASLoginSuccessResponse loginSuccessResponse1 = OASLoginSuccessResponse.getExample();
        OASLoginSuccessResponse loginSuccessResponse2 = new OASLoginSuccessResponse();
        OASLoginSuccessResponse loginSuccessResponse3;

        System.assertEquals(false, loginSuccessResponse1.equals(loginSuccessResponse3));
        System.assertEquals(false, loginSuccessResponse2.equals(loginSuccessResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASLoginSuccessResponse loginSuccessResponse1 = OASLoginSuccessResponse.getExample();
        OASLoginSuccessResponse loginSuccessResponse2 = new OASLoginSuccessResponse();

        System.assertEquals(loginSuccessResponse1.hashCode(), loginSuccessResponse1.hashCode());
        System.assertEquals(loginSuccessResponse2.hashCode(), loginSuccessResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASLoginSuccessResponse loginSuccessResponse1 = OASLoginSuccessResponse.getExample();
        OASLoginSuccessResponse loginSuccessResponse2 = OASLoginSuccessResponse.getExample();
        OASLoginSuccessResponse loginSuccessResponse3 = new OASLoginSuccessResponse();
        OASLoginSuccessResponse loginSuccessResponse4 = new OASLoginSuccessResponse();

        System.assert(loginSuccessResponse1.equals(loginSuccessResponse2));
        System.assert(loginSuccessResponse3.equals(loginSuccessResponse4));
        System.assertEquals(loginSuccessResponse1.hashCode(), loginSuccessResponse2.hashCode());
        System.assertEquals(loginSuccessResponse3.hashCode(), loginSuccessResponse4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASLoginSuccessResponse loginSuccessResponse = new OASLoginSuccessResponse();
        Map<String, String> x-property-mappings = loginSuccessResponse.getx-property-mappings();
        System.assertEquals('accountId', x-property-mappings.get('account_id'));
        System.assertEquals('accountLid', x-property-mappings.get('account_lid'));
    }
}
