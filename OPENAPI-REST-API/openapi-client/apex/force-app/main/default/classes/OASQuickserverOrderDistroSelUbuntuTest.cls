@isTest
private class OASQuickserverOrderDistroSelUbuntuTest {
    @isTest
    private static void equalsSameInstance() {
        OASQuickserverOrderDistroSelUbuntu quickserverOrderDistroSelUbuntu1 = OASQuickserverOrderDistroSelUbuntu.getExample();
        OASQuickserverOrderDistroSelUbuntu quickserverOrderDistroSelUbuntu2 = quickserverOrderDistroSelUbuntu1;
        OASQuickserverOrderDistroSelUbuntu quickserverOrderDistroSelUbuntu3 = new OASQuickserverOrderDistroSelUbuntu();
        OASQuickserverOrderDistroSelUbuntu quickserverOrderDistroSelUbuntu4 = quickserverOrderDistroSelUbuntu3;

        System.assert(quickserverOrderDistroSelUbuntu1.equals(quickserverOrderDistroSelUbuntu2));
        System.assert(quickserverOrderDistroSelUbuntu2.equals(quickserverOrderDistroSelUbuntu1));
        System.assert(quickserverOrderDistroSelUbuntu1.equals(quickserverOrderDistroSelUbuntu1));
        System.assert(quickserverOrderDistroSelUbuntu3.equals(quickserverOrderDistroSelUbuntu4));
        System.assert(quickserverOrderDistroSelUbuntu4.equals(quickserverOrderDistroSelUbuntu3));
        System.assert(quickserverOrderDistroSelUbuntu3.equals(quickserverOrderDistroSelUbuntu3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASQuickserverOrderDistroSelUbuntu quickserverOrderDistroSelUbuntu1 = OASQuickserverOrderDistroSelUbuntu.getExample();
        OASQuickserverOrderDistroSelUbuntu quickserverOrderDistroSelUbuntu2 = OASQuickserverOrderDistroSelUbuntu.getExample();
        OASQuickserverOrderDistroSelUbuntu quickserverOrderDistroSelUbuntu3 = new OASQuickserverOrderDistroSelUbuntu();
        OASQuickserverOrderDistroSelUbuntu quickserverOrderDistroSelUbuntu4 = new OASQuickserverOrderDistroSelUbuntu();

        System.assert(quickserverOrderDistroSelUbuntu1.equals(quickserverOrderDistroSelUbuntu2));
        System.assert(quickserverOrderDistroSelUbuntu2.equals(quickserverOrderDistroSelUbuntu1));
        System.assert(quickserverOrderDistroSelUbuntu3.equals(quickserverOrderDistroSelUbuntu4));
        System.assert(quickserverOrderDistroSelUbuntu4.equals(quickserverOrderDistroSelUbuntu3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASQuickserverOrderDistroSelUbuntu quickserverOrderDistroSelUbuntu1 = OASQuickserverOrderDistroSelUbuntu.getExample();
        OASQuickserverOrderDistroSelUbuntu quickserverOrderDistroSelUbuntu2 = new OASQuickserverOrderDistroSelUbuntu();

        System.assertEquals(false, quickserverOrderDistroSelUbuntu1.equals('foo'));
        System.assertEquals(false, quickserverOrderDistroSelUbuntu2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASQuickserverOrderDistroSelUbuntu quickserverOrderDistroSelUbuntu1 = OASQuickserverOrderDistroSelUbuntu.getExample();
        OASQuickserverOrderDistroSelUbuntu quickserverOrderDistroSelUbuntu2 = new OASQuickserverOrderDistroSelUbuntu();
        OASQuickserverOrderDistroSelUbuntu quickserverOrderDistroSelUbuntu3;

        System.assertEquals(false, quickserverOrderDistroSelUbuntu1.equals(quickserverOrderDistroSelUbuntu3));
        System.assertEquals(false, quickserverOrderDistroSelUbuntu2.equals(quickserverOrderDistroSelUbuntu3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASQuickserverOrderDistroSelUbuntu quickserverOrderDistroSelUbuntu1 = OASQuickserverOrderDistroSelUbuntu.getExample();
        OASQuickserverOrderDistroSelUbuntu quickserverOrderDistroSelUbuntu2 = new OASQuickserverOrderDistroSelUbuntu();

        System.assertEquals(quickserverOrderDistroSelUbuntu1.hashCode(), quickserverOrderDistroSelUbuntu1.hashCode());
        System.assertEquals(quickserverOrderDistroSelUbuntu2.hashCode(), quickserverOrderDistroSelUbuntu2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASQuickserverOrderDistroSelUbuntu quickserverOrderDistroSelUbuntu1 = OASQuickserverOrderDistroSelUbuntu.getExample();
        OASQuickserverOrderDistroSelUbuntu quickserverOrderDistroSelUbuntu2 = OASQuickserverOrderDistroSelUbuntu.getExample();
        OASQuickserverOrderDistroSelUbuntu quickserverOrderDistroSelUbuntu3 = new OASQuickserverOrderDistroSelUbuntu();
        OASQuickserverOrderDistroSelUbuntu quickserverOrderDistroSelUbuntu4 = new OASQuickserverOrderDistroSelUbuntu();

        System.assert(quickserverOrderDistroSelUbuntu1.equals(quickserverOrderDistroSelUbuntu2));
        System.assert(quickserverOrderDistroSelUbuntu3.equals(quickserverOrderDistroSelUbuntu4));
        System.assertEquals(quickserverOrderDistroSelUbuntu1.hashCode(), quickserverOrderDistroSelUbuntu2.hashCode());
        System.assertEquals(quickserverOrderDistroSelUbuntu3.hashCode(), quickserverOrderDistroSelUbuntu4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASQuickserverOrderDistroSelUbuntu quickserverOrderDistroSelUbuntu = new OASQuickserverOrderDistroSelUbuntu();
        Map<String, String> x-property-mappings = quickserverOrderDistroSelUbuntu.getx-property-mappings();
        System.assertEquals('ubuntu', x-property-mappings.get('Ubuntu'));
    }
}
