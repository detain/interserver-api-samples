@isTest
private class OASWebsitesOrderJsonServicesTest {
    @isTest
    private static void equalsSameInstance() {
        OASWebsitesOrderJsonServices websitesOrderJsonServices1 = OASWebsitesOrderJsonServices.getExample();
        OASWebsitesOrderJsonServices websitesOrderJsonServices2 = websitesOrderJsonServices1;
        OASWebsitesOrderJsonServices websitesOrderJsonServices3 = new OASWebsitesOrderJsonServices();
        OASWebsitesOrderJsonServices websitesOrderJsonServices4 = websitesOrderJsonServices3;

        System.assert(websitesOrderJsonServices1.equals(websitesOrderJsonServices2));
        System.assert(websitesOrderJsonServices2.equals(websitesOrderJsonServices1));
        System.assert(websitesOrderJsonServices1.equals(websitesOrderJsonServices1));
        System.assert(websitesOrderJsonServices3.equals(websitesOrderJsonServices4));
        System.assert(websitesOrderJsonServices4.equals(websitesOrderJsonServices3));
        System.assert(websitesOrderJsonServices3.equals(websitesOrderJsonServices3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASWebsitesOrderJsonServices websitesOrderJsonServices1 = OASWebsitesOrderJsonServices.getExample();
        OASWebsitesOrderJsonServices websitesOrderJsonServices2 = OASWebsitesOrderJsonServices.getExample();
        OASWebsitesOrderJsonServices websitesOrderJsonServices3 = new OASWebsitesOrderJsonServices();
        OASWebsitesOrderJsonServices websitesOrderJsonServices4 = new OASWebsitesOrderJsonServices();

        System.assert(websitesOrderJsonServices1.equals(websitesOrderJsonServices2));
        System.assert(websitesOrderJsonServices2.equals(websitesOrderJsonServices1));
        System.assert(websitesOrderJsonServices3.equals(websitesOrderJsonServices4));
        System.assert(websitesOrderJsonServices4.equals(websitesOrderJsonServices3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASWebsitesOrderJsonServices websitesOrderJsonServices1 = OASWebsitesOrderJsonServices.getExample();
        OASWebsitesOrderJsonServices websitesOrderJsonServices2 = new OASWebsitesOrderJsonServices();

        System.assertEquals(false, websitesOrderJsonServices1.equals('foo'));
        System.assertEquals(false, websitesOrderJsonServices2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASWebsitesOrderJsonServices websitesOrderJsonServices1 = OASWebsitesOrderJsonServices.getExample();
        OASWebsitesOrderJsonServices websitesOrderJsonServices2 = new OASWebsitesOrderJsonServices();
        OASWebsitesOrderJsonServices websitesOrderJsonServices3;

        System.assertEquals(false, websitesOrderJsonServices1.equals(websitesOrderJsonServices3));
        System.assertEquals(false, websitesOrderJsonServices2.equals(websitesOrderJsonServices3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASWebsitesOrderJsonServices websitesOrderJsonServices1 = OASWebsitesOrderJsonServices.getExample();
        OASWebsitesOrderJsonServices websitesOrderJsonServices2 = new OASWebsitesOrderJsonServices();

        System.assertEquals(websitesOrderJsonServices1.hashCode(), websitesOrderJsonServices1.hashCode());
        System.assertEquals(websitesOrderJsonServices2.hashCode(), websitesOrderJsonServices2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASWebsitesOrderJsonServices websitesOrderJsonServices1 = OASWebsitesOrderJsonServices.getExample();
        OASWebsitesOrderJsonServices websitesOrderJsonServices2 = OASWebsitesOrderJsonServices.getExample();
        OASWebsitesOrderJsonServices websitesOrderJsonServices3 = new OASWebsitesOrderJsonServices();
        OASWebsitesOrderJsonServices websitesOrderJsonServices4 = new OASWebsitesOrderJsonServices();

        System.assert(websitesOrderJsonServices1.equals(websitesOrderJsonServices2));
        System.assert(websitesOrderJsonServices3.equals(websitesOrderJsonServices4));
        System.assertEquals(websitesOrderJsonServices1.hashCode(), websitesOrderJsonServices2.hashCode());
        System.assertEquals(websitesOrderJsonServices3.hashCode(), websitesOrderJsonServices4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASWebsitesOrderJsonServices websitesOrderJsonServices = new OASWebsitesOrderJsonServices();
        Map<String, String> x-property-mappings = websitesOrderJsonServices.getx-property-mappings();
        System.assertEquals('', x-property-mappings.get('11447'));
    }
}
