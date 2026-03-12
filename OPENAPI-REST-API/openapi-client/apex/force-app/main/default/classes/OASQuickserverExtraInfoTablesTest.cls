@isTest
private class OASQuickserverExtraInfoTablesTest {
    @isTest
    private static void equalsSameInstance() {
        OASQuickserverExtraInfoTables quickserverExtraInfoTables1 = OASQuickserverExtraInfoTables.getExample();
        OASQuickserverExtraInfoTables quickserverExtraInfoTables2 = quickserverExtraInfoTables1;
        OASQuickserverExtraInfoTables quickserverExtraInfoTables3 = new OASQuickserverExtraInfoTables();
        OASQuickserverExtraInfoTables quickserverExtraInfoTables4 = quickserverExtraInfoTables3;

        System.assert(quickserverExtraInfoTables1.equals(quickserverExtraInfoTables2));
        System.assert(quickserverExtraInfoTables2.equals(quickserverExtraInfoTables1));
        System.assert(quickserverExtraInfoTables1.equals(quickserverExtraInfoTables1));
        System.assert(quickserverExtraInfoTables3.equals(quickserverExtraInfoTables4));
        System.assert(quickserverExtraInfoTables4.equals(quickserverExtraInfoTables3));
        System.assert(quickserverExtraInfoTables3.equals(quickserverExtraInfoTables3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASQuickserverExtraInfoTables quickserverExtraInfoTables1 = OASQuickserverExtraInfoTables.getExample();
        OASQuickserverExtraInfoTables quickserverExtraInfoTables2 = OASQuickserverExtraInfoTables.getExample();
        OASQuickserverExtraInfoTables quickserverExtraInfoTables3 = new OASQuickserverExtraInfoTables();
        OASQuickserverExtraInfoTables quickserverExtraInfoTables4 = new OASQuickserverExtraInfoTables();

        System.assert(quickserverExtraInfoTables1.equals(quickserverExtraInfoTables2));
        System.assert(quickserverExtraInfoTables2.equals(quickserverExtraInfoTables1));
        System.assert(quickserverExtraInfoTables3.equals(quickserverExtraInfoTables4));
        System.assert(quickserverExtraInfoTables4.equals(quickserverExtraInfoTables3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASQuickserverExtraInfoTables quickserverExtraInfoTables1 = OASQuickserverExtraInfoTables.getExample();
        OASQuickserverExtraInfoTables quickserverExtraInfoTables2 = new OASQuickserverExtraInfoTables();

        System.assertEquals(false, quickserverExtraInfoTables1.equals('foo'));
        System.assertEquals(false, quickserverExtraInfoTables2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASQuickserverExtraInfoTables quickserverExtraInfoTables1 = OASQuickserverExtraInfoTables.getExample();
        OASQuickserverExtraInfoTables quickserverExtraInfoTables2 = new OASQuickserverExtraInfoTables();
        OASQuickserverExtraInfoTables quickserverExtraInfoTables3;

        System.assertEquals(false, quickserverExtraInfoTables1.equals(quickserverExtraInfoTables3));
        System.assertEquals(false, quickserverExtraInfoTables2.equals(quickserverExtraInfoTables3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASQuickserverExtraInfoTables quickserverExtraInfoTables1 = OASQuickserverExtraInfoTables.getExample();
        OASQuickserverExtraInfoTables quickserverExtraInfoTables2 = new OASQuickserverExtraInfoTables();

        System.assertEquals(quickserverExtraInfoTables1.hashCode(), quickserverExtraInfoTables1.hashCode());
        System.assertEquals(quickserverExtraInfoTables2.hashCode(), quickserverExtraInfoTables2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASQuickserverExtraInfoTables quickserverExtraInfoTables1 = OASQuickserverExtraInfoTables.getExample();
        OASQuickserverExtraInfoTables quickserverExtraInfoTables2 = OASQuickserverExtraInfoTables.getExample();
        OASQuickserverExtraInfoTables quickserverExtraInfoTables3 = new OASQuickserverExtraInfoTables();
        OASQuickserverExtraInfoTables quickserverExtraInfoTables4 = new OASQuickserverExtraInfoTables();

        System.assert(quickserverExtraInfoTables1.equals(quickserverExtraInfoTables2));
        System.assert(quickserverExtraInfoTables3.equals(quickserverExtraInfoTables4));
        System.assertEquals(quickserverExtraInfoTables1.hashCode(), quickserverExtraInfoTables2.hashCode());
        System.assertEquals(quickserverExtraInfoTables3.hashCode(), quickserverExtraInfoTables4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASQuickserverExtraInfoTables quickserverExtraInfoTables = new OASQuickserverExtraInfoTables();
        Map<String, String> x-property-mappings = quickserverExtraInfoTables.getx-property-mappings();
        System.assertEquals('ipInfo', x-property-mappings.get('ip_info'));
    }
}
