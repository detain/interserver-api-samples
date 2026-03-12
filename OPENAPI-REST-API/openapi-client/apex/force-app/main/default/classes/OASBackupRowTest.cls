@isTest
private class OASBackupRowTest {
    @isTest
    private static void equalsSameInstance() {
        OASBackupRow backupRow1 = OASBackupRow.getExample();
        OASBackupRow backupRow2 = backupRow1;
        OASBackupRow backupRow3 = new OASBackupRow();
        OASBackupRow backupRow4 = backupRow3;

        System.assert(backupRow1.equals(backupRow2));
        System.assert(backupRow2.equals(backupRow1));
        System.assert(backupRow1.equals(backupRow1));
        System.assert(backupRow3.equals(backupRow4));
        System.assert(backupRow4.equals(backupRow3));
        System.assert(backupRow3.equals(backupRow3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASBackupRow backupRow1 = OASBackupRow.getExample();
        OASBackupRow backupRow2 = OASBackupRow.getExample();
        OASBackupRow backupRow3 = new OASBackupRow();
        OASBackupRow backupRow4 = new OASBackupRow();

        System.assert(backupRow1.equals(backupRow2));
        System.assert(backupRow2.equals(backupRow1));
        System.assert(backupRow3.equals(backupRow4));
        System.assert(backupRow4.equals(backupRow3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASBackupRow backupRow1 = OASBackupRow.getExample();
        OASBackupRow backupRow2 = new OASBackupRow();

        System.assertEquals(false, backupRow1.equals('foo'));
        System.assertEquals(false, backupRow2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASBackupRow backupRow1 = OASBackupRow.getExample();
        OASBackupRow backupRow2 = new OASBackupRow();
        OASBackupRow backupRow3;

        System.assertEquals(false, backupRow1.equals(backupRow3));
        System.assertEquals(false, backupRow2.equals(backupRow3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASBackupRow backupRow1 = OASBackupRow.getExample();
        OASBackupRow backupRow2 = new OASBackupRow();

        System.assertEquals(backupRow1.hashCode(), backupRow1.hashCode());
        System.assertEquals(backupRow2.hashCode(), backupRow2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASBackupRow backupRow1 = OASBackupRow.getExample();
        OASBackupRow backupRow2 = OASBackupRow.getExample();
        OASBackupRow backupRow3 = new OASBackupRow();
        OASBackupRow backupRow4 = new OASBackupRow();

        System.assert(backupRow1.equals(backupRow2));
        System.assert(backupRow3.equals(backupRow4));
        System.assertEquals(backupRow1.hashCode(), backupRow2.hashCode());
        System.assertEquals(backupRow3.hashCode(), backupRow4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASBackupRow backupRow = new OASBackupRow();
        Map<String, String> x-property-mappings = backupRow.getx-property-mappings();
        System.assertEquals('backupId', x-property-mappings.get('backup_id'));
        System.assertEquals('backupName', x-property-mappings.get('backup_name'));
        System.assertEquals('backupCost', x-property-mappings.get('backup_cost'));
        System.assertEquals('backupUsername', x-property-mappings.get('backup_username'));
        System.assertEquals('backupStatus', x-property-mappings.get('backup_status'));
        System.assertEquals('servicesName', x-property-mappings.get('services_name'));
    }
}
