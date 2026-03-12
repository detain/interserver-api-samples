@isTest
private class OASIpLimitRangeTest {
    @isTest
    private static void equalsSameInstance() {
        OASIpLimitRange ipLimitRange1 = OASIpLimitRange.getExample();
        OASIpLimitRange ipLimitRange2 = ipLimitRange1;
        OASIpLimitRange ipLimitRange3 = new OASIpLimitRange();
        OASIpLimitRange ipLimitRange4 = ipLimitRange3;

        System.assert(ipLimitRange1.equals(ipLimitRange2));
        System.assert(ipLimitRange2.equals(ipLimitRange1));
        System.assert(ipLimitRange1.equals(ipLimitRange1));
        System.assert(ipLimitRange3.equals(ipLimitRange4));
        System.assert(ipLimitRange4.equals(ipLimitRange3));
        System.assert(ipLimitRange3.equals(ipLimitRange3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASIpLimitRange ipLimitRange1 = OASIpLimitRange.getExample();
        OASIpLimitRange ipLimitRange2 = OASIpLimitRange.getExample();
        OASIpLimitRange ipLimitRange3 = new OASIpLimitRange();
        OASIpLimitRange ipLimitRange4 = new OASIpLimitRange();

        System.assert(ipLimitRange1.equals(ipLimitRange2));
        System.assert(ipLimitRange2.equals(ipLimitRange1));
        System.assert(ipLimitRange3.equals(ipLimitRange4));
        System.assert(ipLimitRange4.equals(ipLimitRange3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASIpLimitRange ipLimitRange1 = OASIpLimitRange.getExample();
        OASIpLimitRange ipLimitRange2 = new OASIpLimitRange();

        System.assertEquals(false, ipLimitRange1.equals('foo'));
        System.assertEquals(false, ipLimitRange2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASIpLimitRange ipLimitRange1 = OASIpLimitRange.getExample();
        OASIpLimitRange ipLimitRange2 = new OASIpLimitRange();
        OASIpLimitRange ipLimitRange3;

        System.assertEquals(false, ipLimitRange1.equals(ipLimitRange3));
        System.assertEquals(false, ipLimitRange2.equals(ipLimitRange3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASIpLimitRange ipLimitRange1 = OASIpLimitRange.getExample();
        OASIpLimitRange ipLimitRange2 = new OASIpLimitRange();

        System.assertEquals(ipLimitRange1.hashCode(), ipLimitRange1.hashCode());
        System.assertEquals(ipLimitRange2.hashCode(), ipLimitRange2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASIpLimitRange ipLimitRange1 = OASIpLimitRange.getExample();
        OASIpLimitRange ipLimitRange2 = OASIpLimitRange.getExample();
        OASIpLimitRange ipLimitRange3 = new OASIpLimitRange();
        OASIpLimitRange ipLimitRange4 = new OASIpLimitRange();

        System.assert(ipLimitRange1.equals(ipLimitRange2));
        System.assert(ipLimitRange3.equals(ipLimitRange4));
        System.assertEquals(ipLimitRange1.hashCode(), ipLimitRange2.hashCode());
        System.assertEquals(ipLimitRange3.hashCode(), ipLimitRange4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASIpLimitRange ipLimitRange = new OASIpLimitRange();
        Map<String, String> x-property-mappings = ipLimitRange.getx-property-mappings();
        System.assertEquals('r_end', x-property-mappings.get('end'));
    }
}
