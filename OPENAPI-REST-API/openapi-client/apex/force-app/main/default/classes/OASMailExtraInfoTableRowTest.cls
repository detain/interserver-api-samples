@isTest
private class OASMailExtraInfoTableRowTest {
    @isTest
    private static void equalsSameInstance() {
        OASMailExtraInfoTableRow mailExtraInfoTableRow1 = OASMailExtraInfoTableRow.getExample();
        OASMailExtraInfoTableRow mailExtraInfoTableRow2 = mailExtraInfoTableRow1;
        OASMailExtraInfoTableRow mailExtraInfoTableRow3 = new OASMailExtraInfoTableRow();
        OASMailExtraInfoTableRow mailExtraInfoTableRow4 = mailExtraInfoTableRow3;

        System.assert(mailExtraInfoTableRow1.equals(mailExtraInfoTableRow2));
        System.assert(mailExtraInfoTableRow2.equals(mailExtraInfoTableRow1));
        System.assert(mailExtraInfoTableRow1.equals(mailExtraInfoTableRow1));
        System.assert(mailExtraInfoTableRow3.equals(mailExtraInfoTableRow4));
        System.assert(mailExtraInfoTableRow4.equals(mailExtraInfoTableRow3));
        System.assert(mailExtraInfoTableRow3.equals(mailExtraInfoTableRow3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMailExtraInfoTableRow mailExtraInfoTableRow1 = OASMailExtraInfoTableRow.getExample();
        OASMailExtraInfoTableRow mailExtraInfoTableRow2 = OASMailExtraInfoTableRow.getExample();
        OASMailExtraInfoTableRow mailExtraInfoTableRow3 = new OASMailExtraInfoTableRow();
        OASMailExtraInfoTableRow mailExtraInfoTableRow4 = new OASMailExtraInfoTableRow();

        System.assert(mailExtraInfoTableRow1.equals(mailExtraInfoTableRow2));
        System.assert(mailExtraInfoTableRow2.equals(mailExtraInfoTableRow1));
        System.assert(mailExtraInfoTableRow3.equals(mailExtraInfoTableRow4));
        System.assert(mailExtraInfoTableRow4.equals(mailExtraInfoTableRow3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMailExtraInfoTableRow mailExtraInfoTableRow1 = OASMailExtraInfoTableRow.getExample();
        OASMailExtraInfoTableRow mailExtraInfoTableRow2 = new OASMailExtraInfoTableRow();

        System.assertEquals(false, mailExtraInfoTableRow1.equals('foo'));
        System.assertEquals(false, mailExtraInfoTableRow2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMailExtraInfoTableRow mailExtraInfoTableRow1 = OASMailExtraInfoTableRow.getExample();
        OASMailExtraInfoTableRow mailExtraInfoTableRow2 = new OASMailExtraInfoTableRow();
        OASMailExtraInfoTableRow mailExtraInfoTableRow3;

        System.assertEquals(false, mailExtraInfoTableRow1.equals(mailExtraInfoTableRow3));
        System.assertEquals(false, mailExtraInfoTableRow2.equals(mailExtraInfoTableRow3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMailExtraInfoTableRow mailExtraInfoTableRow1 = OASMailExtraInfoTableRow.getExample();
        OASMailExtraInfoTableRow mailExtraInfoTableRow2 = new OASMailExtraInfoTableRow();

        System.assertEquals(mailExtraInfoTableRow1.hashCode(), mailExtraInfoTableRow1.hashCode());
        System.assertEquals(mailExtraInfoTableRow2.hashCode(), mailExtraInfoTableRow2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMailExtraInfoTableRow mailExtraInfoTableRow1 = OASMailExtraInfoTableRow.getExample();
        OASMailExtraInfoTableRow mailExtraInfoTableRow2 = OASMailExtraInfoTableRow.getExample();
        OASMailExtraInfoTableRow mailExtraInfoTableRow3 = new OASMailExtraInfoTableRow();
        OASMailExtraInfoTableRow mailExtraInfoTableRow4 = new OASMailExtraInfoTableRow();

        System.assert(mailExtraInfoTableRow1.equals(mailExtraInfoTableRow2));
        System.assert(mailExtraInfoTableRow3.equals(mailExtraInfoTableRow4));
        System.assertEquals(mailExtraInfoTableRow1.hashCode(), mailExtraInfoTableRow2.hashCode());
        System.assertEquals(mailExtraInfoTableRow3.hashCode(), mailExtraInfoTableRow4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASMailExtraInfoTableRow mailExtraInfoTableRow = new OASMailExtraInfoTableRow();
        Map<String, String> x-property-mappings = mailExtraInfoTableRow.getx-property-mappings();
        System.assertEquals('r_desc', x-property-mappings.get('desc'));
    }
}
