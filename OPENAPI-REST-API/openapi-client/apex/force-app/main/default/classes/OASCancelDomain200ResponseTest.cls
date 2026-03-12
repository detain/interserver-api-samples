@isTest
private class OASCancelDomain200ResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASCancelDomain200Response cancelDomain200Response1 = OASCancelDomain200Response.getExample();
        OASCancelDomain200Response cancelDomain200Response2 = cancelDomain200Response1;
        OASCancelDomain200Response cancelDomain200Response3 = new OASCancelDomain200Response();
        OASCancelDomain200Response cancelDomain200Response4 = cancelDomain200Response3;

        System.assert(cancelDomain200Response1.equals(cancelDomain200Response2));
        System.assert(cancelDomain200Response2.equals(cancelDomain200Response1));
        System.assert(cancelDomain200Response1.equals(cancelDomain200Response1));
        System.assert(cancelDomain200Response3.equals(cancelDomain200Response4));
        System.assert(cancelDomain200Response4.equals(cancelDomain200Response3));
        System.assert(cancelDomain200Response3.equals(cancelDomain200Response3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASCancelDomain200Response cancelDomain200Response1 = OASCancelDomain200Response.getExample();
        OASCancelDomain200Response cancelDomain200Response2 = OASCancelDomain200Response.getExample();
        OASCancelDomain200Response cancelDomain200Response3 = new OASCancelDomain200Response();
        OASCancelDomain200Response cancelDomain200Response4 = new OASCancelDomain200Response();

        System.assert(cancelDomain200Response1.equals(cancelDomain200Response2));
        System.assert(cancelDomain200Response2.equals(cancelDomain200Response1));
        System.assert(cancelDomain200Response3.equals(cancelDomain200Response4));
        System.assert(cancelDomain200Response4.equals(cancelDomain200Response3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASCancelDomain200Response cancelDomain200Response1 = OASCancelDomain200Response.getExample();
        OASCancelDomain200Response cancelDomain200Response2 = new OASCancelDomain200Response();

        System.assertEquals(false, cancelDomain200Response1.equals('foo'));
        System.assertEquals(false, cancelDomain200Response2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASCancelDomain200Response cancelDomain200Response1 = OASCancelDomain200Response.getExample();
        OASCancelDomain200Response cancelDomain200Response2 = new OASCancelDomain200Response();
        OASCancelDomain200Response cancelDomain200Response3;

        System.assertEquals(false, cancelDomain200Response1.equals(cancelDomain200Response3));
        System.assertEquals(false, cancelDomain200Response2.equals(cancelDomain200Response3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASCancelDomain200Response cancelDomain200Response1 = OASCancelDomain200Response.getExample();
        OASCancelDomain200Response cancelDomain200Response2 = new OASCancelDomain200Response();

        System.assertEquals(cancelDomain200Response1.hashCode(), cancelDomain200Response1.hashCode());
        System.assertEquals(cancelDomain200Response2.hashCode(), cancelDomain200Response2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASCancelDomain200Response cancelDomain200Response1 = OASCancelDomain200Response.getExample();
        OASCancelDomain200Response cancelDomain200Response2 = OASCancelDomain200Response.getExample();
        OASCancelDomain200Response cancelDomain200Response3 = new OASCancelDomain200Response();
        OASCancelDomain200Response cancelDomain200Response4 = new OASCancelDomain200Response();

        System.assert(cancelDomain200Response1.equals(cancelDomain200Response2));
        System.assert(cancelDomain200Response3.equals(cancelDomain200Response4));
        System.assertEquals(cancelDomain200Response1.hashCode(), cancelDomain200Response2.hashCode());
        System.assertEquals(cancelDomain200Response3.hashCode(), cancelDomain200Response4.hashCode());
    }
}
