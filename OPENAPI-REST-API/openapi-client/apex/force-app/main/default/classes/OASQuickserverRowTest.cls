@isTest
private class OASQuickserverRowTest {
    @isTest
    private static void equalsSameInstance() {
        OASQuickserverRow quickserverRow1 = OASQuickserverRow.getExample();
        OASQuickserverRow quickserverRow2 = quickserverRow1;
        OASQuickserverRow quickserverRow3 = new OASQuickserverRow();
        OASQuickserverRow quickserverRow4 = quickserverRow3;

        System.assert(quickserverRow1.equals(quickserverRow2));
        System.assert(quickserverRow2.equals(quickserverRow1));
        System.assert(quickserverRow1.equals(quickserverRow1));
        System.assert(quickserverRow3.equals(quickserverRow4));
        System.assert(quickserverRow4.equals(quickserverRow3));
        System.assert(quickserverRow3.equals(quickserverRow3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASQuickserverRow quickserverRow1 = OASQuickserverRow.getExample();
        OASQuickserverRow quickserverRow2 = OASQuickserverRow.getExample();
        OASQuickserverRow quickserverRow3 = new OASQuickserverRow();
        OASQuickserverRow quickserverRow4 = new OASQuickserverRow();

        System.assert(quickserverRow1.equals(quickserverRow2));
        System.assert(quickserverRow2.equals(quickserverRow1));
        System.assert(quickserverRow3.equals(quickserverRow4));
        System.assert(quickserverRow4.equals(quickserverRow3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASQuickserverRow quickserverRow1 = OASQuickserverRow.getExample();
        OASQuickserverRow quickserverRow2 = new OASQuickserverRow();

        System.assertEquals(false, quickserverRow1.equals('foo'));
        System.assertEquals(false, quickserverRow2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASQuickserverRow quickserverRow1 = OASQuickserverRow.getExample();
        OASQuickserverRow quickserverRow2 = new OASQuickserverRow();
        OASQuickserverRow quickserverRow3;

        System.assertEquals(false, quickserverRow1.equals(quickserverRow3));
        System.assertEquals(false, quickserverRow2.equals(quickserverRow3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASQuickserverRow quickserverRow1 = OASQuickserverRow.getExample();
        OASQuickserverRow quickserverRow2 = new OASQuickserverRow();

        System.assertEquals(quickserverRow1.hashCode(), quickserverRow1.hashCode());
        System.assertEquals(quickserverRow2.hashCode(), quickserverRow2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASQuickserverRow quickserverRow1 = OASQuickserverRow.getExample();
        OASQuickserverRow quickserverRow2 = OASQuickserverRow.getExample();
        OASQuickserverRow quickserverRow3 = new OASQuickserverRow();
        OASQuickserverRow quickserverRow4 = new OASQuickserverRow();

        System.assert(quickserverRow1.equals(quickserverRow2));
        System.assert(quickserverRow3.equals(quickserverRow4));
        System.assertEquals(quickserverRow1.hashCode(), quickserverRow2.hashCode());
        System.assertEquals(quickserverRow3.hashCode(), quickserverRow4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASQuickserverRow quickserverRow = new OASQuickserverRow();
        Map<String, String> x-property-mappings = quickserverRow.getx-property-mappings();
        System.assertEquals('qsId', x-property-mappings.get('qs_id'));
        System.assertEquals('qsName', x-property-mappings.get('qs_name'));
        System.assertEquals('qsHostname', x-property-mappings.get('qs_hostname'));
        System.assertEquals('qsStatus', x-property-mappings.get('qs_status'));
        System.assertEquals('qsComment', x-property-mappings.get('qs_comment'));
    }
}
