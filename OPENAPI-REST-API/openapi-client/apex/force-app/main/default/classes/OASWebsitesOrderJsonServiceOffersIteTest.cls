@isTest
private class OASWebsitesOrderJsonServiceOffersIteTest {
    @isTest
    private static void equalsSameInstance() {
        OASWebsitesOrderJsonServiceOffersIte websitesOrderJsonServiceOffersItem1 = OASWebsitesOrderJsonServiceOffersIte.getExample();
        OASWebsitesOrderJsonServiceOffersIte websitesOrderJsonServiceOffersItem2 = websitesOrderJsonServiceOffersItem1;
        OASWebsitesOrderJsonServiceOffersIte websitesOrderJsonServiceOffersItem3 = new OASWebsitesOrderJsonServiceOffersIte();
        OASWebsitesOrderJsonServiceOffersIte websitesOrderJsonServiceOffersItem4 = websitesOrderJsonServiceOffersItem3;

        System.assert(websitesOrderJsonServiceOffersItem1.equals(websitesOrderJsonServiceOffersItem2));
        System.assert(websitesOrderJsonServiceOffersItem2.equals(websitesOrderJsonServiceOffersItem1));
        System.assert(websitesOrderJsonServiceOffersItem1.equals(websitesOrderJsonServiceOffersItem1));
        System.assert(websitesOrderJsonServiceOffersItem3.equals(websitesOrderJsonServiceOffersItem4));
        System.assert(websitesOrderJsonServiceOffersItem4.equals(websitesOrderJsonServiceOffersItem3));
        System.assert(websitesOrderJsonServiceOffersItem3.equals(websitesOrderJsonServiceOffersItem3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASWebsitesOrderJsonServiceOffersIte websitesOrderJsonServiceOffersItem1 = OASWebsitesOrderJsonServiceOffersIte.getExample();
        OASWebsitesOrderJsonServiceOffersIte websitesOrderJsonServiceOffersItem2 = OASWebsitesOrderJsonServiceOffersIte.getExample();
        OASWebsitesOrderJsonServiceOffersIte websitesOrderJsonServiceOffersItem3 = new OASWebsitesOrderJsonServiceOffersIte();
        OASWebsitesOrderJsonServiceOffersIte websitesOrderJsonServiceOffersItem4 = new OASWebsitesOrderJsonServiceOffersIte();

        System.assert(websitesOrderJsonServiceOffersItem1.equals(websitesOrderJsonServiceOffersItem2));
        System.assert(websitesOrderJsonServiceOffersItem2.equals(websitesOrderJsonServiceOffersItem1));
        System.assert(websitesOrderJsonServiceOffersItem3.equals(websitesOrderJsonServiceOffersItem4));
        System.assert(websitesOrderJsonServiceOffersItem4.equals(websitesOrderJsonServiceOffersItem3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASWebsitesOrderJsonServiceOffersIte websitesOrderJsonServiceOffersItem1 = OASWebsitesOrderJsonServiceOffersIte.getExample();
        OASWebsitesOrderJsonServiceOffersIte websitesOrderJsonServiceOffersItem2 = new OASWebsitesOrderJsonServiceOffersIte();

        System.assertEquals(false, websitesOrderJsonServiceOffersItem1.equals('foo'));
        System.assertEquals(false, websitesOrderJsonServiceOffersItem2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASWebsitesOrderJsonServiceOffersIte websitesOrderJsonServiceOffersItem1 = OASWebsitesOrderJsonServiceOffersIte.getExample();
        OASWebsitesOrderJsonServiceOffersIte websitesOrderJsonServiceOffersItem2 = new OASWebsitesOrderJsonServiceOffersIte();
        OASWebsitesOrderJsonServiceOffersIte websitesOrderJsonServiceOffersItem3;

        System.assertEquals(false, websitesOrderJsonServiceOffersItem1.equals(websitesOrderJsonServiceOffersItem3));
        System.assertEquals(false, websitesOrderJsonServiceOffersItem2.equals(websitesOrderJsonServiceOffersItem3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASWebsitesOrderJsonServiceOffersIte websitesOrderJsonServiceOffersItem1 = OASWebsitesOrderJsonServiceOffersIte.getExample();
        OASWebsitesOrderJsonServiceOffersIte websitesOrderJsonServiceOffersItem2 = new OASWebsitesOrderJsonServiceOffersIte();

        System.assertEquals(websitesOrderJsonServiceOffersItem1.hashCode(), websitesOrderJsonServiceOffersItem1.hashCode());
        System.assertEquals(websitesOrderJsonServiceOffersItem2.hashCode(), websitesOrderJsonServiceOffersItem2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASWebsitesOrderJsonServiceOffersIte websitesOrderJsonServiceOffersItem1 = OASWebsitesOrderJsonServiceOffersIte.getExample();
        OASWebsitesOrderJsonServiceOffersIte websitesOrderJsonServiceOffersItem2 = OASWebsitesOrderJsonServiceOffersIte.getExample();
        OASWebsitesOrderJsonServiceOffersIte websitesOrderJsonServiceOffersItem3 = new OASWebsitesOrderJsonServiceOffersIte();
        OASWebsitesOrderJsonServiceOffersIte websitesOrderJsonServiceOffersItem4 = new OASWebsitesOrderJsonServiceOffersIte();

        System.assert(websitesOrderJsonServiceOffersItem1.equals(websitesOrderJsonServiceOffersItem2));
        System.assert(websitesOrderJsonServiceOffersItem3.equals(websitesOrderJsonServiceOffersItem4));
        System.assertEquals(websitesOrderJsonServiceOffersItem1.hashCode(), websitesOrderJsonServiceOffersItem2.hashCode());
        System.assertEquals(websitesOrderJsonServiceOffersItem3.hashCode(), websitesOrderJsonServiceOffersItem4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASWebsitesOrderJsonServiceOffersIte websitesOrderJsonServiceOffersItem = new OASWebsitesOrderJsonServiceOffersIte();
        Map<String, String> x-property-mappings = websitesOrderJsonServiceOffersItem.getx-property-mappings();
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
