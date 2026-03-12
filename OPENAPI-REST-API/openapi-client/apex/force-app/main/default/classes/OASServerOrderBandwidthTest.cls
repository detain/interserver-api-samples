@isTest
private class OASServerOrderBandwidthTest {
    @isTest
    private static void equalsSameInstance() {
        OASServerOrderBandwidth serverOrderBandwidth1 = OASServerOrderBandwidth.getExample();
        OASServerOrderBandwidth serverOrderBandwidth2 = serverOrderBandwidth1;
        OASServerOrderBandwidth serverOrderBandwidth3 = new OASServerOrderBandwidth();
        OASServerOrderBandwidth serverOrderBandwidth4 = serverOrderBandwidth3;

        System.assert(serverOrderBandwidth1.equals(serverOrderBandwidth2));
        System.assert(serverOrderBandwidth2.equals(serverOrderBandwidth1));
        System.assert(serverOrderBandwidth1.equals(serverOrderBandwidth1));
        System.assert(serverOrderBandwidth3.equals(serverOrderBandwidth4));
        System.assert(serverOrderBandwidth4.equals(serverOrderBandwidth3));
        System.assert(serverOrderBandwidth3.equals(serverOrderBandwidth3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServerOrderBandwidth serverOrderBandwidth1 = OASServerOrderBandwidth.getExample();
        OASServerOrderBandwidth serverOrderBandwidth2 = OASServerOrderBandwidth.getExample();
        OASServerOrderBandwidth serverOrderBandwidth3 = new OASServerOrderBandwidth();
        OASServerOrderBandwidth serverOrderBandwidth4 = new OASServerOrderBandwidth();

        System.assert(serverOrderBandwidth1.equals(serverOrderBandwidth2));
        System.assert(serverOrderBandwidth2.equals(serverOrderBandwidth1));
        System.assert(serverOrderBandwidth3.equals(serverOrderBandwidth4));
        System.assert(serverOrderBandwidth4.equals(serverOrderBandwidth3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServerOrderBandwidth serverOrderBandwidth1 = OASServerOrderBandwidth.getExample();
        OASServerOrderBandwidth serverOrderBandwidth2 = new OASServerOrderBandwidth();

        System.assertEquals(false, serverOrderBandwidth1.equals('foo'));
        System.assertEquals(false, serverOrderBandwidth2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServerOrderBandwidth serverOrderBandwidth1 = OASServerOrderBandwidth.getExample();
        OASServerOrderBandwidth serverOrderBandwidth2 = new OASServerOrderBandwidth();
        OASServerOrderBandwidth serverOrderBandwidth3;

        System.assertEquals(false, serverOrderBandwidth1.equals(serverOrderBandwidth3));
        System.assertEquals(false, serverOrderBandwidth2.equals(serverOrderBandwidth3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServerOrderBandwidth serverOrderBandwidth1 = OASServerOrderBandwidth.getExample();
        OASServerOrderBandwidth serverOrderBandwidth2 = new OASServerOrderBandwidth();

        System.assertEquals(serverOrderBandwidth1.hashCode(), serverOrderBandwidth1.hashCode());
        System.assertEquals(serverOrderBandwidth2.hashCode(), serverOrderBandwidth2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServerOrderBandwidth serverOrderBandwidth1 = OASServerOrderBandwidth.getExample();
        OASServerOrderBandwidth serverOrderBandwidth2 = OASServerOrderBandwidth.getExample();
        OASServerOrderBandwidth serverOrderBandwidth3 = new OASServerOrderBandwidth();
        OASServerOrderBandwidth serverOrderBandwidth4 = new OASServerOrderBandwidth();

        System.assert(serverOrderBandwidth1.equals(serverOrderBandwidth2));
        System.assert(serverOrderBandwidth3.equals(serverOrderBandwidth4));
        System.assertEquals(serverOrderBandwidth1.hashCode(), serverOrderBandwidth2.hashCode());
        System.assertEquals(serverOrderBandwidth3.hashCode(), serverOrderBandwidth4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASServerOrderBandwidth serverOrderBandwidth = new OASServerOrderBandwidth();
        Map<String, String> x-property-mappings = serverOrderBandwidth.getx-property-mappings();
        System.assertEquals('shortDesc', x-property-mappings.get('short_desc'));
        System.assertEquals('longDesc', x-property-mappings.get('long_desc'));
        System.assertEquals('monthlyPrice', x-property-mappings.get('monthly_price'));
        System.assertEquals('priceDisplay', x-property-mappings.get('price_display'));
        System.assertEquals('monthlyPriceDisplay', x-property-mappings.get('monthly_price_display'));
    }
}
