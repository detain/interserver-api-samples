@isTest
private class OASWebsitesOrderJsonServiceOffersTest {
    @isTest
    private static void equalsSameInstance() {
        OASWebsitesOrderJsonServiceOffers websitesOrderJsonServiceOffers1 = OASWebsitesOrderJsonServiceOffers.getExample();
        OASWebsitesOrderJsonServiceOffers websitesOrderJsonServiceOffers2 = websitesOrderJsonServiceOffers1;
        OASWebsitesOrderJsonServiceOffers websitesOrderJsonServiceOffers3 = new OASWebsitesOrderJsonServiceOffers();
        OASWebsitesOrderJsonServiceOffers websitesOrderJsonServiceOffers4 = websitesOrderJsonServiceOffers3;

        System.assert(websitesOrderJsonServiceOffers1.equals(websitesOrderJsonServiceOffers2));
        System.assert(websitesOrderJsonServiceOffers2.equals(websitesOrderJsonServiceOffers1));
        System.assert(websitesOrderJsonServiceOffers1.equals(websitesOrderJsonServiceOffers1));
        System.assert(websitesOrderJsonServiceOffers3.equals(websitesOrderJsonServiceOffers4));
        System.assert(websitesOrderJsonServiceOffers4.equals(websitesOrderJsonServiceOffers3));
        System.assert(websitesOrderJsonServiceOffers3.equals(websitesOrderJsonServiceOffers3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASWebsitesOrderJsonServiceOffers websitesOrderJsonServiceOffers1 = OASWebsitesOrderJsonServiceOffers.getExample();
        OASWebsitesOrderJsonServiceOffers websitesOrderJsonServiceOffers2 = OASWebsitesOrderJsonServiceOffers.getExample();
        OASWebsitesOrderJsonServiceOffers websitesOrderJsonServiceOffers3 = new OASWebsitesOrderJsonServiceOffers();
        OASWebsitesOrderJsonServiceOffers websitesOrderJsonServiceOffers4 = new OASWebsitesOrderJsonServiceOffers();

        System.assert(websitesOrderJsonServiceOffers1.equals(websitesOrderJsonServiceOffers2));
        System.assert(websitesOrderJsonServiceOffers2.equals(websitesOrderJsonServiceOffers1));
        System.assert(websitesOrderJsonServiceOffers3.equals(websitesOrderJsonServiceOffers4));
        System.assert(websitesOrderJsonServiceOffers4.equals(websitesOrderJsonServiceOffers3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASWebsitesOrderJsonServiceOffers websitesOrderJsonServiceOffers1 = OASWebsitesOrderJsonServiceOffers.getExample();
        OASWebsitesOrderJsonServiceOffers websitesOrderJsonServiceOffers2 = new OASWebsitesOrderJsonServiceOffers();

        System.assertEquals(false, websitesOrderJsonServiceOffers1.equals('foo'));
        System.assertEquals(false, websitesOrderJsonServiceOffers2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASWebsitesOrderJsonServiceOffers websitesOrderJsonServiceOffers1 = OASWebsitesOrderJsonServiceOffers.getExample();
        OASWebsitesOrderJsonServiceOffers websitesOrderJsonServiceOffers2 = new OASWebsitesOrderJsonServiceOffers();
        OASWebsitesOrderJsonServiceOffers websitesOrderJsonServiceOffers3;

        System.assertEquals(false, websitesOrderJsonServiceOffers1.equals(websitesOrderJsonServiceOffers3));
        System.assertEquals(false, websitesOrderJsonServiceOffers2.equals(websitesOrderJsonServiceOffers3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASWebsitesOrderJsonServiceOffers websitesOrderJsonServiceOffers1 = OASWebsitesOrderJsonServiceOffers.getExample();
        OASWebsitesOrderJsonServiceOffers websitesOrderJsonServiceOffers2 = new OASWebsitesOrderJsonServiceOffers();

        System.assertEquals(websitesOrderJsonServiceOffers1.hashCode(), websitesOrderJsonServiceOffers1.hashCode());
        System.assertEquals(websitesOrderJsonServiceOffers2.hashCode(), websitesOrderJsonServiceOffers2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASWebsitesOrderJsonServiceOffers websitesOrderJsonServiceOffers1 = OASWebsitesOrderJsonServiceOffers.getExample();
        OASWebsitesOrderJsonServiceOffers websitesOrderJsonServiceOffers2 = OASWebsitesOrderJsonServiceOffers.getExample();
        OASWebsitesOrderJsonServiceOffers websitesOrderJsonServiceOffers3 = new OASWebsitesOrderJsonServiceOffers();
        OASWebsitesOrderJsonServiceOffers websitesOrderJsonServiceOffers4 = new OASWebsitesOrderJsonServiceOffers();

        System.assert(websitesOrderJsonServiceOffers1.equals(websitesOrderJsonServiceOffers2));
        System.assert(websitesOrderJsonServiceOffers3.equals(websitesOrderJsonServiceOffers4));
        System.assertEquals(websitesOrderJsonServiceOffers1.hashCode(), websitesOrderJsonServiceOffers2.hashCode());
        System.assertEquals(websitesOrderJsonServiceOffers3.hashCode(), websitesOrderJsonServiceOffers4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASWebsitesOrderJsonServiceOffers websitesOrderJsonServiceOffers = new OASWebsitesOrderJsonServiceOffers();
        Map<String, String> x-property-mappings = websitesOrderJsonServiceOffers.getx-property-mappings();
        System.assertEquals('', x-property-mappings.get('1026'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASWebsitesOrderJsonServiceOffers websitesOrderJsonServiceOffers = new OASWebsitesOrderJsonServiceOffers();
        System.assertEquals(new List<OASWebsitesOrderJsonServiceOffersIte>(), websitesOrderJsonServiceOffers.);
    }
}
