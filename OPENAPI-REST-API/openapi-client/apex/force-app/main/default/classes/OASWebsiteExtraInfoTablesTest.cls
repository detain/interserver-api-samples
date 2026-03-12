@isTest
private class OASWebsiteExtraInfoTablesTest {
    @isTest
    private static void equalsSameInstance() {
        OASWebsiteExtraInfoTables websiteExtraInfoTables1 = OASWebsiteExtraInfoTables.getExample();
        OASWebsiteExtraInfoTables websiteExtraInfoTables2 = websiteExtraInfoTables1;
        OASWebsiteExtraInfoTables websiteExtraInfoTables3 = new OASWebsiteExtraInfoTables();
        OASWebsiteExtraInfoTables websiteExtraInfoTables4 = websiteExtraInfoTables3;

        System.assert(websiteExtraInfoTables1.equals(websiteExtraInfoTables2));
        System.assert(websiteExtraInfoTables2.equals(websiteExtraInfoTables1));
        System.assert(websiteExtraInfoTables1.equals(websiteExtraInfoTables1));
        System.assert(websiteExtraInfoTables3.equals(websiteExtraInfoTables4));
        System.assert(websiteExtraInfoTables4.equals(websiteExtraInfoTables3));
        System.assert(websiteExtraInfoTables3.equals(websiteExtraInfoTables3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASWebsiteExtraInfoTables websiteExtraInfoTables1 = OASWebsiteExtraInfoTables.getExample();
        OASWebsiteExtraInfoTables websiteExtraInfoTables2 = OASWebsiteExtraInfoTables.getExample();
        OASWebsiteExtraInfoTables websiteExtraInfoTables3 = new OASWebsiteExtraInfoTables();
        OASWebsiteExtraInfoTables websiteExtraInfoTables4 = new OASWebsiteExtraInfoTables();

        System.assert(websiteExtraInfoTables1.equals(websiteExtraInfoTables2));
        System.assert(websiteExtraInfoTables2.equals(websiteExtraInfoTables1));
        System.assert(websiteExtraInfoTables3.equals(websiteExtraInfoTables4));
        System.assert(websiteExtraInfoTables4.equals(websiteExtraInfoTables3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASWebsiteExtraInfoTables websiteExtraInfoTables1 = OASWebsiteExtraInfoTables.getExample();
        OASWebsiteExtraInfoTables websiteExtraInfoTables2 = new OASWebsiteExtraInfoTables();

        System.assertEquals(false, websiteExtraInfoTables1.equals('foo'));
        System.assertEquals(false, websiteExtraInfoTables2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASWebsiteExtraInfoTables websiteExtraInfoTables1 = OASWebsiteExtraInfoTables.getExample();
        OASWebsiteExtraInfoTables websiteExtraInfoTables2 = new OASWebsiteExtraInfoTables();
        OASWebsiteExtraInfoTables websiteExtraInfoTables3;

        System.assertEquals(false, websiteExtraInfoTables1.equals(websiteExtraInfoTables3));
        System.assertEquals(false, websiteExtraInfoTables2.equals(websiteExtraInfoTables3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASWebsiteExtraInfoTables websiteExtraInfoTables1 = OASWebsiteExtraInfoTables.getExample();
        OASWebsiteExtraInfoTables websiteExtraInfoTables2 = new OASWebsiteExtraInfoTables();

        System.assertEquals(websiteExtraInfoTables1.hashCode(), websiteExtraInfoTables1.hashCode());
        System.assertEquals(websiteExtraInfoTables2.hashCode(), websiteExtraInfoTables2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASWebsiteExtraInfoTables websiteExtraInfoTables1 = OASWebsiteExtraInfoTables.getExample();
        OASWebsiteExtraInfoTables websiteExtraInfoTables2 = OASWebsiteExtraInfoTables.getExample();
        OASWebsiteExtraInfoTables websiteExtraInfoTables3 = new OASWebsiteExtraInfoTables();
        OASWebsiteExtraInfoTables websiteExtraInfoTables4 = new OASWebsiteExtraInfoTables();

        System.assert(websiteExtraInfoTables1.equals(websiteExtraInfoTables2));
        System.assert(websiteExtraInfoTables3.equals(websiteExtraInfoTables4));
        System.assertEquals(websiteExtraInfoTables1.hashCode(), websiteExtraInfoTables2.hashCode());
        System.assertEquals(websiteExtraInfoTables3.hashCode(), websiteExtraInfoTables4.hashCode());
    }
}
