@isTest
private class OASVpsBackupRowsTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsBackupRows vpsBackupRows1 = OASVpsBackupRows.getExample();
        OASVpsBackupRows vpsBackupRows2 = vpsBackupRows1;
        OASVpsBackupRows vpsBackupRows3 = new OASVpsBackupRows();
        OASVpsBackupRows vpsBackupRows4 = vpsBackupRows3;

        System.assert(vpsBackupRows1.equals(vpsBackupRows2));
        System.assert(vpsBackupRows2.equals(vpsBackupRows1));
        System.assert(vpsBackupRows1.equals(vpsBackupRows1));
        System.assert(vpsBackupRows3.equals(vpsBackupRows4));
        System.assert(vpsBackupRows4.equals(vpsBackupRows3));
        System.assert(vpsBackupRows3.equals(vpsBackupRows3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsBackupRows vpsBackupRows1 = OASVpsBackupRows.getExample();
        OASVpsBackupRows vpsBackupRows2 = OASVpsBackupRows.getExample();
        OASVpsBackupRows vpsBackupRows3 = new OASVpsBackupRows();
        OASVpsBackupRows vpsBackupRows4 = new OASVpsBackupRows();

        System.assert(vpsBackupRows1.equals(vpsBackupRows2));
        System.assert(vpsBackupRows2.equals(vpsBackupRows1));
        System.assert(vpsBackupRows3.equals(vpsBackupRows4));
        System.assert(vpsBackupRows4.equals(vpsBackupRows3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsBackupRows vpsBackupRows1 = OASVpsBackupRows.getExample();
        OASVpsBackupRows vpsBackupRows2 = new OASVpsBackupRows();

        System.assertEquals(false, vpsBackupRows1.equals('foo'));
        System.assertEquals(false, vpsBackupRows2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsBackupRows vpsBackupRows1 = OASVpsBackupRows.getExample();
        OASVpsBackupRows vpsBackupRows2 = new OASVpsBackupRows();
        OASVpsBackupRows vpsBackupRows3;

        System.assertEquals(false, vpsBackupRows1.equals(vpsBackupRows3));
        System.assertEquals(false, vpsBackupRows2.equals(vpsBackupRows3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsBackupRows vpsBackupRows1 = OASVpsBackupRows.getExample();
        OASVpsBackupRows vpsBackupRows2 = new OASVpsBackupRows();

        System.assertEquals(vpsBackupRows1.hashCode(), vpsBackupRows1.hashCode());
        System.assertEquals(vpsBackupRows2.hashCode(), vpsBackupRows2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsBackupRows vpsBackupRows1 = OASVpsBackupRows.getExample();
        OASVpsBackupRows vpsBackupRows2 = OASVpsBackupRows.getExample();
        OASVpsBackupRows vpsBackupRows3 = new OASVpsBackupRows();
        OASVpsBackupRows vpsBackupRows4 = new OASVpsBackupRows();

        System.assert(vpsBackupRows1.equals(vpsBackupRows2));
        System.assert(vpsBackupRows3.equals(vpsBackupRows4));
        System.assertEquals(vpsBackupRows1.hashCode(), vpsBackupRows2.hashCode());
        System.assertEquals(vpsBackupRows3.hashCode(), vpsBackupRows4.hashCode());
    }
}
