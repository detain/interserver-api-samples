@isTest
private class OASServerOrderIPTest {
    @isTest
    private static void equalsSameInstance() {
        OASServerOrderIP serverOrderIP1 = OASServerOrderIP.getExample();
        OASServerOrderIP serverOrderIP2 = serverOrderIP1;
        OASServerOrderIP serverOrderIP3 = new OASServerOrderIP();
        OASServerOrderIP serverOrderIP4 = serverOrderIP3;

        System.assert(serverOrderIP1.equals(serverOrderIP2));
        System.assert(serverOrderIP2.equals(serverOrderIP1));
        System.assert(serverOrderIP1.equals(serverOrderIP1));
        System.assert(serverOrderIP3.equals(serverOrderIP4));
        System.assert(serverOrderIP4.equals(serverOrderIP3));
        System.assert(serverOrderIP3.equals(serverOrderIP3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServerOrderIP serverOrderIP1 = OASServerOrderIP.getExample();
        OASServerOrderIP serverOrderIP2 = OASServerOrderIP.getExample();
        OASServerOrderIP serverOrderIP3 = new OASServerOrderIP();
        OASServerOrderIP serverOrderIP4 = new OASServerOrderIP();

        System.assert(serverOrderIP1.equals(serverOrderIP2));
        System.assert(serverOrderIP2.equals(serverOrderIP1));
        System.assert(serverOrderIP3.equals(serverOrderIP4));
        System.assert(serverOrderIP4.equals(serverOrderIP3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServerOrderIP serverOrderIP1 = OASServerOrderIP.getExample();
        OASServerOrderIP serverOrderIP2 = new OASServerOrderIP();

        System.assertEquals(false, serverOrderIP1.equals('foo'));
        System.assertEquals(false, serverOrderIP2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServerOrderIP serverOrderIP1 = OASServerOrderIP.getExample();
        OASServerOrderIP serverOrderIP2 = new OASServerOrderIP();
        OASServerOrderIP serverOrderIP3;

        System.assertEquals(false, serverOrderIP1.equals(serverOrderIP3));
        System.assertEquals(false, serverOrderIP2.equals(serverOrderIP3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServerOrderIP serverOrderIP1 = OASServerOrderIP.getExample();
        OASServerOrderIP serverOrderIP2 = new OASServerOrderIP();

        System.assertEquals(serverOrderIP1.hashCode(), serverOrderIP1.hashCode());
        System.assertEquals(serverOrderIP2.hashCode(), serverOrderIP2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServerOrderIP serverOrderIP1 = OASServerOrderIP.getExample();
        OASServerOrderIP serverOrderIP2 = OASServerOrderIP.getExample();
        OASServerOrderIP serverOrderIP3 = new OASServerOrderIP();
        OASServerOrderIP serverOrderIP4 = new OASServerOrderIP();

        System.assert(serverOrderIP1.equals(serverOrderIP2));
        System.assert(serverOrderIP3.equals(serverOrderIP4));
        System.assertEquals(serverOrderIP1.hashCode(), serverOrderIP2.hashCode());
        System.assertEquals(serverOrderIP3.hashCode(), serverOrderIP4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASServerOrderIP serverOrderIP = new OASServerOrderIP();
        Map<String, String> x-property-mappings = serverOrderIP.getx-property-mappings();
        System.assertEquals('shortDesc', x-property-mappings.get('short_desc'));
        System.assertEquals('longDesc', x-property-mappings.get('long_desc'));
        System.assertEquals('monthlyPrice', x-property-mappings.get('monthly_price'));
        System.assertEquals('priceDisplay', x-property-mappings.get('price_display'));
        System.assertEquals('monthlyPriceDisplay', x-property-mappings.get('monthly_price_display'));
    }
}
