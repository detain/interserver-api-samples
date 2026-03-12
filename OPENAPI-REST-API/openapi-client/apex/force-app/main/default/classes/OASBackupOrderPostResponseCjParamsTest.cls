@isTest
private class OASBackupOrderPostResponseCjParamsTest {
    @isTest
    private static void equalsSameInstance() {
        OASBackupOrderPostResponseCjParams backupOrderPostResponseCjParams1 = OASBackupOrderPostResponseCjParams.getExample();
        OASBackupOrderPostResponseCjParams backupOrderPostResponseCjParams2 = backupOrderPostResponseCjParams1;
        OASBackupOrderPostResponseCjParams backupOrderPostResponseCjParams3 = new OASBackupOrderPostResponseCjParams();
        OASBackupOrderPostResponseCjParams backupOrderPostResponseCjParams4 = backupOrderPostResponseCjParams3;

        System.assert(backupOrderPostResponseCjParams1.equals(backupOrderPostResponseCjParams2));
        System.assert(backupOrderPostResponseCjParams2.equals(backupOrderPostResponseCjParams1));
        System.assert(backupOrderPostResponseCjParams1.equals(backupOrderPostResponseCjParams1));
        System.assert(backupOrderPostResponseCjParams3.equals(backupOrderPostResponseCjParams4));
        System.assert(backupOrderPostResponseCjParams4.equals(backupOrderPostResponseCjParams3));
        System.assert(backupOrderPostResponseCjParams3.equals(backupOrderPostResponseCjParams3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASBackupOrderPostResponseCjParams backupOrderPostResponseCjParams1 = OASBackupOrderPostResponseCjParams.getExample();
        OASBackupOrderPostResponseCjParams backupOrderPostResponseCjParams2 = OASBackupOrderPostResponseCjParams.getExample();
        OASBackupOrderPostResponseCjParams backupOrderPostResponseCjParams3 = new OASBackupOrderPostResponseCjParams();
        OASBackupOrderPostResponseCjParams backupOrderPostResponseCjParams4 = new OASBackupOrderPostResponseCjParams();

        System.assert(backupOrderPostResponseCjParams1.equals(backupOrderPostResponseCjParams2));
        System.assert(backupOrderPostResponseCjParams2.equals(backupOrderPostResponseCjParams1));
        System.assert(backupOrderPostResponseCjParams3.equals(backupOrderPostResponseCjParams4));
        System.assert(backupOrderPostResponseCjParams4.equals(backupOrderPostResponseCjParams3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASBackupOrderPostResponseCjParams backupOrderPostResponseCjParams1 = OASBackupOrderPostResponseCjParams.getExample();
        OASBackupOrderPostResponseCjParams backupOrderPostResponseCjParams2 = new OASBackupOrderPostResponseCjParams();

        System.assertEquals(false, backupOrderPostResponseCjParams1.equals('foo'));
        System.assertEquals(false, backupOrderPostResponseCjParams2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASBackupOrderPostResponseCjParams backupOrderPostResponseCjParams1 = OASBackupOrderPostResponseCjParams.getExample();
        OASBackupOrderPostResponseCjParams backupOrderPostResponseCjParams2 = new OASBackupOrderPostResponseCjParams();
        OASBackupOrderPostResponseCjParams backupOrderPostResponseCjParams3;

        System.assertEquals(false, backupOrderPostResponseCjParams1.equals(backupOrderPostResponseCjParams3));
        System.assertEquals(false, backupOrderPostResponseCjParams2.equals(backupOrderPostResponseCjParams3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASBackupOrderPostResponseCjParams backupOrderPostResponseCjParams1 = OASBackupOrderPostResponseCjParams.getExample();
        OASBackupOrderPostResponseCjParams backupOrderPostResponseCjParams2 = new OASBackupOrderPostResponseCjParams();

        System.assertEquals(backupOrderPostResponseCjParams1.hashCode(), backupOrderPostResponseCjParams1.hashCode());
        System.assertEquals(backupOrderPostResponseCjParams2.hashCode(), backupOrderPostResponseCjParams2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASBackupOrderPostResponseCjParams backupOrderPostResponseCjParams1 = OASBackupOrderPostResponseCjParams.getExample();
        OASBackupOrderPostResponseCjParams backupOrderPostResponseCjParams2 = OASBackupOrderPostResponseCjParams.getExample();
        OASBackupOrderPostResponseCjParams backupOrderPostResponseCjParams3 = new OASBackupOrderPostResponseCjParams();
        OASBackupOrderPostResponseCjParams backupOrderPostResponseCjParams4 = new OASBackupOrderPostResponseCjParams();

        System.assert(backupOrderPostResponseCjParams1.equals(backupOrderPostResponseCjParams2));
        System.assert(backupOrderPostResponseCjParams3.equals(backupOrderPostResponseCjParams4));
        System.assertEquals(backupOrderPostResponseCjParams1.hashCode(), backupOrderPostResponseCjParams2.hashCode());
        System.assertEquals(backupOrderPostResponseCjParams3.hashCode(), backupOrderPostResponseCjParams4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASBackupOrderPostResponseCjParams backupOrderPostResponseCjParams = new OASBackupOrderPostResponseCjParams();
        Map<String, String> x-property-mappings = backupOrderPostResponseCjParams.getx-property-mappings();
        System.assertEquals('itEM1', x-property-mappings.get('ITEM1'));
        System.assertEquals('amT1', x-property-mappings.get('AMT1'));
        System.assertEquals('qtY1', x-property-mappings.get('QTY1'));
        System.assertEquals('r_CURRENCY', x-property-mappings.get('CURRENCY'));
    }
}
