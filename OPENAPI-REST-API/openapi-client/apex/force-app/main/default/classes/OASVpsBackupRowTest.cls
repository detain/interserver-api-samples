@isTest
private class OASVpsBackupRowTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsBackupRow vpsBackupRow1 = OASVpsBackupRow.getExample();
        OASVpsBackupRow vpsBackupRow2 = vpsBackupRow1;
        OASVpsBackupRow vpsBackupRow3 = new OASVpsBackupRow();
        OASVpsBackupRow vpsBackupRow4 = vpsBackupRow3;

        System.assert(vpsBackupRow1.equals(vpsBackupRow2));
        System.assert(vpsBackupRow2.equals(vpsBackupRow1));
        System.assert(vpsBackupRow1.equals(vpsBackupRow1));
        System.assert(vpsBackupRow3.equals(vpsBackupRow4));
        System.assert(vpsBackupRow4.equals(vpsBackupRow3));
        System.assert(vpsBackupRow3.equals(vpsBackupRow3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsBackupRow vpsBackupRow1 = OASVpsBackupRow.getExample();
        OASVpsBackupRow vpsBackupRow2 = OASVpsBackupRow.getExample();
        OASVpsBackupRow vpsBackupRow3 = new OASVpsBackupRow();
        OASVpsBackupRow vpsBackupRow4 = new OASVpsBackupRow();

        System.assert(vpsBackupRow1.equals(vpsBackupRow2));
        System.assert(vpsBackupRow2.equals(vpsBackupRow1));
        System.assert(vpsBackupRow3.equals(vpsBackupRow4));
        System.assert(vpsBackupRow4.equals(vpsBackupRow3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsBackupRow vpsBackupRow1 = OASVpsBackupRow.getExample();
        OASVpsBackupRow vpsBackupRow2 = new OASVpsBackupRow();

        System.assertEquals(false, vpsBackupRow1.equals('foo'));
        System.assertEquals(false, vpsBackupRow2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsBackupRow vpsBackupRow1 = OASVpsBackupRow.getExample();
        OASVpsBackupRow vpsBackupRow2 = new OASVpsBackupRow();
        OASVpsBackupRow vpsBackupRow3;

        System.assertEquals(false, vpsBackupRow1.equals(vpsBackupRow3));
        System.assertEquals(false, vpsBackupRow2.equals(vpsBackupRow3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsBackupRow vpsBackupRow1 = OASVpsBackupRow.getExample();
        OASVpsBackupRow vpsBackupRow2 = new OASVpsBackupRow();

        System.assertEquals(vpsBackupRow1.hashCode(), vpsBackupRow1.hashCode());
        System.assertEquals(vpsBackupRow2.hashCode(), vpsBackupRow2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsBackupRow vpsBackupRow1 = OASVpsBackupRow.getExample();
        OASVpsBackupRow vpsBackupRow2 = OASVpsBackupRow.getExample();
        OASVpsBackupRow vpsBackupRow3 = new OASVpsBackupRow();
        OASVpsBackupRow vpsBackupRow4 = new OASVpsBackupRow();

        System.assert(vpsBackupRow1.equals(vpsBackupRow2));
        System.assert(vpsBackupRow3.equals(vpsBackupRow4));
        System.assertEquals(vpsBackupRow1.hashCode(), vpsBackupRow2.hashCode());
        System.assertEquals(vpsBackupRow3.hashCode(), vpsBackupRow4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASVpsBackupRow vpsBackupRow = new OASVpsBackupRow();
        Map<String, String> x-property-mappings = vpsBackupRow.getx-property-mappings();
        System.assertEquals('r_date', x-property-mappings.get('date'));
    }
}
