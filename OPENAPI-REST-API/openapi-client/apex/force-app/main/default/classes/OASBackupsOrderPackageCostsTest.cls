@isTest
private class OASBackupsOrderPackageCostsTest {
    @isTest
    private static void equalsSameInstance() {
        OASBackupsOrderPackageCosts backupsOrderPackageCosts1 = OASBackupsOrderPackageCosts.getExample();
        OASBackupsOrderPackageCosts backupsOrderPackageCosts2 = backupsOrderPackageCosts1;
        OASBackupsOrderPackageCosts backupsOrderPackageCosts3 = new OASBackupsOrderPackageCosts();
        OASBackupsOrderPackageCosts backupsOrderPackageCosts4 = backupsOrderPackageCosts3;

        System.assert(backupsOrderPackageCosts1.equals(backupsOrderPackageCosts2));
        System.assert(backupsOrderPackageCosts2.equals(backupsOrderPackageCosts1));
        System.assert(backupsOrderPackageCosts1.equals(backupsOrderPackageCosts1));
        System.assert(backupsOrderPackageCosts3.equals(backupsOrderPackageCosts4));
        System.assert(backupsOrderPackageCosts4.equals(backupsOrderPackageCosts3));
        System.assert(backupsOrderPackageCosts3.equals(backupsOrderPackageCosts3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASBackupsOrderPackageCosts backupsOrderPackageCosts1 = OASBackupsOrderPackageCosts.getExample();
        OASBackupsOrderPackageCosts backupsOrderPackageCosts2 = OASBackupsOrderPackageCosts.getExample();
        OASBackupsOrderPackageCosts backupsOrderPackageCosts3 = new OASBackupsOrderPackageCosts();
        OASBackupsOrderPackageCosts backupsOrderPackageCosts4 = new OASBackupsOrderPackageCosts();

        System.assert(backupsOrderPackageCosts1.equals(backupsOrderPackageCosts2));
        System.assert(backupsOrderPackageCosts2.equals(backupsOrderPackageCosts1));
        System.assert(backupsOrderPackageCosts3.equals(backupsOrderPackageCosts4));
        System.assert(backupsOrderPackageCosts4.equals(backupsOrderPackageCosts3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASBackupsOrderPackageCosts backupsOrderPackageCosts1 = OASBackupsOrderPackageCosts.getExample();
        OASBackupsOrderPackageCosts backupsOrderPackageCosts2 = new OASBackupsOrderPackageCosts();

        System.assertEquals(false, backupsOrderPackageCosts1.equals('foo'));
        System.assertEquals(false, backupsOrderPackageCosts2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASBackupsOrderPackageCosts backupsOrderPackageCosts1 = OASBackupsOrderPackageCosts.getExample();
        OASBackupsOrderPackageCosts backupsOrderPackageCosts2 = new OASBackupsOrderPackageCosts();
        OASBackupsOrderPackageCosts backupsOrderPackageCosts3;

        System.assertEquals(false, backupsOrderPackageCosts1.equals(backupsOrderPackageCosts3));
        System.assertEquals(false, backupsOrderPackageCosts2.equals(backupsOrderPackageCosts3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASBackupsOrderPackageCosts backupsOrderPackageCosts1 = OASBackupsOrderPackageCosts.getExample();
        OASBackupsOrderPackageCosts backupsOrderPackageCosts2 = new OASBackupsOrderPackageCosts();

        System.assertEquals(backupsOrderPackageCosts1.hashCode(), backupsOrderPackageCosts1.hashCode());
        System.assertEquals(backupsOrderPackageCosts2.hashCode(), backupsOrderPackageCosts2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASBackupsOrderPackageCosts backupsOrderPackageCosts1 = OASBackupsOrderPackageCosts.getExample();
        OASBackupsOrderPackageCosts backupsOrderPackageCosts2 = OASBackupsOrderPackageCosts.getExample();
        OASBackupsOrderPackageCosts backupsOrderPackageCosts3 = new OASBackupsOrderPackageCosts();
        OASBackupsOrderPackageCosts backupsOrderPackageCosts4 = new OASBackupsOrderPackageCosts();

        System.assert(backupsOrderPackageCosts1.equals(backupsOrderPackageCosts2));
        System.assert(backupsOrderPackageCosts3.equals(backupsOrderPackageCosts4));
        System.assertEquals(backupsOrderPackageCosts1.hashCode(), backupsOrderPackageCosts2.hashCode());
        System.assertEquals(backupsOrderPackageCosts3.hashCode(), backupsOrderPackageCosts4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASBackupsOrderPackageCosts backupsOrderPackageCosts = new OASBackupsOrderPackageCosts();
        Map<String, String> x-property-mappings = backupsOrderPackageCosts.getx-property-mappings();
        System.assertEquals('', x-property-mappings.get('11006'));
    }
}
