@isTest
private class OASDomainAllInfoAttributesContactSetTest {
    @isTest
    private static void equalsSameInstance() {
        OASDomainAllInfoAttributesContactSet domainAllInfoAttributesContactSet1 = OASDomainAllInfoAttributesContactSet.getExample();
        OASDomainAllInfoAttributesContactSet domainAllInfoAttributesContactSet2 = domainAllInfoAttributesContactSet1;
        OASDomainAllInfoAttributesContactSet domainAllInfoAttributesContactSet3 = new OASDomainAllInfoAttributesContactSet();
        OASDomainAllInfoAttributesContactSet domainAllInfoAttributesContactSet4 = domainAllInfoAttributesContactSet3;

        System.assert(domainAllInfoAttributesContactSet1.equals(domainAllInfoAttributesContactSet2));
        System.assert(domainAllInfoAttributesContactSet2.equals(domainAllInfoAttributesContactSet1));
        System.assert(domainAllInfoAttributesContactSet1.equals(domainAllInfoAttributesContactSet1));
        System.assert(domainAllInfoAttributesContactSet3.equals(domainAllInfoAttributesContactSet4));
        System.assert(domainAllInfoAttributesContactSet4.equals(domainAllInfoAttributesContactSet3));
        System.assert(domainAllInfoAttributesContactSet3.equals(domainAllInfoAttributesContactSet3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDomainAllInfoAttributesContactSet domainAllInfoAttributesContactSet1 = OASDomainAllInfoAttributesContactSet.getExample();
        OASDomainAllInfoAttributesContactSet domainAllInfoAttributesContactSet2 = OASDomainAllInfoAttributesContactSet.getExample();
        OASDomainAllInfoAttributesContactSet domainAllInfoAttributesContactSet3 = new OASDomainAllInfoAttributesContactSet();
        OASDomainAllInfoAttributesContactSet domainAllInfoAttributesContactSet4 = new OASDomainAllInfoAttributesContactSet();

        System.assert(domainAllInfoAttributesContactSet1.equals(domainAllInfoAttributesContactSet2));
        System.assert(domainAllInfoAttributesContactSet2.equals(domainAllInfoAttributesContactSet1));
        System.assert(domainAllInfoAttributesContactSet3.equals(domainAllInfoAttributesContactSet4));
        System.assert(domainAllInfoAttributesContactSet4.equals(domainAllInfoAttributesContactSet3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDomainAllInfoAttributesContactSet domainAllInfoAttributesContactSet1 = OASDomainAllInfoAttributesContactSet.getExample();
        OASDomainAllInfoAttributesContactSet domainAllInfoAttributesContactSet2 = new OASDomainAllInfoAttributesContactSet();

        System.assertEquals(false, domainAllInfoAttributesContactSet1.equals('foo'));
        System.assertEquals(false, domainAllInfoAttributesContactSet2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDomainAllInfoAttributesContactSet domainAllInfoAttributesContactSet1 = OASDomainAllInfoAttributesContactSet.getExample();
        OASDomainAllInfoAttributesContactSet domainAllInfoAttributesContactSet2 = new OASDomainAllInfoAttributesContactSet();
        OASDomainAllInfoAttributesContactSet domainAllInfoAttributesContactSet3;

        System.assertEquals(false, domainAllInfoAttributesContactSet1.equals(domainAllInfoAttributesContactSet3));
        System.assertEquals(false, domainAllInfoAttributesContactSet2.equals(domainAllInfoAttributesContactSet3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDomainAllInfoAttributesContactSet domainAllInfoAttributesContactSet1 = OASDomainAllInfoAttributesContactSet.getExample();
        OASDomainAllInfoAttributesContactSet domainAllInfoAttributesContactSet2 = new OASDomainAllInfoAttributesContactSet();

        System.assertEquals(domainAllInfoAttributesContactSet1.hashCode(), domainAllInfoAttributesContactSet1.hashCode());
        System.assertEquals(domainAllInfoAttributesContactSet2.hashCode(), domainAllInfoAttributesContactSet2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDomainAllInfoAttributesContactSet domainAllInfoAttributesContactSet1 = OASDomainAllInfoAttributesContactSet.getExample();
        OASDomainAllInfoAttributesContactSet domainAllInfoAttributesContactSet2 = OASDomainAllInfoAttributesContactSet.getExample();
        OASDomainAllInfoAttributesContactSet domainAllInfoAttributesContactSet3 = new OASDomainAllInfoAttributesContactSet();
        OASDomainAllInfoAttributesContactSet domainAllInfoAttributesContactSet4 = new OASDomainAllInfoAttributesContactSet();

        System.assert(domainAllInfoAttributesContactSet1.equals(domainAllInfoAttributesContactSet2));
        System.assert(domainAllInfoAttributesContactSet3.equals(domainAllInfoAttributesContactSet4));
        System.assertEquals(domainAllInfoAttributesContactSet1.hashCode(), domainAllInfoAttributesContactSet2.hashCode());
        System.assertEquals(domainAllInfoAttributesContactSet3.hashCode(), domainAllInfoAttributesContactSet4.hashCode());
    }
}
