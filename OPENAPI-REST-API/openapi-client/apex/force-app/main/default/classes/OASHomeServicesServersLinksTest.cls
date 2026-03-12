@isTest
private class OASHomeServicesServersLinksTest {
    @isTest
    private static void equalsSameInstance() {
        OASHomeServicesServersLinks homeServicesServersLinks1 = OASHomeServicesServersLinks.getExample();
        OASHomeServicesServersLinks homeServicesServersLinks2 = homeServicesServersLinks1;
        OASHomeServicesServersLinks homeServicesServersLinks3 = new OASHomeServicesServersLinks();
        OASHomeServicesServersLinks homeServicesServersLinks4 = homeServicesServersLinks3;

        System.assert(homeServicesServersLinks1.equals(homeServicesServersLinks2));
        System.assert(homeServicesServersLinks2.equals(homeServicesServersLinks1));
        System.assert(homeServicesServersLinks1.equals(homeServicesServersLinks1));
        System.assert(homeServicesServersLinks3.equals(homeServicesServersLinks4));
        System.assert(homeServicesServersLinks4.equals(homeServicesServersLinks3));
        System.assert(homeServicesServersLinks3.equals(homeServicesServersLinks3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASHomeServicesServersLinks homeServicesServersLinks1 = OASHomeServicesServersLinks.getExample();
        OASHomeServicesServersLinks homeServicesServersLinks2 = OASHomeServicesServersLinks.getExample();
        OASHomeServicesServersLinks homeServicesServersLinks3 = new OASHomeServicesServersLinks();
        OASHomeServicesServersLinks homeServicesServersLinks4 = new OASHomeServicesServersLinks();

        System.assert(homeServicesServersLinks1.equals(homeServicesServersLinks2));
        System.assert(homeServicesServersLinks2.equals(homeServicesServersLinks1));
        System.assert(homeServicesServersLinks3.equals(homeServicesServersLinks4));
        System.assert(homeServicesServersLinks4.equals(homeServicesServersLinks3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASHomeServicesServersLinks homeServicesServersLinks1 = OASHomeServicesServersLinks.getExample();
        OASHomeServicesServersLinks homeServicesServersLinks2 = new OASHomeServicesServersLinks();

        System.assertEquals(false, homeServicesServersLinks1.equals('foo'));
        System.assertEquals(false, homeServicesServersLinks2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASHomeServicesServersLinks homeServicesServersLinks1 = OASHomeServicesServersLinks.getExample();
        OASHomeServicesServersLinks homeServicesServersLinks2 = new OASHomeServicesServersLinks();
        OASHomeServicesServersLinks homeServicesServersLinks3;

        System.assertEquals(false, homeServicesServersLinks1.equals(homeServicesServersLinks3));
        System.assertEquals(false, homeServicesServersLinks2.equals(homeServicesServersLinks3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASHomeServicesServersLinks homeServicesServersLinks1 = OASHomeServicesServersLinks.getExample();
        OASHomeServicesServersLinks homeServicesServersLinks2 = new OASHomeServicesServersLinks();

        System.assertEquals(homeServicesServersLinks1.hashCode(), homeServicesServersLinks1.hashCode());
        System.assertEquals(homeServicesServersLinks2.hashCode(), homeServicesServersLinks2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASHomeServicesServersLinks homeServicesServersLinks1 = OASHomeServicesServersLinks.getExample();
        OASHomeServicesServersLinks homeServicesServersLinks2 = OASHomeServicesServersLinks.getExample();
        OASHomeServicesServersLinks homeServicesServersLinks3 = new OASHomeServicesServersLinks();
        OASHomeServicesServersLinks homeServicesServersLinks4 = new OASHomeServicesServersLinks();

        System.assert(homeServicesServersLinks1.equals(homeServicesServersLinks2));
        System.assert(homeServicesServersLinks3.equals(homeServicesServersLinks4));
        System.assertEquals(homeServicesServersLinks1.hashCode(), homeServicesServersLinks2.hashCode());
        System.assertEquals(homeServicesServersLinks3.hashCode(), homeServicesServersLinks4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASHomeServicesServersLinks homeServicesServersLinks = new OASHomeServicesServersLinks();
        Map<String, String> x-property-mappings = homeServicesServersLinks.getx-property-mappings();
        System.assertEquals('', x-property-mappings.get('16058'));
    }
}
