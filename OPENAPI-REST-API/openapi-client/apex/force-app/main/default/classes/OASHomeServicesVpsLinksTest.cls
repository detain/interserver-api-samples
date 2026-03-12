@isTest
private class OASHomeServicesVpsLinksTest {
    @isTest
    private static void equalsSameInstance() {
        OASHomeServicesVpsLinks homeServicesVpsLinks1 = OASHomeServicesVpsLinks.getExample();
        OASHomeServicesVpsLinks homeServicesVpsLinks2 = homeServicesVpsLinks1;
        OASHomeServicesVpsLinks homeServicesVpsLinks3 = new OASHomeServicesVpsLinks();
        OASHomeServicesVpsLinks homeServicesVpsLinks4 = homeServicesVpsLinks3;

        System.assert(homeServicesVpsLinks1.equals(homeServicesVpsLinks2));
        System.assert(homeServicesVpsLinks2.equals(homeServicesVpsLinks1));
        System.assert(homeServicesVpsLinks1.equals(homeServicesVpsLinks1));
        System.assert(homeServicesVpsLinks3.equals(homeServicesVpsLinks4));
        System.assert(homeServicesVpsLinks4.equals(homeServicesVpsLinks3));
        System.assert(homeServicesVpsLinks3.equals(homeServicesVpsLinks3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASHomeServicesVpsLinks homeServicesVpsLinks1 = OASHomeServicesVpsLinks.getExample();
        OASHomeServicesVpsLinks homeServicesVpsLinks2 = OASHomeServicesVpsLinks.getExample();
        OASHomeServicesVpsLinks homeServicesVpsLinks3 = new OASHomeServicesVpsLinks();
        OASHomeServicesVpsLinks homeServicesVpsLinks4 = new OASHomeServicesVpsLinks();

        System.assert(homeServicesVpsLinks1.equals(homeServicesVpsLinks2));
        System.assert(homeServicesVpsLinks2.equals(homeServicesVpsLinks1));
        System.assert(homeServicesVpsLinks3.equals(homeServicesVpsLinks4));
        System.assert(homeServicesVpsLinks4.equals(homeServicesVpsLinks3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASHomeServicesVpsLinks homeServicesVpsLinks1 = OASHomeServicesVpsLinks.getExample();
        OASHomeServicesVpsLinks homeServicesVpsLinks2 = new OASHomeServicesVpsLinks();

        System.assertEquals(false, homeServicesVpsLinks1.equals('foo'));
        System.assertEquals(false, homeServicesVpsLinks2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASHomeServicesVpsLinks homeServicesVpsLinks1 = OASHomeServicesVpsLinks.getExample();
        OASHomeServicesVpsLinks homeServicesVpsLinks2 = new OASHomeServicesVpsLinks();
        OASHomeServicesVpsLinks homeServicesVpsLinks3;

        System.assertEquals(false, homeServicesVpsLinks1.equals(homeServicesVpsLinks3));
        System.assertEquals(false, homeServicesVpsLinks2.equals(homeServicesVpsLinks3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASHomeServicesVpsLinks homeServicesVpsLinks1 = OASHomeServicesVpsLinks.getExample();
        OASHomeServicesVpsLinks homeServicesVpsLinks2 = new OASHomeServicesVpsLinks();

        System.assertEquals(homeServicesVpsLinks1.hashCode(), homeServicesVpsLinks1.hashCode());
        System.assertEquals(homeServicesVpsLinks2.hashCode(), homeServicesVpsLinks2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASHomeServicesVpsLinks homeServicesVpsLinks1 = OASHomeServicesVpsLinks.getExample();
        OASHomeServicesVpsLinks homeServicesVpsLinks2 = OASHomeServicesVpsLinks.getExample();
        OASHomeServicesVpsLinks homeServicesVpsLinks3 = new OASHomeServicesVpsLinks();
        OASHomeServicesVpsLinks homeServicesVpsLinks4 = new OASHomeServicesVpsLinks();

        System.assert(homeServicesVpsLinks1.equals(homeServicesVpsLinks2));
        System.assert(homeServicesVpsLinks3.equals(homeServicesVpsLinks4));
        System.assertEquals(homeServicesVpsLinks1.hashCode(), homeServicesVpsLinks2.hashCode());
        System.assertEquals(homeServicesVpsLinks3.hashCode(), homeServicesVpsLinks4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASHomeServicesVpsLinks homeServicesVpsLinks = new OASHomeServicesVpsLinks();
        Map<String, String> x-property-mappings = homeServicesVpsLinks.getx-property-mappings();
        System.assertEquals('', x-property-mappings.get('465503'));
        System.assertEquals('', x-property-mappings.get('2500081'));
        System.assertEquals('', x-property-mappings.get('2578866'));
    }
}
