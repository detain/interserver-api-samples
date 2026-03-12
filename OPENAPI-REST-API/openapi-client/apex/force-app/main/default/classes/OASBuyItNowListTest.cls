@isTest
private class OASBuyItNowListTest {
    @isTest
    private static void equalsSameInstance() {
        OASBuyItNowList buyItNowList1 = OASBuyItNowList.getExample();
        OASBuyItNowList buyItNowList2 = buyItNowList1;
        OASBuyItNowList buyItNowList3 = new OASBuyItNowList();
        OASBuyItNowList buyItNowList4 = buyItNowList3;

        System.assert(buyItNowList1.equals(buyItNowList2));
        System.assert(buyItNowList2.equals(buyItNowList1));
        System.assert(buyItNowList1.equals(buyItNowList1));
        System.assert(buyItNowList3.equals(buyItNowList4));
        System.assert(buyItNowList4.equals(buyItNowList3));
        System.assert(buyItNowList3.equals(buyItNowList3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASBuyItNowList buyItNowList1 = OASBuyItNowList.getExample();
        OASBuyItNowList buyItNowList2 = OASBuyItNowList.getExample();
        OASBuyItNowList buyItNowList3 = new OASBuyItNowList();
        OASBuyItNowList buyItNowList4 = new OASBuyItNowList();

        System.assert(buyItNowList1.equals(buyItNowList2));
        System.assert(buyItNowList2.equals(buyItNowList1));
        System.assert(buyItNowList3.equals(buyItNowList4));
        System.assert(buyItNowList4.equals(buyItNowList3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASBuyItNowList buyItNowList1 = OASBuyItNowList.getExample();
        OASBuyItNowList buyItNowList2 = new OASBuyItNowList();

        System.assertEquals(false, buyItNowList1.equals('foo'));
        System.assertEquals(false, buyItNowList2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASBuyItNowList buyItNowList1 = OASBuyItNowList.getExample();
        OASBuyItNowList buyItNowList2 = new OASBuyItNowList();
        OASBuyItNowList buyItNowList3;

        System.assertEquals(false, buyItNowList1.equals(buyItNowList3));
        System.assertEquals(false, buyItNowList2.equals(buyItNowList3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASBuyItNowList buyItNowList1 = OASBuyItNowList.getExample();
        OASBuyItNowList buyItNowList2 = new OASBuyItNowList();

        System.assertEquals(buyItNowList1.hashCode(), buyItNowList1.hashCode());
        System.assertEquals(buyItNowList2.hashCode(), buyItNowList2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASBuyItNowList buyItNowList1 = OASBuyItNowList.getExample();
        OASBuyItNowList buyItNowList2 = OASBuyItNowList.getExample();
        OASBuyItNowList buyItNowList3 = new OASBuyItNowList();
        OASBuyItNowList buyItNowList4 = new OASBuyItNowList();

        System.assert(buyItNowList1.equals(buyItNowList2));
        System.assert(buyItNowList3.equals(buyItNowList4));
        System.assertEquals(buyItNowList1.hashCode(), buyItNowList2.hashCode());
        System.assertEquals(buyItNowList3.hashCode(), buyItNowList4.hashCode());
    }
}
