@isTest
private class OASDomainOwnerContactTest {
    @isTest
    private static void equalsSameInstance() {
        OASDomainOwnerContact domainOwnerContact1 = OASDomainOwnerContact.getExample();
        OASDomainOwnerContact domainOwnerContact2 = domainOwnerContact1;
        OASDomainOwnerContact domainOwnerContact3 = new OASDomainOwnerContact();
        OASDomainOwnerContact domainOwnerContact4 = domainOwnerContact3;

        System.assert(domainOwnerContact1.equals(domainOwnerContact2));
        System.assert(domainOwnerContact2.equals(domainOwnerContact1));
        System.assert(domainOwnerContact1.equals(domainOwnerContact1));
        System.assert(domainOwnerContact3.equals(domainOwnerContact4));
        System.assert(domainOwnerContact4.equals(domainOwnerContact3));
        System.assert(domainOwnerContact3.equals(domainOwnerContact3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDomainOwnerContact domainOwnerContact1 = OASDomainOwnerContact.getExample();
        OASDomainOwnerContact domainOwnerContact2 = OASDomainOwnerContact.getExample();
        OASDomainOwnerContact domainOwnerContact3 = new OASDomainOwnerContact();
        OASDomainOwnerContact domainOwnerContact4 = new OASDomainOwnerContact();

        System.assert(domainOwnerContact1.equals(domainOwnerContact2));
        System.assert(domainOwnerContact2.equals(domainOwnerContact1));
        System.assert(domainOwnerContact3.equals(domainOwnerContact4));
        System.assert(domainOwnerContact4.equals(domainOwnerContact3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDomainOwnerContact domainOwnerContact1 = OASDomainOwnerContact.getExample();
        OASDomainOwnerContact domainOwnerContact2 = new OASDomainOwnerContact();

        System.assertEquals(false, domainOwnerContact1.equals('foo'));
        System.assertEquals(false, domainOwnerContact2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDomainOwnerContact domainOwnerContact1 = OASDomainOwnerContact.getExample();
        OASDomainOwnerContact domainOwnerContact2 = new OASDomainOwnerContact();
        OASDomainOwnerContact domainOwnerContact3;

        System.assertEquals(false, domainOwnerContact1.equals(domainOwnerContact3));
        System.assertEquals(false, domainOwnerContact2.equals(domainOwnerContact3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDomainOwnerContact domainOwnerContact1 = OASDomainOwnerContact.getExample();
        OASDomainOwnerContact domainOwnerContact2 = new OASDomainOwnerContact();

        System.assertEquals(domainOwnerContact1.hashCode(), domainOwnerContact1.hashCode());
        System.assertEquals(domainOwnerContact2.hashCode(), domainOwnerContact2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDomainOwnerContact domainOwnerContact1 = OASDomainOwnerContact.getExample();
        OASDomainOwnerContact domainOwnerContact2 = OASDomainOwnerContact.getExample();
        OASDomainOwnerContact domainOwnerContact3 = new OASDomainOwnerContact();
        OASDomainOwnerContact domainOwnerContact4 = new OASDomainOwnerContact();

        System.assert(domainOwnerContact1.equals(domainOwnerContact2));
        System.assert(domainOwnerContact3.equals(domainOwnerContact4));
        System.assertEquals(domainOwnerContact1.hashCode(), domainOwnerContact2.hashCode());
        System.assertEquals(domainOwnerContact3.hashCode(), domainOwnerContact4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASDomainOwnerContact domainOwnerContact = new OASDomainOwnerContact();
        Map<String, String> x-property-mappings = domainOwnerContact.getx-property-mappings();
        System.assertEquals('postalCode', x-property-mappings.get('postal_code'));
        System.assertEquals('orgName', x-property-mappings.get('org_name'));
        System.assertEquals('firstName', x-property-mappings.get('first_name'));
        System.assertEquals('lastName', x-property-mappings.get('last_name'));
    }
}
