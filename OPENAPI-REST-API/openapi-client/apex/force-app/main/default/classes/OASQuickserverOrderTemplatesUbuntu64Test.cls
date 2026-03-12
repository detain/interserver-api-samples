@isTest
private class OASQuickserverOrderTemplatesUbuntu64Test {
    @isTest
    private static void equalsSameInstance() {
        OASQuickserverOrderTemplatesUbuntu64 quickserverOrderTemplatesUbuntu641 = OASQuickserverOrderTemplatesUbuntu64.getExample();
        OASQuickserverOrderTemplatesUbuntu64 quickserverOrderTemplatesUbuntu642 = quickserverOrderTemplatesUbuntu641;
        OASQuickserverOrderTemplatesUbuntu64 quickserverOrderTemplatesUbuntu643 = new OASQuickserverOrderTemplatesUbuntu64();
        OASQuickserverOrderTemplatesUbuntu64 quickserverOrderTemplatesUbuntu644 = quickserverOrderTemplatesUbuntu643;

        System.assert(quickserverOrderTemplatesUbuntu641.equals(quickserverOrderTemplatesUbuntu642));
        System.assert(quickserverOrderTemplatesUbuntu642.equals(quickserverOrderTemplatesUbuntu641));
        System.assert(quickserverOrderTemplatesUbuntu641.equals(quickserverOrderTemplatesUbuntu641));
        System.assert(quickserverOrderTemplatesUbuntu643.equals(quickserverOrderTemplatesUbuntu644));
        System.assert(quickserverOrderTemplatesUbuntu644.equals(quickserverOrderTemplatesUbuntu643));
        System.assert(quickserverOrderTemplatesUbuntu643.equals(quickserverOrderTemplatesUbuntu643));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASQuickserverOrderTemplatesUbuntu64 quickserverOrderTemplatesUbuntu641 = OASQuickserverOrderTemplatesUbuntu64.getExample();
        OASQuickserverOrderTemplatesUbuntu64 quickserverOrderTemplatesUbuntu642 = OASQuickserverOrderTemplatesUbuntu64.getExample();
        OASQuickserverOrderTemplatesUbuntu64 quickserverOrderTemplatesUbuntu643 = new OASQuickserverOrderTemplatesUbuntu64();
        OASQuickserverOrderTemplatesUbuntu64 quickserverOrderTemplatesUbuntu644 = new OASQuickserverOrderTemplatesUbuntu64();

        System.assert(quickserverOrderTemplatesUbuntu641.equals(quickserverOrderTemplatesUbuntu642));
        System.assert(quickserverOrderTemplatesUbuntu642.equals(quickserverOrderTemplatesUbuntu641));
        System.assert(quickserverOrderTemplatesUbuntu643.equals(quickserverOrderTemplatesUbuntu644));
        System.assert(quickserverOrderTemplatesUbuntu644.equals(quickserverOrderTemplatesUbuntu643));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASQuickserverOrderTemplatesUbuntu64 quickserverOrderTemplatesUbuntu641 = OASQuickserverOrderTemplatesUbuntu64.getExample();
        OASQuickserverOrderTemplatesUbuntu64 quickserverOrderTemplatesUbuntu642 = new OASQuickserverOrderTemplatesUbuntu64();

        System.assertEquals(false, quickserverOrderTemplatesUbuntu641.equals('foo'));
        System.assertEquals(false, quickserverOrderTemplatesUbuntu642.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASQuickserverOrderTemplatesUbuntu64 quickserverOrderTemplatesUbuntu641 = OASQuickserverOrderTemplatesUbuntu64.getExample();
        OASQuickserverOrderTemplatesUbuntu64 quickserverOrderTemplatesUbuntu642 = new OASQuickserverOrderTemplatesUbuntu64();
        OASQuickserverOrderTemplatesUbuntu64 quickserverOrderTemplatesUbuntu643;

        System.assertEquals(false, quickserverOrderTemplatesUbuntu641.equals(quickserverOrderTemplatesUbuntu643));
        System.assertEquals(false, quickserverOrderTemplatesUbuntu642.equals(quickserverOrderTemplatesUbuntu643));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASQuickserverOrderTemplatesUbuntu64 quickserverOrderTemplatesUbuntu641 = OASQuickserverOrderTemplatesUbuntu64.getExample();
        OASQuickserverOrderTemplatesUbuntu64 quickserverOrderTemplatesUbuntu642 = new OASQuickserverOrderTemplatesUbuntu64();

        System.assertEquals(quickserverOrderTemplatesUbuntu641.hashCode(), quickserverOrderTemplatesUbuntu641.hashCode());
        System.assertEquals(quickserverOrderTemplatesUbuntu642.hashCode(), quickserverOrderTemplatesUbuntu642.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASQuickserverOrderTemplatesUbuntu64 quickserverOrderTemplatesUbuntu641 = OASQuickserverOrderTemplatesUbuntu64.getExample();
        OASQuickserverOrderTemplatesUbuntu64 quickserverOrderTemplatesUbuntu642 = OASQuickserverOrderTemplatesUbuntu64.getExample();
        OASQuickserverOrderTemplatesUbuntu64 quickserverOrderTemplatesUbuntu643 = new OASQuickserverOrderTemplatesUbuntu64();
        OASQuickserverOrderTemplatesUbuntu64 quickserverOrderTemplatesUbuntu644 = new OASQuickserverOrderTemplatesUbuntu64();

        System.assert(quickserverOrderTemplatesUbuntu641.equals(quickserverOrderTemplatesUbuntu642));
        System.assert(quickserverOrderTemplatesUbuntu643.equals(quickserverOrderTemplatesUbuntu644));
        System.assertEquals(quickserverOrderTemplatesUbuntu641.hashCode(), quickserverOrderTemplatesUbuntu642.hashCode());
        System.assertEquals(quickserverOrderTemplatesUbuntu643.hashCode(), quickserverOrderTemplatesUbuntu644.hashCode());
    }
}
