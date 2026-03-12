@isTest
private class OASHomeServicesDomainsLinksTest {
    @isTest
    private static void equalsSameInstance() {
        OASHomeServicesDomainsLinks homeServicesDomainsLinks1 = OASHomeServicesDomainsLinks.getExample();
        OASHomeServicesDomainsLinks homeServicesDomainsLinks2 = homeServicesDomainsLinks1;
        OASHomeServicesDomainsLinks homeServicesDomainsLinks3 = new OASHomeServicesDomainsLinks();
        OASHomeServicesDomainsLinks homeServicesDomainsLinks4 = homeServicesDomainsLinks3;

        System.assert(homeServicesDomainsLinks1.equals(homeServicesDomainsLinks2));
        System.assert(homeServicesDomainsLinks2.equals(homeServicesDomainsLinks1));
        System.assert(homeServicesDomainsLinks1.equals(homeServicesDomainsLinks1));
        System.assert(homeServicesDomainsLinks3.equals(homeServicesDomainsLinks4));
        System.assert(homeServicesDomainsLinks4.equals(homeServicesDomainsLinks3));
        System.assert(homeServicesDomainsLinks3.equals(homeServicesDomainsLinks3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASHomeServicesDomainsLinks homeServicesDomainsLinks1 = OASHomeServicesDomainsLinks.getExample();
        OASHomeServicesDomainsLinks homeServicesDomainsLinks2 = OASHomeServicesDomainsLinks.getExample();
        OASHomeServicesDomainsLinks homeServicesDomainsLinks3 = new OASHomeServicesDomainsLinks();
        OASHomeServicesDomainsLinks homeServicesDomainsLinks4 = new OASHomeServicesDomainsLinks();

        System.assert(homeServicesDomainsLinks1.equals(homeServicesDomainsLinks2));
        System.assert(homeServicesDomainsLinks2.equals(homeServicesDomainsLinks1));
        System.assert(homeServicesDomainsLinks3.equals(homeServicesDomainsLinks4));
        System.assert(homeServicesDomainsLinks4.equals(homeServicesDomainsLinks3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASHomeServicesDomainsLinks homeServicesDomainsLinks1 = OASHomeServicesDomainsLinks.getExample();
        OASHomeServicesDomainsLinks homeServicesDomainsLinks2 = new OASHomeServicesDomainsLinks();

        System.assertEquals(false, homeServicesDomainsLinks1.equals('foo'));
        System.assertEquals(false, homeServicesDomainsLinks2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASHomeServicesDomainsLinks homeServicesDomainsLinks1 = OASHomeServicesDomainsLinks.getExample();
        OASHomeServicesDomainsLinks homeServicesDomainsLinks2 = new OASHomeServicesDomainsLinks();
        OASHomeServicesDomainsLinks homeServicesDomainsLinks3;

        System.assertEquals(false, homeServicesDomainsLinks1.equals(homeServicesDomainsLinks3));
        System.assertEquals(false, homeServicesDomainsLinks2.equals(homeServicesDomainsLinks3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASHomeServicesDomainsLinks homeServicesDomainsLinks1 = OASHomeServicesDomainsLinks.getExample();
        OASHomeServicesDomainsLinks homeServicesDomainsLinks2 = new OASHomeServicesDomainsLinks();

        System.assertEquals(homeServicesDomainsLinks1.hashCode(), homeServicesDomainsLinks1.hashCode());
        System.assertEquals(homeServicesDomainsLinks2.hashCode(), homeServicesDomainsLinks2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASHomeServicesDomainsLinks homeServicesDomainsLinks1 = OASHomeServicesDomainsLinks.getExample();
        OASHomeServicesDomainsLinks homeServicesDomainsLinks2 = OASHomeServicesDomainsLinks.getExample();
        OASHomeServicesDomainsLinks homeServicesDomainsLinks3 = new OASHomeServicesDomainsLinks();
        OASHomeServicesDomainsLinks homeServicesDomainsLinks4 = new OASHomeServicesDomainsLinks();

        System.assert(homeServicesDomainsLinks1.equals(homeServicesDomainsLinks2));
        System.assert(homeServicesDomainsLinks3.equals(homeServicesDomainsLinks4));
        System.assertEquals(homeServicesDomainsLinks1.hashCode(), homeServicesDomainsLinks2.hashCode());
        System.assertEquals(homeServicesDomainsLinks3.hashCode(), homeServicesDomainsLinks4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASHomeServicesDomainsLinks homeServicesDomainsLinks = new OASHomeServicesDomainsLinks();
        Map<String, String> x-property-mappings = homeServicesDomainsLinks.getx-property-mappings();
        System.assertEquals('', x-property-mappings.get('376114'));
        System.assertEquals('', x-property-mappings.get('376503'));
        System.assertEquals('', x-property-mappings.get('592337'));
    }
}
