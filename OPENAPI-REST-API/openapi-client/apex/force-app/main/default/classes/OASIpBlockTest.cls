@isTest
private class OASIpBlockTest {
    @isTest
    private static void equalsSameInstance() {
        OASIpBlock ipBlock1 = OASIpBlock.getExample();
        OASIpBlock ipBlock2 = ipBlock1;
        OASIpBlock ipBlock3 = new OASIpBlock();
        OASIpBlock ipBlock4 = ipBlock3;

        System.assert(ipBlock1.equals(ipBlock2));
        System.assert(ipBlock2.equals(ipBlock1));
        System.assert(ipBlock1.equals(ipBlock1));
        System.assert(ipBlock3.equals(ipBlock4));
        System.assert(ipBlock4.equals(ipBlock3));
        System.assert(ipBlock3.equals(ipBlock3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASIpBlock ipBlock1 = OASIpBlock.getExample();
        OASIpBlock ipBlock2 = OASIpBlock.getExample();
        OASIpBlock ipBlock3 = new OASIpBlock();
        OASIpBlock ipBlock4 = new OASIpBlock();

        System.assert(ipBlock1.equals(ipBlock2));
        System.assert(ipBlock2.equals(ipBlock1));
        System.assert(ipBlock3.equals(ipBlock4));
        System.assert(ipBlock4.equals(ipBlock3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASIpBlock ipBlock1 = OASIpBlock.getExample();
        OASIpBlock ipBlock2 = new OASIpBlock();

        System.assertEquals(false, ipBlock1.equals('foo'));
        System.assertEquals(false, ipBlock2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASIpBlock ipBlock1 = OASIpBlock.getExample();
        OASIpBlock ipBlock2 = new OASIpBlock();
        OASIpBlock ipBlock3;

        System.assertEquals(false, ipBlock1.equals(ipBlock3));
        System.assertEquals(false, ipBlock2.equals(ipBlock3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASIpBlock ipBlock1 = OASIpBlock.getExample();
        OASIpBlock ipBlock2 = new OASIpBlock();

        System.assertEquals(ipBlock1.hashCode(), ipBlock1.hashCode());
        System.assertEquals(ipBlock2.hashCode(), ipBlock2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASIpBlock ipBlock1 = OASIpBlock.getExample();
        OASIpBlock ipBlock2 = OASIpBlock.getExample();
        OASIpBlock ipBlock3 = new OASIpBlock();
        OASIpBlock ipBlock4 = new OASIpBlock();

        System.assert(ipBlock1.equals(ipBlock2));
        System.assert(ipBlock3.equals(ipBlock4));
        System.assertEquals(ipBlock1.hashCode(), ipBlock2.hashCode());
        System.assertEquals(ipBlock3.hashCode(), ipBlock4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASIpBlock ipBlock = new OASIpBlock();
        Map<String, String> x-property-mappings = ipBlock.getx-property-mappings();
        System.assertEquals('shortDesc', x-property-mappings.get('short_desc'));
        System.assertEquals('monthlyPrice', x-property-mappings.get('monthly_price'));
    }
}
