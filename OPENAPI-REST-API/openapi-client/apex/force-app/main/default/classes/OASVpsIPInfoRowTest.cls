@isTest
private class OASVpsIPInfoRowTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsIPInfoRow vpsIPInfoRow1 = OASVpsIPInfoRow.getExample();
        OASVpsIPInfoRow vpsIPInfoRow2 = vpsIPInfoRow1;
        OASVpsIPInfoRow vpsIPInfoRow3 = new OASVpsIPInfoRow();
        OASVpsIPInfoRow vpsIPInfoRow4 = vpsIPInfoRow3;

        System.assert(vpsIPInfoRow1.equals(vpsIPInfoRow2));
        System.assert(vpsIPInfoRow2.equals(vpsIPInfoRow1));
        System.assert(vpsIPInfoRow1.equals(vpsIPInfoRow1));
        System.assert(vpsIPInfoRow3.equals(vpsIPInfoRow4));
        System.assert(vpsIPInfoRow4.equals(vpsIPInfoRow3));
        System.assert(vpsIPInfoRow3.equals(vpsIPInfoRow3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsIPInfoRow vpsIPInfoRow1 = OASVpsIPInfoRow.getExample();
        OASVpsIPInfoRow vpsIPInfoRow2 = OASVpsIPInfoRow.getExample();
        OASVpsIPInfoRow vpsIPInfoRow3 = new OASVpsIPInfoRow();
        OASVpsIPInfoRow vpsIPInfoRow4 = new OASVpsIPInfoRow();

        System.assert(vpsIPInfoRow1.equals(vpsIPInfoRow2));
        System.assert(vpsIPInfoRow2.equals(vpsIPInfoRow1));
        System.assert(vpsIPInfoRow3.equals(vpsIPInfoRow4));
        System.assert(vpsIPInfoRow4.equals(vpsIPInfoRow3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsIPInfoRow vpsIPInfoRow1 = OASVpsIPInfoRow.getExample();
        OASVpsIPInfoRow vpsIPInfoRow2 = new OASVpsIPInfoRow();

        System.assertEquals(false, vpsIPInfoRow1.equals('foo'));
        System.assertEquals(false, vpsIPInfoRow2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsIPInfoRow vpsIPInfoRow1 = OASVpsIPInfoRow.getExample();
        OASVpsIPInfoRow vpsIPInfoRow2 = new OASVpsIPInfoRow();
        OASVpsIPInfoRow vpsIPInfoRow3;

        System.assertEquals(false, vpsIPInfoRow1.equals(vpsIPInfoRow3));
        System.assertEquals(false, vpsIPInfoRow2.equals(vpsIPInfoRow3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsIPInfoRow vpsIPInfoRow1 = OASVpsIPInfoRow.getExample();
        OASVpsIPInfoRow vpsIPInfoRow2 = new OASVpsIPInfoRow();

        System.assertEquals(vpsIPInfoRow1.hashCode(), vpsIPInfoRow1.hashCode());
        System.assertEquals(vpsIPInfoRow2.hashCode(), vpsIPInfoRow2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsIPInfoRow vpsIPInfoRow1 = OASVpsIPInfoRow.getExample();
        OASVpsIPInfoRow vpsIPInfoRow2 = OASVpsIPInfoRow.getExample();
        OASVpsIPInfoRow vpsIPInfoRow3 = new OASVpsIPInfoRow();
        OASVpsIPInfoRow vpsIPInfoRow4 = new OASVpsIPInfoRow();

        System.assert(vpsIPInfoRow1.equals(vpsIPInfoRow2));
        System.assert(vpsIPInfoRow3.equals(vpsIPInfoRow4));
        System.assertEquals(vpsIPInfoRow1.hashCode(), vpsIPInfoRow2.hashCode());
        System.assertEquals(vpsIPInfoRow3.hashCode(), vpsIPInfoRow4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASVpsIPInfoRow vpsIPInfoRow = new OASVpsIPInfoRow();
        Map<String, String> x-property-mappings = vpsIPInfoRow.getx-property-mappings();
        System.assertEquals('r_desc', x-property-mappings.get('desc'));
    }
}
