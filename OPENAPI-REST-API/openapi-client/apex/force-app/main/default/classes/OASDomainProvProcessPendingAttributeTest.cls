@isTest
private class OASDomainProvProcessPendingAttributeTest {
    @isTest
    private static void equalsSameInstance() {
        OASDomainProvProcessPendingAttribute domainProvProcessPendingAttributes1 = OASDomainProvProcessPendingAttribute.getExample();
        OASDomainProvProcessPendingAttribute domainProvProcessPendingAttributes2 = domainProvProcessPendingAttributes1;
        OASDomainProvProcessPendingAttribute domainProvProcessPendingAttributes3 = new OASDomainProvProcessPendingAttribute();
        OASDomainProvProcessPendingAttribute domainProvProcessPendingAttributes4 = domainProvProcessPendingAttributes3;

        System.assert(domainProvProcessPendingAttributes1.equals(domainProvProcessPendingAttributes2));
        System.assert(domainProvProcessPendingAttributes2.equals(domainProvProcessPendingAttributes1));
        System.assert(domainProvProcessPendingAttributes1.equals(domainProvProcessPendingAttributes1));
        System.assert(domainProvProcessPendingAttributes3.equals(domainProvProcessPendingAttributes4));
        System.assert(domainProvProcessPendingAttributes4.equals(domainProvProcessPendingAttributes3));
        System.assert(domainProvProcessPendingAttributes3.equals(domainProvProcessPendingAttributes3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDomainProvProcessPendingAttribute domainProvProcessPendingAttributes1 = OASDomainProvProcessPendingAttribute.getExample();
        OASDomainProvProcessPendingAttribute domainProvProcessPendingAttributes2 = OASDomainProvProcessPendingAttribute.getExample();
        OASDomainProvProcessPendingAttribute domainProvProcessPendingAttributes3 = new OASDomainProvProcessPendingAttribute();
        OASDomainProvProcessPendingAttribute domainProvProcessPendingAttributes4 = new OASDomainProvProcessPendingAttribute();

        System.assert(domainProvProcessPendingAttributes1.equals(domainProvProcessPendingAttributes2));
        System.assert(domainProvProcessPendingAttributes2.equals(domainProvProcessPendingAttributes1));
        System.assert(domainProvProcessPendingAttributes3.equals(domainProvProcessPendingAttributes4));
        System.assert(domainProvProcessPendingAttributes4.equals(domainProvProcessPendingAttributes3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDomainProvProcessPendingAttribute domainProvProcessPendingAttributes1 = OASDomainProvProcessPendingAttribute.getExample();
        OASDomainProvProcessPendingAttribute domainProvProcessPendingAttributes2 = new OASDomainProvProcessPendingAttribute();

        System.assertEquals(false, domainProvProcessPendingAttributes1.equals('foo'));
        System.assertEquals(false, domainProvProcessPendingAttributes2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDomainProvProcessPendingAttribute domainProvProcessPendingAttributes1 = OASDomainProvProcessPendingAttribute.getExample();
        OASDomainProvProcessPendingAttribute domainProvProcessPendingAttributes2 = new OASDomainProvProcessPendingAttribute();
        OASDomainProvProcessPendingAttribute domainProvProcessPendingAttributes3;

        System.assertEquals(false, domainProvProcessPendingAttributes1.equals(domainProvProcessPendingAttributes3));
        System.assertEquals(false, domainProvProcessPendingAttributes2.equals(domainProvProcessPendingAttributes3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDomainProvProcessPendingAttribute domainProvProcessPendingAttributes1 = OASDomainProvProcessPendingAttribute.getExample();
        OASDomainProvProcessPendingAttribute domainProvProcessPendingAttributes2 = new OASDomainProvProcessPendingAttribute();

        System.assertEquals(domainProvProcessPendingAttributes1.hashCode(), domainProvProcessPendingAttributes1.hashCode());
        System.assertEquals(domainProvProcessPendingAttributes2.hashCode(), domainProvProcessPendingAttributes2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDomainProvProcessPendingAttribute domainProvProcessPendingAttributes1 = OASDomainProvProcessPendingAttribute.getExample();
        OASDomainProvProcessPendingAttribute domainProvProcessPendingAttributes2 = OASDomainProvProcessPendingAttribute.getExample();
        OASDomainProvProcessPendingAttribute domainProvProcessPendingAttributes3 = new OASDomainProvProcessPendingAttribute();
        OASDomainProvProcessPendingAttribute domainProvProcessPendingAttributes4 = new OASDomainProvProcessPendingAttribute();

        System.assert(domainProvProcessPendingAttributes1.equals(domainProvProcessPendingAttributes2));
        System.assert(domainProvProcessPendingAttributes3.equals(domainProvProcessPendingAttributes4));
        System.assertEquals(domainProvProcessPendingAttributes1.hashCode(), domainProvProcessPendingAttributes2.hashCode());
        System.assertEquals(domainProvProcessPendingAttributes3.hashCode(), domainProvProcessPendingAttributes4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASDomainProvProcessPendingAttribute domainProvProcessPendingAttributes = new OASDomainProvProcessPendingAttribute();
        Map<String, String> x-property-mappings = domainProvProcessPendingAttributes.getx-property-mappings();
        System.assertEquals('orderId', x-property-mappings.get('order_id'));
        System.assertEquals('registrationExpirationDate', x-property-mappings.get('registration expiration date'));
        System.assertEquals('fAutoRenew', x-property-mappings.get('f_auto_renew'));
    }
}
