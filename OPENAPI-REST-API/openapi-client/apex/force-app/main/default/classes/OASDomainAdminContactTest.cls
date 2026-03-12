@isTest
private class OASDomainAdminContactTest {
    @isTest
    private static void equalsSameInstance() {
        OASDomainAdminContact domainAdminContact1 = OASDomainAdminContact.getExample();
        OASDomainAdminContact domainAdminContact2 = domainAdminContact1;
        OASDomainAdminContact domainAdminContact3 = new OASDomainAdminContact();
        OASDomainAdminContact domainAdminContact4 = domainAdminContact3;

        System.assert(domainAdminContact1.equals(domainAdminContact2));
        System.assert(domainAdminContact2.equals(domainAdminContact1));
        System.assert(domainAdminContact1.equals(domainAdminContact1));
        System.assert(domainAdminContact3.equals(domainAdminContact4));
        System.assert(domainAdminContact4.equals(domainAdminContact3));
        System.assert(domainAdminContact3.equals(domainAdminContact3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDomainAdminContact domainAdminContact1 = OASDomainAdminContact.getExample();
        OASDomainAdminContact domainAdminContact2 = OASDomainAdminContact.getExample();
        OASDomainAdminContact domainAdminContact3 = new OASDomainAdminContact();
        OASDomainAdminContact domainAdminContact4 = new OASDomainAdminContact();

        System.assert(domainAdminContact1.equals(domainAdminContact2));
        System.assert(domainAdminContact2.equals(domainAdminContact1));
        System.assert(domainAdminContact3.equals(domainAdminContact4));
        System.assert(domainAdminContact4.equals(domainAdminContact3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDomainAdminContact domainAdminContact1 = OASDomainAdminContact.getExample();
        OASDomainAdminContact domainAdminContact2 = new OASDomainAdminContact();

        System.assertEquals(false, domainAdminContact1.equals('foo'));
        System.assertEquals(false, domainAdminContact2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDomainAdminContact domainAdminContact1 = OASDomainAdminContact.getExample();
        OASDomainAdminContact domainAdminContact2 = new OASDomainAdminContact();
        OASDomainAdminContact domainAdminContact3;

        System.assertEquals(false, domainAdminContact1.equals(domainAdminContact3));
        System.assertEquals(false, domainAdminContact2.equals(domainAdminContact3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDomainAdminContact domainAdminContact1 = OASDomainAdminContact.getExample();
        OASDomainAdminContact domainAdminContact2 = new OASDomainAdminContact();

        System.assertEquals(domainAdminContact1.hashCode(), domainAdminContact1.hashCode());
        System.assertEquals(domainAdminContact2.hashCode(), domainAdminContact2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDomainAdminContact domainAdminContact1 = OASDomainAdminContact.getExample();
        OASDomainAdminContact domainAdminContact2 = OASDomainAdminContact.getExample();
        OASDomainAdminContact domainAdminContact3 = new OASDomainAdminContact();
        OASDomainAdminContact domainAdminContact4 = new OASDomainAdminContact();

        System.assert(domainAdminContact1.equals(domainAdminContact2));
        System.assert(domainAdminContact3.equals(domainAdminContact4));
        System.assertEquals(domainAdminContact1.hashCode(), domainAdminContact2.hashCode());
        System.assertEquals(domainAdminContact3.hashCode(), domainAdminContact4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASDomainAdminContact domainAdminContact = new OASDomainAdminContact();
        Map<String, String> x-property-mappings = domainAdminContact.getx-property-mappings();
        System.assertEquals('orgName', x-property-mappings.get('org_name'));
        System.assertEquals('postalCode', x-property-mappings.get('postal_code'));
        System.assertEquals('firstName', x-property-mappings.get('first_name'));
        System.assertEquals('lastName', x-property-mappings.get('last_name'));
    }
}
