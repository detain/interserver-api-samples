@isTest
private class OASWebsitesOrderServiceOffersTest {
    @isTest
    private static void equalsSameInstance() {
        OASWebsitesOrderServiceOffers websitesOrderServiceOffers1 = OASWebsitesOrderServiceOffers.getExample();
        OASWebsitesOrderServiceOffers websitesOrderServiceOffers2 = websitesOrderServiceOffers1;
        OASWebsitesOrderServiceOffers websitesOrderServiceOffers3 = new OASWebsitesOrderServiceOffers();
        OASWebsitesOrderServiceOffers websitesOrderServiceOffers4 = websitesOrderServiceOffers3;

        System.assert(websitesOrderServiceOffers1.equals(websitesOrderServiceOffers2));
        System.assert(websitesOrderServiceOffers2.equals(websitesOrderServiceOffers1));
        System.assert(websitesOrderServiceOffers1.equals(websitesOrderServiceOffers1));
        System.assert(websitesOrderServiceOffers3.equals(websitesOrderServiceOffers4));
        System.assert(websitesOrderServiceOffers4.equals(websitesOrderServiceOffers3));
        System.assert(websitesOrderServiceOffers3.equals(websitesOrderServiceOffers3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASWebsitesOrderServiceOffers websitesOrderServiceOffers1 = OASWebsitesOrderServiceOffers.getExample();
        OASWebsitesOrderServiceOffers websitesOrderServiceOffers2 = OASWebsitesOrderServiceOffers.getExample();
        OASWebsitesOrderServiceOffers websitesOrderServiceOffers3 = new OASWebsitesOrderServiceOffers();
        OASWebsitesOrderServiceOffers websitesOrderServiceOffers4 = new OASWebsitesOrderServiceOffers();

        System.assert(websitesOrderServiceOffers1.equals(websitesOrderServiceOffers2));
        System.assert(websitesOrderServiceOffers2.equals(websitesOrderServiceOffers1));
        System.assert(websitesOrderServiceOffers3.equals(websitesOrderServiceOffers4));
        System.assert(websitesOrderServiceOffers4.equals(websitesOrderServiceOffers3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASWebsitesOrderServiceOffers websitesOrderServiceOffers1 = OASWebsitesOrderServiceOffers.getExample();
        OASWebsitesOrderServiceOffers websitesOrderServiceOffers2 = new OASWebsitesOrderServiceOffers();

        System.assertEquals(false, websitesOrderServiceOffers1.equals('foo'));
        System.assertEquals(false, websitesOrderServiceOffers2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASWebsitesOrderServiceOffers websitesOrderServiceOffers1 = OASWebsitesOrderServiceOffers.getExample();
        OASWebsitesOrderServiceOffers websitesOrderServiceOffers2 = new OASWebsitesOrderServiceOffers();
        OASWebsitesOrderServiceOffers websitesOrderServiceOffers3;

        System.assertEquals(false, websitesOrderServiceOffers1.equals(websitesOrderServiceOffers3));
        System.assertEquals(false, websitesOrderServiceOffers2.equals(websitesOrderServiceOffers3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASWebsitesOrderServiceOffers websitesOrderServiceOffers1 = OASWebsitesOrderServiceOffers.getExample();
        OASWebsitesOrderServiceOffers websitesOrderServiceOffers2 = new OASWebsitesOrderServiceOffers();

        System.assertEquals(websitesOrderServiceOffers1.hashCode(), websitesOrderServiceOffers1.hashCode());
        System.assertEquals(websitesOrderServiceOffers2.hashCode(), websitesOrderServiceOffers2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASWebsitesOrderServiceOffers websitesOrderServiceOffers1 = OASWebsitesOrderServiceOffers.getExample();
        OASWebsitesOrderServiceOffers websitesOrderServiceOffers2 = OASWebsitesOrderServiceOffers.getExample();
        OASWebsitesOrderServiceOffers websitesOrderServiceOffers3 = new OASWebsitesOrderServiceOffers();
        OASWebsitesOrderServiceOffers websitesOrderServiceOffers4 = new OASWebsitesOrderServiceOffers();

        System.assert(websitesOrderServiceOffers1.equals(websitesOrderServiceOffers2));
        System.assert(websitesOrderServiceOffers3.equals(websitesOrderServiceOffers4));
        System.assertEquals(websitesOrderServiceOffers1.hashCode(), websitesOrderServiceOffers2.hashCode());
        System.assertEquals(websitesOrderServiceOffers3.hashCode(), websitesOrderServiceOffers4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASWebsitesOrderServiceOffers websitesOrderServiceOffers = new OASWebsitesOrderServiceOffers();
        Map<String, String> x-property-mappings = websitesOrderServiceOffers.getx-property-mappings();
        System.assertEquals('', x-property-mappings.get('1026'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASWebsitesOrderServiceOffers websitesOrderServiceOffers = new OASWebsitesOrderServiceOffers();
        System.assertEquals(new List<OASWebsitesOrderServiceOffer>(), websitesOrderServiceOffers.);
    }
}
