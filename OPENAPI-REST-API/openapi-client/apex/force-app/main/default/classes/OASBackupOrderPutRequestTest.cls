@isTest
private class OASBackupOrderPutRequestTest {
    @isTest
    private static void equalsSameInstance() {
        OASBackupOrderPutRequest backupOrderPutRequest1 = OASBackupOrderPutRequest.getExample();
        OASBackupOrderPutRequest backupOrderPutRequest2 = backupOrderPutRequest1;
        OASBackupOrderPutRequest backupOrderPutRequest3 = new OASBackupOrderPutRequest();
        OASBackupOrderPutRequest backupOrderPutRequest4 = backupOrderPutRequest3;

        System.assert(backupOrderPutRequest1.equals(backupOrderPutRequest2));
        System.assert(backupOrderPutRequest2.equals(backupOrderPutRequest1));
        System.assert(backupOrderPutRequest1.equals(backupOrderPutRequest1));
        System.assert(backupOrderPutRequest3.equals(backupOrderPutRequest4));
        System.assert(backupOrderPutRequest4.equals(backupOrderPutRequest3));
        System.assert(backupOrderPutRequest3.equals(backupOrderPutRequest3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASBackupOrderPutRequest backupOrderPutRequest1 = OASBackupOrderPutRequest.getExample();
        OASBackupOrderPutRequest backupOrderPutRequest2 = OASBackupOrderPutRequest.getExample();
        OASBackupOrderPutRequest backupOrderPutRequest3 = new OASBackupOrderPutRequest();
        OASBackupOrderPutRequest backupOrderPutRequest4 = new OASBackupOrderPutRequest();

        System.assert(backupOrderPutRequest1.equals(backupOrderPutRequest2));
        System.assert(backupOrderPutRequest2.equals(backupOrderPutRequest1));
        System.assert(backupOrderPutRequest3.equals(backupOrderPutRequest4));
        System.assert(backupOrderPutRequest4.equals(backupOrderPutRequest3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASBackupOrderPutRequest backupOrderPutRequest1 = OASBackupOrderPutRequest.getExample();
        OASBackupOrderPutRequest backupOrderPutRequest2 = new OASBackupOrderPutRequest();

        System.assertEquals(false, backupOrderPutRequest1.equals('foo'));
        System.assertEquals(false, backupOrderPutRequest2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASBackupOrderPutRequest backupOrderPutRequest1 = OASBackupOrderPutRequest.getExample();
        OASBackupOrderPutRequest backupOrderPutRequest2 = new OASBackupOrderPutRequest();
        OASBackupOrderPutRequest backupOrderPutRequest3;

        System.assertEquals(false, backupOrderPutRequest1.equals(backupOrderPutRequest3));
        System.assertEquals(false, backupOrderPutRequest2.equals(backupOrderPutRequest3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASBackupOrderPutRequest backupOrderPutRequest1 = OASBackupOrderPutRequest.getExample();
        OASBackupOrderPutRequest backupOrderPutRequest2 = new OASBackupOrderPutRequest();

        System.assertEquals(backupOrderPutRequest1.hashCode(), backupOrderPutRequest1.hashCode());
        System.assertEquals(backupOrderPutRequest2.hashCode(), backupOrderPutRequest2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASBackupOrderPutRequest backupOrderPutRequest1 = OASBackupOrderPutRequest.getExample();
        OASBackupOrderPutRequest backupOrderPutRequest2 = OASBackupOrderPutRequest.getExample();
        OASBackupOrderPutRequest backupOrderPutRequest3 = new OASBackupOrderPutRequest();
        OASBackupOrderPutRequest backupOrderPutRequest4 = new OASBackupOrderPutRequest();

        System.assert(backupOrderPutRequest1.equals(backupOrderPutRequest2));
        System.assert(backupOrderPutRequest3.equals(backupOrderPutRequest4));
        System.assertEquals(backupOrderPutRequest1.hashCode(), backupOrderPutRequest2.hashCode());
        System.assertEquals(backupOrderPutRequest3.hashCode(), backupOrderPutRequest4.hashCode());
    }
}
