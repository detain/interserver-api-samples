@isTest
private class OASQuickserverAddonsTest {
    @isTest
    private static void equalsSameInstance() {
        OASQuickserverAddons quickserverAddons1 = OASQuickserverAddons.getExample();
        OASQuickserverAddons quickserverAddons2 = quickserverAddons1;
        OASQuickserverAddons quickserverAddons3 = new OASQuickserverAddons();
        OASQuickserverAddons quickserverAddons4 = quickserverAddons3;

        System.assert(quickserverAddons1.equals(quickserverAddons2));
        System.assert(quickserverAddons2.equals(quickserverAddons1));
        System.assert(quickserverAddons1.equals(quickserverAddons1));
        System.assert(quickserverAddons3.equals(quickserverAddons4));
        System.assert(quickserverAddons4.equals(quickserverAddons3));
        System.assert(quickserverAddons3.equals(quickserverAddons3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASQuickserverAddons quickserverAddons1 = OASQuickserverAddons.getExample();
        OASQuickserverAddons quickserverAddons2 = OASQuickserverAddons.getExample();
        OASQuickserverAddons quickserverAddons3 = new OASQuickserverAddons();
        OASQuickserverAddons quickserverAddons4 = new OASQuickserverAddons();

        System.assert(quickserverAddons1.equals(quickserverAddons2));
        System.assert(quickserverAddons2.equals(quickserverAddons1));
        System.assert(quickserverAddons3.equals(quickserverAddons4));
        System.assert(quickserverAddons4.equals(quickserverAddons3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASQuickserverAddons quickserverAddons1 = OASQuickserverAddons.getExample();
        OASQuickserverAddons quickserverAddons2 = new OASQuickserverAddons();

        System.assertEquals(false, quickserverAddons1.equals('foo'));
        System.assertEquals(false, quickserverAddons2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASQuickserverAddons quickserverAddons1 = OASQuickserverAddons.getExample();
        OASQuickserverAddons quickserverAddons2 = new OASQuickserverAddons();
        OASQuickserverAddons quickserverAddons3;

        System.assertEquals(false, quickserverAddons1.equals(quickserverAddons3));
        System.assertEquals(false, quickserverAddons2.equals(quickserverAddons3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASQuickserverAddons quickserverAddons1 = OASQuickserverAddons.getExample();
        OASQuickserverAddons quickserverAddons2 = new OASQuickserverAddons();

        System.assertEquals(quickserverAddons1.hashCode(), quickserverAddons1.hashCode());
        System.assertEquals(quickserverAddons2.hashCode(), quickserverAddons2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASQuickserverAddons quickserverAddons1 = OASQuickserverAddons.getExample();
        OASQuickserverAddons quickserverAddons2 = OASQuickserverAddons.getExample();
        OASQuickserverAddons quickserverAddons3 = new OASQuickserverAddons();
        OASQuickserverAddons quickserverAddons4 = new OASQuickserverAddons();

        System.assert(quickserverAddons1.equals(quickserverAddons2));
        System.assert(quickserverAddons3.equals(quickserverAddons4));
        System.assertEquals(quickserverAddons1.hashCode(), quickserverAddons2.hashCode());
        System.assertEquals(quickserverAddons3.hashCode(), quickserverAddons4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASQuickserverAddons quickserverAddons = new OASQuickserverAddons();
        System.assertEquals(new List<OASQuickserverAddonsRow>(), quickserverAddons.rows);
        System.assertEquals(null, quickserverAddons.title);
    }
}
