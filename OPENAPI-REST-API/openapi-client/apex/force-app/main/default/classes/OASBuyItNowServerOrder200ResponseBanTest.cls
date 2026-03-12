@isTest
private class OASBuyItNowServerOrder200ResponseBanTest {
    @isTest
    private static void equalsSameInstance() {
        OASBuyItNowServerOrder200ResponseBan buyItNowServerOrder200ResponseBandwidthInner1 = OASBuyItNowServerOrder200ResponseBan.getExample();
        OASBuyItNowServerOrder200ResponseBan buyItNowServerOrder200ResponseBandwidthInner2 = buyItNowServerOrder200ResponseBandwidthInner1;
        OASBuyItNowServerOrder200ResponseBan buyItNowServerOrder200ResponseBandwidthInner3 = new OASBuyItNowServerOrder200ResponseBan();
        OASBuyItNowServerOrder200ResponseBan buyItNowServerOrder200ResponseBandwidthInner4 = buyItNowServerOrder200ResponseBandwidthInner3;

        System.assert(buyItNowServerOrder200ResponseBandwidthInner1.equals(buyItNowServerOrder200ResponseBandwidthInner2));
        System.assert(buyItNowServerOrder200ResponseBandwidthInner2.equals(buyItNowServerOrder200ResponseBandwidthInner1));
        System.assert(buyItNowServerOrder200ResponseBandwidthInner1.equals(buyItNowServerOrder200ResponseBandwidthInner1));
        System.assert(buyItNowServerOrder200ResponseBandwidthInner3.equals(buyItNowServerOrder200ResponseBandwidthInner4));
        System.assert(buyItNowServerOrder200ResponseBandwidthInner4.equals(buyItNowServerOrder200ResponseBandwidthInner3));
        System.assert(buyItNowServerOrder200ResponseBandwidthInner3.equals(buyItNowServerOrder200ResponseBandwidthInner3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASBuyItNowServerOrder200ResponseBan buyItNowServerOrder200ResponseBandwidthInner1 = OASBuyItNowServerOrder200ResponseBan.getExample();
        OASBuyItNowServerOrder200ResponseBan buyItNowServerOrder200ResponseBandwidthInner2 = OASBuyItNowServerOrder200ResponseBan.getExample();
        OASBuyItNowServerOrder200ResponseBan buyItNowServerOrder200ResponseBandwidthInner3 = new OASBuyItNowServerOrder200ResponseBan();
        OASBuyItNowServerOrder200ResponseBan buyItNowServerOrder200ResponseBandwidthInner4 = new OASBuyItNowServerOrder200ResponseBan();

        System.assert(buyItNowServerOrder200ResponseBandwidthInner1.equals(buyItNowServerOrder200ResponseBandwidthInner2));
        System.assert(buyItNowServerOrder200ResponseBandwidthInner2.equals(buyItNowServerOrder200ResponseBandwidthInner1));
        System.assert(buyItNowServerOrder200ResponseBandwidthInner3.equals(buyItNowServerOrder200ResponseBandwidthInner4));
        System.assert(buyItNowServerOrder200ResponseBandwidthInner4.equals(buyItNowServerOrder200ResponseBandwidthInner3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASBuyItNowServerOrder200ResponseBan buyItNowServerOrder200ResponseBandwidthInner1 = OASBuyItNowServerOrder200ResponseBan.getExample();
        OASBuyItNowServerOrder200ResponseBan buyItNowServerOrder200ResponseBandwidthInner2 = new OASBuyItNowServerOrder200ResponseBan();

        System.assertEquals(false, buyItNowServerOrder200ResponseBandwidthInner1.equals('foo'));
        System.assertEquals(false, buyItNowServerOrder200ResponseBandwidthInner2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASBuyItNowServerOrder200ResponseBan buyItNowServerOrder200ResponseBandwidthInner1 = OASBuyItNowServerOrder200ResponseBan.getExample();
        OASBuyItNowServerOrder200ResponseBan buyItNowServerOrder200ResponseBandwidthInner2 = new OASBuyItNowServerOrder200ResponseBan();
        OASBuyItNowServerOrder200ResponseBan buyItNowServerOrder200ResponseBandwidthInner3;

        System.assertEquals(false, buyItNowServerOrder200ResponseBandwidthInner1.equals(buyItNowServerOrder200ResponseBandwidthInner3));
        System.assertEquals(false, buyItNowServerOrder200ResponseBandwidthInner2.equals(buyItNowServerOrder200ResponseBandwidthInner3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASBuyItNowServerOrder200ResponseBan buyItNowServerOrder200ResponseBandwidthInner1 = OASBuyItNowServerOrder200ResponseBan.getExample();
        OASBuyItNowServerOrder200ResponseBan buyItNowServerOrder200ResponseBandwidthInner2 = new OASBuyItNowServerOrder200ResponseBan();

        System.assertEquals(buyItNowServerOrder200ResponseBandwidthInner1.hashCode(), buyItNowServerOrder200ResponseBandwidthInner1.hashCode());
        System.assertEquals(buyItNowServerOrder200ResponseBandwidthInner2.hashCode(), buyItNowServerOrder200ResponseBandwidthInner2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASBuyItNowServerOrder200ResponseBan buyItNowServerOrder200ResponseBandwidthInner1 = OASBuyItNowServerOrder200ResponseBan.getExample();
        OASBuyItNowServerOrder200ResponseBan buyItNowServerOrder200ResponseBandwidthInner2 = OASBuyItNowServerOrder200ResponseBan.getExample();
        OASBuyItNowServerOrder200ResponseBan buyItNowServerOrder200ResponseBandwidthInner3 = new OASBuyItNowServerOrder200ResponseBan();
        OASBuyItNowServerOrder200ResponseBan buyItNowServerOrder200ResponseBandwidthInner4 = new OASBuyItNowServerOrder200ResponseBan();

        System.assert(buyItNowServerOrder200ResponseBandwidthInner1.equals(buyItNowServerOrder200ResponseBandwidthInner2));
        System.assert(buyItNowServerOrder200ResponseBandwidthInner3.equals(buyItNowServerOrder200ResponseBandwidthInner4));
        System.assertEquals(buyItNowServerOrder200ResponseBandwidthInner1.hashCode(), buyItNowServerOrder200ResponseBandwidthInner2.hashCode());
        System.assertEquals(buyItNowServerOrder200ResponseBandwidthInner3.hashCode(), buyItNowServerOrder200ResponseBandwidthInner4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASBuyItNowServerOrder200ResponseBan buyItNowServerOrder200ResponseBandwidthInner = new OASBuyItNowServerOrder200ResponseBan();
        Map<String, String> x-property-mappings = buyItNowServerOrder200ResponseBandwidthInner.getx-property-mappings();
        System.assertEquals('shortDesc', x-property-mappings.get('short_desc'));
        System.assertEquals('longDesc', x-property-mappings.get('long_desc'));
        System.assertEquals('monthlyPrice', x-property-mappings.get('monthly_price'));
    }
}
