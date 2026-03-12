@isTest
private class OASBuyItNowRowCpuInnerTest {
    @isTest
    private static void equalsSameInstance() {
        OASBuyItNowRowCpuInner buyItNowRowCpuInner1 = OASBuyItNowRowCpuInner.getExample();
        OASBuyItNowRowCpuInner buyItNowRowCpuInner2 = buyItNowRowCpuInner1;
        OASBuyItNowRowCpuInner buyItNowRowCpuInner3 = new OASBuyItNowRowCpuInner();
        OASBuyItNowRowCpuInner buyItNowRowCpuInner4 = buyItNowRowCpuInner3;

        System.assert(buyItNowRowCpuInner1.equals(buyItNowRowCpuInner2));
        System.assert(buyItNowRowCpuInner2.equals(buyItNowRowCpuInner1));
        System.assert(buyItNowRowCpuInner1.equals(buyItNowRowCpuInner1));
        System.assert(buyItNowRowCpuInner3.equals(buyItNowRowCpuInner4));
        System.assert(buyItNowRowCpuInner4.equals(buyItNowRowCpuInner3));
        System.assert(buyItNowRowCpuInner3.equals(buyItNowRowCpuInner3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASBuyItNowRowCpuInner buyItNowRowCpuInner1 = OASBuyItNowRowCpuInner.getExample();
        OASBuyItNowRowCpuInner buyItNowRowCpuInner2 = OASBuyItNowRowCpuInner.getExample();
        OASBuyItNowRowCpuInner buyItNowRowCpuInner3 = new OASBuyItNowRowCpuInner();
        OASBuyItNowRowCpuInner buyItNowRowCpuInner4 = new OASBuyItNowRowCpuInner();

        System.assert(buyItNowRowCpuInner1.equals(buyItNowRowCpuInner2));
        System.assert(buyItNowRowCpuInner2.equals(buyItNowRowCpuInner1));
        System.assert(buyItNowRowCpuInner3.equals(buyItNowRowCpuInner4));
        System.assert(buyItNowRowCpuInner4.equals(buyItNowRowCpuInner3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASBuyItNowRowCpuInner buyItNowRowCpuInner1 = OASBuyItNowRowCpuInner.getExample();
        OASBuyItNowRowCpuInner buyItNowRowCpuInner2 = new OASBuyItNowRowCpuInner();

        System.assertEquals(false, buyItNowRowCpuInner1.equals('foo'));
        System.assertEquals(false, buyItNowRowCpuInner2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASBuyItNowRowCpuInner buyItNowRowCpuInner1 = OASBuyItNowRowCpuInner.getExample();
        OASBuyItNowRowCpuInner buyItNowRowCpuInner2 = new OASBuyItNowRowCpuInner();
        OASBuyItNowRowCpuInner buyItNowRowCpuInner3;

        System.assertEquals(false, buyItNowRowCpuInner1.equals(buyItNowRowCpuInner3));
        System.assertEquals(false, buyItNowRowCpuInner2.equals(buyItNowRowCpuInner3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASBuyItNowRowCpuInner buyItNowRowCpuInner1 = OASBuyItNowRowCpuInner.getExample();
        OASBuyItNowRowCpuInner buyItNowRowCpuInner2 = new OASBuyItNowRowCpuInner();

        System.assertEquals(buyItNowRowCpuInner1.hashCode(), buyItNowRowCpuInner1.hashCode());
        System.assertEquals(buyItNowRowCpuInner2.hashCode(), buyItNowRowCpuInner2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASBuyItNowRowCpuInner buyItNowRowCpuInner1 = OASBuyItNowRowCpuInner.getExample();
        OASBuyItNowRowCpuInner buyItNowRowCpuInner2 = OASBuyItNowRowCpuInner.getExample();
        OASBuyItNowRowCpuInner buyItNowRowCpuInner3 = new OASBuyItNowRowCpuInner();
        OASBuyItNowRowCpuInner buyItNowRowCpuInner4 = new OASBuyItNowRowCpuInner();

        System.assert(buyItNowRowCpuInner1.equals(buyItNowRowCpuInner2));
        System.assert(buyItNowRowCpuInner3.equals(buyItNowRowCpuInner4));
        System.assertEquals(buyItNowRowCpuInner1.hashCode(), buyItNowRowCpuInner2.hashCode());
        System.assertEquals(buyItNowRowCpuInner3.hashCode(), buyItNowRowCpuInner4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASBuyItNowRowCpuInner buyItNowRowCpuInner = new OASBuyItNowRowCpuInner();
        Map<String, String> x-property-mappings = buyItNowRowCpuInner.getx-property-mappings();
        System.assertEquals('numCpus', x-property-mappings.get('num_cpus'));
        System.assertEquals('numCores', x-property-mappings.get('num_cores'));
    }
}
