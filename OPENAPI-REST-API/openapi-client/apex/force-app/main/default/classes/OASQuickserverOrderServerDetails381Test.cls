@isTest
private class OASQuickserverOrderServerDetails381Test {
    @isTest
    private static void equalsSameInstance() {
        OASQuickserverOrderServerDetails381 quickserverOrderServerDetails3811 = OASQuickserverOrderServerDetails381.getExample();
        OASQuickserverOrderServerDetails381 quickserverOrderServerDetails3812 = quickserverOrderServerDetails3811;
        OASQuickserverOrderServerDetails381 quickserverOrderServerDetails3813 = new OASQuickserverOrderServerDetails381();
        OASQuickserverOrderServerDetails381 quickserverOrderServerDetails3814 = quickserverOrderServerDetails3813;

        System.assert(quickserverOrderServerDetails3811.equals(quickserverOrderServerDetails3812));
        System.assert(quickserverOrderServerDetails3812.equals(quickserverOrderServerDetails3811));
        System.assert(quickserverOrderServerDetails3811.equals(quickserverOrderServerDetails3811));
        System.assert(quickserverOrderServerDetails3813.equals(quickserverOrderServerDetails3814));
        System.assert(quickserverOrderServerDetails3814.equals(quickserverOrderServerDetails3813));
        System.assert(quickserverOrderServerDetails3813.equals(quickserverOrderServerDetails3813));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASQuickserverOrderServerDetails381 quickserverOrderServerDetails3811 = OASQuickserverOrderServerDetails381.getExample();
        OASQuickserverOrderServerDetails381 quickserverOrderServerDetails3812 = OASQuickserverOrderServerDetails381.getExample();
        OASQuickserverOrderServerDetails381 quickserverOrderServerDetails3813 = new OASQuickserverOrderServerDetails381();
        OASQuickserverOrderServerDetails381 quickserverOrderServerDetails3814 = new OASQuickserverOrderServerDetails381();

        System.assert(quickserverOrderServerDetails3811.equals(quickserverOrderServerDetails3812));
        System.assert(quickserverOrderServerDetails3812.equals(quickserverOrderServerDetails3811));
        System.assert(quickserverOrderServerDetails3813.equals(quickserverOrderServerDetails3814));
        System.assert(quickserverOrderServerDetails3814.equals(quickserverOrderServerDetails3813));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASQuickserverOrderServerDetails381 quickserverOrderServerDetails3811 = OASQuickserverOrderServerDetails381.getExample();
        OASQuickserverOrderServerDetails381 quickserverOrderServerDetails3812 = new OASQuickserverOrderServerDetails381();

        System.assertEquals(false, quickserverOrderServerDetails3811.equals('foo'));
        System.assertEquals(false, quickserverOrderServerDetails3812.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASQuickserverOrderServerDetails381 quickserverOrderServerDetails3811 = OASQuickserverOrderServerDetails381.getExample();
        OASQuickserverOrderServerDetails381 quickserverOrderServerDetails3812 = new OASQuickserverOrderServerDetails381();
        OASQuickserverOrderServerDetails381 quickserverOrderServerDetails3813;

        System.assertEquals(false, quickserverOrderServerDetails3811.equals(quickserverOrderServerDetails3813));
        System.assertEquals(false, quickserverOrderServerDetails3812.equals(quickserverOrderServerDetails3813));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASQuickserverOrderServerDetails381 quickserverOrderServerDetails3811 = OASQuickserverOrderServerDetails381.getExample();
        OASQuickserverOrderServerDetails381 quickserverOrderServerDetails3812 = new OASQuickserverOrderServerDetails381();

        System.assertEquals(quickserverOrderServerDetails3811.hashCode(), quickserverOrderServerDetails3811.hashCode());
        System.assertEquals(quickserverOrderServerDetails3812.hashCode(), quickserverOrderServerDetails3812.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASQuickserverOrderServerDetails381 quickserverOrderServerDetails3811 = OASQuickserverOrderServerDetails381.getExample();
        OASQuickserverOrderServerDetails381 quickserverOrderServerDetails3812 = OASQuickserverOrderServerDetails381.getExample();
        OASQuickserverOrderServerDetails381 quickserverOrderServerDetails3813 = new OASQuickserverOrderServerDetails381();
        OASQuickserverOrderServerDetails381 quickserverOrderServerDetails3814 = new OASQuickserverOrderServerDetails381();

        System.assert(quickserverOrderServerDetails3811.equals(quickserverOrderServerDetails3812));
        System.assert(quickserverOrderServerDetails3813.equals(quickserverOrderServerDetails3814));
        System.assertEquals(quickserverOrderServerDetails3811.hashCode(), quickserverOrderServerDetails3812.hashCode());
        System.assertEquals(quickserverOrderServerDetails3813.hashCode(), quickserverOrderServerDetails3814.hashCode());
    }
}
