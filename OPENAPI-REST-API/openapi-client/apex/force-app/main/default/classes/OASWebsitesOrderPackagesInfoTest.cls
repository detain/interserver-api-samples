@isTest
private class OASWebsitesOrderPackagesInfoTest {
    @isTest
    private static void equalsSameInstance() {
        OASWebsitesOrderPackagesInfo websitesOrderPackagesInfo1 = OASWebsitesOrderPackagesInfo.getExample();
        OASWebsitesOrderPackagesInfo websitesOrderPackagesInfo2 = websitesOrderPackagesInfo1;
        OASWebsitesOrderPackagesInfo websitesOrderPackagesInfo3 = new OASWebsitesOrderPackagesInfo();
        OASWebsitesOrderPackagesInfo websitesOrderPackagesInfo4 = websitesOrderPackagesInfo3;

        System.assert(websitesOrderPackagesInfo1.equals(websitesOrderPackagesInfo2));
        System.assert(websitesOrderPackagesInfo2.equals(websitesOrderPackagesInfo1));
        System.assert(websitesOrderPackagesInfo1.equals(websitesOrderPackagesInfo1));
        System.assert(websitesOrderPackagesInfo3.equals(websitesOrderPackagesInfo4));
        System.assert(websitesOrderPackagesInfo4.equals(websitesOrderPackagesInfo3));
        System.assert(websitesOrderPackagesInfo3.equals(websitesOrderPackagesInfo3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASWebsitesOrderPackagesInfo websitesOrderPackagesInfo1 = OASWebsitesOrderPackagesInfo.getExample();
        OASWebsitesOrderPackagesInfo websitesOrderPackagesInfo2 = OASWebsitesOrderPackagesInfo.getExample();
        OASWebsitesOrderPackagesInfo websitesOrderPackagesInfo3 = new OASWebsitesOrderPackagesInfo();
        OASWebsitesOrderPackagesInfo websitesOrderPackagesInfo4 = new OASWebsitesOrderPackagesInfo();

        System.assert(websitesOrderPackagesInfo1.equals(websitesOrderPackagesInfo2));
        System.assert(websitesOrderPackagesInfo2.equals(websitesOrderPackagesInfo1));
        System.assert(websitesOrderPackagesInfo3.equals(websitesOrderPackagesInfo4));
        System.assert(websitesOrderPackagesInfo4.equals(websitesOrderPackagesInfo3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASWebsitesOrderPackagesInfo websitesOrderPackagesInfo1 = OASWebsitesOrderPackagesInfo.getExample();
        OASWebsitesOrderPackagesInfo websitesOrderPackagesInfo2 = new OASWebsitesOrderPackagesInfo();

        System.assertEquals(false, websitesOrderPackagesInfo1.equals('foo'));
        System.assertEquals(false, websitesOrderPackagesInfo2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASWebsitesOrderPackagesInfo websitesOrderPackagesInfo1 = OASWebsitesOrderPackagesInfo.getExample();
        OASWebsitesOrderPackagesInfo websitesOrderPackagesInfo2 = new OASWebsitesOrderPackagesInfo();
        OASWebsitesOrderPackagesInfo websitesOrderPackagesInfo3;

        System.assertEquals(false, websitesOrderPackagesInfo1.equals(websitesOrderPackagesInfo3));
        System.assertEquals(false, websitesOrderPackagesInfo2.equals(websitesOrderPackagesInfo3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASWebsitesOrderPackagesInfo websitesOrderPackagesInfo1 = OASWebsitesOrderPackagesInfo.getExample();
        OASWebsitesOrderPackagesInfo websitesOrderPackagesInfo2 = new OASWebsitesOrderPackagesInfo();

        System.assertEquals(websitesOrderPackagesInfo1.hashCode(), websitesOrderPackagesInfo1.hashCode());
        System.assertEquals(websitesOrderPackagesInfo2.hashCode(), websitesOrderPackagesInfo2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASWebsitesOrderPackagesInfo websitesOrderPackagesInfo1 = OASWebsitesOrderPackagesInfo.getExample();
        OASWebsitesOrderPackagesInfo websitesOrderPackagesInfo2 = OASWebsitesOrderPackagesInfo.getExample();
        OASWebsitesOrderPackagesInfo websitesOrderPackagesInfo3 = new OASWebsitesOrderPackagesInfo();
        OASWebsitesOrderPackagesInfo websitesOrderPackagesInfo4 = new OASWebsitesOrderPackagesInfo();

        System.assert(websitesOrderPackagesInfo1.equals(websitesOrderPackagesInfo2));
        System.assert(websitesOrderPackagesInfo3.equals(websitesOrderPackagesInfo4));
        System.assertEquals(websitesOrderPackagesInfo1.hashCode(), websitesOrderPackagesInfo2.hashCode());
        System.assertEquals(websitesOrderPackagesInfo3.hashCode(), websitesOrderPackagesInfo4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASWebsitesOrderPackagesInfo websitesOrderPackagesInfo = new OASWebsitesOrderPackagesInfo();
        Map<String, String> x-property-mappings = websitesOrderPackagesInfo.getx-property-mappings();
        System.assertEquals('servicesId', x-property-mappings.get('services_id'));
        System.assertEquals('servicesName', x-property-mappings.get('services_name'));
        System.assertEquals('servicesCost', x-property-mappings.get('services_cost'));
        System.assertEquals('servicesCategory', x-property-mappings.get('services_category'));
        System.assertEquals('servicesBuyable', x-property-mappings.get('services_buyable'));
        System.assertEquals('servicesType', x-property-mappings.get('services_type'));
        System.assertEquals('servicesModule', x-property-mappings.get('services_module'));
        System.assertEquals('servicesDescription', x-property-mappings.get('services_description'));
        System.assertEquals('servicesField1', x-property-mappings.get('services_field1'));
        System.assertEquals('servicesField2', x-property-mappings.get('services_field2'));
        System.assertEquals('servicesHtml', x-property-mappings.get('services_html'));
        System.assertEquals('servicesMoreinfoUrl', x-property-mappings.get('services_moreinfo_url'));
        System.assertEquals('servicesHidden', x-property-mappings.get('services_hidden'));
    }
}
