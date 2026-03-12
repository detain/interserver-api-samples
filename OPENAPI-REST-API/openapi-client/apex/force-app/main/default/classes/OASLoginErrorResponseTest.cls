@isTest
private class OASLoginErrorResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASLoginErrorResponse loginErrorResponse1 = OASLoginErrorResponse.getExample();
        OASLoginErrorResponse loginErrorResponse2 = loginErrorResponse1;
        OASLoginErrorResponse loginErrorResponse3 = new OASLoginErrorResponse();
        OASLoginErrorResponse loginErrorResponse4 = loginErrorResponse3;

        System.assert(loginErrorResponse1.equals(loginErrorResponse2));
        System.assert(loginErrorResponse2.equals(loginErrorResponse1));
        System.assert(loginErrorResponse1.equals(loginErrorResponse1));
        System.assert(loginErrorResponse3.equals(loginErrorResponse4));
        System.assert(loginErrorResponse4.equals(loginErrorResponse3));
        System.assert(loginErrorResponse3.equals(loginErrorResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASLoginErrorResponse loginErrorResponse1 = OASLoginErrorResponse.getExample();
        OASLoginErrorResponse loginErrorResponse2 = OASLoginErrorResponse.getExample();
        OASLoginErrorResponse loginErrorResponse3 = new OASLoginErrorResponse();
        OASLoginErrorResponse loginErrorResponse4 = new OASLoginErrorResponse();

        System.assert(loginErrorResponse1.equals(loginErrorResponse2));
        System.assert(loginErrorResponse2.equals(loginErrorResponse1));
        System.assert(loginErrorResponse3.equals(loginErrorResponse4));
        System.assert(loginErrorResponse4.equals(loginErrorResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASLoginErrorResponse loginErrorResponse1 = OASLoginErrorResponse.getExample();
        OASLoginErrorResponse loginErrorResponse2 = new OASLoginErrorResponse();

        System.assertEquals(false, loginErrorResponse1.equals('foo'));
        System.assertEquals(false, loginErrorResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASLoginErrorResponse loginErrorResponse1 = OASLoginErrorResponse.getExample();
        OASLoginErrorResponse loginErrorResponse2 = new OASLoginErrorResponse();
        OASLoginErrorResponse loginErrorResponse3;

        System.assertEquals(false, loginErrorResponse1.equals(loginErrorResponse3));
        System.assertEquals(false, loginErrorResponse2.equals(loginErrorResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASLoginErrorResponse loginErrorResponse1 = OASLoginErrorResponse.getExample();
        OASLoginErrorResponse loginErrorResponse2 = new OASLoginErrorResponse();

        System.assertEquals(loginErrorResponse1.hashCode(), loginErrorResponse1.hashCode());
        System.assertEquals(loginErrorResponse2.hashCode(), loginErrorResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASLoginErrorResponse loginErrorResponse1 = OASLoginErrorResponse.getExample();
        OASLoginErrorResponse loginErrorResponse2 = OASLoginErrorResponse.getExample();
        OASLoginErrorResponse loginErrorResponse3 = new OASLoginErrorResponse();
        OASLoginErrorResponse loginErrorResponse4 = new OASLoginErrorResponse();

        System.assert(loginErrorResponse1.equals(loginErrorResponse2));
        System.assert(loginErrorResponse3.equals(loginErrorResponse4));
        System.assertEquals(loginErrorResponse1.hashCode(), loginErrorResponse2.hashCode());
        System.assertEquals(loginErrorResponse3.hashCode(), loginErrorResponse4.hashCode());
    }
}
