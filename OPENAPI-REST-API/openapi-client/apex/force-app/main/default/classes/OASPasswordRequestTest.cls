@isTest
private class OASPasswordRequestTest {
    @isTest
    private static void equalsSameInstance() {
        OASPasswordRequest passwordRequest1 = OASPasswordRequest.getExample();
        OASPasswordRequest passwordRequest2 = passwordRequest1;
        OASPasswordRequest passwordRequest3 = new OASPasswordRequest();
        OASPasswordRequest passwordRequest4 = passwordRequest3;

        System.assert(passwordRequest1.equals(passwordRequest2));
        System.assert(passwordRequest2.equals(passwordRequest1));
        System.assert(passwordRequest1.equals(passwordRequest1));
        System.assert(passwordRequest3.equals(passwordRequest4));
        System.assert(passwordRequest4.equals(passwordRequest3));
        System.assert(passwordRequest3.equals(passwordRequest3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASPasswordRequest passwordRequest1 = OASPasswordRequest.getExample();
        OASPasswordRequest passwordRequest2 = OASPasswordRequest.getExample();
        OASPasswordRequest passwordRequest3 = new OASPasswordRequest();
        OASPasswordRequest passwordRequest4 = new OASPasswordRequest();

        System.assert(passwordRequest1.equals(passwordRequest2));
        System.assert(passwordRequest2.equals(passwordRequest1));
        System.assert(passwordRequest3.equals(passwordRequest4));
        System.assert(passwordRequest4.equals(passwordRequest3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASPasswordRequest passwordRequest1 = OASPasswordRequest.getExample();
        OASPasswordRequest passwordRequest2 = new OASPasswordRequest();

        System.assertEquals(false, passwordRequest1.equals('foo'));
        System.assertEquals(false, passwordRequest2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASPasswordRequest passwordRequest1 = OASPasswordRequest.getExample();
        OASPasswordRequest passwordRequest2 = new OASPasswordRequest();
        OASPasswordRequest passwordRequest3;

        System.assertEquals(false, passwordRequest1.equals(passwordRequest3));
        System.assertEquals(false, passwordRequest2.equals(passwordRequest3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASPasswordRequest passwordRequest1 = OASPasswordRequest.getExample();
        OASPasswordRequest passwordRequest2 = new OASPasswordRequest();

        System.assertEquals(passwordRequest1.hashCode(), passwordRequest1.hashCode());
        System.assertEquals(passwordRequest2.hashCode(), passwordRequest2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASPasswordRequest passwordRequest1 = OASPasswordRequest.getExample();
        OASPasswordRequest passwordRequest2 = OASPasswordRequest.getExample();
        OASPasswordRequest passwordRequest3 = new OASPasswordRequest();
        OASPasswordRequest passwordRequest4 = new OASPasswordRequest();

        System.assert(passwordRequest1.equals(passwordRequest2));
        System.assert(passwordRequest3.equals(passwordRequest4));
        System.assertEquals(passwordRequest1.hashCode(), passwordRequest2.hashCode());
        System.assertEquals(passwordRequest3.hashCode(), passwordRequest4.hashCode());
    }
}
