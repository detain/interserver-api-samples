@isTest
private class OASQuickserverOrderDistroSelTest {
    @isTest
    private static void equalsSameInstance() {
        OASQuickserverOrderDistroSel quickserverOrderDistroSel1 = OASQuickserverOrderDistroSel.getExample();
        OASQuickserverOrderDistroSel quickserverOrderDistroSel2 = quickserverOrderDistroSel1;
        OASQuickserverOrderDistroSel quickserverOrderDistroSel3 = new OASQuickserverOrderDistroSel();
        OASQuickserverOrderDistroSel quickserverOrderDistroSel4 = quickserverOrderDistroSel3;

        System.assert(quickserverOrderDistroSel1.equals(quickserverOrderDistroSel2));
        System.assert(quickserverOrderDistroSel2.equals(quickserverOrderDistroSel1));
        System.assert(quickserverOrderDistroSel1.equals(quickserverOrderDistroSel1));
        System.assert(quickserverOrderDistroSel3.equals(quickserverOrderDistroSel4));
        System.assert(quickserverOrderDistroSel4.equals(quickserverOrderDistroSel3));
        System.assert(quickserverOrderDistroSel3.equals(quickserverOrderDistroSel3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASQuickserverOrderDistroSel quickserverOrderDistroSel1 = OASQuickserverOrderDistroSel.getExample();
        OASQuickserverOrderDistroSel quickserverOrderDistroSel2 = OASQuickserverOrderDistroSel.getExample();
        OASQuickserverOrderDistroSel quickserverOrderDistroSel3 = new OASQuickserverOrderDistroSel();
        OASQuickserverOrderDistroSel quickserverOrderDistroSel4 = new OASQuickserverOrderDistroSel();

        System.assert(quickserverOrderDistroSel1.equals(quickserverOrderDistroSel2));
        System.assert(quickserverOrderDistroSel2.equals(quickserverOrderDistroSel1));
        System.assert(quickserverOrderDistroSel3.equals(quickserverOrderDistroSel4));
        System.assert(quickserverOrderDistroSel4.equals(quickserverOrderDistroSel3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASQuickserverOrderDistroSel quickserverOrderDistroSel1 = OASQuickserverOrderDistroSel.getExample();
        OASQuickserverOrderDistroSel quickserverOrderDistroSel2 = new OASQuickserverOrderDistroSel();

        System.assertEquals(false, quickserverOrderDistroSel1.equals('foo'));
        System.assertEquals(false, quickserverOrderDistroSel2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASQuickserverOrderDistroSel quickserverOrderDistroSel1 = OASQuickserverOrderDistroSel.getExample();
        OASQuickserverOrderDistroSel quickserverOrderDistroSel2 = new OASQuickserverOrderDistroSel();
        OASQuickserverOrderDistroSel quickserverOrderDistroSel3;

        System.assertEquals(false, quickserverOrderDistroSel1.equals(quickserverOrderDistroSel3));
        System.assertEquals(false, quickserverOrderDistroSel2.equals(quickserverOrderDistroSel3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASQuickserverOrderDistroSel quickserverOrderDistroSel1 = OASQuickserverOrderDistroSel.getExample();
        OASQuickserverOrderDistroSel quickserverOrderDistroSel2 = new OASQuickserverOrderDistroSel();

        System.assertEquals(quickserverOrderDistroSel1.hashCode(), quickserverOrderDistroSel1.hashCode());
        System.assertEquals(quickserverOrderDistroSel2.hashCode(), quickserverOrderDistroSel2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASQuickserverOrderDistroSel quickserverOrderDistroSel1 = OASQuickserverOrderDistroSel.getExample();
        OASQuickserverOrderDistroSel quickserverOrderDistroSel2 = OASQuickserverOrderDistroSel.getExample();
        OASQuickserverOrderDistroSel quickserverOrderDistroSel3 = new OASQuickserverOrderDistroSel();
        OASQuickserverOrderDistroSel quickserverOrderDistroSel4 = new OASQuickserverOrderDistroSel();

        System.assert(quickserverOrderDistroSel1.equals(quickserverOrderDistroSel2));
        System.assert(quickserverOrderDistroSel3.equals(quickserverOrderDistroSel4));
        System.assertEquals(quickserverOrderDistroSel1.hashCode(), quickserverOrderDistroSel2.hashCode());
        System.assertEquals(quickserverOrderDistroSel3.hashCode(), quickserverOrderDistroSel4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASQuickserverOrderDistroSel quickserverOrderDistroSel = new OASQuickserverOrderDistroSel();
        Map<String, String> x-property-mappings = quickserverOrderDistroSel.getx-property-mappings();
        System.assertEquals('ubuntu', x-property-mappings.get('Ubuntu'));
    }
}
