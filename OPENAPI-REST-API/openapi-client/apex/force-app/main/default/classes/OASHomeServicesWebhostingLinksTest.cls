@isTest
private class OASHomeServicesWebhostingLinksTest {
    @isTest
    private static void equalsSameInstance() {
        OASHomeServicesWebhostingLinks homeServicesWebhostingLinks1 = OASHomeServicesWebhostingLinks.getExample();
        OASHomeServicesWebhostingLinks homeServicesWebhostingLinks2 = homeServicesWebhostingLinks1;
        OASHomeServicesWebhostingLinks homeServicesWebhostingLinks3 = new OASHomeServicesWebhostingLinks();
        OASHomeServicesWebhostingLinks homeServicesWebhostingLinks4 = homeServicesWebhostingLinks3;

        System.assert(homeServicesWebhostingLinks1.equals(homeServicesWebhostingLinks2));
        System.assert(homeServicesWebhostingLinks2.equals(homeServicesWebhostingLinks1));
        System.assert(homeServicesWebhostingLinks1.equals(homeServicesWebhostingLinks1));
        System.assert(homeServicesWebhostingLinks3.equals(homeServicesWebhostingLinks4));
        System.assert(homeServicesWebhostingLinks4.equals(homeServicesWebhostingLinks3));
        System.assert(homeServicesWebhostingLinks3.equals(homeServicesWebhostingLinks3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASHomeServicesWebhostingLinks homeServicesWebhostingLinks1 = OASHomeServicesWebhostingLinks.getExample();
        OASHomeServicesWebhostingLinks homeServicesWebhostingLinks2 = OASHomeServicesWebhostingLinks.getExample();
        OASHomeServicesWebhostingLinks homeServicesWebhostingLinks3 = new OASHomeServicesWebhostingLinks();
        OASHomeServicesWebhostingLinks homeServicesWebhostingLinks4 = new OASHomeServicesWebhostingLinks();

        System.assert(homeServicesWebhostingLinks1.equals(homeServicesWebhostingLinks2));
        System.assert(homeServicesWebhostingLinks2.equals(homeServicesWebhostingLinks1));
        System.assert(homeServicesWebhostingLinks3.equals(homeServicesWebhostingLinks4));
        System.assert(homeServicesWebhostingLinks4.equals(homeServicesWebhostingLinks3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASHomeServicesWebhostingLinks homeServicesWebhostingLinks1 = OASHomeServicesWebhostingLinks.getExample();
        OASHomeServicesWebhostingLinks homeServicesWebhostingLinks2 = new OASHomeServicesWebhostingLinks();

        System.assertEquals(false, homeServicesWebhostingLinks1.equals('foo'));
        System.assertEquals(false, homeServicesWebhostingLinks2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASHomeServicesWebhostingLinks homeServicesWebhostingLinks1 = OASHomeServicesWebhostingLinks.getExample();
        OASHomeServicesWebhostingLinks homeServicesWebhostingLinks2 = new OASHomeServicesWebhostingLinks();
        OASHomeServicesWebhostingLinks homeServicesWebhostingLinks3;

        System.assertEquals(false, homeServicesWebhostingLinks1.equals(homeServicesWebhostingLinks3));
        System.assertEquals(false, homeServicesWebhostingLinks2.equals(homeServicesWebhostingLinks3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASHomeServicesWebhostingLinks homeServicesWebhostingLinks1 = OASHomeServicesWebhostingLinks.getExample();
        OASHomeServicesWebhostingLinks homeServicesWebhostingLinks2 = new OASHomeServicesWebhostingLinks();

        System.assertEquals(homeServicesWebhostingLinks1.hashCode(), homeServicesWebhostingLinks1.hashCode());
        System.assertEquals(homeServicesWebhostingLinks2.hashCode(), homeServicesWebhostingLinks2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASHomeServicesWebhostingLinks homeServicesWebhostingLinks1 = OASHomeServicesWebhostingLinks.getExample();
        OASHomeServicesWebhostingLinks homeServicesWebhostingLinks2 = OASHomeServicesWebhostingLinks.getExample();
        OASHomeServicesWebhostingLinks homeServicesWebhostingLinks3 = new OASHomeServicesWebhostingLinks();
        OASHomeServicesWebhostingLinks homeServicesWebhostingLinks4 = new OASHomeServicesWebhostingLinks();

        System.assert(homeServicesWebhostingLinks1.equals(homeServicesWebhostingLinks2));
        System.assert(homeServicesWebhostingLinks3.equals(homeServicesWebhostingLinks4));
        System.assertEquals(homeServicesWebhostingLinks1.hashCode(), homeServicesWebhostingLinks2.hashCode());
        System.assertEquals(homeServicesWebhostingLinks3.hashCode(), homeServicesWebhostingLinks4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASHomeServicesWebhostingLinks homeServicesWebhostingLinks = new OASHomeServicesWebhostingLinks();
        Map<String, String> x-property-mappings = homeServicesWebhostingLinks.getx-property-mappings();
        System.assertEquals('', x-property-mappings.get('376359'));
        System.assertEquals('', x-property-mappings.get('376473'));
        System.assertEquals('', x-property-mappings.get('386218'));
    }
}
