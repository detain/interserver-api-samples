@isTest
private class OASBackupTest {
    @isTest
    private static void equalsSameInstance() {
        OASBackup backup1 = OASBackup.getExample();
        OASBackup backup2 = backup1;
        OASBackup backup3 = new OASBackup();
        OASBackup backup4 = backup3;

        System.assert(backup1.equals(backup2));
        System.assert(backup2.equals(backup1));
        System.assert(backup1.equals(backup1));
        System.assert(backup3.equals(backup4));
        System.assert(backup4.equals(backup3));
        System.assert(backup3.equals(backup3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASBackup backup1 = OASBackup.getExample();
        OASBackup backup2 = OASBackup.getExample();
        OASBackup backup3 = new OASBackup();
        OASBackup backup4 = new OASBackup();

        System.assert(backup1.equals(backup2));
        System.assert(backup2.equals(backup1));
        System.assert(backup3.equals(backup4));
        System.assert(backup4.equals(backup3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASBackup backup1 = OASBackup.getExample();
        OASBackup backup2 = new OASBackup();

        System.assertEquals(false, backup1.equals('foo'));
        System.assertEquals(false, backup2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASBackup backup1 = OASBackup.getExample();
        OASBackup backup2 = new OASBackup();
        OASBackup backup3;

        System.assertEquals(false, backup1.equals(backup3));
        System.assertEquals(false, backup2.equals(backup3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASBackup backup1 = OASBackup.getExample();
        OASBackup backup2 = new OASBackup();

        System.assertEquals(backup1.hashCode(), backup1.hashCode());
        System.assertEquals(backup2.hashCode(), backup2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASBackup backup1 = OASBackup.getExample();
        OASBackup backup2 = OASBackup.getExample();
        OASBackup backup3 = new OASBackup();
        OASBackup backup4 = new OASBackup();

        System.assert(backup1.equals(backup2));
        System.assert(backup3.equals(backup4));
        System.assertEquals(backup1.hashCode(), backup2.hashCode());
        System.assertEquals(backup3.hashCode(), backup4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASBackup backup = new OASBackup();
        Map<String, String> x-property-mappings = backup.getx-property-mappings();
        System.assertEquals('clientLinks', x-property-mappings.get('client_links'));
        System.assertEquals('r_package', x-property-mappings.get('package'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASBackup backup = new OASBackup();
        System.assertEquals(new List<OASBackupClientLink>(), backup.clientLinks);
        System.assertEquals(null, backup.serviceInfo);
        System.assertEquals(null, backup.billingDetails);
        System.assertEquals(null, backup.custCurrency);
        System.assertEquals(null, backup.custCurrencySymbol);
        System.assertEquals(null, backup.serviceMaster);
        System.assertEquals(null, backup.r_package);
        System.assertEquals(null, backup.serviceExtra);
        System.assertEquals(null, backup.extraInfoTables);
    }
}
