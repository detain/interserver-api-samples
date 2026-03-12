@isTest
private class OASDownloadQsBackupRequestTest {
    @isTest
    private static void equalsSameInstance() {
        OASDownloadQsBackupRequest downloadQsBackupRequest1 = OASDownloadQsBackupRequest.getExample();
        OASDownloadQsBackupRequest downloadQsBackupRequest2 = downloadQsBackupRequest1;
        OASDownloadQsBackupRequest downloadQsBackupRequest3 = new OASDownloadQsBackupRequest();
        OASDownloadQsBackupRequest downloadQsBackupRequest4 = downloadQsBackupRequest3;

        System.assert(downloadQsBackupRequest1.equals(downloadQsBackupRequest2));
        System.assert(downloadQsBackupRequest2.equals(downloadQsBackupRequest1));
        System.assert(downloadQsBackupRequest1.equals(downloadQsBackupRequest1));
        System.assert(downloadQsBackupRequest3.equals(downloadQsBackupRequest4));
        System.assert(downloadQsBackupRequest4.equals(downloadQsBackupRequest3));
        System.assert(downloadQsBackupRequest3.equals(downloadQsBackupRequest3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDownloadQsBackupRequest downloadQsBackupRequest1 = OASDownloadQsBackupRequest.getExample();
        OASDownloadQsBackupRequest downloadQsBackupRequest2 = OASDownloadQsBackupRequest.getExample();
        OASDownloadQsBackupRequest downloadQsBackupRequest3 = new OASDownloadQsBackupRequest();
        OASDownloadQsBackupRequest downloadQsBackupRequest4 = new OASDownloadQsBackupRequest();

        System.assert(downloadQsBackupRequest1.equals(downloadQsBackupRequest2));
        System.assert(downloadQsBackupRequest2.equals(downloadQsBackupRequest1));
        System.assert(downloadQsBackupRequest3.equals(downloadQsBackupRequest4));
        System.assert(downloadQsBackupRequest4.equals(downloadQsBackupRequest3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDownloadQsBackupRequest downloadQsBackupRequest1 = OASDownloadQsBackupRequest.getExample();
        OASDownloadQsBackupRequest downloadQsBackupRequest2 = new OASDownloadQsBackupRequest();

        System.assertEquals(false, downloadQsBackupRequest1.equals('foo'));
        System.assertEquals(false, downloadQsBackupRequest2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDownloadQsBackupRequest downloadQsBackupRequest1 = OASDownloadQsBackupRequest.getExample();
        OASDownloadQsBackupRequest downloadQsBackupRequest2 = new OASDownloadQsBackupRequest();
        OASDownloadQsBackupRequest downloadQsBackupRequest3;

        System.assertEquals(false, downloadQsBackupRequest1.equals(downloadQsBackupRequest3));
        System.assertEquals(false, downloadQsBackupRequest2.equals(downloadQsBackupRequest3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDownloadQsBackupRequest downloadQsBackupRequest1 = OASDownloadQsBackupRequest.getExample();
        OASDownloadQsBackupRequest downloadQsBackupRequest2 = new OASDownloadQsBackupRequest();

        System.assertEquals(downloadQsBackupRequest1.hashCode(), downloadQsBackupRequest1.hashCode());
        System.assertEquals(downloadQsBackupRequest2.hashCode(), downloadQsBackupRequest2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDownloadQsBackupRequest downloadQsBackupRequest1 = OASDownloadQsBackupRequest.getExample();
        OASDownloadQsBackupRequest downloadQsBackupRequest2 = OASDownloadQsBackupRequest.getExample();
        OASDownloadQsBackupRequest downloadQsBackupRequest3 = new OASDownloadQsBackupRequest();
        OASDownloadQsBackupRequest downloadQsBackupRequest4 = new OASDownloadQsBackupRequest();

        System.assert(downloadQsBackupRequest1.equals(downloadQsBackupRequest2));
        System.assert(downloadQsBackupRequest3.equals(downloadQsBackupRequest4));
        System.assertEquals(downloadQsBackupRequest1.hashCode(), downloadQsBackupRequest2.hashCode());
        System.assertEquals(downloadQsBackupRequest3.hashCode(), downloadQsBackupRequest4.hashCode());
    }
}
