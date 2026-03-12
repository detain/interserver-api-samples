@isTest
private class OASScrubIpsDeleteRule500ResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASScrubIpsDeleteRule500Response scrubIpsDeleteRule500Response1 = OASScrubIpsDeleteRule500Response.getExample();
        OASScrubIpsDeleteRule500Response scrubIpsDeleteRule500Response2 = scrubIpsDeleteRule500Response1;
        OASScrubIpsDeleteRule500Response scrubIpsDeleteRule500Response3 = new OASScrubIpsDeleteRule500Response();
        OASScrubIpsDeleteRule500Response scrubIpsDeleteRule500Response4 = scrubIpsDeleteRule500Response3;

        System.assert(scrubIpsDeleteRule500Response1.equals(scrubIpsDeleteRule500Response2));
        System.assert(scrubIpsDeleteRule500Response2.equals(scrubIpsDeleteRule500Response1));
        System.assert(scrubIpsDeleteRule500Response1.equals(scrubIpsDeleteRule500Response1));
        System.assert(scrubIpsDeleteRule500Response3.equals(scrubIpsDeleteRule500Response4));
        System.assert(scrubIpsDeleteRule500Response4.equals(scrubIpsDeleteRule500Response3));
        System.assert(scrubIpsDeleteRule500Response3.equals(scrubIpsDeleteRule500Response3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASScrubIpsDeleteRule500Response scrubIpsDeleteRule500Response1 = OASScrubIpsDeleteRule500Response.getExample();
        OASScrubIpsDeleteRule500Response scrubIpsDeleteRule500Response2 = OASScrubIpsDeleteRule500Response.getExample();
        OASScrubIpsDeleteRule500Response scrubIpsDeleteRule500Response3 = new OASScrubIpsDeleteRule500Response();
        OASScrubIpsDeleteRule500Response scrubIpsDeleteRule500Response4 = new OASScrubIpsDeleteRule500Response();

        System.assert(scrubIpsDeleteRule500Response1.equals(scrubIpsDeleteRule500Response2));
        System.assert(scrubIpsDeleteRule500Response2.equals(scrubIpsDeleteRule500Response1));
        System.assert(scrubIpsDeleteRule500Response3.equals(scrubIpsDeleteRule500Response4));
        System.assert(scrubIpsDeleteRule500Response4.equals(scrubIpsDeleteRule500Response3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASScrubIpsDeleteRule500Response scrubIpsDeleteRule500Response1 = OASScrubIpsDeleteRule500Response.getExample();
        OASScrubIpsDeleteRule500Response scrubIpsDeleteRule500Response2 = new OASScrubIpsDeleteRule500Response();

        System.assertEquals(false, scrubIpsDeleteRule500Response1.equals('foo'));
        System.assertEquals(false, scrubIpsDeleteRule500Response2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASScrubIpsDeleteRule500Response scrubIpsDeleteRule500Response1 = OASScrubIpsDeleteRule500Response.getExample();
        OASScrubIpsDeleteRule500Response scrubIpsDeleteRule500Response2 = new OASScrubIpsDeleteRule500Response();
        OASScrubIpsDeleteRule500Response scrubIpsDeleteRule500Response3;

        System.assertEquals(false, scrubIpsDeleteRule500Response1.equals(scrubIpsDeleteRule500Response3));
        System.assertEquals(false, scrubIpsDeleteRule500Response2.equals(scrubIpsDeleteRule500Response3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASScrubIpsDeleteRule500Response scrubIpsDeleteRule500Response1 = OASScrubIpsDeleteRule500Response.getExample();
        OASScrubIpsDeleteRule500Response scrubIpsDeleteRule500Response2 = new OASScrubIpsDeleteRule500Response();

        System.assertEquals(scrubIpsDeleteRule500Response1.hashCode(), scrubIpsDeleteRule500Response1.hashCode());
        System.assertEquals(scrubIpsDeleteRule500Response2.hashCode(), scrubIpsDeleteRule500Response2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASScrubIpsDeleteRule500Response scrubIpsDeleteRule500Response1 = OASScrubIpsDeleteRule500Response.getExample();
        OASScrubIpsDeleteRule500Response scrubIpsDeleteRule500Response2 = OASScrubIpsDeleteRule500Response.getExample();
        OASScrubIpsDeleteRule500Response scrubIpsDeleteRule500Response3 = new OASScrubIpsDeleteRule500Response();
        OASScrubIpsDeleteRule500Response scrubIpsDeleteRule500Response4 = new OASScrubIpsDeleteRule500Response();

        System.assert(scrubIpsDeleteRule500Response1.equals(scrubIpsDeleteRule500Response2));
        System.assert(scrubIpsDeleteRule500Response3.equals(scrubIpsDeleteRule500Response4));
        System.assertEquals(scrubIpsDeleteRule500Response1.hashCode(), scrubIpsDeleteRule500Response2.hashCode());
        System.assertEquals(scrubIpsDeleteRule500Response3.hashCode(), scrubIpsDeleteRule500Response4.hashCode());
    }
}
