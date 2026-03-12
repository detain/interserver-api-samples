@isTest
private class OASQuickserverServiceExtraTest {
    @isTest
    private static void equalsSameInstance() {
        OASQuickserverServiceExtra quickserverServiceExtra1 = OASQuickserverServiceExtra.getExample();
        OASQuickserverServiceExtra quickserverServiceExtra2 = quickserverServiceExtra1;
        OASQuickserverServiceExtra quickserverServiceExtra3 = new OASQuickserverServiceExtra();
        OASQuickserverServiceExtra quickserverServiceExtra4 = quickserverServiceExtra3;

        System.assert(quickserverServiceExtra1.equals(quickserverServiceExtra2));
        System.assert(quickserverServiceExtra2.equals(quickserverServiceExtra1));
        System.assert(quickserverServiceExtra1.equals(quickserverServiceExtra1));
        System.assert(quickserverServiceExtra3.equals(quickserverServiceExtra4));
        System.assert(quickserverServiceExtra4.equals(quickserverServiceExtra3));
        System.assert(quickserverServiceExtra3.equals(quickserverServiceExtra3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASQuickserverServiceExtra quickserverServiceExtra1 = OASQuickserverServiceExtra.getExample();
        OASQuickserverServiceExtra quickserverServiceExtra2 = OASQuickserverServiceExtra.getExample();
        OASQuickserverServiceExtra quickserverServiceExtra3 = new OASQuickserverServiceExtra();
        OASQuickserverServiceExtra quickserverServiceExtra4 = new OASQuickserverServiceExtra();

        System.assert(quickserverServiceExtra1.equals(quickserverServiceExtra2));
        System.assert(quickserverServiceExtra2.equals(quickserverServiceExtra1));
        System.assert(quickserverServiceExtra3.equals(quickserverServiceExtra4));
        System.assert(quickserverServiceExtra4.equals(quickserverServiceExtra3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASQuickserverServiceExtra quickserverServiceExtra1 = OASQuickserverServiceExtra.getExample();
        OASQuickserverServiceExtra quickserverServiceExtra2 = new OASQuickserverServiceExtra();

        System.assertEquals(false, quickserverServiceExtra1.equals('foo'));
        System.assertEquals(false, quickserverServiceExtra2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASQuickserverServiceExtra quickserverServiceExtra1 = OASQuickserverServiceExtra.getExample();
        OASQuickserverServiceExtra quickserverServiceExtra2 = new OASQuickserverServiceExtra();
        OASQuickserverServiceExtra quickserverServiceExtra3;

        System.assertEquals(false, quickserverServiceExtra1.equals(quickserverServiceExtra3));
        System.assertEquals(false, quickserverServiceExtra2.equals(quickserverServiceExtra3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASQuickserverServiceExtra quickserverServiceExtra1 = OASQuickserverServiceExtra.getExample();
        OASQuickserverServiceExtra quickserverServiceExtra2 = new OASQuickserverServiceExtra();

        System.assertEquals(quickserverServiceExtra1.hashCode(), quickserverServiceExtra1.hashCode());
        System.assertEquals(quickserverServiceExtra2.hashCode(), quickserverServiceExtra2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASQuickserverServiceExtra quickserverServiceExtra1 = OASQuickserverServiceExtra.getExample();
        OASQuickserverServiceExtra quickserverServiceExtra2 = OASQuickserverServiceExtra.getExample();
        OASQuickserverServiceExtra quickserverServiceExtra3 = new OASQuickserverServiceExtra();
        OASQuickserverServiceExtra quickserverServiceExtra4 = new OASQuickserverServiceExtra();

        System.assert(quickserverServiceExtra1.equals(quickserverServiceExtra2));
        System.assert(quickserverServiceExtra3.equals(quickserverServiceExtra4));
        System.assertEquals(quickserverServiceExtra1.hashCode(), quickserverServiceExtra2.hashCode());
        System.assertEquals(quickserverServiceExtra3.hashCode(), quickserverServiceExtra4.hashCode());
    }
}
