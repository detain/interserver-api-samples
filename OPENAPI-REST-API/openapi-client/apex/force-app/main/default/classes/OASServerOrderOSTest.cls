@isTest
private class OASServerOrderOSTest {
    @isTest
    private static void equalsSameInstance() {
        OASServerOrderOS serverOrderOS1 = OASServerOrderOS.getExample();
        OASServerOrderOS serverOrderOS2 = serverOrderOS1;
        OASServerOrderOS serverOrderOS3 = new OASServerOrderOS();
        OASServerOrderOS serverOrderOS4 = serverOrderOS3;

        System.assert(serverOrderOS1.equals(serverOrderOS2));
        System.assert(serverOrderOS2.equals(serverOrderOS1));
        System.assert(serverOrderOS1.equals(serverOrderOS1));
        System.assert(serverOrderOS3.equals(serverOrderOS4));
        System.assert(serverOrderOS4.equals(serverOrderOS3));
        System.assert(serverOrderOS3.equals(serverOrderOS3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServerOrderOS serverOrderOS1 = OASServerOrderOS.getExample();
        OASServerOrderOS serverOrderOS2 = OASServerOrderOS.getExample();
        OASServerOrderOS serverOrderOS3 = new OASServerOrderOS();
        OASServerOrderOS serverOrderOS4 = new OASServerOrderOS();

        System.assert(serverOrderOS1.equals(serverOrderOS2));
        System.assert(serverOrderOS2.equals(serverOrderOS1));
        System.assert(serverOrderOS3.equals(serverOrderOS4));
        System.assert(serverOrderOS4.equals(serverOrderOS3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServerOrderOS serverOrderOS1 = OASServerOrderOS.getExample();
        OASServerOrderOS serverOrderOS2 = new OASServerOrderOS();

        System.assertEquals(false, serverOrderOS1.equals('foo'));
        System.assertEquals(false, serverOrderOS2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServerOrderOS serverOrderOS1 = OASServerOrderOS.getExample();
        OASServerOrderOS serverOrderOS2 = new OASServerOrderOS();
        OASServerOrderOS serverOrderOS3;

        System.assertEquals(false, serverOrderOS1.equals(serverOrderOS3));
        System.assertEquals(false, serverOrderOS2.equals(serverOrderOS3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServerOrderOS serverOrderOS1 = OASServerOrderOS.getExample();
        OASServerOrderOS serverOrderOS2 = new OASServerOrderOS();

        System.assertEquals(serverOrderOS1.hashCode(), serverOrderOS1.hashCode());
        System.assertEquals(serverOrderOS2.hashCode(), serverOrderOS2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServerOrderOS serverOrderOS1 = OASServerOrderOS.getExample();
        OASServerOrderOS serverOrderOS2 = OASServerOrderOS.getExample();
        OASServerOrderOS serverOrderOS3 = new OASServerOrderOS();
        OASServerOrderOS serverOrderOS4 = new OASServerOrderOS();

        System.assert(serverOrderOS1.equals(serverOrderOS2));
        System.assert(serverOrderOS3.equals(serverOrderOS4));
        System.assertEquals(serverOrderOS1.hashCode(), serverOrderOS2.hashCode());
        System.assertEquals(serverOrderOS3.hashCode(), serverOrderOS4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASServerOrderOS serverOrderOS = new OASServerOrderOS();
        Map<String, String> x-property-mappings = serverOrderOS.getx-property-mappings();
        System.assertEquals('shortDesc', x-property-mappings.get('short_desc'));
        System.assertEquals('longDesc', x-property-mappings.get('long_desc'));
        System.assertEquals('monthlyPrice', x-property-mappings.get('monthly_price'));
        System.assertEquals('priceDisplay', x-property-mappings.get('price_display'));
        System.assertEquals('monthlyPriceDisplay', x-property-mappings.get('monthly_price_display'));
    }
}
