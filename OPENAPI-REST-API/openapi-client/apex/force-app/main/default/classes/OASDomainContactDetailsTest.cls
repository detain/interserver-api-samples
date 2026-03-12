@isTest
private class OASDomainContactDetailsTest {
    @isTest
    private static void equalsSameInstance() {
        OASDomainContactDetails domainContactDetails1 = OASDomainContactDetails.getExample();
        OASDomainContactDetails domainContactDetails2 = domainContactDetails1;
        OASDomainContactDetails domainContactDetails3 = new OASDomainContactDetails();
        OASDomainContactDetails domainContactDetails4 = domainContactDetails3;

        System.assert(domainContactDetails1.equals(domainContactDetails2));
        System.assert(domainContactDetails2.equals(domainContactDetails1));
        System.assert(domainContactDetails1.equals(domainContactDetails1));
        System.assert(domainContactDetails3.equals(domainContactDetails4));
        System.assert(domainContactDetails4.equals(domainContactDetails3));
        System.assert(domainContactDetails3.equals(domainContactDetails3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDomainContactDetails domainContactDetails1 = OASDomainContactDetails.getExample();
        OASDomainContactDetails domainContactDetails2 = OASDomainContactDetails.getExample();
        OASDomainContactDetails domainContactDetails3 = new OASDomainContactDetails();
        OASDomainContactDetails domainContactDetails4 = new OASDomainContactDetails();

        System.assert(domainContactDetails1.equals(domainContactDetails2));
        System.assert(domainContactDetails2.equals(domainContactDetails1));
        System.assert(domainContactDetails3.equals(domainContactDetails4));
        System.assert(domainContactDetails4.equals(domainContactDetails3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDomainContactDetails domainContactDetails1 = OASDomainContactDetails.getExample();
        OASDomainContactDetails domainContactDetails2 = new OASDomainContactDetails();

        System.assertEquals(false, domainContactDetails1.equals('foo'));
        System.assertEquals(false, domainContactDetails2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDomainContactDetails domainContactDetails1 = OASDomainContactDetails.getExample();
        OASDomainContactDetails domainContactDetails2 = new OASDomainContactDetails();
        OASDomainContactDetails domainContactDetails3;

        System.assertEquals(false, domainContactDetails1.equals(domainContactDetails3));
        System.assertEquals(false, domainContactDetails2.equals(domainContactDetails3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDomainContactDetails domainContactDetails1 = OASDomainContactDetails.getExample();
        OASDomainContactDetails domainContactDetails2 = new OASDomainContactDetails();

        System.assertEquals(domainContactDetails1.hashCode(), domainContactDetails1.hashCode());
        System.assertEquals(domainContactDetails2.hashCode(), domainContactDetails2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDomainContactDetails domainContactDetails1 = OASDomainContactDetails.getExample();
        OASDomainContactDetails domainContactDetails2 = OASDomainContactDetails.getExample();
        OASDomainContactDetails domainContactDetails3 = new OASDomainContactDetails();
        OASDomainContactDetails domainContactDetails4 = new OASDomainContactDetails();

        System.assert(domainContactDetails1.equals(domainContactDetails2));
        System.assert(domainContactDetails3.equals(domainContactDetails4));
        System.assertEquals(domainContactDetails1.hashCode(), domainContactDetails2.hashCode());
        System.assertEquals(domainContactDetails3.hashCode(), domainContactDetails4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASDomainContactDetails domainContactDetails = new OASDomainContactDetails();
        Map<String, String> x-property-mappings = domainContactDetails.getx-property-mappings();
        System.assertEquals('orgName', x-property-mappings.get('org_name'));
        System.assertEquals('postalCode', x-property-mappings.get('postal_code'));
        System.assertEquals('firstName', x-property-mappings.get('first_name'));
        System.assertEquals('lastName', x-property-mappings.get('last_name'));
    }
}
