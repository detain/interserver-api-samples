@isTest
private class OASMailTutorialsTableTest {
    @isTest
    private static void equalsSameInstance() {
        OASMailTutorialsTable mailTutorialsTable1 = OASMailTutorialsTable.getExample();
        OASMailTutorialsTable mailTutorialsTable2 = mailTutorialsTable1;
        OASMailTutorialsTable mailTutorialsTable3 = new OASMailTutorialsTable();
        OASMailTutorialsTable mailTutorialsTable4 = mailTutorialsTable3;

        System.assert(mailTutorialsTable1.equals(mailTutorialsTable2));
        System.assert(mailTutorialsTable2.equals(mailTutorialsTable1));
        System.assert(mailTutorialsTable1.equals(mailTutorialsTable1));
        System.assert(mailTutorialsTable3.equals(mailTutorialsTable4));
        System.assert(mailTutorialsTable4.equals(mailTutorialsTable3));
        System.assert(mailTutorialsTable3.equals(mailTutorialsTable3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMailTutorialsTable mailTutorialsTable1 = OASMailTutorialsTable.getExample();
        OASMailTutorialsTable mailTutorialsTable2 = OASMailTutorialsTable.getExample();
        OASMailTutorialsTable mailTutorialsTable3 = new OASMailTutorialsTable();
        OASMailTutorialsTable mailTutorialsTable4 = new OASMailTutorialsTable();

        System.assert(mailTutorialsTable1.equals(mailTutorialsTable2));
        System.assert(mailTutorialsTable2.equals(mailTutorialsTable1));
        System.assert(mailTutorialsTable3.equals(mailTutorialsTable4));
        System.assert(mailTutorialsTable4.equals(mailTutorialsTable3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMailTutorialsTable mailTutorialsTable1 = OASMailTutorialsTable.getExample();
        OASMailTutorialsTable mailTutorialsTable2 = new OASMailTutorialsTable();

        System.assertEquals(false, mailTutorialsTable1.equals('foo'));
        System.assertEquals(false, mailTutorialsTable2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMailTutorialsTable mailTutorialsTable1 = OASMailTutorialsTable.getExample();
        OASMailTutorialsTable mailTutorialsTable2 = new OASMailTutorialsTable();
        OASMailTutorialsTable mailTutorialsTable3;

        System.assertEquals(false, mailTutorialsTable1.equals(mailTutorialsTable3));
        System.assertEquals(false, mailTutorialsTable2.equals(mailTutorialsTable3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMailTutorialsTable mailTutorialsTable1 = OASMailTutorialsTable.getExample();
        OASMailTutorialsTable mailTutorialsTable2 = new OASMailTutorialsTable();

        System.assertEquals(mailTutorialsTable1.hashCode(), mailTutorialsTable1.hashCode());
        System.assertEquals(mailTutorialsTable2.hashCode(), mailTutorialsTable2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMailTutorialsTable mailTutorialsTable1 = OASMailTutorialsTable.getExample();
        OASMailTutorialsTable mailTutorialsTable2 = OASMailTutorialsTable.getExample();
        OASMailTutorialsTable mailTutorialsTable3 = new OASMailTutorialsTable();
        OASMailTutorialsTable mailTutorialsTable4 = new OASMailTutorialsTable();

        System.assert(mailTutorialsTable1.equals(mailTutorialsTable2));
        System.assert(mailTutorialsTable3.equals(mailTutorialsTable4));
        System.assertEquals(mailTutorialsTable1.hashCode(), mailTutorialsTable2.hashCode());
        System.assertEquals(mailTutorialsTable3.hashCode(), mailTutorialsTable4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASMailTutorialsTable mailTutorialsTable = new OASMailTutorialsTable();
        System.assertEquals(new List<OASMailTutorialsTableRow>(), mailTutorialsTable.rows);
        System.assertEquals(null, mailTutorialsTable.title);
    }
}
