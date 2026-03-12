@isTest
private class OASDnsNewDomainTest {
    @isTest
    private static void equalsSameInstance() {
        OASDnsNewDomain dnsNewDomain1 = OASDnsNewDomain.getExample();
        OASDnsNewDomain dnsNewDomain2 = dnsNewDomain1;
        OASDnsNewDomain dnsNewDomain3 = new OASDnsNewDomain();
        OASDnsNewDomain dnsNewDomain4 = dnsNewDomain3;

        System.assert(dnsNewDomain1.equals(dnsNewDomain2));
        System.assert(dnsNewDomain2.equals(dnsNewDomain1));
        System.assert(dnsNewDomain1.equals(dnsNewDomain1));
        System.assert(dnsNewDomain3.equals(dnsNewDomain4));
        System.assert(dnsNewDomain4.equals(dnsNewDomain3));
        System.assert(dnsNewDomain3.equals(dnsNewDomain3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDnsNewDomain dnsNewDomain1 = OASDnsNewDomain.getExample();
        OASDnsNewDomain dnsNewDomain2 = OASDnsNewDomain.getExample();
        OASDnsNewDomain dnsNewDomain3 = new OASDnsNewDomain();
        OASDnsNewDomain dnsNewDomain4 = new OASDnsNewDomain();

        System.assert(dnsNewDomain1.equals(dnsNewDomain2));
        System.assert(dnsNewDomain2.equals(dnsNewDomain1));
        System.assert(dnsNewDomain3.equals(dnsNewDomain4));
        System.assert(dnsNewDomain4.equals(dnsNewDomain3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDnsNewDomain dnsNewDomain1 = OASDnsNewDomain.getExample();
        OASDnsNewDomain dnsNewDomain2 = new OASDnsNewDomain();

        System.assertEquals(false, dnsNewDomain1.equals('foo'));
        System.assertEquals(false, dnsNewDomain2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDnsNewDomain dnsNewDomain1 = OASDnsNewDomain.getExample();
        OASDnsNewDomain dnsNewDomain2 = new OASDnsNewDomain();
        OASDnsNewDomain dnsNewDomain3;

        System.assertEquals(false, dnsNewDomain1.equals(dnsNewDomain3));
        System.assertEquals(false, dnsNewDomain2.equals(dnsNewDomain3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDnsNewDomain dnsNewDomain1 = OASDnsNewDomain.getExample();
        OASDnsNewDomain dnsNewDomain2 = new OASDnsNewDomain();

        System.assertEquals(dnsNewDomain1.hashCode(), dnsNewDomain1.hashCode());
        System.assertEquals(dnsNewDomain2.hashCode(), dnsNewDomain2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDnsNewDomain dnsNewDomain1 = OASDnsNewDomain.getExample();
        OASDnsNewDomain dnsNewDomain2 = OASDnsNewDomain.getExample();
        OASDnsNewDomain dnsNewDomain3 = new OASDnsNewDomain();
        OASDnsNewDomain dnsNewDomain4 = new OASDnsNewDomain();

        System.assert(dnsNewDomain1.equals(dnsNewDomain2));
        System.assert(dnsNewDomain3.equals(dnsNewDomain4));
        System.assertEquals(dnsNewDomain1.hashCode(), dnsNewDomain2.hashCode());
        System.assertEquals(dnsNewDomain3.hashCode(), dnsNewDomain4.hashCode());
    }
}
