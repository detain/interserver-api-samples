@isTest
private class OASBackupClientLinkTest {
    @isTest
    private static void equalsSameInstance() {
        OASBackupClientLink backupClientLink1 = OASBackupClientLink.getExample();
        OASBackupClientLink backupClientLink2 = backupClientLink1;
        OASBackupClientLink backupClientLink3 = new OASBackupClientLink();
        OASBackupClientLink backupClientLink4 = backupClientLink3;

        System.assert(backupClientLink1.equals(backupClientLink2));
        System.assert(backupClientLink2.equals(backupClientLink1));
        System.assert(backupClientLink1.equals(backupClientLink1));
        System.assert(backupClientLink3.equals(backupClientLink4));
        System.assert(backupClientLink4.equals(backupClientLink3));
        System.assert(backupClientLink3.equals(backupClientLink3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASBackupClientLink backupClientLink1 = OASBackupClientLink.getExample();
        OASBackupClientLink backupClientLink2 = OASBackupClientLink.getExample();
        OASBackupClientLink backupClientLink3 = new OASBackupClientLink();
        OASBackupClientLink backupClientLink4 = new OASBackupClientLink();

        System.assert(backupClientLink1.equals(backupClientLink2));
        System.assert(backupClientLink2.equals(backupClientLink1));
        System.assert(backupClientLink3.equals(backupClientLink4));
        System.assert(backupClientLink4.equals(backupClientLink3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASBackupClientLink backupClientLink1 = OASBackupClientLink.getExample();
        OASBackupClientLink backupClientLink2 = new OASBackupClientLink();

        System.assertEquals(false, backupClientLink1.equals('foo'));
        System.assertEquals(false, backupClientLink2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASBackupClientLink backupClientLink1 = OASBackupClientLink.getExample();
        OASBackupClientLink backupClientLink2 = new OASBackupClientLink();
        OASBackupClientLink backupClientLink3;

        System.assertEquals(false, backupClientLink1.equals(backupClientLink3));
        System.assertEquals(false, backupClientLink2.equals(backupClientLink3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASBackupClientLink backupClientLink1 = OASBackupClientLink.getExample();
        OASBackupClientLink backupClientLink2 = new OASBackupClientLink();

        System.assertEquals(backupClientLink1.hashCode(), backupClientLink1.hashCode());
        System.assertEquals(backupClientLink2.hashCode(), backupClientLink2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASBackupClientLink backupClientLink1 = OASBackupClientLink.getExample();
        OASBackupClientLink backupClientLink2 = OASBackupClientLink.getExample();
        OASBackupClientLink backupClientLink3 = new OASBackupClientLink();
        OASBackupClientLink backupClientLink4 = new OASBackupClientLink();

        System.assert(backupClientLink1.equals(backupClientLink2));
        System.assert(backupClientLink3.equals(backupClientLink4));
        System.assertEquals(backupClientLink1.hashCode(), backupClientLink2.hashCode());
        System.assertEquals(backupClientLink3.hashCode(), backupClientLink4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASBackupClientLink backupClientLink = new OASBackupClientLink();
        Map<String, String> x-property-mappings = backupClientLink.getx-property-mappings();
        System.assertEquals('iconText', x-property-mappings.get('icon_text'));
        System.assertEquals('helpText', x-property-mappings.get('help_text'));
        System.assertEquals('otherAttr', x-property-mappings.get('other_attr'));
    }
}
