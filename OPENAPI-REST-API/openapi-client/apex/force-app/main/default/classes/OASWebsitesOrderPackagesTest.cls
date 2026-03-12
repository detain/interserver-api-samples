@isTest
private class OASWebsitesOrderPackagesTest {
    @isTest
    private static void equalsSameInstance() {
        OASWebsitesOrderPackages websitesOrderPackages1 = OASWebsitesOrderPackages.getExample();
        OASWebsitesOrderPackages websitesOrderPackages2 = websitesOrderPackages1;
        OASWebsitesOrderPackages websitesOrderPackages3 = new OASWebsitesOrderPackages();
        OASWebsitesOrderPackages websitesOrderPackages4 = websitesOrderPackages3;

        System.assert(websitesOrderPackages1.equals(websitesOrderPackages2));
        System.assert(websitesOrderPackages2.equals(websitesOrderPackages1));
        System.assert(websitesOrderPackages1.equals(websitesOrderPackages1));
        System.assert(websitesOrderPackages3.equals(websitesOrderPackages4));
        System.assert(websitesOrderPackages4.equals(websitesOrderPackages3));
        System.assert(websitesOrderPackages3.equals(websitesOrderPackages3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASWebsitesOrderPackages websitesOrderPackages1 = OASWebsitesOrderPackages.getExample();
        OASWebsitesOrderPackages websitesOrderPackages2 = OASWebsitesOrderPackages.getExample();
        OASWebsitesOrderPackages websitesOrderPackages3 = new OASWebsitesOrderPackages();
        OASWebsitesOrderPackages websitesOrderPackages4 = new OASWebsitesOrderPackages();

        System.assert(websitesOrderPackages1.equals(websitesOrderPackages2));
        System.assert(websitesOrderPackages2.equals(websitesOrderPackages1));
        System.assert(websitesOrderPackages3.equals(websitesOrderPackages4));
        System.assert(websitesOrderPackages4.equals(websitesOrderPackages3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASWebsitesOrderPackages websitesOrderPackages1 = OASWebsitesOrderPackages.getExample();
        OASWebsitesOrderPackages websitesOrderPackages2 = new OASWebsitesOrderPackages();

        System.assertEquals(false, websitesOrderPackages1.equals('foo'));
        System.assertEquals(false, websitesOrderPackages2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASWebsitesOrderPackages websitesOrderPackages1 = OASWebsitesOrderPackages.getExample();
        OASWebsitesOrderPackages websitesOrderPackages2 = new OASWebsitesOrderPackages();
        OASWebsitesOrderPackages websitesOrderPackages3;

        System.assertEquals(false, websitesOrderPackages1.equals(websitesOrderPackages3));
        System.assertEquals(false, websitesOrderPackages2.equals(websitesOrderPackages3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASWebsitesOrderPackages websitesOrderPackages1 = OASWebsitesOrderPackages.getExample();
        OASWebsitesOrderPackages websitesOrderPackages2 = new OASWebsitesOrderPackages();

        System.assertEquals(websitesOrderPackages1.hashCode(), websitesOrderPackages1.hashCode());
        System.assertEquals(websitesOrderPackages2.hashCode(), websitesOrderPackages2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASWebsitesOrderPackages websitesOrderPackages1 = OASWebsitesOrderPackages.getExample();
        OASWebsitesOrderPackages websitesOrderPackages2 = OASWebsitesOrderPackages.getExample();
        OASWebsitesOrderPackages websitesOrderPackages3 = new OASWebsitesOrderPackages();
        OASWebsitesOrderPackages websitesOrderPackages4 = new OASWebsitesOrderPackages();

        System.assert(websitesOrderPackages1.equals(websitesOrderPackages2));
        System.assert(websitesOrderPackages3.equals(websitesOrderPackages4));
        System.assertEquals(websitesOrderPackages1.hashCode(), websitesOrderPackages2.hashCode());
        System.assertEquals(websitesOrderPackages3.hashCode(), websitesOrderPackages4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASWebsitesOrderPackages websitesOrderPackages = new OASWebsitesOrderPackages();
        Map<String, String> x-property-mappings = websitesOrderPackages.getx-property-mappings();
        System.assertEquals('', x-property-mappings.get('11447'));
    }
}
