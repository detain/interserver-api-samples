@isTest
private class OASBandwidthTest {
    @isTest
    private static void equalsSameInstance() {
        OASBandwidth bandwidth1 = OASBandwidth.getExample();
        OASBandwidth bandwidth2 = bandwidth1;
        OASBandwidth bandwidth3 = new OASBandwidth();
        OASBandwidth bandwidth4 = bandwidth3;

        System.assert(bandwidth1.equals(bandwidth2));
        System.assert(bandwidth2.equals(bandwidth1));
        System.assert(bandwidth1.equals(bandwidth1));
        System.assert(bandwidth3.equals(bandwidth4));
        System.assert(bandwidth4.equals(bandwidth3));
        System.assert(bandwidth3.equals(bandwidth3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASBandwidth bandwidth1 = OASBandwidth.getExample();
        OASBandwidth bandwidth2 = OASBandwidth.getExample();
        OASBandwidth bandwidth3 = new OASBandwidth();
        OASBandwidth bandwidth4 = new OASBandwidth();

        System.assert(bandwidth1.equals(bandwidth2));
        System.assert(bandwidth2.equals(bandwidth1));
        System.assert(bandwidth3.equals(bandwidth4));
        System.assert(bandwidth4.equals(bandwidth3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASBandwidth bandwidth1 = OASBandwidth.getExample();
        OASBandwidth bandwidth2 = new OASBandwidth();

        System.assertEquals(false, bandwidth1.equals('foo'));
        System.assertEquals(false, bandwidth2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASBandwidth bandwidth1 = OASBandwidth.getExample();
        OASBandwidth bandwidth2 = new OASBandwidth();
        OASBandwidth bandwidth3;

        System.assertEquals(false, bandwidth1.equals(bandwidth3));
        System.assertEquals(false, bandwidth2.equals(bandwidth3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASBandwidth bandwidth1 = OASBandwidth.getExample();
        OASBandwidth bandwidth2 = new OASBandwidth();

        System.assertEquals(bandwidth1.hashCode(), bandwidth1.hashCode());
        System.assertEquals(bandwidth2.hashCode(), bandwidth2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASBandwidth bandwidth1 = OASBandwidth.getExample();
        OASBandwidth bandwidth2 = OASBandwidth.getExample();
        OASBandwidth bandwidth3 = new OASBandwidth();
        OASBandwidth bandwidth4 = new OASBandwidth();

        System.assert(bandwidth1.equals(bandwidth2));
        System.assert(bandwidth3.equals(bandwidth4));
        System.assertEquals(bandwidth1.hashCode(), bandwidth2.hashCode());
        System.assertEquals(bandwidth3.hashCode(), bandwidth4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASBandwidth bandwidth = new OASBandwidth();
        Map<String, String> x-property-mappings = bandwidth.getx-property-mappings();
        System.assertEquals('shortDesc', x-property-mappings.get('short_desc'));
        System.assertEquals('monthlyPrice', x-property-mappings.get('monthly_price'));
        System.assertEquals('monthlyPriceDisplay', x-property-mappings.get('monthly_price_display'));
    }
}
