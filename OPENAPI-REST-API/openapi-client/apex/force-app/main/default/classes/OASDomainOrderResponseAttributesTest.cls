@isTest
private class OASDomainOrderResponseAttributesTest {
    @isTest
    private static void equalsSameInstance() {
        OASDomainOrderResponseAttributes domainOrderResponseAttributes1 = OASDomainOrderResponseAttributes.getExample();
        OASDomainOrderResponseAttributes domainOrderResponseAttributes2 = domainOrderResponseAttributes1;
        OASDomainOrderResponseAttributes domainOrderResponseAttributes3 = new OASDomainOrderResponseAttributes();
        OASDomainOrderResponseAttributes domainOrderResponseAttributes4 = domainOrderResponseAttributes3;

        System.assert(domainOrderResponseAttributes1.equals(domainOrderResponseAttributes2));
        System.assert(domainOrderResponseAttributes2.equals(domainOrderResponseAttributes1));
        System.assert(domainOrderResponseAttributes1.equals(domainOrderResponseAttributes1));
        System.assert(domainOrderResponseAttributes3.equals(domainOrderResponseAttributes4));
        System.assert(domainOrderResponseAttributes4.equals(domainOrderResponseAttributes3));
        System.assert(domainOrderResponseAttributes3.equals(domainOrderResponseAttributes3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDomainOrderResponseAttributes domainOrderResponseAttributes1 = OASDomainOrderResponseAttributes.getExample();
        OASDomainOrderResponseAttributes domainOrderResponseAttributes2 = OASDomainOrderResponseAttributes.getExample();
        OASDomainOrderResponseAttributes domainOrderResponseAttributes3 = new OASDomainOrderResponseAttributes();
        OASDomainOrderResponseAttributes domainOrderResponseAttributes4 = new OASDomainOrderResponseAttributes();

        System.assert(domainOrderResponseAttributes1.equals(domainOrderResponseAttributes2));
        System.assert(domainOrderResponseAttributes2.equals(domainOrderResponseAttributes1));
        System.assert(domainOrderResponseAttributes3.equals(domainOrderResponseAttributes4));
        System.assert(domainOrderResponseAttributes4.equals(domainOrderResponseAttributes3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDomainOrderResponseAttributes domainOrderResponseAttributes1 = OASDomainOrderResponseAttributes.getExample();
        OASDomainOrderResponseAttributes domainOrderResponseAttributes2 = new OASDomainOrderResponseAttributes();

        System.assertEquals(false, domainOrderResponseAttributes1.equals('foo'));
        System.assertEquals(false, domainOrderResponseAttributes2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDomainOrderResponseAttributes domainOrderResponseAttributes1 = OASDomainOrderResponseAttributes.getExample();
        OASDomainOrderResponseAttributes domainOrderResponseAttributes2 = new OASDomainOrderResponseAttributes();
        OASDomainOrderResponseAttributes domainOrderResponseAttributes3;

        System.assertEquals(false, domainOrderResponseAttributes1.equals(domainOrderResponseAttributes3));
        System.assertEquals(false, domainOrderResponseAttributes2.equals(domainOrderResponseAttributes3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDomainOrderResponseAttributes domainOrderResponseAttributes1 = OASDomainOrderResponseAttributes.getExample();
        OASDomainOrderResponseAttributes domainOrderResponseAttributes2 = new OASDomainOrderResponseAttributes();

        System.assertEquals(domainOrderResponseAttributes1.hashCode(), domainOrderResponseAttributes1.hashCode());
        System.assertEquals(domainOrderResponseAttributes2.hashCode(), domainOrderResponseAttributes2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDomainOrderResponseAttributes domainOrderResponseAttributes1 = OASDomainOrderResponseAttributes.getExample();
        OASDomainOrderResponseAttributes domainOrderResponseAttributes2 = OASDomainOrderResponseAttributes.getExample();
        OASDomainOrderResponseAttributes domainOrderResponseAttributes3 = new OASDomainOrderResponseAttributes();
        OASDomainOrderResponseAttributes domainOrderResponseAttributes4 = new OASDomainOrderResponseAttributes();

        System.assert(domainOrderResponseAttributes1.equals(domainOrderResponseAttributes2));
        System.assert(domainOrderResponseAttributes3.equals(domainOrderResponseAttributes4));
        System.assertEquals(domainOrderResponseAttributes1.hashCode(), domainOrderResponseAttributes2.hashCode());
        System.assertEquals(domainOrderResponseAttributes3.hashCode(), domainOrderResponseAttributes4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASDomainOrderResponseAttributes domainOrderResponseAttributes = new OASDomainOrderResponseAttributes();
        Map<String, String> x-property-mappings = domainOrderResponseAttributes.getx-property-mappings();
        System.assertEquals('adminEmail', x-property-mappings.get('admin_email'));
    }
}
