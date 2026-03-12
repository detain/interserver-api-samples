@isTest
private class OASBuyItNowServerOrder200ResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASBuyItNowServerOrder200Response buyItNowServerOrder200Response1 = OASBuyItNowServerOrder200Response.getExample();
        OASBuyItNowServerOrder200Response buyItNowServerOrder200Response2 = buyItNowServerOrder200Response1;
        OASBuyItNowServerOrder200Response buyItNowServerOrder200Response3 = new OASBuyItNowServerOrder200Response();
        OASBuyItNowServerOrder200Response buyItNowServerOrder200Response4 = buyItNowServerOrder200Response3;

        System.assert(buyItNowServerOrder200Response1.equals(buyItNowServerOrder200Response2));
        System.assert(buyItNowServerOrder200Response2.equals(buyItNowServerOrder200Response1));
        System.assert(buyItNowServerOrder200Response1.equals(buyItNowServerOrder200Response1));
        System.assert(buyItNowServerOrder200Response3.equals(buyItNowServerOrder200Response4));
        System.assert(buyItNowServerOrder200Response4.equals(buyItNowServerOrder200Response3));
        System.assert(buyItNowServerOrder200Response3.equals(buyItNowServerOrder200Response3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASBuyItNowServerOrder200Response buyItNowServerOrder200Response1 = OASBuyItNowServerOrder200Response.getExample();
        OASBuyItNowServerOrder200Response buyItNowServerOrder200Response2 = OASBuyItNowServerOrder200Response.getExample();
        OASBuyItNowServerOrder200Response buyItNowServerOrder200Response3 = new OASBuyItNowServerOrder200Response();
        OASBuyItNowServerOrder200Response buyItNowServerOrder200Response4 = new OASBuyItNowServerOrder200Response();

        System.assert(buyItNowServerOrder200Response1.equals(buyItNowServerOrder200Response2));
        System.assert(buyItNowServerOrder200Response2.equals(buyItNowServerOrder200Response1));
        System.assert(buyItNowServerOrder200Response3.equals(buyItNowServerOrder200Response4));
        System.assert(buyItNowServerOrder200Response4.equals(buyItNowServerOrder200Response3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASBuyItNowServerOrder200Response buyItNowServerOrder200Response1 = OASBuyItNowServerOrder200Response.getExample();
        OASBuyItNowServerOrder200Response buyItNowServerOrder200Response2 = new OASBuyItNowServerOrder200Response();

        System.assertEquals(false, buyItNowServerOrder200Response1.equals('foo'));
        System.assertEquals(false, buyItNowServerOrder200Response2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASBuyItNowServerOrder200Response buyItNowServerOrder200Response1 = OASBuyItNowServerOrder200Response.getExample();
        OASBuyItNowServerOrder200Response buyItNowServerOrder200Response2 = new OASBuyItNowServerOrder200Response();
        OASBuyItNowServerOrder200Response buyItNowServerOrder200Response3;

        System.assertEquals(false, buyItNowServerOrder200Response1.equals(buyItNowServerOrder200Response3));
        System.assertEquals(false, buyItNowServerOrder200Response2.equals(buyItNowServerOrder200Response3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASBuyItNowServerOrder200Response buyItNowServerOrder200Response1 = OASBuyItNowServerOrder200Response.getExample();
        OASBuyItNowServerOrder200Response buyItNowServerOrder200Response2 = new OASBuyItNowServerOrder200Response();

        System.assertEquals(buyItNowServerOrder200Response1.hashCode(), buyItNowServerOrder200Response1.hashCode());
        System.assertEquals(buyItNowServerOrder200Response2.hashCode(), buyItNowServerOrder200Response2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASBuyItNowServerOrder200Response buyItNowServerOrder200Response1 = OASBuyItNowServerOrder200Response.getExample();
        OASBuyItNowServerOrder200Response buyItNowServerOrder200Response2 = OASBuyItNowServerOrder200Response.getExample();
        OASBuyItNowServerOrder200Response buyItNowServerOrder200Response3 = new OASBuyItNowServerOrder200Response();
        OASBuyItNowServerOrder200Response buyItNowServerOrder200Response4 = new OASBuyItNowServerOrder200Response();

        System.assert(buyItNowServerOrder200Response1.equals(buyItNowServerOrder200Response2));
        System.assert(buyItNowServerOrder200Response3.equals(buyItNowServerOrder200Response4));
        System.assertEquals(buyItNowServerOrder200Response1.hashCode(), buyItNowServerOrder200Response2.hashCode());
        System.assertEquals(buyItNowServerOrder200Response3.hashCode(), buyItNowServerOrder200Response4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASBuyItNowServerOrder200Response buyItNowServerOrder200Response = new OASBuyItNowServerOrder200Response();
        System.assertEquals(new List<OASBuyItNowServerOrder200ResponseBan>(), buyItNowServerOrder200Response.bandwidth);
        System.assertEquals(new List<OASBuyItNowServerOrder200ResponseIps>(), buyItNowServerOrder200Response.ips);
        System.assertEquals(new List<OASBuyItNowServerOrder200ResponseOsI>(), buyItNowServerOrder200Response.os);
        System.assertEquals(new List<OASBuyItNowServerOrder200ResponseCpI>(), buyItNowServerOrder200Response.cp);
        System.assertEquals(new List<OASBuyItNowServerOrder200ResponseRai>(), buyItNowServerOrder200Response.raid);
    }
}
