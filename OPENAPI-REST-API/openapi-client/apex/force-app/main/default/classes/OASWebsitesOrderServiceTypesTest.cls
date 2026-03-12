@isTest
private class OASWebsitesOrderServiceTypesTest {
    @isTest
    private static void equalsSameInstance() {
        OASWebsitesOrderServiceTypes websitesOrderServiceTypes1 = OASWebsitesOrderServiceTypes.getExample();
        OASWebsitesOrderServiceTypes websitesOrderServiceTypes2 = websitesOrderServiceTypes1;
        OASWebsitesOrderServiceTypes websitesOrderServiceTypes3 = new OASWebsitesOrderServiceTypes();
        OASWebsitesOrderServiceTypes websitesOrderServiceTypes4 = websitesOrderServiceTypes3;

        System.assert(websitesOrderServiceTypes1.equals(websitesOrderServiceTypes2));
        System.assert(websitesOrderServiceTypes2.equals(websitesOrderServiceTypes1));
        System.assert(websitesOrderServiceTypes1.equals(websitesOrderServiceTypes1));
        System.assert(websitesOrderServiceTypes3.equals(websitesOrderServiceTypes4));
        System.assert(websitesOrderServiceTypes4.equals(websitesOrderServiceTypes3));
        System.assert(websitesOrderServiceTypes3.equals(websitesOrderServiceTypes3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASWebsitesOrderServiceTypes websitesOrderServiceTypes1 = OASWebsitesOrderServiceTypes.getExample();
        OASWebsitesOrderServiceTypes websitesOrderServiceTypes2 = OASWebsitesOrderServiceTypes.getExample();
        OASWebsitesOrderServiceTypes websitesOrderServiceTypes3 = new OASWebsitesOrderServiceTypes();
        OASWebsitesOrderServiceTypes websitesOrderServiceTypes4 = new OASWebsitesOrderServiceTypes();

        System.assert(websitesOrderServiceTypes1.equals(websitesOrderServiceTypes2));
        System.assert(websitesOrderServiceTypes2.equals(websitesOrderServiceTypes1));
        System.assert(websitesOrderServiceTypes3.equals(websitesOrderServiceTypes4));
        System.assert(websitesOrderServiceTypes4.equals(websitesOrderServiceTypes3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASWebsitesOrderServiceTypes websitesOrderServiceTypes1 = OASWebsitesOrderServiceTypes.getExample();
        OASWebsitesOrderServiceTypes websitesOrderServiceTypes2 = new OASWebsitesOrderServiceTypes();

        System.assertEquals(false, websitesOrderServiceTypes1.equals('foo'));
        System.assertEquals(false, websitesOrderServiceTypes2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASWebsitesOrderServiceTypes websitesOrderServiceTypes1 = OASWebsitesOrderServiceTypes.getExample();
        OASWebsitesOrderServiceTypes websitesOrderServiceTypes2 = new OASWebsitesOrderServiceTypes();
        OASWebsitesOrderServiceTypes websitesOrderServiceTypes3;

        System.assertEquals(false, websitesOrderServiceTypes1.equals(websitesOrderServiceTypes3));
        System.assertEquals(false, websitesOrderServiceTypes2.equals(websitesOrderServiceTypes3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASWebsitesOrderServiceTypes websitesOrderServiceTypes1 = OASWebsitesOrderServiceTypes.getExample();
        OASWebsitesOrderServiceTypes websitesOrderServiceTypes2 = new OASWebsitesOrderServiceTypes();

        System.assertEquals(websitesOrderServiceTypes1.hashCode(), websitesOrderServiceTypes1.hashCode());
        System.assertEquals(websitesOrderServiceTypes2.hashCode(), websitesOrderServiceTypes2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASWebsitesOrderServiceTypes websitesOrderServiceTypes1 = OASWebsitesOrderServiceTypes.getExample();
        OASWebsitesOrderServiceTypes websitesOrderServiceTypes2 = OASWebsitesOrderServiceTypes.getExample();
        OASWebsitesOrderServiceTypes websitesOrderServiceTypes3 = new OASWebsitesOrderServiceTypes();
        OASWebsitesOrderServiceTypes websitesOrderServiceTypes4 = new OASWebsitesOrderServiceTypes();

        System.assert(websitesOrderServiceTypes1.equals(websitesOrderServiceTypes2));
        System.assert(websitesOrderServiceTypes3.equals(websitesOrderServiceTypes4));
        System.assertEquals(websitesOrderServiceTypes1.hashCode(), websitesOrderServiceTypes2.hashCode());
        System.assertEquals(websitesOrderServiceTypes3.hashCode(), websitesOrderServiceTypes4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASWebsitesOrderServiceTypes websitesOrderServiceTypes = new OASWebsitesOrderServiceTypes();
        Map<String, String> x-property-mappings = websitesOrderServiceTypes.getx-property-mappings();
        System.assertEquals('', x-property-mappings.get('11447'));
    }
}
