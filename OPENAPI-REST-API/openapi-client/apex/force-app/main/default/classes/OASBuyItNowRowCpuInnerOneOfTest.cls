@isTest
private class OASBuyItNowRowCpuInnerOneOfTest {
    @isTest
    private static void equalsSameInstance() {
        OASBuyItNowRowCpuInnerOneOf buyItNowRowCpuInnerOneOf1 = OASBuyItNowRowCpuInnerOneOf.getExample();
        OASBuyItNowRowCpuInnerOneOf buyItNowRowCpuInnerOneOf2 = buyItNowRowCpuInnerOneOf1;
        OASBuyItNowRowCpuInnerOneOf buyItNowRowCpuInnerOneOf3 = new OASBuyItNowRowCpuInnerOneOf();
        OASBuyItNowRowCpuInnerOneOf buyItNowRowCpuInnerOneOf4 = buyItNowRowCpuInnerOneOf3;

        System.assert(buyItNowRowCpuInnerOneOf1.equals(buyItNowRowCpuInnerOneOf2));
        System.assert(buyItNowRowCpuInnerOneOf2.equals(buyItNowRowCpuInnerOneOf1));
        System.assert(buyItNowRowCpuInnerOneOf1.equals(buyItNowRowCpuInnerOneOf1));
        System.assert(buyItNowRowCpuInnerOneOf3.equals(buyItNowRowCpuInnerOneOf4));
        System.assert(buyItNowRowCpuInnerOneOf4.equals(buyItNowRowCpuInnerOneOf3));
        System.assert(buyItNowRowCpuInnerOneOf3.equals(buyItNowRowCpuInnerOneOf3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASBuyItNowRowCpuInnerOneOf buyItNowRowCpuInnerOneOf1 = OASBuyItNowRowCpuInnerOneOf.getExample();
        OASBuyItNowRowCpuInnerOneOf buyItNowRowCpuInnerOneOf2 = OASBuyItNowRowCpuInnerOneOf.getExample();
        OASBuyItNowRowCpuInnerOneOf buyItNowRowCpuInnerOneOf3 = new OASBuyItNowRowCpuInnerOneOf();
        OASBuyItNowRowCpuInnerOneOf buyItNowRowCpuInnerOneOf4 = new OASBuyItNowRowCpuInnerOneOf();

        System.assert(buyItNowRowCpuInnerOneOf1.equals(buyItNowRowCpuInnerOneOf2));
        System.assert(buyItNowRowCpuInnerOneOf2.equals(buyItNowRowCpuInnerOneOf1));
        System.assert(buyItNowRowCpuInnerOneOf3.equals(buyItNowRowCpuInnerOneOf4));
        System.assert(buyItNowRowCpuInnerOneOf4.equals(buyItNowRowCpuInnerOneOf3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASBuyItNowRowCpuInnerOneOf buyItNowRowCpuInnerOneOf1 = OASBuyItNowRowCpuInnerOneOf.getExample();
        OASBuyItNowRowCpuInnerOneOf buyItNowRowCpuInnerOneOf2 = new OASBuyItNowRowCpuInnerOneOf();

        System.assertEquals(false, buyItNowRowCpuInnerOneOf1.equals('foo'));
        System.assertEquals(false, buyItNowRowCpuInnerOneOf2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASBuyItNowRowCpuInnerOneOf buyItNowRowCpuInnerOneOf1 = OASBuyItNowRowCpuInnerOneOf.getExample();
        OASBuyItNowRowCpuInnerOneOf buyItNowRowCpuInnerOneOf2 = new OASBuyItNowRowCpuInnerOneOf();
        OASBuyItNowRowCpuInnerOneOf buyItNowRowCpuInnerOneOf3;

        System.assertEquals(false, buyItNowRowCpuInnerOneOf1.equals(buyItNowRowCpuInnerOneOf3));
        System.assertEquals(false, buyItNowRowCpuInnerOneOf2.equals(buyItNowRowCpuInnerOneOf3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASBuyItNowRowCpuInnerOneOf buyItNowRowCpuInnerOneOf1 = OASBuyItNowRowCpuInnerOneOf.getExample();
        OASBuyItNowRowCpuInnerOneOf buyItNowRowCpuInnerOneOf2 = new OASBuyItNowRowCpuInnerOneOf();

        System.assertEquals(buyItNowRowCpuInnerOneOf1.hashCode(), buyItNowRowCpuInnerOneOf1.hashCode());
        System.assertEquals(buyItNowRowCpuInnerOneOf2.hashCode(), buyItNowRowCpuInnerOneOf2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASBuyItNowRowCpuInnerOneOf buyItNowRowCpuInnerOneOf1 = OASBuyItNowRowCpuInnerOneOf.getExample();
        OASBuyItNowRowCpuInnerOneOf buyItNowRowCpuInnerOneOf2 = OASBuyItNowRowCpuInnerOneOf.getExample();
        OASBuyItNowRowCpuInnerOneOf buyItNowRowCpuInnerOneOf3 = new OASBuyItNowRowCpuInnerOneOf();
        OASBuyItNowRowCpuInnerOneOf buyItNowRowCpuInnerOneOf4 = new OASBuyItNowRowCpuInnerOneOf();

        System.assert(buyItNowRowCpuInnerOneOf1.equals(buyItNowRowCpuInnerOneOf2));
        System.assert(buyItNowRowCpuInnerOneOf3.equals(buyItNowRowCpuInnerOneOf4));
        System.assertEquals(buyItNowRowCpuInnerOneOf1.hashCode(), buyItNowRowCpuInnerOneOf2.hashCode());
        System.assertEquals(buyItNowRowCpuInnerOneOf3.hashCode(), buyItNowRowCpuInnerOneOf4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASBuyItNowRowCpuInnerOneOf buyItNowRowCpuInnerOneOf = new OASBuyItNowRowCpuInnerOneOf();
        Map<String, String> x-property-mappings = buyItNowRowCpuInnerOneOf.getx-property-mappings();
        System.assertEquals('numCpus', x-property-mappings.get('num_cpus'));
        System.assertEquals('numCores', x-property-mappings.get('num_cores'));
    }
}
