@isTest
private class OASDomainOrderTest {
    @isTest
    private static void equalsSameInstance() {
        OASDomainOrder domainOrder1 = OASDomainOrder.getExample();
        OASDomainOrder domainOrder2 = domainOrder1;
        OASDomainOrder domainOrder3 = new OASDomainOrder();
        OASDomainOrder domainOrder4 = domainOrder3;

        System.assert(domainOrder1.equals(domainOrder2));
        System.assert(domainOrder2.equals(domainOrder1));
        System.assert(domainOrder1.equals(domainOrder1));
        System.assert(domainOrder3.equals(domainOrder4));
        System.assert(domainOrder4.equals(domainOrder3));
        System.assert(domainOrder3.equals(domainOrder3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDomainOrder domainOrder1 = OASDomainOrder.getExample();
        OASDomainOrder domainOrder2 = OASDomainOrder.getExample();
        OASDomainOrder domainOrder3 = new OASDomainOrder();
        OASDomainOrder domainOrder4 = new OASDomainOrder();

        System.assert(domainOrder1.equals(domainOrder2));
        System.assert(domainOrder2.equals(domainOrder1));
        System.assert(domainOrder3.equals(domainOrder4));
        System.assert(domainOrder4.equals(domainOrder3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDomainOrder domainOrder1 = OASDomainOrder.getExample();
        OASDomainOrder domainOrder2 = new OASDomainOrder();

        System.assertEquals(false, domainOrder1.equals('foo'));
        System.assertEquals(false, domainOrder2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDomainOrder domainOrder1 = OASDomainOrder.getExample();
        OASDomainOrder domainOrder2 = new OASDomainOrder();
        OASDomainOrder domainOrder3;

        System.assertEquals(false, domainOrder1.equals(domainOrder3));
        System.assertEquals(false, domainOrder2.equals(domainOrder3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDomainOrder domainOrder1 = OASDomainOrder.getExample();
        OASDomainOrder domainOrder2 = new OASDomainOrder();

        System.assertEquals(domainOrder1.hashCode(), domainOrder1.hashCode());
        System.assertEquals(domainOrder2.hashCode(), domainOrder2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDomainOrder domainOrder1 = OASDomainOrder.getExample();
        OASDomainOrder domainOrder2 = OASDomainOrder.getExample();
        OASDomainOrder domainOrder3 = new OASDomainOrder();
        OASDomainOrder domainOrder4 = new OASDomainOrder();

        System.assert(domainOrder1.equals(domainOrder2));
        System.assert(domainOrder3.equals(domainOrder4));
        System.assertEquals(domainOrder1.hashCode(), domainOrder2.hashCode());
        System.assertEquals(domainOrder3.hashCode(), domainOrder4.hashCode());
    }
}
