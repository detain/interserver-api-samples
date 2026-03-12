@isTest
private class OASBuyItNowServerOrder200ResponseCpITest {
    @isTest
    private static void equalsSameInstance() {
        OASBuyItNowServerOrder200ResponseCpI buyItNowServerOrder200ResponseCpInner1 = OASBuyItNowServerOrder200ResponseCpI.getExample();
        OASBuyItNowServerOrder200ResponseCpI buyItNowServerOrder200ResponseCpInner2 = buyItNowServerOrder200ResponseCpInner1;
        OASBuyItNowServerOrder200ResponseCpI buyItNowServerOrder200ResponseCpInner3 = new OASBuyItNowServerOrder200ResponseCpI();
        OASBuyItNowServerOrder200ResponseCpI buyItNowServerOrder200ResponseCpInner4 = buyItNowServerOrder200ResponseCpInner3;

        System.assert(buyItNowServerOrder200ResponseCpInner1.equals(buyItNowServerOrder200ResponseCpInner2));
        System.assert(buyItNowServerOrder200ResponseCpInner2.equals(buyItNowServerOrder200ResponseCpInner1));
        System.assert(buyItNowServerOrder200ResponseCpInner1.equals(buyItNowServerOrder200ResponseCpInner1));
        System.assert(buyItNowServerOrder200ResponseCpInner3.equals(buyItNowServerOrder200ResponseCpInner4));
        System.assert(buyItNowServerOrder200ResponseCpInner4.equals(buyItNowServerOrder200ResponseCpInner3));
        System.assert(buyItNowServerOrder200ResponseCpInner3.equals(buyItNowServerOrder200ResponseCpInner3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASBuyItNowServerOrder200ResponseCpI buyItNowServerOrder200ResponseCpInner1 = OASBuyItNowServerOrder200ResponseCpI.getExample();
        OASBuyItNowServerOrder200ResponseCpI buyItNowServerOrder200ResponseCpInner2 = OASBuyItNowServerOrder200ResponseCpI.getExample();
        OASBuyItNowServerOrder200ResponseCpI buyItNowServerOrder200ResponseCpInner3 = new OASBuyItNowServerOrder200ResponseCpI();
        OASBuyItNowServerOrder200ResponseCpI buyItNowServerOrder200ResponseCpInner4 = new OASBuyItNowServerOrder200ResponseCpI();

        System.assert(buyItNowServerOrder200ResponseCpInner1.equals(buyItNowServerOrder200ResponseCpInner2));
        System.assert(buyItNowServerOrder200ResponseCpInner2.equals(buyItNowServerOrder200ResponseCpInner1));
        System.assert(buyItNowServerOrder200ResponseCpInner3.equals(buyItNowServerOrder200ResponseCpInner4));
        System.assert(buyItNowServerOrder200ResponseCpInner4.equals(buyItNowServerOrder200ResponseCpInner3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASBuyItNowServerOrder200ResponseCpI buyItNowServerOrder200ResponseCpInner1 = OASBuyItNowServerOrder200ResponseCpI.getExample();
        OASBuyItNowServerOrder200ResponseCpI buyItNowServerOrder200ResponseCpInner2 = new OASBuyItNowServerOrder200ResponseCpI();

        System.assertEquals(false, buyItNowServerOrder200ResponseCpInner1.equals('foo'));
        System.assertEquals(false, buyItNowServerOrder200ResponseCpInner2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASBuyItNowServerOrder200ResponseCpI buyItNowServerOrder200ResponseCpInner1 = OASBuyItNowServerOrder200ResponseCpI.getExample();
        OASBuyItNowServerOrder200ResponseCpI buyItNowServerOrder200ResponseCpInner2 = new OASBuyItNowServerOrder200ResponseCpI();
        OASBuyItNowServerOrder200ResponseCpI buyItNowServerOrder200ResponseCpInner3;

        System.assertEquals(false, buyItNowServerOrder200ResponseCpInner1.equals(buyItNowServerOrder200ResponseCpInner3));
        System.assertEquals(false, buyItNowServerOrder200ResponseCpInner2.equals(buyItNowServerOrder200ResponseCpInner3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASBuyItNowServerOrder200ResponseCpI buyItNowServerOrder200ResponseCpInner1 = OASBuyItNowServerOrder200ResponseCpI.getExample();
        OASBuyItNowServerOrder200ResponseCpI buyItNowServerOrder200ResponseCpInner2 = new OASBuyItNowServerOrder200ResponseCpI();

        System.assertEquals(buyItNowServerOrder200ResponseCpInner1.hashCode(), buyItNowServerOrder200ResponseCpInner1.hashCode());
        System.assertEquals(buyItNowServerOrder200ResponseCpInner2.hashCode(), buyItNowServerOrder200ResponseCpInner2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASBuyItNowServerOrder200ResponseCpI buyItNowServerOrder200ResponseCpInner1 = OASBuyItNowServerOrder200ResponseCpI.getExample();
        OASBuyItNowServerOrder200ResponseCpI buyItNowServerOrder200ResponseCpInner2 = OASBuyItNowServerOrder200ResponseCpI.getExample();
        OASBuyItNowServerOrder200ResponseCpI buyItNowServerOrder200ResponseCpInner3 = new OASBuyItNowServerOrder200ResponseCpI();
        OASBuyItNowServerOrder200ResponseCpI buyItNowServerOrder200ResponseCpInner4 = new OASBuyItNowServerOrder200ResponseCpI();

        System.assert(buyItNowServerOrder200ResponseCpInner1.equals(buyItNowServerOrder200ResponseCpInner2));
        System.assert(buyItNowServerOrder200ResponseCpInner3.equals(buyItNowServerOrder200ResponseCpInner4));
        System.assertEquals(buyItNowServerOrder200ResponseCpInner1.hashCode(), buyItNowServerOrder200ResponseCpInner2.hashCode());
        System.assertEquals(buyItNowServerOrder200ResponseCpInner3.hashCode(), buyItNowServerOrder200ResponseCpInner4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASBuyItNowServerOrder200ResponseCpI buyItNowServerOrder200ResponseCpInner = new OASBuyItNowServerOrder200ResponseCpI();
        Map<String, String> x-property-mappings = buyItNowServerOrder200ResponseCpInner.getx-property-mappings();
        System.assertEquals('shortDesc', x-property-mappings.get('short_desc'));
        System.assertEquals('longDesc', x-property-mappings.get('long_desc'));
        System.assertEquals('osType', x-property-mappings.get('os_type'));
        System.assertEquals('monthlyPrice', x-property-mappings.get('monthly_price'));
    }
}
