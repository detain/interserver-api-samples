@isTest
private class OASDomainOrderTldServicesTest {
    @isTest
    private static void equalsSameInstance() {
        OASDomainOrderTldServices domainOrderTldServices1 = OASDomainOrderTldServices.getExample();
        OASDomainOrderTldServices domainOrderTldServices2 = domainOrderTldServices1;
        OASDomainOrderTldServices domainOrderTldServices3 = new OASDomainOrderTldServices();
        OASDomainOrderTldServices domainOrderTldServices4 = domainOrderTldServices3;

        System.assert(domainOrderTldServices1.equals(domainOrderTldServices2));
        System.assert(domainOrderTldServices2.equals(domainOrderTldServices1));
        System.assert(domainOrderTldServices1.equals(domainOrderTldServices1));
        System.assert(domainOrderTldServices3.equals(domainOrderTldServices4));
        System.assert(domainOrderTldServices4.equals(domainOrderTldServices3));
        System.assert(domainOrderTldServices3.equals(domainOrderTldServices3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDomainOrderTldServices domainOrderTldServices1 = OASDomainOrderTldServices.getExample();
        OASDomainOrderTldServices domainOrderTldServices2 = OASDomainOrderTldServices.getExample();
        OASDomainOrderTldServices domainOrderTldServices3 = new OASDomainOrderTldServices();
        OASDomainOrderTldServices domainOrderTldServices4 = new OASDomainOrderTldServices();

        System.assert(domainOrderTldServices1.equals(domainOrderTldServices2));
        System.assert(domainOrderTldServices2.equals(domainOrderTldServices1));
        System.assert(domainOrderTldServices3.equals(domainOrderTldServices4));
        System.assert(domainOrderTldServices4.equals(domainOrderTldServices3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDomainOrderTldServices domainOrderTldServices1 = OASDomainOrderTldServices.getExample();
        OASDomainOrderTldServices domainOrderTldServices2 = new OASDomainOrderTldServices();

        System.assertEquals(false, domainOrderTldServices1.equals('foo'));
        System.assertEquals(false, domainOrderTldServices2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDomainOrderTldServices domainOrderTldServices1 = OASDomainOrderTldServices.getExample();
        OASDomainOrderTldServices domainOrderTldServices2 = new OASDomainOrderTldServices();
        OASDomainOrderTldServices domainOrderTldServices3;

        System.assertEquals(false, domainOrderTldServices1.equals(domainOrderTldServices3));
        System.assertEquals(false, domainOrderTldServices2.equals(domainOrderTldServices3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDomainOrderTldServices domainOrderTldServices1 = OASDomainOrderTldServices.getExample();
        OASDomainOrderTldServices domainOrderTldServices2 = new OASDomainOrderTldServices();

        System.assertEquals(domainOrderTldServices1.hashCode(), domainOrderTldServices1.hashCode());
        System.assertEquals(domainOrderTldServices2.hashCode(), domainOrderTldServices2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDomainOrderTldServices domainOrderTldServices1 = OASDomainOrderTldServices.getExample();
        OASDomainOrderTldServices domainOrderTldServices2 = OASDomainOrderTldServices.getExample();
        OASDomainOrderTldServices domainOrderTldServices3 = new OASDomainOrderTldServices();
        OASDomainOrderTldServices domainOrderTldServices4 = new OASDomainOrderTldServices();

        System.assert(domainOrderTldServices1.equals(domainOrderTldServices2));
        System.assert(domainOrderTldServices3.equals(domainOrderTldServices4));
        System.assertEquals(domainOrderTldServices1.hashCode(), domainOrderTldServices2.hashCode());
        System.assertEquals(domainOrderTldServices3.hashCode(), domainOrderTldServices4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASDomainOrderTldServices domainOrderTldServices = new OASDomainOrderTldServices();
        Map<String, String> x-property-mappings = domainOrderTldServices.getx-property-mappings();
        System.assertEquals('asia', x-property-mappings.get('.asia'));
        System.assertEquals('be', x-property-mappings.get('.be'));
        System.assertEquals('biz', x-property-mappings.get('.biz'));
        System.assertEquals('ca', x-property-mappings.get('.ca'));
    }
}
