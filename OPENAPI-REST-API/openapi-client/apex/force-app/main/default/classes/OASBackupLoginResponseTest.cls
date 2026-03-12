@isTest
private class OASBackupLoginResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASBackupLoginResponse backupLoginResponse1 = OASBackupLoginResponse.getExample();
        OASBackupLoginResponse backupLoginResponse2 = backupLoginResponse1;
        OASBackupLoginResponse backupLoginResponse3 = new OASBackupLoginResponse();
        OASBackupLoginResponse backupLoginResponse4 = backupLoginResponse3;

        System.assert(backupLoginResponse1.equals(backupLoginResponse2));
        System.assert(backupLoginResponse2.equals(backupLoginResponse1));
        System.assert(backupLoginResponse1.equals(backupLoginResponse1));
        System.assert(backupLoginResponse3.equals(backupLoginResponse4));
        System.assert(backupLoginResponse4.equals(backupLoginResponse3));
        System.assert(backupLoginResponse3.equals(backupLoginResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASBackupLoginResponse backupLoginResponse1 = OASBackupLoginResponse.getExample();
        OASBackupLoginResponse backupLoginResponse2 = OASBackupLoginResponse.getExample();
        OASBackupLoginResponse backupLoginResponse3 = new OASBackupLoginResponse();
        OASBackupLoginResponse backupLoginResponse4 = new OASBackupLoginResponse();

        System.assert(backupLoginResponse1.equals(backupLoginResponse2));
        System.assert(backupLoginResponse2.equals(backupLoginResponse1));
        System.assert(backupLoginResponse3.equals(backupLoginResponse4));
        System.assert(backupLoginResponse4.equals(backupLoginResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASBackupLoginResponse backupLoginResponse1 = OASBackupLoginResponse.getExample();
        OASBackupLoginResponse backupLoginResponse2 = new OASBackupLoginResponse();

        System.assertEquals(false, backupLoginResponse1.equals('foo'));
        System.assertEquals(false, backupLoginResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASBackupLoginResponse backupLoginResponse1 = OASBackupLoginResponse.getExample();
        OASBackupLoginResponse backupLoginResponse2 = new OASBackupLoginResponse();
        OASBackupLoginResponse backupLoginResponse3;

        System.assertEquals(false, backupLoginResponse1.equals(backupLoginResponse3));
        System.assertEquals(false, backupLoginResponse2.equals(backupLoginResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASBackupLoginResponse backupLoginResponse1 = OASBackupLoginResponse.getExample();
        OASBackupLoginResponse backupLoginResponse2 = new OASBackupLoginResponse();

        System.assertEquals(backupLoginResponse1.hashCode(), backupLoginResponse1.hashCode());
        System.assertEquals(backupLoginResponse2.hashCode(), backupLoginResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASBackupLoginResponse backupLoginResponse1 = OASBackupLoginResponse.getExample();
        OASBackupLoginResponse backupLoginResponse2 = OASBackupLoginResponse.getExample();
        OASBackupLoginResponse backupLoginResponse3 = new OASBackupLoginResponse();
        OASBackupLoginResponse backupLoginResponse4 = new OASBackupLoginResponse();

        System.assert(backupLoginResponse1.equals(backupLoginResponse2));
        System.assert(backupLoginResponse3.equals(backupLoginResponse4));
        System.assertEquals(backupLoginResponse1.hashCode(), backupLoginResponse2.hashCode());
        System.assertEquals(backupLoginResponse3.hashCode(), backupLoginResponse4.hashCode());
    }
}
