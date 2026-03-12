@isTest
private class OASQuickserverIpTableRowTest {
    @isTest
    private static void equalsSameInstance() {
        OASQuickserverIpTableRow quickserverIpTableRow1 = OASQuickserverIpTableRow.getExample();
        OASQuickserverIpTableRow quickserverIpTableRow2 = quickserverIpTableRow1;
        OASQuickserverIpTableRow quickserverIpTableRow3 = new OASQuickserverIpTableRow();
        OASQuickserverIpTableRow quickserverIpTableRow4 = quickserverIpTableRow3;

        System.assert(quickserverIpTableRow1.equals(quickserverIpTableRow2));
        System.assert(quickserverIpTableRow2.equals(quickserverIpTableRow1));
        System.assert(quickserverIpTableRow1.equals(quickserverIpTableRow1));
        System.assert(quickserverIpTableRow3.equals(quickserverIpTableRow4));
        System.assert(quickserverIpTableRow4.equals(quickserverIpTableRow3));
        System.assert(quickserverIpTableRow3.equals(quickserverIpTableRow3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASQuickserverIpTableRow quickserverIpTableRow1 = OASQuickserverIpTableRow.getExample();
        OASQuickserverIpTableRow quickserverIpTableRow2 = OASQuickserverIpTableRow.getExample();
        OASQuickserverIpTableRow quickserverIpTableRow3 = new OASQuickserverIpTableRow();
        OASQuickserverIpTableRow quickserverIpTableRow4 = new OASQuickserverIpTableRow();

        System.assert(quickserverIpTableRow1.equals(quickserverIpTableRow2));
        System.assert(quickserverIpTableRow2.equals(quickserverIpTableRow1));
        System.assert(quickserverIpTableRow3.equals(quickserverIpTableRow4));
        System.assert(quickserverIpTableRow4.equals(quickserverIpTableRow3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASQuickserverIpTableRow quickserverIpTableRow1 = OASQuickserverIpTableRow.getExample();
        OASQuickserverIpTableRow quickserverIpTableRow2 = new OASQuickserverIpTableRow();

        System.assertEquals(false, quickserverIpTableRow1.equals('foo'));
        System.assertEquals(false, quickserverIpTableRow2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASQuickserverIpTableRow quickserverIpTableRow1 = OASQuickserverIpTableRow.getExample();
        OASQuickserverIpTableRow quickserverIpTableRow2 = new OASQuickserverIpTableRow();
        OASQuickserverIpTableRow quickserverIpTableRow3;

        System.assertEquals(false, quickserverIpTableRow1.equals(quickserverIpTableRow3));
        System.assertEquals(false, quickserverIpTableRow2.equals(quickserverIpTableRow3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASQuickserverIpTableRow quickserverIpTableRow1 = OASQuickserverIpTableRow.getExample();
        OASQuickserverIpTableRow quickserverIpTableRow2 = new OASQuickserverIpTableRow();

        System.assertEquals(quickserverIpTableRow1.hashCode(), quickserverIpTableRow1.hashCode());
        System.assertEquals(quickserverIpTableRow2.hashCode(), quickserverIpTableRow2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASQuickserverIpTableRow quickserverIpTableRow1 = OASQuickserverIpTableRow.getExample();
        OASQuickserverIpTableRow quickserverIpTableRow2 = OASQuickserverIpTableRow.getExample();
        OASQuickserverIpTableRow quickserverIpTableRow3 = new OASQuickserverIpTableRow();
        OASQuickserverIpTableRow quickserverIpTableRow4 = new OASQuickserverIpTableRow();

        System.assert(quickserverIpTableRow1.equals(quickserverIpTableRow2));
        System.assert(quickserverIpTableRow3.equals(quickserverIpTableRow4));
        System.assertEquals(quickserverIpTableRow1.hashCode(), quickserverIpTableRow2.hashCode());
        System.assertEquals(quickserverIpTableRow3.hashCode(), quickserverIpTableRow4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASQuickserverIpTableRow quickserverIpTableRow = new OASQuickserverIpTableRow();
        Map<String, String> x-property-mappings = quickserverIpTableRow.getx-property-mappings();
        System.assertEquals('r_desc', x-property-mappings.get('desc'));
    }
}
