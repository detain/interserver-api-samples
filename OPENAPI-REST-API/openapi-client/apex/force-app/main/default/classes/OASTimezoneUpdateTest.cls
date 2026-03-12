@isTest
private class OASTimezoneUpdateTest {
    @isTest
    private static void equalsSameInstance() {
        OASTimezoneUpdate timezoneUpdate1 = OASTimezoneUpdate.getExample();
        OASTimezoneUpdate timezoneUpdate2 = timezoneUpdate1;
        OASTimezoneUpdate timezoneUpdate3 = new OASTimezoneUpdate();
        OASTimezoneUpdate timezoneUpdate4 = timezoneUpdate3;

        System.assert(timezoneUpdate1.equals(timezoneUpdate2));
        System.assert(timezoneUpdate2.equals(timezoneUpdate1));
        System.assert(timezoneUpdate1.equals(timezoneUpdate1));
        System.assert(timezoneUpdate3.equals(timezoneUpdate4));
        System.assert(timezoneUpdate4.equals(timezoneUpdate3));
        System.assert(timezoneUpdate3.equals(timezoneUpdate3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASTimezoneUpdate timezoneUpdate1 = OASTimezoneUpdate.getExample();
        OASTimezoneUpdate timezoneUpdate2 = OASTimezoneUpdate.getExample();
        OASTimezoneUpdate timezoneUpdate3 = new OASTimezoneUpdate();
        OASTimezoneUpdate timezoneUpdate4 = new OASTimezoneUpdate();

        System.assert(timezoneUpdate1.equals(timezoneUpdate2));
        System.assert(timezoneUpdate2.equals(timezoneUpdate1));
        System.assert(timezoneUpdate3.equals(timezoneUpdate4));
        System.assert(timezoneUpdate4.equals(timezoneUpdate3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASTimezoneUpdate timezoneUpdate1 = OASTimezoneUpdate.getExample();
        OASTimezoneUpdate timezoneUpdate2 = new OASTimezoneUpdate();

        System.assertEquals(false, timezoneUpdate1.equals('foo'));
        System.assertEquals(false, timezoneUpdate2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASTimezoneUpdate timezoneUpdate1 = OASTimezoneUpdate.getExample();
        OASTimezoneUpdate timezoneUpdate2 = new OASTimezoneUpdate();
        OASTimezoneUpdate timezoneUpdate3;

        System.assertEquals(false, timezoneUpdate1.equals(timezoneUpdate3));
        System.assertEquals(false, timezoneUpdate2.equals(timezoneUpdate3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASTimezoneUpdate timezoneUpdate1 = OASTimezoneUpdate.getExample();
        OASTimezoneUpdate timezoneUpdate2 = new OASTimezoneUpdate();

        System.assertEquals(timezoneUpdate1.hashCode(), timezoneUpdate1.hashCode());
        System.assertEquals(timezoneUpdate2.hashCode(), timezoneUpdate2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASTimezoneUpdate timezoneUpdate1 = OASTimezoneUpdate.getExample();
        OASTimezoneUpdate timezoneUpdate2 = OASTimezoneUpdate.getExample();
        OASTimezoneUpdate timezoneUpdate3 = new OASTimezoneUpdate();
        OASTimezoneUpdate timezoneUpdate4 = new OASTimezoneUpdate();

        System.assert(timezoneUpdate1.equals(timezoneUpdate2));
        System.assert(timezoneUpdate3.equals(timezoneUpdate4));
        System.assertEquals(timezoneUpdate1.hashCode(), timezoneUpdate2.hashCode());
        System.assertEquals(timezoneUpdate3.hashCode(), timezoneUpdate4.hashCode());
    }
}
