@isTest
private class OASBackupIPInfoTest {
    @isTest
    private static void equalsSameInstance() {
        OASBackupIPInfo backupIPInfo1 = OASBackupIPInfo.getExample();
        OASBackupIPInfo backupIPInfo2 = backupIPInfo1;
        OASBackupIPInfo backupIPInfo3 = new OASBackupIPInfo();
        OASBackupIPInfo backupIPInfo4 = backupIPInfo3;

        System.assert(backupIPInfo1.equals(backupIPInfo2));
        System.assert(backupIPInfo2.equals(backupIPInfo1));
        System.assert(backupIPInfo1.equals(backupIPInfo1));
        System.assert(backupIPInfo3.equals(backupIPInfo4));
        System.assert(backupIPInfo4.equals(backupIPInfo3));
        System.assert(backupIPInfo3.equals(backupIPInfo3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASBackupIPInfo backupIPInfo1 = OASBackupIPInfo.getExample();
        OASBackupIPInfo backupIPInfo2 = OASBackupIPInfo.getExample();
        OASBackupIPInfo backupIPInfo3 = new OASBackupIPInfo();
        OASBackupIPInfo backupIPInfo4 = new OASBackupIPInfo();

        System.assert(backupIPInfo1.equals(backupIPInfo2));
        System.assert(backupIPInfo2.equals(backupIPInfo1));
        System.assert(backupIPInfo3.equals(backupIPInfo4));
        System.assert(backupIPInfo4.equals(backupIPInfo3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASBackupIPInfo backupIPInfo1 = OASBackupIPInfo.getExample();
        OASBackupIPInfo backupIPInfo2 = new OASBackupIPInfo();

        System.assertEquals(false, backupIPInfo1.equals('foo'));
        System.assertEquals(false, backupIPInfo2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASBackupIPInfo backupIPInfo1 = OASBackupIPInfo.getExample();
        OASBackupIPInfo backupIPInfo2 = new OASBackupIPInfo();
        OASBackupIPInfo backupIPInfo3;

        System.assertEquals(false, backupIPInfo1.equals(backupIPInfo3));
        System.assertEquals(false, backupIPInfo2.equals(backupIPInfo3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASBackupIPInfo backupIPInfo1 = OASBackupIPInfo.getExample();
        OASBackupIPInfo backupIPInfo2 = new OASBackupIPInfo();

        System.assertEquals(backupIPInfo1.hashCode(), backupIPInfo1.hashCode());
        System.assertEquals(backupIPInfo2.hashCode(), backupIPInfo2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASBackupIPInfo backupIPInfo1 = OASBackupIPInfo.getExample();
        OASBackupIPInfo backupIPInfo2 = OASBackupIPInfo.getExample();
        OASBackupIPInfo backupIPInfo3 = new OASBackupIPInfo();
        OASBackupIPInfo backupIPInfo4 = new OASBackupIPInfo();

        System.assert(backupIPInfo1.equals(backupIPInfo2));
        System.assert(backupIPInfo3.equals(backupIPInfo4));
        System.assertEquals(backupIPInfo1.hashCode(), backupIPInfo2.hashCode());
        System.assertEquals(backupIPInfo3.hashCode(), backupIPInfo4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASBackupIPInfo backupIPInfo = new OASBackupIPInfo();
        System.assertEquals(new List<OASBackupIPInfoRow>(), backupIPInfo.rows);
        System.assertEquals(null, backupIPInfo.title);
    }
}
