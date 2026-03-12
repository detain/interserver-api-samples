@isTest
private class OASWebsiteTableRowTest {
    @isTest
    private static void equalsSameInstance() {
        OASWebsiteTableRow websiteTableRow1 = OASWebsiteTableRow.getExample();
        OASWebsiteTableRow websiteTableRow2 = websiteTableRow1;
        OASWebsiteTableRow websiteTableRow3 = new OASWebsiteTableRow();
        OASWebsiteTableRow websiteTableRow4 = websiteTableRow3;

        System.assert(websiteTableRow1.equals(websiteTableRow2));
        System.assert(websiteTableRow2.equals(websiteTableRow1));
        System.assert(websiteTableRow1.equals(websiteTableRow1));
        System.assert(websiteTableRow3.equals(websiteTableRow4));
        System.assert(websiteTableRow4.equals(websiteTableRow3));
        System.assert(websiteTableRow3.equals(websiteTableRow3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASWebsiteTableRow websiteTableRow1 = OASWebsiteTableRow.getExample();
        OASWebsiteTableRow websiteTableRow2 = OASWebsiteTableRow.getExample();
        OASWebsiteTableRow websiteTableRow3 = new OASWebsiteTableRow();
        OASWebsiteTableRow websiteTableRow4 = new OASWebsiteTableRow();

        System.assert(websiteTableRow1.equals(websiteTableRow2));
        System.assert(websiteTableRow2.equals(websiteTableRow1));
        System.assert(websiteTableRow3.equals(websiteTableRow4));
        System.assert(websiteTableRow4.equals(websiteTableRow3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASWebsiteTableRow websiteTableRow1 = OASWebsiteTableRow.getExample();
        OASWebsiteTableRow websiteTableRow2 = new OASWebsiteTableRow();

        System.assertEquals(false, websiteTableRow1.equals('foo'));
        System.assertEquals(false, websiteTableRow2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASWebsiteTableRow websiteTableRow1 = OASWebsiteTableRow.getExample();
        OASWebsiteTableRow websiteTableRow2 = new OASWebsiteTableRow();
        OASWebsiteTableRow websiteTableRow3;

        System.assertEquals(false, websiteTableRow1.equals(websiteTableRow3));
        System.assertEquals(false, websiteTableRow2.equals(websiteTableRow3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASWebsiteTableRow websiteTableRow1 = OASWebsiteTableRow.getExample();
        OASWebsiteTableRow websiteTableRow2 = new OASWebsiteTableRow();

        System.assertEquals(websiteTableRow1.hashCode(), websiteTableRow1.hashCode());
        System.assertEquals(websiteTableRow2.hashCode(), websiteTableRow2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASWebsiteTableRow websiteTableRow1 = OASWebsiteTableRow.getExample();
        OASWebsiteTableRow websiteTableRow2 = OASWebsiteTableRow.getExample();
        OASWebsiteTableRow websiteTableRow3 = new OASWebsiteTableRow();
        OASWebsiteTableRow websiteTableRow4 = new OASWebsiteTableRow();

        System.assert(websiteTableRow1.equals(websiteTableRow2));
        System.assert(websiteTableRow3.equals(websiteTableRow4));
        System.assertEquals(websiteTableRow1.hashCode(), websiteTableRow2.hashCode());
        System.assertEquals(websiteTableRow3.hashCode(), websiteTableRow4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASWebsiteTableRow websiteTableRow = new OASWebsiteTableRow();
        Map<String, String> x-property-mappings = websiteTableRow.getx-property-mappings();
        System.assertEquals('r_desc', x-property-mappings.get('desc'));
    }
}
