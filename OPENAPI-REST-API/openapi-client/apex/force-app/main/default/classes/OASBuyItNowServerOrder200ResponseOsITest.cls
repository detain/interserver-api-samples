@isTest
private class OASBuyItNowServerOrder200ResponseOsITest {
    @isTest
    private static void equalsSameInstance() {
        OASBuyItNowServerOrder200ResponseOsI buyItNowServerOrder200ResponseOsInner1 = OASBuyItNowServerOrder200ResponseOsI.getExample();
        OASBuyItNowServerOrder200ResponseOsI buyItNowServerOrder200ResponseOsInner2 = buyItNowServerOrder200ResponseOsInner1;
        OASBuyItNowServerOrder200ResponseOsI buyItNowServerOrder200ResponseOsInner3 = new OASBuyItNowServerOrder200ResponseOsI();
        OASBuyItNowServerOrder200ResponseOsI buyItNowServerOrder200ResponseOsInner4 = buyItNowServerOrder200ResponseOsInner3;

        System.assert(buyItNowServerOrder200ResponseOsInner1.equals(buyItNowServerOrder200ResponseOsInner2));
        System.assert(buyItNowServerOrder200ResponseOsInner2.equals(buyItNowServerOrder200ResponseOsInner1));
        System.assert(buyItNowServerOrder200ResponseOsInner1.equals(buyItNowServerOrder200ResponseOsInner1));
        System.assert(buyItNowServerOrder200ResponseOsInner3.equals(buyItNowServerOrder200ResponseOsInner4));
        System.assert(buyItNowServerOrder200ResponseOsInner4.equals(buyItNowServerOrder200ResponseOsInner3));
        System.assert(buyItNowServerOrder200ResponseOsInner3.equals(buyItNowServerOrder200ResponseOsInner3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASBuyItNowServerOrder200ResponseOsI buyItNowServerOrder200ResponseOsInner1 = OASBuyItNowServerOrder200ResponseOsI.getExample();
        OASBuyItNowServerOrder200ResponseOsI buyItNowServerOrder200ResponseOsInner2 = OASBuyItNowServerOrder200ResponseOsI.getExample();
        OASBuyItNowServerOrder200ResponseOsI buyItNowServerOrder200ResponseOsInner3 = new OASBuyItNowServerOrder200ResponseOsI();
        OASBuyItNowServerOrder200ResponseOsI buyItNowServerOrder200ResponseOsInner4 = new OASBuyItNowServerOrder200ResponseOsI();

        System.assert(buyItNowServerOrder200ResponseOsInner1.equals(buyItNowServerOrder200ResponseOsInner2));
        System.assert(buyItNowServerOrder200ResponseOsInner2.equals(buyItNowServerOrder200ResponseOsInner1));
        System.assert(buyItNowServerOrder200ResponseOsInner3.equals(buyItNowServerOrder200ResponseOsInner4));
        System.assert(buyItNowServerOrder200ResponseOsInner4.equals(buyItNowServerOrder200ResponseOsInner3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASBuyItNowServerOrder200ResponseOsI buyItNowServerOrder200ResponseOsInner1 = OASBuyItNowServerOrder200ResponseOsI.getExample();
        OASBuyItNowServerOrder200ResponseOsI buyItNowServerOrder200ResponseOsInner2 = new OASBuyItNowServerOrder200ResponseOsI();

        System.assertEquals(false, buyItNowServerOrder200ResponseOsInner1.equals('foo'));
        System.assertEquals(false, buyItNowServerOrder200ResponseOsInner2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASBuyItNowServerOrder200ResponseOsI buyItNowServerOrder200ResponseOsInner1 = OASBuyItNowServerOrder200ResponseOsI.getExample();
        OASBuyItNowServerOrder200ResponseOsI buyItNowServerOrder200ResponseOsInner2 = new OASBuyItNowServerOrder200ResponseOsI();
        OASBuyItNowServerOrder200ResponseOsI buyItNowServerOrder200ResponseOsInner3;

        System.assertEquals(false, buyItNowServerOrder200ResponseOsInner1.equals(buyItNowServerOrder200ResponseOsInner3));
        System.assertEquals(false, buyItNowServerOrder200ResponseOsInner2.equals(buyItNowServerOrder200ResponseOsInner3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASBuyItNowServerOrder200ResponseOsI buyItNowServerOrder200ResponseOsInner1 = OASBuyItNowServerOrder200ResponseOsI.getExample();
        OASBuyItNowServerOrder200ResponseOsI buyItNowServerOrder200ResponseOsInner2 = new OASBuyItNowServerOrder200ResponseOsI();

        System.assertEquals(buyItNowServerOrder200ResponseOsInner1.hashCode(), buyItNowServerOrder200ResponseOsInner1.hashCode());
        System.assertEquals(buyItNowServerOrder200ResponseOsInner2.hashCode(), buyItNowServerOrder200ResponseOsInner2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASBuyItNowServerOrder200ResponseOsI buyItNowServerOrder200ResponseOsInner1 = OASBuyItNowServerOrder200ResponseOsI.getExample();
        OASBuyItNowServerOrder200ResponseOsI buyItNowServerOrder200ResponseOsInner2 = OASBuyItNowServerOrder200ResponseOsI.getExample();
        OASBuyItNowServerOrder200ResponseOsI buyItNowServerOrder200ResponseOsInner3 = new OASBuyItNowServerOrder200ResponseOsI();
        OASBuyItNowServerOrder200ResponseOsI buyItNowServerOrder200ResponseOsInner4 = new OASBuyItNowServerOrder200ResponseOsI();

        System.assert(buyItNowServerOrder200ResponseOsInner1.equals(buyItNowServerOrder200ResponseOsInner2));
        System.assert(buyItNowServerOrder200ResponseOsInner3.equals(buyItNowServerOrder200ResponseOsInner4));
        System.assertEquals(buyItNowServerOrder200ResponseOsInner1.hashCode(), buyItNowServerOrder200ResponseOsInner2.hashCode());
        System.assertEquals(buyItNowServerOrder200ResponseOsInner3.hashCode(), buyItNowServerOrder200ResponseOsInner4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASBuyItNowServerOrder200ResponseOsI buyItNowServerOrder200ResponseOsInner = new OASBuyItNowServerOrder200ResponseOsI();
        Map<String, String> x-property-mappings = buyItNowServerOrder200ResponseOsInner.getx-property-mappings();
        System.assertEquals('shortDesc', x-property-mappings.get('short_desc'));
        System.assertEquals('longDesc', x-property-mappings.get('long_desc'));
        System.assertEquals('monthlyPrice', x-property-mappings.get('monthly_price'));
    }
}
