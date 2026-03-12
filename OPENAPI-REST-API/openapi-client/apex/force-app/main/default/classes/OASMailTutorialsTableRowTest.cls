@isTest
private class OASMailTutorialsTableRowTest {
    @isTest
    private static void equalsSameInstance() {
        OASMailTutorialsTableRow mailTutorialsTableRow1 = OASMailTutorialsTableRow.getExample();
        OASMailTutorialsTableRow mailTutorialsTableRow2 = mailTutorialsTableRow1;
        OASMailTutorialsTableRow mailTutorialsTableRow3 = new OASMailTutorialsTableRow();
        OASMailTutorialsTableRow mailTutorialsTableRow4 = mailTutorialsTableRow3;

        System.assert(mailTutorialsTableRow1.equals(mailTutorialsTableRow2));
        System.assert(mailTutorialsTableRow2.equals(mailTutorialsTableRow1));
        System.assert(mailTutorialsTableRow1.equals(mailTutorialsTableRow1));
        System.assert(mailTutorialsTableRow3.equals(mailTutorialsTableRow4));
        System.assert(mailTutorialsTableRow4.equals(mailTutorialsTableRow3));
        System.assert(mailTutorialsTableRow3.equals(mailTutorialsTableRow3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMailTutorialsTableRow mailTutorialsTableRow1 = OASMailTutorialsTableRow.getExample();
        OASMailTutorialsTableRow mailTutorialsTableRow2 = OASMailTutorialsTableRow.getExample();
        OASMailTutorialsTableRow mailTutorialsTableRow3 = new OASMailTutorialsTableRow();
        OASMailTutorialsTableRow mailTutorialsTableRow4 = new OASMailTutorialsTableRow();

        System.assert(mailTutorialsTableRow1.equals(mailTutorialsTableRow2));
        System.assert(mailTutorialsTableRow2.equals(mailTutorialsTableRow1));
        System.assert(mailTutorialsTableRow3.equals(mailTutorialsTableRow4));
        System.assert(mailTutorialsTableRow4.equals(mailTutorialsTableRow3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMailTutorialsTableRow mailTutorialsTableRow1 = OASMailTutorialsTableRow.getExample();
        OASMailTutorialsTableRow mailTutorialsTableRow2 = new OASMailTutorialsTableRow();

        System.assertEquals(false, mailTutorialsTableRow1.equals('foo'));
        System.assertEquals(false, mailTutorialsTableRow2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMailTutorialsTableRow mailTutorialsTableRow1 = OASMailTutorialsTableRow.getExample();
        OASMailTutorialsTableRow mailTutorialsTableRow2 = new OASMailTutorialsTableRow();
        OASMailTutorialsTableRow mailTutorialsTableRow3;

        System.assertEquals(false, mailTutorialsTableRow1.equals(mailTutorialsTableRow3));
        System.assertEquals(false, mailTutorialsTableRow2.equals(mailTutorialsTableRow3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMailTutorialsTableRow mailTutorialsTableRow1 = OASMailTutorialsTableRow.getExample();
        OASMailTutorialsTableRow mailTutorialsTableRow2 = new OASMailTutorialsTableRow();

        System.assertEquals(mailTutorialsTableRow1.hashCode(), mailTutorialsTableRow1.hashCode());
        System.assertEquals(mailTutorialsTableRow2.hashCode(), mailTutorialsTableRow2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMailTutorialsTableRow mailTutorialsTableRow1 = OASMailTutorialsTableRow.getExample();
        OASMailTutorialsTableRow mailTutorialsTableRow2 = OASMailTutorialsTableRow.getExample();
        OASMailTutorialsTableRow mailTutorialsTableRow3 = new OASMailTutorialsTableRow();
        OASMailTutorialsTableRow mailTutorialsTableRow4 = new OASMailTutorialsTableRow();

        System.assert(mailTutorialsTableRow1.equals(mailTutorialsTableRow2));
        System.assert(mailTutorialsTableRow3.equals(mailTutorialsTableRow4));
        System.assertEquals(mailTutorialsTableRow1.hashCode(), mailTutorialsTableRow2.hashCode());
        System.assertEquals(mailTutorialsTableRow3.hashCode(), mailTutorialsTableRow4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASMailTutorialsTableRow mailTutorialsTableRow = new OASMailTutorialsTableRow();
        Map<String, String> x-property-mappings = mailTutorialsTableRow.getx-property-mappings();
        System.assertEquals('r_desc', x-property-mappings.get('desc'));
    }
}
