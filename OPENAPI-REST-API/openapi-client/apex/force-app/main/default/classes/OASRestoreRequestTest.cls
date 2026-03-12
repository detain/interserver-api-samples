@isTest
private class OASRestoreRequestTest {
    @isTest
    private static void equalsSameInstance() {
        OASRestoreRequest restoreRequest1 = OASRestoreRequest.getExample();
        OASRestoreRequest restoreRequest2 = restoreRequest1;
        OASRestoreRequest restoreRequest3 = new OASRestoreRequest();
        OASRestoreRequest restoreRequest4 = restoreRequest3;

        System.assert(restoreRequest1.equals(restoreRequest2));
        System.assert(restoreRequest2.equals(restoreRequest1));
        System.assert(restoreRequest1.equals(restoreRequest1));
        System.assert(restoreRequest3.equals(restoreRequest4));
        System.assert(restoreRequest4.equals(restoreRequest3));
        System.assert(restoreRequest3.equals(restoreRequest3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASRestoreRequest restoreRequest1 = OASRestoreRequest.getExample();
        OASRestoreRequest restoreRequest2 = OASRestoreRequest.getExample();
        OASRestoreRequest restoreRequest3 = new OASRestoreRequest();
        OASRestoreRequest restoreRequest4 = new OASRestoreRequest();

        System.assert(restoreRequest1.equals(restoreRequest2));
        System.assert(restoreRequest2.equals(restoreRequest1));
        System.assert(restoreRequest3.equals(restoreRequest4));
        System.assert(restoreRequest4.equals(restoreRequest3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASRestoreRequest restoreRequest1 = OASRestoreRequest.getExample();
        OASRestoreRequest restoreRequest2 = new OASRestoreRequest();

        System.assertEquals(false, restoreRequest1.equals('foo'));
        System.assertEquals(false, restoreRequest2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASRestoreRequest restoreRequest1 = OASRestoreRequest.getExample();
        OASRestoreRequest restoreRequest2 = new OASRestoreRequest();
        OASRestoreRequest restoreRequest3;

        System.assertEquals(false, restoreRequest1.equals(restoreRequest3));
        System.assertEquals(false, restoreRequest2.equals(restoreRequest3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASRestoreRequest restoreRequest1 = OASRestoreRequest.getExample();
        OASRestoreRequest restoreRequest2 = new OASRestoreRequest();

        System.assertEquals(restoreRequest1.hashCode(), restoreRequest1.hashCode());
        System.assertEquals(restoreRequest2.hashCode(), restoreRequest2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASRestoreRequest restoreRequest1 = OASRestoreRequest.getExample();
        OASRestoreRequest restoreRequest2 = OASRestoreRequest.getExample();
        OASRestoreRequest restoreRequest3 = new OASRestoreRequest();
        OASRestoreRequest restoreRequest4 = new OASRestoreRequest();

        System.assert(restoreRequest1.equals(restoreRequest2));
        System.assert(restoreRequest3.equals(restoreRequest4));
        System.assertEquals(restoreRequest1.hashCode(), restoreRequest2.hashCode());
        System.assertEquals(restoreRequest3.hashCode(), restoreRequest4.hashCode());
    }
}
