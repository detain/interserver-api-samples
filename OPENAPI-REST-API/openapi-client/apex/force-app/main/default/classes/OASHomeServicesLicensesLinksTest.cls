@isTest
private class OASHomeServicesLicensesLinksTest {
    @isTest
    private static void equalsSameInstance() {
        OASHomeServicesLicensesLinks homeServicesLicensesLinks1 = OASHomeServicesLicensesLinks.getExample();
        OASHomeServicesLicensesLinks homeServicesLicensesLinks2 = homeServicesLicensesLinks1;
        OASHomeServicesLicensesLinks homeServicesLicensesLinks3 = new OASHomeServicesLicensesLinks();
        OASHomeServicesLicensesLinks homeServicesLicensesLinks4 = homeServicesLicensesLinks3;

        System.assert(homeServicesLicensesLinks1.equals(homeServicesLicensesLinks2));
        System.assert(homeServicesLicensesLinks2.equals(homeServicesLicensesLinks1));
        System.assert(homeServicesLicensesLinks1.equals(homeServicesLicensesLinks1));
        System.assert(homeServicesLicensesLinks3.equals(homeServicesLicensesLinks4));
        System.assert(homeServicesLicensesLinks4.equals(homeServicesLicensesLinks3));
        System.assert(homeServicesLicensesLinks3.equals(homeServicesLicensesLinks3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASHomeServicesLicensesLinks homeServicesLicensesLinks1 = OASHomeServicesLicensesLinks.getExample();
        OASHomeServicesLicensesLinks homeServicesLicensesLinks2 = OASHomeServicesLicensesLinks.getExample();
        OASHomeServicesLicensesLinks homeServicesLicensesLinks3 = new OASHomeServicesLicensesLinks();
        OASHomeServicesLicensesLinks homeServicesLicensesLinks4 = new OASHomeServicesLicensesLinks();

        System.assert(homeServicesLicensesLinks1.equals(homeServicesLicensesLinks2));
        System.assert(homeServicesLicensesLinks2.equals(homeServicesLicensesLinks1));
        System.assert(homeServicesLicensesLinks3.equals(homeServicesLicensesLinks4));
        System.assert(homeServicesLicensesLinks4.equals(homeServicesLicensesLinks3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASHomeServicesLicensesLinks homeServicesLicensesLinks1 = OASHomeServicesLicensesLinks.getExample();
        OASHomeServicesLicensesLinks homeServicesLicensesLinks2 = new OASHomeServicesLicensesLinks();

        System.assertEquals(false, homeServicesLicensesLinks1.equals('foo'));
        System.assertEquals(false, homeServicesLicensesLinks2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASHomeServicesLicensesLinks homeServicesLicensesLinks1 = OASHomeServicesLicensesLinks.getExample();
        OASHomeServicesLicensesLinks homeServicesLicensesLinks2 = new OASHomeServicesLicensesLinks();
        OASHomeServicesLicensesLinks homeServicesLicensesLinks3;

        System.assertEquals(false, homeServicesLicensesLinks1.equals(homeServicesLicensesLinks3));
        System.assertEquals(false, homeServicesLicensesLinks2.equals(homeServicesLicensesLinks3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASHomeServicesLicensesLinks homeServicesLicensesLinks1 = OASHomeServicesLicensesLinks.getExample();
        OASHomeServicesLicensesLinks homeServicesLicensesLinks2 = new OASHomeServicesLicensesLinks();

        System.assertEquals(homeServicesLicensesLinks1.hashCode(), homeServicesLicensesLinks1.hashCode());
        System.assertEquals(homeServicesLicensesLinks2.hashCode(), homeServicesLicensesLinks2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASHomeServicesLicensesLinks homeServicesLicensesLinks1 = OASHomeServicesLicensesLinks.getExample();
        OASHomeServicesLicensesLinks homeServicesLicensesLinks2 = OASHomeServicesLicensesLinks.getExample();
        OASHomeServicesLicensesLinks homeServicesLicensesLinks3 = new OASHomeServicesLicensesLinks();
        OASHomeServicesLicensesLinks homeServicesLicensesLinks4 = new OASHomeServicesLicensesLinks();

        System.assert(homeServicesLicensesLinks1.equals(homeServicesLicensesLinks2));
        System.assert(homeServicesLicensesLinks3.equals(homeServicesLicensesLinks4));
        System.assertEquals(homeServicesLicensesLinks1.hashCode(), homeServicesLicensesLinks2.hashCode());
        System.assertEquals(homeServicesLicensesLinks3.hashCode(), homeServicesLicensesLinks4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASHomeServicesLicensesLinks homeServicesLicensesLinks = new OASHomeServicesLicensesLinks();
        Map<String, String> x-property-mappings = homeServicesLicensesLinks.getx-property-mappings();
        System.assertEquals('', x-property-mappings.get('386522'));
    }
}
