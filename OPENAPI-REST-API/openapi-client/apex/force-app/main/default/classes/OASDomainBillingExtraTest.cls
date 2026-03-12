@isTest
private class OASDomainBillingExtraTest {
    @isTest
    private static void equalsSameInstance() {
        OASDomainBillingExtra domainBillingExtra1 = OASDomainBillingExtra.getExample();
        OASDomainBillingExtra domainBillingExtra2 = domainBillingExtra1;
        OASDomainBillingExtra domainBillingExtra3 = new OASDomainBillingExtra();
        OASDomainBillingExtra domainBillingExtra4 = domainBillingExtra3;

        System.assert(domainBillingExtra1.equals(domainBillingExtra2));
        System.assert(domainBillingExtra2.equals(domainBillingExtra1));
        System.assert(domainBillingExtra1.equals(domainBillingExtra1));
        System.assert(domainBillingExtra3.equals(domainBillingExtra4));
        System.assert(domainBillingExtra4.equals(domainBillingExtra3));
        System.assert(domainBillingExtra3.equals(domainBillingExtra3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDomainBillingExtra domainBillingExtra1 = OASDomainBillingExtra.getExample();
        OASDomainBillingExtra domainBillingExtra2 = OASDomainBillingExtra.getExample();
        OASDomainBillingExtra domainBillingExtra3 = new OASDomainBillingExtra();
        OASDomainBillingExtra domainBillingExtra4 = new OASDomainBillingExtra();

        System.assert(domainBillingExtra1.equals(domainBillingExtra2));
        System.assert(domainBillingExtra2.equals(domainBillingExtra1));
        System.assert(domainBillingExtra3.equals(domainBillingExtra4));
        System.assert(domainBillingExtra4.equals(domainBillingExtra3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDomainBillingExtra domainBillingExtra1 = OASDomainBillingExtra.getExample();
        OASDomainBillingExtra domainBillingExtra2 = new OASDomainBillingExtra();

        System.assertEquals(false, domainBillingExtra1.equals('foo'));
        System.assertEquals(false, domainBillingExtra2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDomainBillingExtra domainBillingExtra1 = OASDomainBillingExtra.getExample();
        OASDomainBillingExtra domainBillingExtra2 = new OASDomainBillingExtra();
        OASDomainBillingExtra domainBillingExtra3;

        System.assertEquals(false, domainBillingExtra1.equals(domainBillingExtra3));
        System.assertEquals(false, domainBillingExtra2.equals(domainBillingExtra3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDomainBillingExtra domainBillingExtra1 = OASDomainBillingExtra.getExample();
        OASDomainBillingExtra domainBillingExtra2 = new OASDomainBillingExtra();

        System.assertEquals(domainBillingExtra1.hashCode(), domainBillingExtra1.hashCode());
        System.assertEquals(domainBillingExtra2.hashCode(), domainBillingExtra2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDomainBillingExtra domainBillingExtra1 = OASDomainBillingExtra.getExample();
        OASDomainBillingExtra domainBillingExtra2 = OASDomainBillingExtra.getExample();
        OASDomainBillingExtra domainBillingExtra3 = new OASDomainBillingExtra();
        OASDomainBillingExtra domainBillingExtra4 = new OASDomainBillingExtra();

        System.assert(domainBillingExtra1.equals(domainBillingExtra2));
        System.assert(domainBillingExtra3.equals(domainBillingExtra4));
        System.assertEquals(domainBillingExtra1.hashCode(), domainBillingExtra2.hashCode());
        System.assertEquals(domainBillingExtra3.hashCode(), domainBillingExtra4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASDomainBillingExtra domainBillingExtra = new OASDomainBillingExtra();
        Map<String, String> x-property-mappings = domainBillingExtra.getx-property-mappings();
        System.assertEquals('orderId', x-property-mappings.get('order_id'));
        System.assertEquals('domainId', x-property-mappings.get('domain_id'));
    }
}
