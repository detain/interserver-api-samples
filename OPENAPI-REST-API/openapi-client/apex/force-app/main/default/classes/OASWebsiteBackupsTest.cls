@isTest
private class OASWebsiteBackupsTest {
    @isTest
    private static void equalsSameInstance() {
        OASWebsiteBackups websiteBackups1 = OASWebsiteBackups.getExample();
        OASWebsiteBackups websiteBackups2 = websiteBackups1;
        OASWebsiteBackups websiteBackups3 = new OASWebsiteBackups();
        OASWebsiteBackups websiteBackups4 = websiteBackups3;

        System.assert(websiteBackups1.equals(websiteBackups2));
        System.assert(websiteBackups2.equals(websiteBackups1));
        System.assert(websiteBackups1.equals(websiteBackups1));
        System.assert(websiteBackups3.equals(websiteBackups4));
        System.assert(websiteBackups4.equals(websiteBackups3));
        System.assert(websiteBackups3.equals(websiteBackups3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASWebsiteBackups websiteBackups1 = OASWebsiteBackups.getExample();
        OASWebsiteBackups websiteBackups2 = OASWebsiteBackups.getExample();
        OASWebsiteBackups websiteBackups3 = new OASWebsiteBackups();
        OASWebsiteBackups websiteBackups4 = new OASWebsiteBackups();

        System.assert(websiteBackups1.equals(websiteBackups2));
        System.assert(websiteBackups2.equals(websiteBackups1));
        System.assert(websiteBackups3.equals(websiteBackups4));
        System.assert(websiteBackups4.equals(websiteBackups3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASWebsiteBackups websiteBackups1 = OASWebsiteBackups.getExample();
        OASWebsiteBackups websiteBackups2 = new OASWebsiteBackups();

        System.assertEquals(false, websiteBackups1.equals('foo'));
        System.assertEquals(false, websiteBackups2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASWebsiteBackups websiteBackups1 = OASWebsiteBackups.getExample();
        OASWebsiteBackups websiteBackups2 = new OASWebsiteBackups();
        OASWebsiteBackups websiteBackups3;

        System.assertEquals(false, websiteBackups1.equals(websiteBackups3));
        System.assertEquals(false, websiteBackups2.equals(websiteBackups3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASWebsiteBackups websiteBackups1 = OASWebsiteBackups.getExample();
        OASWebsiteBackups websiteBackups2 = new OASWebsiteBackups();

        System.assertEquals(websiteBackups1.hashCode(), websiteBackups1.hashCode());
        System.assertEquals(websiteBackups2.hashCode(), websiteBackups2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASWebsiteBackups websiteBackups1 = OASWebsiteBackups.getExample();
        OASWebsiteBackups websiteBackups2 = OASWebsiteBackups.getExample();
        OASWebsiteBackups websiteBackups3 = new OASWebsiteBackups();
        OASWebsiteBackups websiteBackups4 = new OASWebsiteBackups();

        System.assert(websiteBackups1.equals(websiteBackups2));
        System.assert(websiteBackups3.equals(websiteBackups4));
        System.assertEquals(websiteBackups1.hashCode(), websiteBackups2.hashCode());
        System.assertEquals(websiteBackups3.hashCode(), websiteBackups4.hashCode());
    }
}
