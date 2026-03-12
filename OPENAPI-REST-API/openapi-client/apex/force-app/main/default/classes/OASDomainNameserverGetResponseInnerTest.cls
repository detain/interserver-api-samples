@isTest
private class OASDomainNameserverGetResponseInnerTest {
    @isTest
    private static void equalsSameInstance() {
        OASDomainNameserverGetResponseInner domainNameserverGetResponseInner1 = OASDomainNameserverGetResponseInner.getExample();
        OASDomainNameserverGetResponseInner domainNameserverGetResponseInner2 = domainNameserverGetResponseInner1;
        OASDomainNameserverGetResponseInner domainNameserverGetResponseInner3 = new OASDomainNameserverGetResponseInner();
        OASDomainNameserverGetResponseInner domainNameserverGetResponseInner4 = domainNameserverGetResponseInner3;

        System.assert(domainNameserverGetResponseInner1.equals(domainNameserverGetResponseInner2));
        System.assert(domainNameserverGetResponseInner2.equals(domainNameserverGetResponseInner1));
        System.assert(domainNameserverGetResponseInner1.equals(domainNameserverGetResponseInner1));
        System.assert(domainNameserverGetResponseInner3.equals(domainNameserverGetResponseInner4));
        System.assert(domainNameserverGetResponseInner4.equals(domainNameserverGetResponseInner3));
        System.assert(domainNameserverGetResponseInner3.equals(domainNameserverGetResponseInner3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDomainNameserverGetResponseInner domainNameserverGetResponseInner1 = OASDomainNameserverGetResponseInner.getExample();
        OASDomainNameserverGetResponseInner domainNameserverGetResponseInner2 = OASDomainNameserverGetResponseInner.getExample();
        OASDomainNameserverGetResponseInner domainNameserverGetResponseInner3 = new OASDomainNameserverGetResponseInner();
        OASDomainNameserverGetResponseInner domainNameserverGetResponseInner4 = new OASDomainNameserverGetResponseInner();

        System.assert(domainNameserverGetResponseInner1.equals(domainNameserverGetResponseInner2));
        System.assert(domainNameserverGetResponseInner2.equals(domainNameserverGetResponseInner1));
        System.assert(domainNameserverGetResponseInner3.equals(domainNameserverGetResponseInner4));
        System.assert(domainNameserverGetResponseInner4.equals(domainNameserverGetResponseInner3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDomainNameserverGetResponseInner domainNameserverGetResponseInner1 = OASDomainNameserverGetResponseInner.getExample();
        OASDomainNameserverGetResponseInner domainNameserverGetResponseInner2 = new OASDomainNameserverGetResponseInner();

        System.assertEquals(false, domainNameserverGetResponseInner1.equals('foo'));
        System.assertEquals(false, domainNameserverGetResponseInner2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDomainNameserverGetResponseInner domainNameserverGetResponseInner1 = OASDomainNameserverGetResponseInner.getExample();
        OASDomainNameserverGetResponseInner domainNameserverGetResponseInner2 = new OASDomainNameserverGetResponseInner();
        OASDomainNameserverGetResponseInner domainNameserverGetResponseInner3;

        System.assertEquals(false, domainNameserverGetResponseInner1.equals(domainNameserverGetResponseInner3));
        System.assertEquals(false, domainNameserverGetResponseInner2.equals(domainNameserverGetResponseInner3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDomainNameserverGetResponseInner domainNameserverGetResponseInner1 = OASDomainNameserverGetResponseInner.getExample();
        OASDomainNameserverGetResponseInner domainNameserverGetResponseInner2 = new OASDomainNameserverGetResponseInner();

        System.assertEquals(domainNameserverGetResponseInner1.hashCode(), domainNameserverGetResponseInner1.hashCode());
        System.assertEquals(domainNameserverGetResponseInner2.hashCode(), domainNameserverGetResponseInner2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDomainNameserverGetResponseInner domainNameserverGetResponseInner1 = OASDomainNameserverGetResponseInner.getExample();
        OASDomainNameserverGetResponseInner domainNameserverGetResponseInner2 = OASDomainNameserverGetResponseInner.getExample();
        OASDomainNameserverGetResponseInner domainNameserverGetResponseInner3 = new OASDomainNameserverGetResponseInner();
        OASDomainNameserverGetResponseInner domainNameserverGetResponseInner4 = new OASDomainNameserverGetResponseInner();

        System.assert(domainNameserverGetResponseInner1.equals(domainNameserverGetResponseInner2));
        System.assert(domainNameserverGetResponseInner3.equals(domainNameserverGetResponseInner4));
        System.assertEquals(domainNameserverGetResponseInner1.hashCode(), domainNameserverGetResponseInner2.hashCode());
        System.assertEquals(domainNameserverGetResponseInner3.hashCode(), domainNameserverGetResponseInner4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASDomainNameserverGetResponseInner domainNameserverGetResponseInner = new OASDomainNameserverGetResponseInner();
        Map<String, String> x-property-mappings = domainNameserverGetResponseInner.getx-property-mappings();
        System.assertEquals('canDelete', x-property-mappings.get('can_delete'));
    }
}
