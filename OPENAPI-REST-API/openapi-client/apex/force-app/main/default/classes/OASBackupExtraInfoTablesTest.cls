@isTest
private class OASBackupExtraInfoTablesTest {
    @isTest
    private static void equalsSameInstance() {
        OASBackupExtraInfoTables backupExtraInfoTables1 = OASBackupExtraInfoTables.getExample();
        OASBackupExtraInfoTables backupExtraInfoTables2 = backupExtraInfoTables1;
        OASBackupExtraInfoTables backupExtraInfoTables3 = new OASBackupExtraInfoTables();
        OASBackupExtraInfoTables backupExtraInfoTables4 = backupExtraInfoTables3;

        System.assert(backupExtraInfoTables1.equals(backupExtraInfoTables2));
        System.assert(backupExtraInfoTables2.equals(backupExtraInfoTables1));
        System.assert(backupExtraInfoTables1.equals(backupExtraInfoTables1));
        System.assert(backupExtraInfoTables3.equals(backupExtraInfoTables4));
        System.assert(backupExtraInfoTables4.equals(backupExtraInfoTables3));
        System.assert(backupExtraInfoTables3.equals(backupExtraInfoTables3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASBackupExtraInfoTables backupExtraInfoTables1 = OASBackupExtraInfoTables.getExample();
        OASBackupExtraInfoTables backupExtraInfoTables2 = OASBackupExtraInfoTables.getExample();
        OASBackupExtraInfoTables backupExtraInfoTables3 = new OASBackupExtraInfoTables();
        OASBackupExtraInfoTables backupExtraInfoTables4 = new OASBackupExtraInfoTables();

        System.assert(backupExtraInfoTables1.equals(backupExtraInfoTables2));
        System.assert(backupExtraInfoTables2.equals(backupExtraInfoTables1));
        System.assert(backupExtraInfoTables3.equals(backupExtraInfoTables4));
        System.assert(backupExtraInfoTables4.equals(backupExtraInfoTables3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASBackupExtraInfoTables backupExtraInfoTables1 = OASBackupExtraInfoTables.getExample();
        OASBackupExtraInfoTables backupExtraInfoTables2 = new OASBackupExtraInfoTables();

        System.assertEquals(false, backupExtraInfoTables1.equals('foo'));
        System.assertEquals(false, backupExtraInfoTables2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASBackupExtraInfoTables backupExtraInfoTables1 = OASBackupExtraInfoTables.getExample();
        OASBackupExtraInfoTables backupExtraInfoTables2 = new OASBackupExtraInfoTables();
        OASBackupExtraInfoTables backupExtraInfoTables3;

        System.assertEquals(false, backupExtraInfoTables1.equals(backupExtraInfoTables3));
        System.assertEquals(false, backupExtraInfoTables2.equals(backupExtraInfoTables3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASBackupExtraInfoTables backupExtraInfoTables1 = OASBackupExtraInfoTables.getExample();
        OASBackupExtraInfoTables backupExtraInfoTables2 = new OASBackupExtraInfoTables();

        System.assertEquals(backupExtraInfoTables1.hashCode(), backupExtraInfoTables1.hashCode());
        System.assertEquals(backupExtraInfoTables2.hashCode(), backupExtraInfoTables2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASBackupExtraInfoTables backupExtraInfoTables1 = OASBackupExtraInfoTables.getExample();
        OASBackupExtraInfoTables backupExtraInfoTables2 = OASBackupExtraInfoTables.getExample();
        OASBackupExtraInfoTables backupExtraInfoTables3 = new OASBackupExtraInfoTables();
        OASBackupExtraInfoTables backupExtraInfoTables4 = new OASBackupExtraInfoTables();

        System.assert(backupExtraInfoTables1.equals(backupExtraInfoTables2));
        System.assert(backupExtraInfoTables3.equals(backupExtraInfoTables4));
        System.assertEquals(backupExtraInfoTables1.hashCode(), backupExtraInfoTables2.hashCode());
        System.assertEquals(backupExtraInfoTables3.hashCode(), backupExtraInfoTables4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASBackupExtraInfoTables backupExtraInfoTables = new OASBackupExtraInfoTables();
        Map<String, String> x-property-mappings = backupExtraInfoTables.getx-property-mappings();
        System.assertEquals('ipInfo', x-property-mappings.get('ip_info'));
    }
}
