@isTest
private class OASQuickserverAddonsRowTest {
    @isTest
    private static void equalsSameInstance() {
        OASQuickserverAddonsRow quickserverAddonsRow1 = OASQuickserverAddonsRow.getExample();
        OASQuickserverAddonsRow quickserverAddonsRow2 = quickserverAddonsRow1;
        OASQuickserverAddonsRow quickserverAddonsRow3 = new OASQuickserverAddonsRow();
        OASQuickserverAddonsRow quickserverAddonsRow4 = quickserverAddonsRow3;

        System.assert(quickserverAddonsRow1.equals(quickserverAddonsRow2));
        System.assert(quickserverAddonsRow2.equals(quickserverAddonsRow1));
        System.assert(quickserverAddonsRow1.equals(quickserverAddonsRow1));
        System.assert(quickserverAddonsRow3.equals(quickserverAddonsRow4));
        System.assert(quickserverAddonsRow4.equals(quickserverAddonsRow3));
        System.assert(quickserverAddonsRow3.equals(quickserverAddonsRow3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASQuickserverAddonsRow quickserverAddonsRow1 = OASQuickserverAddonsRow.getExample();
        OASQuickserverAddonsRow quickserverAddonsRow2 = OASQuickserverAddonsRow.getExample();
        OASQuickserverAddonsRow quickserverAddonsRow3 = new OASQuickserverAddonsRow();
        OASQuickserverAddonsRow quickserverAddonsRow4 = new OASQuickserverAddonsRow();

        System.assert(quickserverAddonsRow1.equals(quickserverAddonsRow2));
        System.assert(quickserverAddonsRow2.equals(quickserverAddonsRow1));
        System.assert(quickserverAddonsRow3.equals(quickserverAddonsRow4));
        System.assert(quickserverAddonsRow4.equals(quickserverAddonsRow3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASQuickserverAddonsRow quickserverAddonsRow1 = OASQuickserverAddonsRow.getExample();
        OASQuickserverAddonsRow quickserverAddonsRow2 = new OASQuickserverAddonsRow();

        System.assertEquals(false, quickserverAddonsRow1.equals('foo'));
        System.assertEquals(false, quickserverAddonsRow2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASQuickserverAddonsRow quickserverAddonsRow1 = OASQuickserverAddonsRow.getExample();
        OASQuickserverAddonsRow quickserverAddonsRow2 = new OASQuickserverAddonsRow();
        OASQuickserverAddonsRow quickserverAddonsRow3;

        System.assertEquals(false, quickserverAddonsRow1.equals(quickserverAddonsRow3));
        System.assertEquals(false, quickserverAddonsRow2.equals(quickserverAddonsRow3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASQuickserverAddonsRow quickserverAddonsRow1 = OASQuickserverAddonsRow.getExample();
        OASQuickserverAddonsRow quickserverAddonsRow2 = new OASQuickserverAddonsRow();

        System.assertEquals(quickserverAddonsRow1.hashCode(), quickserverAddonsRow1.hashCode());
        System.assertEquals(quickserverAddonsRow2.hashCode(), quickserverAddonsRow2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASQuickserverAddonsRow quickserverAddonsRow1 = OASQuickserverAddonsRow.getExample();
        OASQuickserverAddonsRow quickserverAddonsRow2 = OASQuickserverAddonsRow.getExample();
        OASQuickserverAddonsRow quickserverAddonsRow3 = new OASQuickserverAddonsRow();
        OASQuickserverAddonsRow quickserverAddonsRow4 = new OASQuickserverAddonsRow();

        System.assert(quickserverAddonsRow1.equals(quickserverAddonsRow2));
        System.assert(quickserverAddonsRow3.equals(quickserverAddonsRow4));
        System.assertEquals(quickserverAddonsRow1.hashCode(), quickserverAddonsRow2.hashCode());
        System.assertEquals(quickserverAddonsRow3.hashCode(), quickserverAddonsRow4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASQuickserverAddonsRow quickserverAddonsRow = new OASQuickserverAddonsRow();
        Map<String, String> x-property-mappings = quickserverAddonsRow.getx-property-mappings();
        System.assertEquals('r_desc', x-property-mappings.get('desc'));
    }
}
