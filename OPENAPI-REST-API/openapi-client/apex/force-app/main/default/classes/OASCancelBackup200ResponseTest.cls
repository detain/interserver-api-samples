@isTest
private class OASCancelBackup200ResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASCancelBackup200Response cancelBackup200Response1 = OASCancelBackup200Response.getExample();
        OASCancelBackup200Response cancelBackup200Response2 = cancelBackup200Response1;
        OASCancelBackup200Response cancelBackup200Response3 = new OASCancelBackup200Response();
        OASCancelBackup200Response cancelBackup200Response4 = cancelBackup200Response3;

        System.assert(cancelBackup200Response1.equals(cancelBackup200Response2));
        System.assert(cancelBackup200Response2.equals(cancelBackup200Response1));
        System.assert(cancelBackup200Response1.equals(cancelBackup200Response1));
        System.assert(cancelBackup200Response3.equals(cancelBackup200Response4));
        System.assert(cancelBackup200Response4.equals(cancelBackup200Response3));
        System.assert(cancelBackup200Response3.equals(cancelBackup200Response3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASCancelBackup200Response cancelBackup200Response1 = OASCancelBackup200Response.getExample();
        OASCancelBackup200Response cancelBackup200Response2 = OASCancelBackup200Response.getExample();
        OASCancelBackup200Response cancelBackup200Response3 = new OASCancelBackup200Response();
        OASCancelBackup200Response cancelBackup200Response4 = new OASCancelBackup200Response();

        System.assert(cancelBackup200Response1.equals(cancelBackup200Response2));
        System.assert(cancelBackup200Response2.equals(cancelBackup200Response1));
        System.assert(cancelBackup200Response3.equals(cancelBackup200Response4));
        System.assert(cancelBackup200Response4.equals(cancelBackup200Response3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASCancelBackup200Response cancelBackup200Response1 = OASCancelBackup200Response.getExample();
        OASCancelBackup200Response cancelBackup200Response2 = new OASCancelBackup200Response();

        System.assertEquals(false, cancelBackup200Response1.equals('foo'));
        System.assertEquals(false, cancelBackup200Response2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASCancelBackup200Response cancelBackup200Response1 = OASCancelBackup200Response.getExample();
        OASCancelBackup200Response cancelBackup200Response2 = new OASCancelBackup200Response();
        OASCancelBackup200Response cancelBackup200Response3;

        System.assertEquals(false, cancelBackup200Response1.equals(cancelBackup200Response3));
        System.assertEquals(false, cancelBackup200Response2.equals(cancelBackup200Response3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASCancelBackup200Response cancelBackup200Response1 = OASCancelBackup200Response.getExample();
        OASCancelBackup200Response cancelBackup200Response2 = new OASCancelBackup200Response();

        System.assertEquals(cancelBackup200Response1.hashCode(), cancelBackup200Response1.hashCode());
        System.assertEquals(cancelBackup200Response2.hashCode(), cancelBackup200Response2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASCancelBackup200Response cancelBackup200Response1 = OASCancelBackup200Response.getExample();
        OASCancelBackup200Response cancelBackup200Response2 = OASCancelBackup200Response.getExample();
        OASCancelBackup200Response cancelBackup200Response3 = new OASCancelBackup200Response();
        OASCancelBackup200Response cancelBackup200Response4 = new OASCancelBackup200Response();

        System.assert(cancelBackup200Response1.equals(cancelBackup200Response2));
        System.assert(cancelBackup200Response3.equals(cancelBackup200Response4));
        System.assertEquals(cancelBackup200Response1.hashCode(), cancelBackup200Response2.hashCode());
        System.assertEquals(cancelBackup200Response3.hashCode(), cancelBackup200Response4.hashCode());
    }
}
