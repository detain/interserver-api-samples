@isTest
private class OASVpsExtraInfoTablesTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsExtraInfoTables vpsExtraInfoTables1 = OASVpsExtraInfoTables.getExample();
        OASVpsExtraInfoTables vpsExtraInfoTables2 = vpsExtraInfoTables1;
        OASVpsExtraInfoTables vpsExtraInfoTables3 = new OASVpsExtraInfoTables();
        OASVpsExtraInfoTables vpsExtraInfoTables4 = vpsExtraInfoTables3;

        System.assert(vpsExtraInfoTables1.equals(vpsExtraInfoTables2));
        System.assert(vpsExtraInfoTables2.equals(vpsExtraInfoTables1));
        System.assert(vpsExtraInfoTables1.equals(vpsExtraInfoTables1));
        System.assert(vpsExtraInfoTables3.equals(vpsExtraInfoTables4));
        System.assert(vpsExtraInfoTables4.equals(vpsExtraInfoTables3));
        System.assert(vpsExtraInfoTables3.equals(vpsExtraInfoTables3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsExtraInfoTables vpsExtraInfoTables1 = OASVpsExtraInfoTables.getExample();
        OASVpsExtraInfoTables vpsExtraInfoTables2 = OASVpsExtraInfoTables.getExample();
        OASVpsExtraInfoTables vpsExtraInfoTables3 = new OASVpsExtraInfoTables();
        OASVpsExtraInfoTables vpsExtraInfoTables4 = new OASVpsExtraInfoTables();

        System.assert(vpsExtraInfoTables1.equals(vpsExtraInfoTables2));
        System.assert(vpsExtraInfoTables2.equals(vpsExtraInfoTables1));
        System.assert(vpsExtraInfoTables3.equals(vpsExtraInfoTables4));
        System.assert(vpsExtraInfoTables4.equals(vpsExtraInfoTables3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsExtraInfoTables vpsExtraInfoTables1 = OASVpsExtraInfoTables.getExample();
        OASVpsExtraInfoTables vpsExtraInfoTables2 = new OASVpsExtraInfoTables();

        System.assertEquals(false, vpsExtraInfoTables1.equals('foo'));
        System.assertEquals(false, vpsExtraInfoTables2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsExtraInfoTables vpsExtraInfoTables1 = OASVpsExtraInfoTables.getExample();
        OASVpsExtraInfoTables vpsExtraInfoTables2 = new OASVpsExtraInfoTables();
        OASVpsExtraInfoTables vpsExtraInfoTables3;

        System.assertEquals(false, vpsExtraInfoTables1.equals(vpsExtraInfoTables3));
        System.assertEquals(false, vpsExtraInfoTables2.equals(vpsExtraInfoTables3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsExtraInfoTables vpsExtraInfoTables1 = OASVpsExtraInfoTables.getExample();
        OASVpsExtraInfoTables vpsExtraInfoTables2 = new OASVpsExtraInfoTables();

        System.assertEquals(vpsExtraInfoTables1.hashCode(), vpsExtraInfoTables1.hashCode());
        System.assertEquals(vpsExtraInfoTables2.hashCode(), vpsExtraInfoTables2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsExtraInfoTables vpsExtraInfoTables1 = OASVpsExtraInfoTables.getExample();
        OASVpsExtraInfoTables vpsExtraInfoTables2 = OASVpsExtraInfoTables.getExample();
        OASVpsExtraInfoTables vpsExtraInfoTables3 = new OASVpsExtraInfoTables();
        OASVpsExtraInfoTables vpsExtraInfoTables4 = new OASVpsExtraInfoTables();

        System.assert(vpsExtraInfoTables1.equals(vpsExtraInfoTables2));
        System.assert(vpsExtraInfoTables3.equals(vpsExtraInfoTables4));
        System.assertEquals(vpsExtraInfoTables1.hashCode(), vpsExtraInfoTables2.hashCode());
        System.assertEquals(vpsExtraInfoTables3.hashCode(), vpsExtraInfoTables4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASVpsExtraInfoTables vpsExtraInfoTables = new OASVpsExtraInfoTables();
        Map<String, String> x-property-mappings = vpsExtraInfoTables.getx-property-mappings();
        System.assertEquals('ipInfo', x-property-mappings.get('ip_info'));
    }
}
