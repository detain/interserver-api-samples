@isTest
private class OASWebsitesOrderPackgesTest {
    @isTest
    private static void equalsSameInstance() {
        OASWebsitesOrderPackges websitesOrderPackges1 = OASWebsitesOrderPackges.getExample();
        OASWebsitesOrderPackges websitesOrderPackges2 = websitesOrderPackges1;
        OASWebsitesOrderPackges websitesOrderPackges3 = new OASWebsitesOrderPackges();
        OASWebsitesOrderPackges websitesOrderPackges4 = websitesOrderPackges3;

        System.assert(websitesOrderPackges1.equals(websitesOrderPackges2));
        System.assert(websitesOrderPackges2.equals(websitesOrderPackges1));
        System.assert(websitesOrderPackges1.equals(websitesOrderPackges1));
        System.assert(websitesOrderPackges3.equals(websitesOrderPackges4));
        System.assert(websitesOrderPackges4.equals(websitesOrderPackges3));
        System.assert(websitesOrderPackges3.equals(websitesOrderPackges3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASWebsitesOrderPackges websitesOrderPackges1 = OASWebsitesOrderPackges.getExample();
        OASWebsitesOrderPackges websitesOrderPackges2 = OASWebsitesOrderPackges.getExample();
        OASWebsitesOrderPackges websitesOrderPackges3 = new OASWebsitesOrderPackges();
        OASWebsitesOrderPackges websitesOrderPackges4 = new OASWebsitesOrderPackges();

        System.assert(websitesOrderPackges1.equals(websitesOrderPackges2));
        System.assert(websitesOrderPackges2.equals(websitesOrderPackges1));
        System.assert(websitesOrderPackges3.equals(websitesOrderPackges4));
        System.assert(websitesOrderPackges4.equals(websitesOrderPackges3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASWebsitesOrderPackges websitesOrderPackges1 = OASWebsitesOrderPackges.getExample();
        OASWebsitesOrderPackges websitesOrderPackges2 = new OASWebsitesOrderPackges();

        System.assertEquals(false, websitesOrderPackges1.equals('foo'));
        System.assertEquals(false, websitesOrderPackges2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASWebsitesOrderPackges websitesOrderPackges1 = OASWebsitesOrderPackges.getExample();
        OASWebsitesOrderPackges websitesOrderPackges2 = new OASWebsitesOrderPackges();
        OASWebsitesOrderPackges websitesOrderPackges3;

        System.assertEquals(false, websitesOrderPackges1.equals(websitesOrderPackges3));
        System.assertEquals(false, websitesOrderPackges2.equals(websitesOrderPackges3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASWebsitesOrderPackges websitesOrderPackges1 = OASWebsitesOrderPackges.getExample();
        OASWebsitesOrderPackges websitesOrderPackges2 = new OASWebsitesOrderPackges();

        System.assertEquals(websitesOrderPackges1.hashCode(), websitesOrderPackges1.hashCode());
        System.assertEquals(websitesOrderPackges2.hashCode(), websitesOrderPackges2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASWebsitesOrderPackges websitesOrderPackges1 = OASWebsitesOrderPackges.getExample();
        OASWebsitesOrderPackges websitesOrderPackges2 = OASWebsitesOrderPackges.getExample();
        OASWebsitesOrderPackges websitesOrderPackges3 = new OASWebsitesOrderPackges();
        OASWebsitesOrderPackges websitesOrderPackges4 = new OASWebsitesOrderPackges();

        System.assert(websitesOrderPackges1.equals(websitesOrderPackges2));
        System.assert(websitesOrderPackges3.equals(websitesOrderPackges4));
        System.assertEquals(websitesOrderPackges1.hashCode(), websitesOrderPackges2.hashCode());
        System.assertEquals(websitesOrderPackges3.hashCode(), websitesOrderPackges4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASWebsitesOrderPackges websitesOrderPackges = new OASWebsitesOrderPackges();
        Map<String, String> x-property-mappings = websitesOrderPackges.getx-property-mappings();
        System.assertEquals('', x-property-mappings.get('11440'));
    }
}
