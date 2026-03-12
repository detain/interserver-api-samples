@isTest
private class OASBuyItNowServerOrder200ResponseIpsTest {
    @isTest
    private static void equalsSameInstance() {
        OASBuyItNowServerOrder200ResponseIps buyItNowServerOrder200ResponseIpsInner1 = OASBuyItNowServerOrder200ResponseIps.getExample();
        OASBuyItNowServerOrder200ResponseIps buyItNowServerOrder200ResponseIpsInner2 = buyItNowServerOrder200ResponseIpsInner1;
        OASBuyItNowServerOrder200ResponseIps buyItNowServerOrder200ResponseIpsInner3 = new OASBuyItNowServerOrder200ResponseIps();
        OASBuyItNowServerOrder200ResponseIps buyItNowServerOrder200ResponseIpsInner4 = buyItNowServerOrder200ResponseIpsInner3;

        System.assert(buyItNowServerOrder200ResponseIpsInner1.equals(buyItNowServerOrder200ResponseIpsInner2));
        System.assert(buyItNowServerOrder200ResponseIpsInner2.equals(buyItNowServerOrder200ResponseIpsInner1));
        System.assert(buyItNowServerOrder200ResponseIpsInner1.equals(buyItNowServerOrder200ResponseIpsInner1));
        System.assert(buyItNowServerOrder200ResponseIpsInner3.equals(buyItNowServerOrder200ResponseIpsInner4));
        System.assert(buyItNowServerOrder200ResponseIpsInner4.equals(buyItNowServerOrder200ResponseIpsInner3));
        System.assert(buyItNowServerOrder200ResponseIpsInner3.equals(buyItNowServerOrder200ResponseIpsInner3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASBuyItNowServerOrder200ResponseIps buyItNowServerOrder200ResponseIpsInner1 = OASBuyItNowServerOrder200ResponseIps.getExample();
        OASBuyItNowServerOrder200ResponseIps buyItNowServerOrder200ResponseIpsInner2 = OASBuyItNowServerOrder200ResponseIps.getExample();
        OASBuyItNowServerOrder200ResponseIps buyItNowServerOrder200ResponseIpsInner3 = new OASBuyItNowServerOrder200ResponseIps();
        OASBuyItNowServerOrder200ResponseIps buyItNowServerOrder200ResponseIpsInner4 = new OASBuyItNowServerOrder200ResponseIps();

        System.assert(buyItNowServerOrder200ResponseIpsInner1.equals(buyItNowServerOrder200ResponseIpsInner2));
        System.assert(buyItNowServerOrder200ResponseIpsInner2.equals(buyItNowServerOrder200ResponseIpsInner1));
        System.assert(buyItNowServerOrder200ResponseIpsInner3.equals(buyItNowServerOrder200ResponseIpsInner4));
        System.assert(buyItNowServerOrder200ResponseIpsInner4.equals(buyItNowServerOrder200ResponseIpsInner3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASBuyItNowServerOrder200ResponseIps buyItNowServerOrder200ResponseIpsInner1 = OASBuyItNowServerOrder200ResponseIps.getExample();
        OASBuyItNowServerOrder200ResponseIps buyItNowServerOrder200ResponseIpsInner2 = new OASBuyItNowServerOrder200ResponseIps();

        System.assertEquals(false, buyItNowServerOrder200ResponseIpsInner1.equals('foo'));
        System.assertEquals(false, buyItNowServerOrder200ResponseIpsInner2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASBuyItNowServerOrder200ResponseIps buyItNowServerOrder200ResponseIpsInner1 = OASBuyItNowServerOrder200ResponseIps.getExample();
        OASBuyItNowServerOrder200ResponseIps buyItNowServerOrder200ResponseIpsInner2 = new OASBuyItNowServerOrder200ResponseIps();
        OASBuyItNowServerOrder200ResponseIps buyItNowServerOrder200ResponseIpsInner3;

        System.assertEquals(false, buyItNowServerOrder200ResponseIpsInner1.equals(buyItNowServerOrder200ResponseIpsInner3));
        System.assertEquals(false, buyItNowServerOrder200ResponseIpsInner2.equals(buyItNowServerOrder200ResponseIpsInner3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASBuyItNowServerOrder200ResponseIps buyItNowServerOrder200ResponseIpsInner1 = OASBuyItNowServerOrder200ResponseIps.getExample();
        OASBuyItNowServerOrder200ResponseIps buyItNowServerOrder200ResponseIpsInner2 = new OASBuyItNowServerOrder200ResponseIps();

        System.assertEquals(buyItNowServerOrder200ResponseIpsInner1.hashCode(), buyItNowServerOrder200ResponseIpsInner1.hashCode());
        System.assertEquals(buyItNowServerOrder200ResponseIpsInner2.hashCode(), buyItNowServerOrder200ResponseIpsInner2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASBuyItNowServerOrder200ResponseIps buyItNowServerOrder200ResponseIpsInner1 = OASBuyItNowServerOrder200ResponseIps.getExample();
        OASBuyItNowServerOrder200ResponseIps buyItNowServerOrder200ResponseIpsInner2 = OASBuyItNowServerOrder200ResponseIps.getExample();
        OASBuyItNowServerOrder200ResponseIps buyItNowServerOrder200ResponseIpsInner3 = new OASBuyItNowServerOrder200ResponseIps();
        OASBuyItNowServerOrder200ResponseIps buyItNowServerOrder200ResponseIpsInner4 = new OASBuyItNowServerOrder200ResponseIps();

        System.assert(buyItNowServerOrder200ResponseIpsInner1.equals(buyItNowServerOrder200ResponseIpsInner2));
        System.assert(buyItNowServerOrder200ResponseIpsInner3.equals(buyItNowServerOrder200ResponseIpsInner4));
        System.assertEquals(buyItNowServerOrder200ResponseIpsInner1.hashCode(), buyItNowServerOrder200ResponseIpsInner2.hashCode());
        System.assertEquals(buyItNowServerOrder200ResponseIpsInner3.hashCode(), buyItNowServerOrder200ResponseIpsInner4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASBuyItNowServerOrder200ResponseIps buyItNowServerOrder200ResponseIpsInner = new OASBuyItNowServerOrder200ResponseIps();
        Map<String, String> x-property-mappings = buyItNowServerOrder200ResponseIpsInner.getx-property-mappings();
        System.assertEquals('shortDesc', x-property-mappings.get('short_desc'));
        System.assertEquals('longDesc', x-property-mappings.get('long_desc'));
        System.assertEquals('monthlyPrice', x-property-mappings.get('monthly_price'));
    }
}
