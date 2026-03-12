@isTest
private class OASBackupIPInfoRowTest {
    @isTest
    private static void equalsSameInstance() {
        OASBackupIPInfoRow backupIPInfoRow1 = OASBackupIPInfoRow.getExample();
        OASBackupIPInfoRow backupIPInfoRow2 = backupIPInfoRow1;
        OASBackupIPInfoRow backupIPInfoRow3 = new OASBackupIPInfoRow();
        OASBackupIPInfoRow backupIPInfoRow4 = backupIPInfoRow3;

        System.assert(backupIPInfoRow1.equals(backupIPInfoRow2));
        System.assert(backupIPInfoRow2.equals(backupIPInfoRow1));
        System.assert(backupIPInfoRow1.equals(backupIPInfoRow1));
        System.assert(backupIPInfoRow3.equals(backupIPInfoRow4));
        System.assert(backupIPInfoRow4.equals(backupIPInfoRow3));
        System.assert(backupIPInfoRow3.equals(backupIPInfoRow3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASBackupIPInfoRow backupIPInfoRow1 = OASBackupIPInfoRow.getExample();
        OASBackupIPInfoRow backupIPInfoRow2 = OASBackupIPInfoRow.getExample();
        OASBackupIPInfoRow backupIPInfoRow3 = new OASBackupIPInfoRow();
        OASBackupIPInfoRow backupIPInfoRow4 = new OASBackupIPInfoRow();

        System.assert(backupIPInfoRow1.equals(backupIPInfoRow2));
        System.assert(backupIPInfoRow2.equals(backupIPInfoRow1));
        System.assert(backupIPInfoRow3.equals(backupIPInfoRow4));
        System.assert(backupIPInfoRow4.equals(backupIPInfoRow3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASBackupIPInfoRow backupIPInfoRow1 = OASBackupIPInfoRow.getExample();
        OASBackupIPInfoRow backupIPInfoRow2 = new OASBackupIPInfoRow();

        System.assertEquals(false, backupIPInfoRow1.equals('foo'));
        System.assertEquals(false, backupIPInfoRow2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASBackupIPInfoRow backupIPInfoRow1 = OASBackupIPInfoRow.getExample();
        OASBackupIPInfoRow backupIPInfoRow2 = new OASBackupIPInfoRow();
        OASBackupIPInfoRow backupIPInfoRow3;

        System.assertEquals(false, backupIPInfoRow1.equals(backupIPInfoRow3));
        System.assertEquals(false, backupIPInfoRow2.equals(backupIPInfoRow3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASBackupIPInfoRow backupIPInfoRow1 = OASBackupIPInfoRow.getExample();
        OASBackupIPInfoRow backupIPInfoRow2 = new OASBackupIPInfoRow();

        System.assertEquals(backupIPInfoRow1.hashCode(), backupIPInfoRow1.hashCode());
        System.assertEquals(backupIPInfoRow2.hashCode(), backupIPInfoRow2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASBackupIPInfoRow backupIPInfoRow1 = OASBackupIPInfoRow.getExample();
        OASBackupIPInfoRow backupIPInfoRow2 = OASBackupIPInfoRow.getExample();
        OASBackupIPInfoRow backupIPInfoRow3 = new OASBackupIPInfoRow();
        OASBackupIPInfoRow backupIPInfoRow4 = new OASBackupIPInfoRow();

        System.assert(backupIPInfoRow1.equals(backupIPInfoRow2));
        System.assert(backupIPInfoRow3.equals(backupIPInfoRow4));
        System.assertEquals(backupIPInfoRow1.hashCode(), backupIPInfoRow2.hashCode());
        System.assertEquals(backupIPInfoRow3.hashCode(), backupIPInfoRow4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASBackupIPInfoRow backupIPInfoRow = new OASBackupIPInfoRow();
        Map<String, String> x-property-mappings = backupIPInfoRow.getx-property-mappings();
        System.assertEquals('r_desc', x-property-mappings.get('desc'));
    }
}
