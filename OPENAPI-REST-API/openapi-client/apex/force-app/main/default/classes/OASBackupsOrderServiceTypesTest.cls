@isTest
private class OASBackupsOrderServiceTypesTest {
    @isTest
    private static void equalsSameInstance() {
        OASBackupsOrderServiceTypes backupsOrderServiceTypes1 = OASBackupsOrderServiceTypes.getExample();
        OASBackupsOrderServiceTypes backupsOrderServiceTypes2 = backupsOrderServiceTypes1;
        OASBackupsOrderServiceTypes backupsOrderServiceTypes3 = new OASBackupsOrderServiceTypes();
        OASBackupsOrderServiceTypes backupsOrderServiceTypes4 = backupsOrderServiceTypes3;

        System.assert(backupsOrderServiceTypes1.equals(backupsOrderServiceTypes2));
        System.assert(backupsOrderServiceTypes2.equals(backupsOrderServiceTypes1));
        System.assert(backupsOrderServiceTypes1.equals(backupsOrderServiceTypes1));
        System.assert(backupsOrderServiceTypes3.equals(backupsOrderServiceTypes4));
        System.assert(backupsOrderServiceTypes4.equals(backupsOrderServiceTypes3));
        System.assert(backupsOrderServiceTypes3.equals(backupsOrderServiceTypes3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASBackupsOrderServiceTypes backupsOrderServiceTypes1 = OASBackupsOrderServiceTypes.getExample();
        OASBackupsOrderServiceTypes backupsOrderServiceTypes2 = OASBackupsOrderServiceTypes.getExample();
        OASBackupsOrderServiceTypes backupsOrderServiceTypes3 = new OASBackupsOrderServiceTypes();
        OASBackupsOrderServiceTypes backupsOrderServiceTypes4 = new OASBackupsOrderServiceTypes();

        System.assert(backupsOrderServiceTypes1.equals(backupsOrderServiceTypes2));
        System.assert(backupsOrderServiceTypes2.equals(backupsOrderServiceTypes1));
        System.assert(backupsOrderServiceTypes3.equals(backupsOrderServiceTypes4));
        System.assert(backupsOrderServiceTypes4.equals(backupsOrderServiceTypes3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASBackupsOrderServiceTypes backupsOrderServiceTypes1 = OASBackupsOrderServiceTypes.getExample();
        OASBackupsOrderServiceTypes backupsOrderServiceTypes2 = new OASBackupsOrderServiceTypes();

        System.assertEquals(false, backupsOrderServiceTypes1.equals('foo'));
        System.assertEquals(false, backupsOrderServiceTypes2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASBackupsOrderServiceTypes backupsOrderServiceTypes1 = OASBackupsOrderServiceTypes.getExample();
        OASBackupsOrderServiceTypes backupsOrderServiceTypes2 = new OASBackupsOrderServiceTypes();
        OASBackupsOrderServiceTypes backupsOrderServiceTypes3;

        System.assertEquals(false, backupsOrderServiceTypes1.equals(backupsOrderServiceTypes3));
        System.assertEquals(false, backupsOrderServiceTypes2.equals(backupsOrderServiceTypes3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASBackupsOrderServiceTypes backupsOrderServiceTypes1 = OASBackupsOrderServiceTypes.getExample();
        OASBackupsOrderServiceTypes backupsOrderServiceTypes2 = new OASBackupsOrderServiceTypes();

        System.assertEquals(backupsOrderServiceTypes1.hashCode(), backupsOrderServiceTypes1.hashCode());
        System.assertEquals(backupsOrderServiceTypes2.hashCode(), backupsOrderServiceTypes2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASBackupsOrderServiceTypes backupsOrderServiceTypes1 = OASBackupsOrderServiceTypes.getExample();
        OASBackupsOrderServiceTypes backupsOrderServiceTypes2 = OASBackupsOrderServiceTypes.getExample();
        OASBackupsOrderServiceTypes backupsOrderServiceTypes3 = new OASBackupsOrderServiceTypes();
        OASBackupsOrderServiceTypes backupsOrderServiceTypes4 = new OASBackupsOrderServiceTypes();

        System.assert(backupsOrderServiceTypes1.equals(backupsOrderServiceTypes2));
        System.assert(backupsOrderServiceTypes3.equals(backupsOrderServiceTypes4));
        System.assertEquals(backupsOrderServiceTypes1.hashCode(), backupsOrderServiceTypes2.hashCode());
        System.assertEquals(backupsOrderServiceTypes3.hashCode(), backupsOrderServiceTypes4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASBackupsOrderServiceTypes backupsOrderServiceTypes = new OASBackupsOrderServiceTypes();
        Map<String, String> x-property-mappings = backupsOrderServiceTypes.getx-property-mappings();
        System.assertEquals('', x-property-mappings.get('11006'));
    }
}
