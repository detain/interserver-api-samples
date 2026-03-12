@isTest
private class OASMailSchemaExtraInfoTablesTest {
    @isTest
    private static void equalsSameInstance() {
        OASMailSchemaExtraInfoTables mailSchemaExtraInfoTables1 = OASMailSchemaExtraInfoTables.getExample();
        OASMailSchemaExtraInfoTables mailSchemaExtraInfoTables2 = mailSchemaExtraInfoTables1;
        OASMailSchemaExtraInfoTables mailSchemaExtraInfoTables3 = new OASMailSchemaExtraInfoTables();
        OASMailSchemaExtraInfoTables mailSchemaExtraInfoTables4 = mailSchemaExtraInfoTables3;

        System.assert(mailSchemaExtraInfoTables1.equals(mailSchemaExtraInfoTables2));
        System.assert(mailSchemaExtraInfoTables2.equals(mailSchemaExtraInfoTables1));
        System.assert(mailSchemaExtraInfoTables1.equals(mailSchemaExtraInfoTables1));
        System.assert(mailSchemaExtraInfoTables3.equals(mailSchemaExtraInfoTables4));
        System.assert(mailSchemaExtraInfoTables4.equals(mailSchemaExtraInfoTables3));
        System.assert(mailSchemaExtraInfoTables3.equals(mailSchemaExtraInfoTables3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMailSchemaExtraInfoTables mailSchemaExtraInfoTables1 = OASMailSchemaExtraInfoTables.getExample();
        OASMailSchemaExtraInfoTables mailSchemaExtraInfoTables2 = OASMailSchemaExtraInfoTables.getExample();
        OASMailSchemaExtraInfoTables mailSchemaExtraInfoTables3 = new OASMailSchemaExtraInfoTables();
        OASMailSchemaExtraInfoTables mailSchemaExtraInfoTables4 = new OASMailSchemaExtraInfoTables();

        System.assert(mailSchemaExtraInfoTables1.equals(mailSchemaExtraInfoTables2));
        System.assert(mailSchemaExtraInfoTables2.equals(mailSchemaExtraInfoTables1));
        System.assert(mailSchemaExtraInfoTables3.equals(mailSchemaExtraInfoTables4));
        System.assert(mailSchemaExtraInfoTables4.equals(mailSchemaExtraInfoTables3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMailSchemaExtraInfoTables mailSchemaExtraInfoTables1 = OASMailSchemaExtraInfoTables.getExample();
        OASMailSchemaExtraInfoTables mailSchemaExtraInfoTables2 = new OASMailSchemaExtraInfoTables();

        System.assertEquals(false, mailSchemaExtraInfoTables1.equals('foo'));
        System.assertEquals(false, mailSchemaExtraInfoTables2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMailSchemaExtraInfoTables mailSchemaExtraInfoTables1 = OASMailSchemaExtraInfoTables.getExample();
        OASMailSchemaExtraInfoTables mailSchemaExtraInfoTables2 = new OASMailSchemaExtraInfoTables();
        OASMailSchemaExtraInfoTables mailSchemaExtraInfoTables3;

        System.assertEquals(false, mailSchemaExtraInfoTables1.equals(mailSchemaExtraInfoTables3));
        System.assertEquals(false, mailSchemaExtraInfoTables2.equals(mailSchemaExtraInfoTables3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMailSchemaExtraInfoTables mailSchemaExtraInfoTables1 = OASMailSchemaExtraInfoTables.getExample();
        OASMailSchemaExtraInfoTables mailSchemaExtraInfoTables2 = new OASMailSchemaExtraInfoTables();

        System.assertEquals(mailSchemaExtraInfoTables1.hashCode(), mailSchemaExtraInfoTables1.hashCode());
        System.assertEquals(mailSchemaExtraInfoTables2.hashCode(), mailSchemaExtraInfoTables2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMailSchemaExtraInfoTables mailSchemaExtraInfoTables1 = OASMailSchemaExtraInfoTables.getExample();
        OASMailSchemaExtraInfoTables mailSchemaExtraInfoTables2 = OASMailSchemaExtraInfoTables.getExample();
        OASMailSchemaExtraInfoTables mailSchemaExtraInfoTables3 = new OASMailSchemaExtraInfoTables();
        OASMailSchemaExtraInfoTables mailSchemaExtraInfoTables4 = new OASMailSchemaExtraInfoTables();

        System.assert(mailSchemaExtraInfoTables1.equals(mailSchemaExtraInfoTables2));
        System.assert(mailSchemaExtraInfoTables3.equals(mailSchemaExtraInfoTables4));
        System.assertEquals(mailSchemaExtraInfoTables1.hashCode(), mailSchemaExtraInfoTables2.hashCode());
        System.assertEquals(mailSchemaExtraInfoTables3.hashCode(), mailSchemaExtraInfoTables4.hashCode());
    }
}
