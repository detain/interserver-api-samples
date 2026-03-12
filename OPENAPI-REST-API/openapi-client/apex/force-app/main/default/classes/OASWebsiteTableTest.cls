@isTest
private class OASWebsiteTableTest {
    @isTest
    private static void equalsSameInstance() {
        OASWebsiteTable websiteTable1 = OASWebsiteTable.getExample();
        OASWebsiteTable websiteTable2 = websiteTable1;
        OASWebsiteTable websiteTable3 = new OASWebsiteTable();
        OASWebsiteTable websiteTable4 = websiteTable3;

        System.assert(websiteTable1.equals(websiteTable2));
        System.assert(websiteTable2.equals(websiteTable1));
        System.assert(websiteTable1.equals(websiteTable1));
        System.assert(websiteTable3.equals(websiteTable4));
        System.assert(websiteTable4.equals(websiteTable3));
        System.assert(websiteTable3.equals(websiteTable3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASWebsiteTable websiteTable1 = OASWebsiteTable.getExample();
        OASWebsiteTable websiteTable2 = OASWebsiteTable.getExample();
        OASWebsiteTable websiteTable3 = new OASWebsiteTable();
        OASWebsiteTable websiteTable4 = new OASWebsiteTable();

        System.assert(websiteTable1.equals(websiteTable2));
        System.assert(websiteTable2.equals(websiteTable1));
        System.assert(websiteTable3.equals(websiteTable4));
        System.assert(websiteTable4.equals(websiteTable3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASWebsiteTable websiteTable1 = OASWebsiteTable.getExample();
        OASWebsiteTable websiteTable2 = new OASWebsiteTable();

        System.assertEquals(false, websiteTable1.equals('foo'));
        System.assertEquals(false, websiteTable2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASWebsiteTable websiteTable1 = OASWebsiteTable.getExample();
        OASWebsiteTable websiteTable2 = new OASWebsiteTable();
        OASWebsiteTable websiteTable3;

        System.assertEquals(false, websiteTable1.equals(websiteTable3));
        System.assertEquals(false, websiteTable2.equals(websiteTable3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASWebsiteTable websiteTable1 = OASWebsiteTable.getExample();
        OASWebsiteTable websiteTable2 = new OASWebsiteTable();

        System.assertEquals(websiteTable1.hashCode(), websiteTable1.hashCode());
        System.assertEquals(websiteTable2.hashCode(), websiteTable2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASWebsiteTable websiteTable1 = OASWebsiteTable.getExample();
        OASWebsiteTable websiteTable2 = OASWebsiteTable.getExample();
        OASWebsiteTable websiteTable3 = new OASWebsiteTable();
        OASWebsiteTable websiteTable4 = new OASWebsiteTable();

        System.assert(websiteTable1.equals(websiteTable2));
        System.assert(websiteTable3.equals(websiteTable4));
        System.assertEquals(websiteTable1.hashCode(), websiteTable2.hashCode());
        System.assertEquals(websiteTable3.hashCode(), websiteTable4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASWebsiteTable websiteTable = new OASWebsiteTable();
        System.assertEquals(new List<OASWebsiteTableRow>(), websiteTable.rows);
        System.assertEquals(null, websiteTable.title);
    }
}
