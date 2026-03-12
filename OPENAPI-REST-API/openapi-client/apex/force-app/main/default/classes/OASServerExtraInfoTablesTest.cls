@isTest
private class OASServerExtraInfoTablesTest {
    @isTest
    private static void equalsSameInstance() {
        OASServerExtraInfoTables serverExtraInfoTables1 = OASServerExtraInfoTables.getExample();
        OASServerExtraInfoTables serverExtraInfoTables2 = serverExtraInfoTables1;
        OASServerExtraInfoTables serverExtraInfoTables3 = new OASServerExtraInfoTables();
        OASServerExtraInfoTables serverExtraInfoTables4 = serverExtraInfoTables3;

        System.assert(serverExtraInfoTables1.equals(serverExtraInfoTables2));
        System.assert(serverExtraInfoTables2.equals(serverExtraInfoTables1));
        System.assert(serverExtraInfoTables1.equals(serverExtraInfoTables1));
        System.assert(serverExtraInfoTables3.equals(serverExtraInfoTables4));
        System.assert(serverExtraInfoTables4.equals(serverExtraInfoTables3));
        System.assert(serverExtraInfoTables3.equals(serverExtraInfoTables3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServerExtraInfoTables serverExtraInfoTables1 = OASServerExtraInfoTables.getExample();
        OASServerExtraInfoTables serverExtraInfoTables2 = OASServerExtraInfoTables.getExample();
        OASServerExtraInfoTables serverExtraInfoTables3 = new OASServerExtraInfoTables();
        OASServerExtraInfoTables serverExtraInfoTables4 = new OASServerExtraInfoTables();

        System.assert(serverExtraInfoTables1.equals(serverExtraInfoTables2));
        System.assert(serverExtraInfoTables2.equals(serverExtraInfoTables1));
        System.assert(serverExtraInfoTables3.equals(serverExtraInfoTables4));
        System.assert(serverExtraInfoTables4.equals(serverExtraInfoTables3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServerExtraInfoTables serverExtraInfoTables1 = OASServerExtraInfoTables.getExample();
        OASServerExtraInfoTables serverExtraInfoTables2 = new OASServerExtraInfoTables();

        System.assertEquals(false, serverExtraInfoTables1.equals('foo'));
        System.assertEquals(false, serverExtraInfoTables2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServerExtraInfoTables serverExtraInfoTables1 = OASServerExtraInfoTables.getExample();
        OASServerExtraInfoTables serverExtraInfoTables2 = new OASServerExtraInfoTables();
        OASServerExtraInfoTables serverExtraInfoTables3;

        System.assertEquals(false, serverExtraInfoTables1.equals(serverExtraInfoTables3));
        System.assertEquals(false, serverExtraInfoTables2.equals(serverExtraInfoTables3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServerExtraInfoTables serverExtraInfoTables1 = OASServerExtraInfoTables.getExample();
        OASServerExtraInfoTables serverExtraInfoTables2 = new OASServerExtraInfoTables();

        System.assertEquals(serverExtraInfoTables1.hashCode(), serverExtraInfoTables1.hashCode());
        System.assertEquals(serverExtraInfoTables2.hashCode(), serverExtraInfoTables2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServerExtraInfoTables serverExtraInfoTables1 = OASServerExtraInfoTables.getExample();
        OASServerExtraInfoTables serverExtraInfoTables2 = OASServerExtraInfoTables.getExample();
        OASServerExtraInfoTables serverExtraInfoTables3 = new OASServerExtraInfoTables();
        OASServerExtraInfoTables serverExtraInfoTables4 = new OASServerExtraInfoTables();

        System.assert(serverExtraInfoTables1.equals(serverExtraInfoTables2));
        System.assert(serverExtraInfoTables3.equals(serverExtraInfoTables4));
        System.assertEquals(serverExtraInfoTables1.hashCode(), serverExtraInfoTables2.hashCode());
        System.assertEquals(serverExtraInfoTables3.hashCode(), serverExtraInfoTables4.hashCode());
    }
}
