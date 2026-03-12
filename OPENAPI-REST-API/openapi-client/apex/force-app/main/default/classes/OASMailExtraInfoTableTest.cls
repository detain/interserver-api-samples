@isTest
private class OASMailExtraInfoTableTest {
    @isTest
    private static void equalsSameInstance() {
        OASMailExtraInfoTable mailExtraInfoTable1 = OASMailExtraInfoTable.getExample();
        OASMailExtraInfoTable mailExtraInfoTable2 = mailExtraInfoTable1;
        OASMailExtraInfoTable mailExtraInfoTable3 = new OASMailExtraInfoTable();
        OASMailExtraInfoTable mailExtraInfoTable4 = mailExtraInfoTable3;

        System.assert(mailExtraInfoTable1.equals(mailExtraInfoTable2));
        System.assert(mailExtraInfoTable2.equals(mailExtraInfoTable1));
        System.assert(mailExtraInfoTable1.equals(mailExtraInfoTable1));
        System.assert(mailExtraInfoTable3.equals(mailExtraInfoTable4));
        System.assert(mailExtraInfoTable4.equals(mailExtraInfoTable3));
        System.assert(mailExtraInfoTable3.equals(mailExtraInfoTable3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMailExtraInfoTable mailExtraInfoTable1 = OASMailExtraInfoTable.getExample();
        OASMailExtraInfoTable mailExtraInfoTable2 = OASMailExtraInfoTable.getExample();
        OASMailExtraInfoTable mailExtraInfoTable3 = new OASMailExtraInfoTable();
        OASMailExtraInfoTable mailExtraInfoTable4 = new OASMailExtraInfoTable();

        System.assert(mailExtraInfoTable1.equals(mailExtraInfoTable2));
        System.assert(mailExtraInfoTable2.equals(mailExtraInfoTable1));
        System.assert(mailExtraInfoTable3.equals(mailExtraInfoTable4));
        System.assert(mailExtraInfoTable4.equals(mailExtraInfoTable3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMailExtraInfoTable mailExtraInfoTable1 = OASMailExtraInfoTable.getExample();
        OASMailExtraInfoTable mailExtraInfoTable2 = new OASMailExtraInfoTable();

        System.assertEquals(false, mailExtraInfoTable1.equals('foo'));
        System.assertEquals(false, mailExtraInfoTable2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMailExtraInfoTable mailExtraInfoTable1 = OASMailExtraInfoTable.getExample();
        OASMailExtraInfoTable mailExtraInfoTable2 = new OASMailExtraInfoTable();
        OASMailExtraInfoTable mailExtraInfoTable3;

        System.assertEquals(false, mailExtraInfoTable1.equals(mailExtraInfoTable3));
        System.assertEquals(false, mailExtraInfoTable2.equals(mailExtraInfoTable3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMailExtraInfoTable mailExtraInfoTable1 = OASMailExtraInfoTable.getExample();
        OASMailExtraInfoTable mailExtraInfoTable2 = new OASMailExtraInfoTable();

        System.assertEquals(mailExtraInfoTable1.hashCode(), mailExtraInfoTable1.hashCode());
        System.assertEquals(mailExtraInfoTable2.hashCode(), mailExtraInfoTable2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMailExtraInfoTable mailExtraInfoTable1 = OASMailExtraInfoTable.getExample();
        OASMailExtraInfoTable mailExtraInfoTable2 = OASMailExtraInfoTable.getExample();
        OASMailExtraInfoTable mailExtraInfoTable3 = new OASMailExtraInfoTable();
        OASMailExtraInfoTable mailExtraInfoTable4 = new OASMailExtraInfoTable();

        System.assert(mailExtraInfoTable1.equals(mailExtraInfoTable2));
        System.assert(mailExtraInfoTable3.equals(mailExtraInfoTable4));
        System.assertEquals(mailExtraInfoTable1.hashCode(), mailExtraInfoTable2.hashCode());
        System.assertEquals(mailExtraInfoTable3.hashCode(), mailExtraInfoTable4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASMailExtraInfoTable mailExtraInfoTable = new OASMailExtraInfoTable();
        System.assertEquals(new List<OASMailExtraInfoTableRow>(), mailExtraInfoTable.rows);
        System.assertEquals(null, mailExtraInfoTable.title);
    }
}
