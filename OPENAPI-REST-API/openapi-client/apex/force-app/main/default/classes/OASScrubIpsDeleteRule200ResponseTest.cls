@isTest
private class OASScrubIpsDeleteRule200ResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASScrubIpsDeleteRule200Response scrubIpsDeleteRule200Response1 = OASScrubIpsDeleteRule200Response.getExample();
        OASScrubIpsDeleteRule200Response scrubIpsDeleteRule200Response2 = scrubIpsDeleteRule200Response1;
        OASScrubIpsDeleteRule200Response scrubIpsDeleteRule200Response3 = new OASScrubIpsDeleteRule200Response();
        OASScrubIpsDeleteRule200Response scrubIpsDeleteRule200Response4 = scrubIpsDeleteRule200Response3;

        System.assert(scrubIpsDeleteRule200Response1.equals(scrubIpsDeleteRule200Response2));
        System.assert(scrubIpsDeleteRule200Response2.equals(scrubIpsDeleteRule200Response1));
        System.assert(scrubIpsDeleteRule200Response1.equals(scrubIpsDeleteRule200Response1));
        System.assert(scrubIpsDeleteRule200Response3.equals(scrubIpsDeleteRule200Response4));
        System.assert(scrubIpsDeleteRule200Response4.equals(scrubIpsDeleteRule200Response3));
        System.assert(scrubIpsDeleteRule200Response3.equals(scrubIpsDeleteRule200Response3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASScrubIpsDeleteRule200Response scrubIpsDeleteRule200Response1 = OASScrubIpsDeleteRule200Response.getExample();
        OASScrubIpsDeleteRule200Response scrubIpsDeleteRule200Response2 = OASScrubIpsDeleteRule200Response.getExample();
        OASScrubIpsDeleteRule200Response scrubIpsDeleteRule200Response3 = new OASScrubIpsDeleteRule200Response();
        OASScrubIpsDeleteRule200Response scrubIpsDeleteRule200Response4 = new OASScrubIpsDeleteRule200Response();

        System.assert(scrubIpsDeleteRule200Response1.equals(scrubIpsDeleteRule200Response2));
        System.assert(scrubIpsDeleteRule200Response2.equals(scrubIpsDeleteRule200Response1));
        System.assert(scrubIpsDeleteRule200Response3.equals(scrubIpsDeleteRule200Response4));
        System.assert(scrubIpsDeleteRule200Response4.equals(scrubIpsDeleteRule200Response3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASScrubIpsDeleteRule200Response scrubIpsDeleteRule200Response1 = OASScrubIpsDeleteRule200Response.getExample();
        OASScrubIpsDeleteRule200Response scrubIpsDeleteRule200Response2 = new OASScrubIpsDeleteRule200Response();

        System.assertEquals(false, scrubIpsDeleteRule200Response1.equals('foo'));
        System.assertEquals(false, scrubIpsDeleteRule200Response2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASScrubIpsDeleteRule200Response scrubIpsDeleteRule200Response1 = OASScrubIpsDeleteRule200Response.getExample();
        OASScrubIpsDeleteRule200Response scrubIpsDeleteRule200Response2 = new OASScrubIpsDeleteRule200Response();
        OASScrubIpsDeleteRule200Response scrubIpsDeleteRule200Response3;

        System.assertEquals(false, scrubIpsDeleteRule200Response1.equals(scrubIpsDeleteRule200Response3));
        System.assertEquals(false, scrubIpsDeleteRule200Response2.equals(scrubIpsDeleteRule200Response3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASScrubIpsDeleteRule200Response scrubIpsDeleteRule200Response1 = OASScrubIpsDeleteRule200Response.getExample();
        OASScrubIpsDeleteRule200Response scrubIpsDeleteRule200Response2 = new OASScrubIpsDeleteRule200Response();

        System.assertEquals(scrubIpsDeleteRule200Response1.hashCode(), scrubIpsDeleteRule200Response1.hashCode());
        System.assertEquals(scrubIpsDeleteRule200Response2.hashCode(), scrubIpsDeleteRule200Response2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASScrubIpsDeleteRule200Response scrubIpsDeleteRule200Response1 = OASScrubIpsDeleteRule200Response.getExample();
        OASScrubIpsDeleteRule200Response scrubIpsDeleteRule200Response2 = OASScrubIpsDeleteRule200Response.getExample();
        OASScrubIpsDeleteRule200Response scrubIpsDeleteRule200Response3 = new OASScrubIpsDeleteRule200Response();
        OASScrubIpsDeleteRule200Response scrubIpsDeleteRule200Response4 = new OASScrubIpsDeleteRule200Response();

        System.assert(scrubIpsDeleteRule200Response1.equals(scrubIpsDeleteRule200Response2));
        System.assert(scrubIpsDeleteRule200Response3.equals(scrubIpsDeleteRule200Response4));
        System.assertEquals(scrubIpsDeleteRule200Response1.hashCode(), scrubIpsDeleteRule200Response2.hashCode());
        System.assertEquals(scrubIpsDeleteRule200Response3.hashCode(), scrubIpsDeleteRule200Response4.hashCode());
    }
}
