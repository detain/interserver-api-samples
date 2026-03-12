@isTest
private class OASBuyItNowServerOrder200ResponseRaiTest {
    @isTest
    private static void equalsSameInstance() {
        OASBuyItNowServerOrder200ResponseRai buyItNowServerOrder200ResponseRaidInner1 = OASBuyItNowServerOrder200ResponseRai.getExample();
        OASBuyItNowServerOrder200ResponseRai buyItNowServerOrder200ResponseRaidInner2 = buyItNowServerOrder200ResponseRaidInner1;
        OASBuyItNowServerOrder200ResponseRai buyItNowServerOrder200ResponseRaidInner3 = new OASBuyItNowServerOrder200ResponseRai();
        OASBuyItNowServerOrder200ResponseRai buyItNowServerOrder200ResponseRaidInner4 = buyItNowServerOrder200ResponseRaidInner3;

        System.assert(buyItNowServerOrder200ResponseRaidInner1.equals(buyItNowServerOrder200ResponseRaidInner2));
        System.assert(buyItNowServerOrder200ResponseRaidInner2.equals(buyItNowServerOrder200ResponseRaidInner1));
        System.assert(buyItNowServerOrder200ResponseRaidInner1.equals(buyItNowServerOrder200ResponseRaidInner1));
        System.assert(buyItNowServerOrder200ResponseRaidInner3.equals(buyItNowServerOrder200ResponseRaidInner4));
        System.assert(buyItNowServerOrder200ResponseRaidInner4.equals(buyItNowServerOrder200ResponseRaidInner3));
        System.assert(buyItNowServerOrder200ResponseRaidInner3.equals(buyItNowServerOrder200ResponseRaidInner3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASBuyItNowServerOrder200ResponseRai buyItNowServerOrder200ResponseRaidInner1 = OASBuyItNowServerOrder200ResponseRai.getExample();
        OASBuyItNowServerOrder200ResponseRai buyItNowServerOrder200ResponseRaidInner2 = OASBuyItNowServerOrder200ResponseRai.getExample();
        OASBuyItNowServerOrder200ResponseRai buyItNowServerOrder200ResponseRaidInner3 = new OASBuyItNowServerOrder200ResponseRai();
        OASBuyItNowServerOrder200ResponseRai buyItNowServerOrder200ResponseRaidInner4 = new OASBuyItNowServerOrder200ResponseRai();

        System.assert(buyItNowServerOrder200ResponseRaidInner1.equals(buyItNowServerOrder200ResponseRaidInner2));
        System.assert(buyItNowServerOrder200ResponseRaidInner2.equals(buyItNowServerOrder200ResponseRaidInner1));
        System.assert(buyItNowServerOrder200ResponseRaidInner3.equals(buyItNowServerOrder200ResponseRaidInner4));
        System.assert(buyItNowServerOrder200ResponseRaidInner4.equals(buyItNowServerOrder200ResponseRaidInner3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASBuyItNowServerOrder200ResponseRai buyItNowServerOrder200ResponseRaidInner1 = OASBuyItNowServerOrder200ResponseRai.getExample();
        OASBuyItNowServerOrder200ResponseRai buyItNowServerOrder200ResponseRaidInner2 = new OASBuyItNowServerOrder200ResponseRai();

        System.assertEquals(false, buyItNowServerOrder200ResponseRaidInner1.equals('foo'));
        System.assertEquals(false, buyItNowServerOrder200ResponseRaidInner2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASBuyItNowServerOrder200ResponseRai buyItNowServerOrder200ResponseRaidInner1 = OASBuyItNowServerOrder200ResponseRai.getExample();
        OASBuyItNowServerOrder200ResponseRai buyItNowServerOrder200ResponseRaidInner2 = new OASBuyItNowServerOrder200ResponseRai();
        OASBuyItNowServerOrder200ResponseRai buyItNowServerOrder200ResponseRaidInner3;

        System.assertEquals(false, buyItNowServerOrder200ResponseRaidInner1.equals(buyItNowServerOrder200ResponseRaidInner3));
        System.assertEquals(false, buyItNowServerOrder200ResponseRaidInner2.equals(buyItNowServerOrder200ResponseRaidInner3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASBuyItNowServerOrder200ResponseRai buyItNowServerOrder200ResponseRaidInner1 = OASBuyItNowServerOrder200ResponseRai.getExample();
        OASBuyItNowServerOrder200ResponseRai buyItNowServerOrder200ResponseRaidInner2 = new OASBuyItNowServerOrder200ResponseRai();

        System.assertEquals(buyItNowServerOrder200ResponseRaidInner1.hashCode(), buyItNowServerOrder200ResponseRaidInner1.hashCode());
        System.assertEquals(buyItNowServerOrder200ResponseRaidInner2.hashCode(), buyItNowServerOrder200ResponseRaidInner2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASBuyItNowServerOrder200ResponseRai buyItNowServerOrder200ResponseRaidInner1 = OASBuyItNowServerOrder200ResponseRai.getExample();
        OASBuyItNowServerOrder200ResponseRai buyItNowServerOrder200ResponseRaidInner2 = OASBuyItNowServerOrder200ResponseRai.getExample();
        OASBuyItNowServerOrder200ResponseRai buyItNowServerOrder200ResponseRaidInner3 = new OASBuyItNowServerOrder200ResponseRai();
        OASBuyItNowServerOrder200ResponseRai buyItNowServerOrder200ResponseRaidInner4 = new OASBuyItNowServerOrder200ResponseRai();

        System.assert(buyItNowServerOrder200ResponseRaidInner1.equals(buyItNowServerOrder200ResponseRaidInner2));
        System.assert(buyItNowServerOrder200ResponseRaidInner3.equals(buyItNowServerOrder200ResponseRaidInner4));
        System.assertEquals(buyItNowServerOrder200ResponseRaidInner1.hashCode(), buyItNowServerOrder200ResponseRaidInner2.hashCode());
        System.assertEquals(buyItNowServerOrder200ResponseRaidInner3.hashCode(), buyItNowServerOrder200ResponseRaidInner4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASBuyItNowServerOrder200ResponseRai buyItNowServerOrder200ResponseRaidInner = new OASBuyItNowServerOrder200ResponseRai();
        Map<String, String> x-property-mappings = buyItNowServerOrder200ResponseRaidInner.getx-property-mappings();
        System.assertEquals('shortDesc', x-property-mappings.get('short_desc'));
        System.assertEquals('longDesc', x-property-mappings.get('long_desc'));
        System.assertEquals('monthlyPrice', x-property-mappings.get('monthly_price'));
    }
}
