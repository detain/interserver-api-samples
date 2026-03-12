@isTest
private class OASDomainTechContactTest {
    @isTest
    private static void equalsSameInstance() {
        OASDomainTechContact domainTechContact1 = OASDomainTechContact.getExample();
        OASDomainTechContact domainTechContact2 = domainTechContact1;
        OASDomainTechContact domainTechContact3 = new OASDomainTechContact();
        OASDomainTechContact domainTechContact4 = domainTechContact3;

        System.assert(domainTechContact1.equals(domainTechContact2));
        System.assert(domainTechContact2.equals(domainTechContact1));
        System.assert(domainTechContact1.equals(domainTechContact1));
        System.assert(domainTechContact3.equals(domainTechContact4));
        System.assert(domainTechContact4.equals(domainTechContact3));
        System.assert(domainTechContact3.equals(domainTechContact3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDomainTechContact domainTechContact1 = OASDomainTechContact.getExample();
        OASDomainTechContact domainTechContact2 = OASDomainTechContact.getExample();
        OASDomainTechContact domainTechContact3 = new OASDomainTechContact();
        OASDomainTechContact domainTechContact4 = new OASDomainTechContact();

        System.assert(domainTechContact1.equals(domainTechContact2));
        System.assert(domainTechContact2.equals(domainTechContact1));
        System.assert(domainTechContact3.equals(domainTechContact4));
        System.assert(domainTechContact4.equals(domainTechContact3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDomainTechContact domainTechContact1 = OASDomainTechContact.getExample();
        OASDomainTechContact domainTechContact2 = new OASDomainTechContact();

        System.assertEquals(false, domainTechContact1.equals('foo'));
        System.assertEquals(false, domainTechContact2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDomainTechContact domainTechContact1 = OASDomainTechContact.getExample();
        OASDomainTechContact domainTechContact2 = new OASDomainTechContact();
        OASDomainTechContact domainTechContact3;

        System.assertEquals(false, domainTechContact1.equals(domainTechContact3));
        System.assertEquals(false, domainTechContact2.equals(domainTechContact3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDomainTechContact domainTechContact1 = OASDomainTechContact.getExample();
        OASDomainTechContact domainTechContact2 = new OASDomainTechContact();

        System.assertEquals(domainTechContact1.hashCode(), domainTechContact1.hashCode());
        System.assertEquals(domainTechContact2.hashCode(), domainTechContact2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDomainTechContact domainTechContact1 = OASDomainTechContact.getExample();
        OASDomainTechContact domainTechContact2 = OASDomainTechContact.getExample();
        OASDomainTechContact domainTechContact3 = new OASDomainTechContact();
        OASDomainTechContact domainTechContact4 = new OASDomainTechContact();

        System.assert(domainTechContact1.equals(domainTechContact2));
        System.assert(domainTechContact3.equals(domainTechContact4));
        System.assertEquals(domainTechContact1.hashCode(), domainTechContact2.hashCode());
        System.assertEquals(domainTechContact3.hashCode(), domainTechContact4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASDomainTechContact domainTechContact = new OASDomainTechContact();
        Map<String, String> x-property-mappings = domainTechContact.getx-property-mappings();
        System.assertEquals('orgName', x-property-mappings.get('org_name'));
        System.assertEquals('postalCode', x-property-mappings.get('postal_code'));
        System.assertEquals('firstName', x-property-mappings.get('first_name'));
        System.assertEquals('lastName', x-property-mappings.get('last_name'));
    }
}
