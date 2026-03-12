@isTest
private class OASScrubIpsDeleteRule400ResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASScrubIpsDeleteRule400Response scrubIpsDeleteRule400Response1 = OASScrubIpsDeleteRule400Response.getExample();
        OASScrubIpsDeleteRule400Response scrubIpsDeleteRule400Response2 = scrubIpsDeleteRule400Response1;
        OASScrubIpsDeleteRule400Response scrubIpsDeleteRule400Response3 = new OASScrubIpsDeleteRule400Response();
        OASScrubIpsDeleteRule400Response scrubIpsDeleteRule400Response4 = scrubIpsDeleteRule400Response3;

        System.assert(scrubIpsDeleteRule400Response1.equals(scrubIpsDeleteRule400Response2));
        System.assert(scrubIpsDeleteRule400Response2.equals(scrubIpsDeleteRule400Response1));
        System.assert(scrubIpsDeleteRule400Response1.equals(scrubIpsDeleteRule400Response1));
        System.assert(scrubIpsDeleteRule400Response3.equals(scrubIpsDeleteRule400Response4));
        System.assert(scrubIpsDeleteRule400Response4.equals(scrubIpsDeleteRule400Response3));
        System.assert(scrubIpsDeleteRule400Response3.equals(scrubIpsDeleteRule400Response3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASScrubIpsDeleteRule400Response scrubIpsDeleteRule400Response1 = OASScrubIpsDeleteRule400Response.getExample();
        OASScrubIpsDeleteRule400Response scrubIpsDeleteRule400Response2 = OASScrubIpsDeleteRule400Response.getExample();
        OASScrubIpsDeleteRule400Response scrubIpsDeleteRule400Response3 = new OASScrubIpsDeleteRule400Response();
        OASScrubIpsDeleteRule400Response scrubIpsDeleteRule400Response4 = new OASScrubIpsDeleteRule400Response();

        System.assert(scrubIpsDeleteRule400Response1.equals(scrubIpsDeleteRule400Response2));
        System.assert(scrubIpsDeleteRule400Response2.equals(scrubIpsDeleteRule400Response1));
        System.assert(scrubIpsDeleteRule400Response3.equals(scrubIpsDeleteRule400Response4));
        System.assert(scrubIpsDeleteRule400Response4.equals(scrubIpsDeleteRule400Response3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASScrubIpsDeleteRule400Response scrubIpsDeleteRule400Response1 = OASScrubIpsDeleteRule400Response.getExample();
        OASScrubIpsDeleteRule400Response scrubIpsDeleteRule400Response2 = new OASScrubIpsDeleteRule400Response();

        System.assertEquals(false, scrubIpsDeleteRule400Response1.equals('foo'));
        System.assertEquals(false, scrubIpsDeleteRule400Response2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASScrubIpsDeleteRule400Response scrubIpsDeleteRule400Response1 = OASScrubIpsDeleteRule400Response.getExample();
        OASScrubIpsDeleteRule400Response scrubIpsDeleteRule400Response2 = new OASScrubIpsDeleteRule400Response();
        OASScrubIpsDeleteRule400Response scrubIpsDeleteRule400Response3;

        System.assertEquals(false, scrubIpsDeleteRule400Response1.equals(scrubIpsDeleteRule400Response3));
        System.assertEquals(false, scrubIpsDeleteRule400Response2.equals(scrubIpsDeleteRule400Response3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASScrubIpsDeleteRule400Response scrubIpsDeleteRule400Response1 = OASScrubIpsDeleteRule400Response.getExample();
        OASScrubIpsDeleteRule400Response scrubIpsDeleteRule400Response2 = new OASScrubIpsDeleteRule400Response();

        System.assertEquals(scrubIpsDeleteRule400Response1.hashCode(), scrubIpsDeleteRule400Response1.hashCode());
        System.assertEquals(scrubIpsDeleteRule400Response2.hashCode(), scrubIpsDeleteRule400Response2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASScrubIpsDeleteRule400Response scrubIpsDeleteRule400Response1 = OASScrubIpsDeleteRule400Response.getExample();
        OASScrubIpsDeleteRule400Response scrubIpsDeleteRule400Response2 = OASScrubIpsDeleteRule400Response.getExample();
        OASScrubIpsDeleteRule400Response scrubIpsDeleteRule400Response3 = new OASScrubIpsDeleteRule400Response();
        OASScrubIpsDeleteRule400Response scrubIpsDeleteRule400Response4 = new OASScrubIpsDeleteRule400Response();

        System.assert(scrubIpsDeleteRule400Response1.equals(scrubIpsDeleteRule400Response2));
        System.assert(scrubIpsDeleteRule400Response3.equals(scrubIpsDeleteRule400Response4));
        System.assertEquals(scrubIpsDeleteRule400Response1.hashCode(), scrubIpsDeleteRule400Response2.hashCode());
        System.assertEquals(scrubIpsDeleteRule400Response3.hashCode(), scrubIpsDeleteRule400Response4.hashCode());
    }
}
