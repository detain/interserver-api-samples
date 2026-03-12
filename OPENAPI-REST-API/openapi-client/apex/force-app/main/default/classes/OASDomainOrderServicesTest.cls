@isTest
private class OASDomainOrderServicesTest {
    @isTest
    private static void equalsSameInstance() {
        OASDomainOrderServices domainOrderServices1 = OASDomainOrderServices.getExample();
        OASDomainOrderServices domainOrderServices2 = domainOrderServices1;
        OASDomainOrderServices domainOrderServices3 = new OASDomainOrderServices();
        OASDomainOrderServices domainOrderServices4 = domainOrderServices3;

        System.assert(domainOrderServices1.equals(domainOrderServices2));
        System.assert(domainOrderServices2.equals(domainOrderServices1));
        System.assert(domainOrderServices1.equals(domainOrderServices1));
        System.assert(domainOrderServices3.equals(domainOrderServices4));
        System.assert(domainOrderServices4.equals(domainOrderServices3));
        System.assert(domainOrderServices3.equals(domainOrderServices3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDomainOrderServices domainOrderServices1 = OASDomainOrderServices.getExample();
        OASDomainOrderServices domainOrderServices2 = OASDomainOrderServices.getExample();
        OASDomainOrderServices domainOrderServices3 = new OASDomainOrderServices();
        OASDomainOrderServices domainOrderServices4 = new OASDomainOrderServices();

        System.assert(domainOrderServices1.equals(domainOrderServices2));
        System.assert(domainOrderServices2.equals(domainOrderServices1));
        System.assert(domainOrderServices3.equals(domainOrderServices4));
        System.assert(domainOrderServices4.equals(domainOrderServices3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDomainOrderServices domainOrderServices1 = OASDomainOrderServices.getExample();
        OASDomainOrderServices domainOrderServices2 = new OASDomainOrderServices();

        System.assertEquals(false, domainOrderServices1.equals('foo'));
        System.assertEquals(false, domainOrderServices2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDomainOrderServices domainOrderServices1 = OASDomainOrderServices.getExample();
        OASDomainOrderServices domainOrderServices2 = new OASDomainOrderServices();
        OASDomainOrderServices domainOrderServices3;

        System.assertEquals(false, domainOrderServices1.equals(domainOrderServices3));
        System.assertEquals(false, domainOrderServices2.equals(domainOrderServices3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDomainOrderServices domainOrderServices1 = OASDomainOrderServices.getExample();
        OASDomainOrderServices domainOrderServices2 = new OASDomainOrderServices();

        System.assertEquals(domainOrderServices1.hashCode(), domainOrderServices1.hashCode());
        System.assertEquals(domainOrderServices2.hashCode(), domainOrderServices2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDomainOrderServices domainOrderServices1 = OASDomainOrderServices.getExample();
        OASDomainOrderServices domainOrderServices2 = OASDomainOrderServices.getExample();
        OASDomainOrderServices domainOrderServices3 = new OASDomainOrderServices();
        OASDomainOrderServices domainOrderServices4 = new OASDomainOrderServices();

        System.assert(domainOrderServices1.equals(domainOrderServices2));
        System.assert(domainOrderServices3.equals(domainOrderServices4));
        System.assertEquals(domainOrderServices1.hashCode(), domainOrderServices2.hashCode());
        System.assertEquals(domainOrderServices3.hashCode(), domainOrderServices4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASDomainOrderServices domainOrderServices = new OASDomainOrderServices();
        Map<String, String> x-property-mappings = domainOrderServices.getx-property-mappings();
        System.assertEquals('domainOrderServices10001', x-property-mappings.get('DomainOrderServices10001'));
    }
}
