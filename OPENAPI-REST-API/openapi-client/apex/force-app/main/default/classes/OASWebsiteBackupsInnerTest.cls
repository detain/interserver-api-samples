@isTest
private class OASWebsiteBackupsInnerTest {
    @isTest
    private static void equalsSameInstance() {
        OASWebsiteBackupsInner websiteBackupsInner1 = OASWebsiteBackupsInner.getExample();
        OASWebsiteBackupsInner websiteBackupsInner2 = websiteBackupsInner1;
        OASWebsiteBackupsInner websiteBackupsInner3 = new OASWebsiteBackupsInner();
        OASWebsiteBackupsInner websiteBackupsInner4 = websiteBackupsInner3;

        System.assert(websiteBackupsInner1.equals(websiteBackupsInner2));
        System.assert(websiteBackupsInner2.equals(websiteBackupsInner1));
        System.assert(websiteBackupsInner1.equals(websiteBackupsInner1));
        System.assert(websiteBackupsInner3.equals(websiteBackupsInner4));
        System.assert(websiteBackupsInner4.equals(websiteBackupsInner3));
        System.assert(websiteBackupsInner3.equals(websiteBackupsInner3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASWebsiteBackupsInner websiteBackupsInner1 = OASWebsiteBackupsInner.getExample();
        OASWebsiteBackupsInner websiteBackupsInner2 = OASWebsiteBackupsInner.getExample();
        OASWebsiteBackupsInner websiteBackupsInner3 = new OASWebsiteBackupsInner();
        OASWebsiteBackupsInner websiteBackupsInner4 = new OASWebsiteBackupsInner();

        System.assert(websiteBackupsInner1.equals(websiteBackupsInner2));
        System.assert(websiteBackupsInner2.equals(websiteBackupsInner1));
        System.assert(websiteBackupsInner3.equals(websiteBackupsInner4));
        System.assert(websiteBackupsInner4.equals(websiteBackupsInner3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASWebsiteBackupsInner websiteBackupsInner1 = OASWebsiteBackupsInner.getExample();
        OASWebsiteBackupsInner websiteBackupsInner2 = new OASWebsiteBackupsInner();

        System.assertEquals(false, websiteBackupsInner1.equals('foo'));
        System.assertEquals(false, websiteBackupsInner2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASWebsiteBackupsInner websiteBackupsInner1 = OASWebsiteBackupsInner.getExample();
        OASWebsiteBackupsInner websiteBackupsInner2 = new OASWebsiteBackupsInner();
        OASWebsiteBackupsInner websiteBackupsInner3;

        System.assertEquals(false, websiteBackupsInner1.equals(websiteBackupsInner3));
        System.assertEquals(false, websiteBackupsInner2.equals(websiteBackupsInner3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASWebsiteBackupsInner websiteBackupsInner1 = OASWebsiteBackupsInner.getExample();
        OASWebsiteBackupsInner websiteBackupsInner2 = new OASWebsiteBackupsInner();

        System.assertEquals(websiteBackupsInner1.hashCode(), websiteBackupsInner1.hashCode());
        System.assertEquals(websiteBackupsInner2.hashCode(), websiteBackupsInner2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASWebsiteBackupsInner websiteBackupsInner1 = OASWebsiteBackupsInner.getExample();
        OASWebsiteBackupsInner websiteBackupsInner2 = OASWebsiteBackupsInner.getExample();
        OASWebsiteBackupsInner websiteBackupsInner3 = new OASWebsiteBackupsInner();
        OASWebsiteBackupsInner websiteBackupsInner4 = new OASWebsiteBackupsInner();

        System.assert(websiteBackupsInner1.equals(websiteBackupsInner2));
        System.assert(websiteBackupsInner3.equals(websiteBackupsInner4));
        System.assertEquals(websiteBackupsInner1.hashCode(), websiteBackupsInner2.hashCode());
        System.assertEquals(websiteBackupsInner3.hashCode(), websiteBackupsInner4.hashCode());
    }
}
