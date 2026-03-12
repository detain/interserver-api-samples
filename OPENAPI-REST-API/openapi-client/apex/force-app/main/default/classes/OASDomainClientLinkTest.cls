@isTest
private class OASDomainClientLinkTest {
    @isTest
    private static void equalsSameInstance() {
        OASDomainClientLink domainClientLink1 = OASDomainClientLink.getExample();
        OASDomainClientLink domainClientLink2 = domainClientLink1;
        OASDomainClientLink domainClientLink3 = new OASDomainClientLink();
        OASDomainClientLink domainClientLink4 = domainClientLink3;

        System.assert(domainClientLink1.equals(domainClientLink2));
        System.assert(domainClientLink2.equals(domainClientLink1));
        System.assert(domainClientLink1.equals(domainClientLink1));
        System.assert(domainClientLink3.equals(domainClientLink4));
        System.assert(domainClientLink4.equals(domainClientLink3));
        System.assert(domainClientLink3.equals(domainClientLink3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDomainClientLink domainClientLink1 = OASDomainClientLink.getExample();
        OASDomainClientLink domainClientLink2 = OASDomainClientLink.getExample();
        OASDomainClientLink domainClientLink3 = new OASDomainClientLink();
        OASDomainClientLink domainClientLink4 = new OASDomainClientLink();

        System.assert(domainClientLink1.equals(domainClientLink2));
        System.assert(domainClientLink2.equals(domainClientLink1));
        System.assert(domainClientLink3.equals(domainClientLink4));
        System.assert(domainClientLink4.equals(domainClientLink3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDomainClientLink domainClientLink1 = OASDomainClientLink.getExample();
        OASDomainClientLink domainClientLink2 = new OASDomainClientLink();

        System.assertEquals(false, domainClientLink1.equals('foo'));
        System.assertEquals(false, domainClientLink2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDomainClientLink domainClientLink1 = OASDomainClientLink.getExample();
        OASDomainClientLink domainClientLink2 = new OASDomainClientLink();
        OASDomainClientLink domainClientLink3;

        System.assertEquals(false, domainClientLink1.equals(domainClientLink3));
        System.assertEquals(false, domainClientLink2.equals(domainClientLink3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDomainClientLink domainClientLink1 = OASDomainClientLink.getExample();
        OASDomainClientLink domainClientLink2 = new OASDomainClientLink();

        System.assertEquals(domainClientLink1.hashCode(), domainClientLink1.hashCode());
        System.assertEquals(domainClientLink2.hashCode(), domainClientLink2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDomainClientLink domainClientLink1 = OASDomainClientLink.getExample();
        OASDomainClientLink domainClientLink2 = OASDomainClientLink.getExample();
        OASDomainClientLink domainClientLink3 = new OASDomainClientLink();
        OASDomainClientLink domainClientLink4 = new OASDomainClientLink();

        System.assert(domainClientLink1.equals(domainClientLink2));
        System.assert(domainClientLink3.equals(domainClientLink4));
        System.assertEquals(domainClientLink1.hashCode(), domainClientLink2.hashCode());
        System.assertEquals(domainClientLink3.hashCode(), domainClientLink4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASDomainClientLink domainClientLink = new OASDomainClientLink();
        Map<String, String> x-property-mappings = domainClientLink.getx-property-mappings();
        System.assertEquals('iconText', x-property-mappings.get('icon_text'));
        System.assertEquals('helpText', x-property-mappings.get('help_text'));
    }
}
