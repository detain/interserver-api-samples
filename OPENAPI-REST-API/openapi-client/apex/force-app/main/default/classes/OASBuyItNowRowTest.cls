@isTest
private class OASBuyItNowRowTest {
    @isTest
    private static void equalsSameInstance() {
        OASBuyItNowRow buyItNowRow1 = OASBuyItNowRow.getExample();
        OASBuyItNowRow buyItNowRow2 = buyItNowRow1;
        OASBuyItNowRow buyItNowRow3 = new OASBuyItNowRow();
        OASBuyItNowRow buyItNowRow4 = buyItNowRow3;

        System.assert(buyItNowRow1.equals(buyItNowRow2));
        System.assert(buyItNowRow2.equals(buyItNowRow1));
        System.assert(buyItNowRow1.equals(buyItNowRow1));
        System.assert(buyItNowRow3.equals(buyItNowRow4));
        System.assert(buyItNowRow4.equals(buyItNowRow3));
        System.assert(buyItNowRow3.equals(buyItNowRow3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASBuyItNowRow buyItNowRow1 = OASBuyItNowRow.getExample();
        OASBuyItNowRow buyItNowRow2 = OASBuyItNowRow.getExample();
        OASBuyItNowRow buyItNowRow3 = new OASBuyItNowRow();
        OASBuyItNowRow buyItNowRow4 = new OASBuyItNowRow();

        System.assert(buyItNowRow1.equals(buyItNowRow2));
        System.assert(buyItNowRow2.equals(buyItNowRow1));
        System.assert(buyItNowRow3.equals(buyItNowRow4));
        System.assert(buyItNowRow4.equals(buyItNowRow3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASBuyItNowRow buyItNowRow1 = OASBuyItNowRow.getExample();
        OASBuyItNowRow buyItNowRow2 = new OASBuyItNowRow();

        System.assertEquals(false, buyItNowRow1.equals('foo'));
        System.assertEquals(false, buyItNowRow2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASBuyItNowRow buyItNowRow1 = OASBuyItNowRow.getExample();
        OASBuyItNowRow buyItNowRow2 = new OASBuyItNowRow();
        OASBuyItNowRow buyItNowRow3;

        System.assertEquals(false, buyItNowRow1.equals(buyItNowRow3));
        System.assertEquals(false, buyItNowRow2.equals(buyItNowRow3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASBuyItNowRow buyItNowRow1 = OASBuyItNowRow.getExample();
        OASBuyItNowRow buyItNowRow2 = new OASBuyItNowRow();

        System.assertEquals(buyItNowRow1.hashCode(), buyItNowRow1.hashCode());
        System.assertEquals(buyItNowRow2.hashCode(), buyItNowRow2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASBuyItNowRow buyItNowRow1 = OASBuyItNowRow.getExample();
        OASBuyItNowRow buyItNowRow2 = OASBuyItNowRow.getExample();
        OASBuyItNowRow buyItNowRow3 = new OASBuyItNowRow();
        OASBuyItNowRow buyItNowRow4 = new OASBuyItNowRow();

        System.assert(buyItNowRow1.equals(buyItNowRow2));
        System.assert(buyItNowRow3.equals(buyItNowRow4));
        System.assertEquals(buyItNowRow1.hashCode(), buyItNowRow2.hashCode());
        System.assertEquals(buyItNowRow3.hashCode(), buyItNowRow4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASBuyItNowRow buyItNowRow = new OASBuyItNowRow();
        Map<String, String> x-property-mappings = buyItNowRow.getx-property-mappings();
        System.assertEquals('serverId', x-property-mappings.get('server_id'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASBuyItNowRow buyItNowRow = new OASBuyItNowRow();
        System.assertEquals(new List<OASBuyItNowRowCpuInner>(), buyItNowRow.cpu);
        System.assertEquals(new Map<String, String>(), buyItNowRow.disk);
        System.assertEquals(null, buyItNowRow.serverId);
        System.assertEquals(null, buyItNowRow.memory);
        System.assertEquals(null, buyItNowRow.bandwidth);
        System.assertEquals(null, buyItNowRow.ips);
        System.assertEquals(null, buyItNowRow.location);
        System.assertEquals(null, buyItNowRow.price);
    }
}
