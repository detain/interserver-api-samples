@isTest
private class OASDomainRowTest {
    @isTest
    private static void equalsSameInstance() {
        OASDomainRow domainRow1 = OASDomainRow.getExample();
        OASDomainRow domainRow2 = domainRow1;
        OASDomainRow domainRow3 = new OASDomainRow();
        OASDomainRow domainRow4 = domainRow3;

        System.assert(domainRow1.equals(domainRow2));
        System.assert(domainRow2.equals(domainRow1));
        System.assert(domainRow1.equals(domainRow1));
        System.assert(domainRow3.equals(domainRow4));
        System.assert(domainRow4.equals(domainRow3));
        System.assert(domainRow3.equals(domainRow3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDomainRow domainRow1 = OASDomainRow.getExample();
        OASDomainRow domainRow2 = OASDomainRow.getExample();
        OASDomainRow domainRow3 = new OASDomainRow();
        OASDomainRow domainRow4 = new OASDomainRow();

        System.assert(domainRow1.equals(domainRow2));
        System.assert(domainRow2.equals(domainRow1));
        System.assert(domainRow3.equals(domainRow4));
        System.assert(domainRow4.equals(domainRow3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDomainRow domainRow1 = OASDomainRow.getExample();
        OASDomainRow domainRow2 = new OASDomainRow();

        System.assertEquals(false, domainRow1.equals('foo'));
        System.assertEquals(false, domainRow2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDomainRow domainRow1 = OASDomainRow.getExample();
        OASDomainRow domainRow2 = new OASDomainRow();
        OASDomainRow domainRow3;

        System.assertEquals(false, domainRow1.equals(domainRow3));
        System.assertEquals(false, domainRow2.equals(domainRow3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDomainRow domainRow1 = OASDomainRow.getExample();
        OASDomainRow domainRow2 = new OASDomainRow();

        System.assertEquals(domainRow1.hashCode(), domainRow1.hashCode());
        System.assertEquals(domainRow2.hashCode(), domainRow2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDomainRow domainRow1 = OASDomainRow.getExample();
        OASDomainRow domainRow2 = OASDomainRow.getExample();
        OASDomainRow domainRow3 = new OASDomainRow();
        OASDomainRow domainRow4 = new OASDomainRow();

        System.assert(domainRow1.equals(domainRow2));
        System.assert(domainRow3.equals(domainRow4));
        System.assertEquals(domainRow1.hashCode(), domainRow2.hashCode());
        System.assertEquals(domainRow3.hashCode(), domainRow4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASDomainRow domainRow = new OASDomainRow();
        Map<String, String> x-property-mappings = domainRow.getx-property-mappings();
        System.assertEquals('domainId', x-property-mappings.get('domain_id'));
        System.assertEquals('domainHostname', x-property-mappings.get('domain_hostname'));
        System.assertEquals('domainExpireDate', x-property-mappings.get('domain_expire_date'));
        System.assertEquals('domainStatus', x-property-mappings.get('domain_status'));
    }
}
