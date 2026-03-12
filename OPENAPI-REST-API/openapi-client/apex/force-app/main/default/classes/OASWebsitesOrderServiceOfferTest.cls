@isTest
private class OASWebsitesOrderServiceOfferTest {
    @isTest
    private static void equalsSameInstance() {
        OASWebsitesOrderServiceOffer websitesOrderServiceOffer1 = OASWebsitesOrderServiceOffer.getExample();
        OASWebsitesOrderServiceOffer websitesOrderServiceOffer2 = websitesOrderServiceOffer1;
        OASWebsitesOrderServiceOffer websitesOrderServiceOffer3 = new OASWebsitesOrderServiceOffer();
        OASWebsitesOrderServiceOffer websitesOrderServiceOffer4 = websitesOrderServiceOffer3;

        System.assert(websitesOrderServiceOffer1.equals(websitesOrderServiceOffer2));
        System.assert(websitesOrderServiceOffer2.equals(websitesOrderServiceOffer1));
        System.assert(websitesOrderServiceOffer1.equals(websitesOrderServiceOffer1));
        System.assert(websitesOrderServiceOffer3.equals(websitesOrderServiceOffer4));
        System.assert(websitesOrderServiceOffer4.equals(websitesOrderServiceOffer3));
        System.assert(websitesOrderServiceOffer3.equals(websitesOrderServiceOffer3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASWebsitesOrderServiceOffer websitesOrderServiceOffer1 = OASWebsitesOrderServiceOffer.getExample();
        OASWebsitesOrderServiceOffer websitesOrderServiceOffer2 = OASWebsitesOrderServiceOffer.getExample();
        OASWebsitesOrderServiceOffer websitesOrderServiceOffer3 = new OASWebsitesOrderServiceOffer();
        OASWebsitesOrderServiceOffer websitesOrderServiceOffer4 = new OASWebsitesOrderServiceOffer();

        System.assert(websitesOrderServiceOffer1.equals(websitesOrderServiceOffer2));
        System.assert(websitesOrderServiceOffer2.equals(websitesOrderServiceOffer1));
        System.assert(websitesOrderServiceOffer3.equals(websitesOrderServiceOffer4));
        System.assert(websitesOrderServiceOffer4.equals(websitesOrderServiceOffer3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASWebsitesOrderServiceOffer websitesOrderServiceOffer1 = OASWebsitesOrderServiceOffer.getExample();
        OASWebsitesOrderServiceOffer websitesOrderServiceOffer2 = new OASWebsitesOrderServiceOffer();

        System.assertEquals(false, websitesOrderServiceOffer1.equals('foo'));
        System.assertEquals(false, websitesOrderServiceOffer2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASWebsitesOrderServiceOffer websitesOrderServiceOffer1 = OASWebsitesOrderServiceOffer.getExample();
        OASWebsitesOrderServiceOffer websitesOrderServiceOffer2 = new OASWebsitesOrderServiceOffer();
        OASWebsitesOrderServiceOffer websitesOrderServiceOffer3;

        System.assertEquals(false, websitesOrderServiceOffer1.equals(websitesOrderServiceOffer3));
        System.assertEquals(false, websitesOrderServiceOffer2.equals(websitesOrderServiceOffer3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASWebsitesOrderServiceOffer websitesOrderServiceOffer1 = OASWebsitesOrderServiceOffer.getExample();
        OASWebsitesOrderServiceOffer websitesOrderServiceOffer2 = new OASWebsitesOrderServiceOffer();

        System.assertEquals(websitesOrderServiceOffer1.hashCode(), websitesOrderServiceOffer1.hashCode());
        System.assertEquals(websitesOrderServiceOffer2.hashCode(), websitesOrderServiceOffer2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASWebsitesOrderServiceOffer websitesOrderServiceOffer1 = OASWebsitesOrderServiceOffer.getExample();
        OASWebsitesOrderServiceOffer websitesOrderServiceOffer2 = OASWebsitesOrderServiceOffer.getExample();
        OASWebsitesOrderServiceOffer websitesOrderServiceOffer3 = new OASWebsitesOrderServiceOffer();
        OASWebsitesOrderServiceOffer websitesOrderServiceOffer4 = new OASWebsitesOrderServiceOffer();

        System.assert(websitesOrderServiceOffer1.equals(websitesOrderServiceOffer2));
        System.assert(websitesOrderServiceOffer3.equals(websitesOrderServiceOffer4));
        System.assertEquals(websitesOrderServiceOffer1.hashCode(), websitesOrderServiceOffer2.hashCode());
        System.assertEquals(websitesOrderServiceOffer3.hashCode(), websitesOrderServiceOffer4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASWebsitesOrderServiceOffer websitesOrderServiceOffer = new OASWebsitesOrderServiceOffer();
        Map<String, String> x-property-mappings = websitesOrderServiceOffer.getx-property-mappings();
        System.assertEquals('serviceOfferId', x-property-mappings.get('service_offer_id'));
        System.assertEquals('serviceId', x-property-mappings.get('service_id'));
        System.assertEquals('introCost', x-property-mappings.get('intro_cost'));
        System.assertEquals('renewalCost', x-property-mappings.get('renewal_cost'));
        System.assertEquals('introFrequency', x-property-mappings.get('intro_frequency'));
        System.assertEquals('renewalFrequency', x-property-mappings.get('renewal_frequency'));
        System.assertEquals('allowCoupon', x-property-mappings.get('allow_coupon'));
        System.assertEquals('serviceModule', x-property-mappings.get('service_module'));
        System.assertEquals('createdAt', x-property-mappings.get('created_at'));
        System.assertEquals('updatedAt', x-property-mappings.get('updated_at'));
        System.assertEquals('deletedAt', x-property-mappings.get('deleted_at'));
    }
}
