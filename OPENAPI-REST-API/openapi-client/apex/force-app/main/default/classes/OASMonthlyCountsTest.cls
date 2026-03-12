@isTest
private class OASMonthlyCountsTest {
    @isTest
    private static void equalsSameInstance() {
        OASMonthlyCounts monthlyCounts1 = OASMonthlyCounts.getExample();
        OASMonthlyCounts monthlyCounts2 = monthlyCounts1;
        OASMonthlyCounts monthlyCounts3 = new OASMonthlyCounts();
        OASMonthlyCounts monthlyCounts4 = monthlyCounts3;

        System.assert(monthlyCounts1.equals(monthlyCounts2));
        System.assert(monthlyCounts2.equals(monthlyCounts1));
        System.assert(monthlyCounts1.equals(monthlyCounts1));
        System.assert(monthlyCounts3.equals(monthlyCounts4));
        System.assert(monthlyCounts4.equals(monthlyCounts3));
        System.assert(monthlyCounts3.equals(monthlyCounts3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMonthlyCounts monthlyCounts1 = OASMonthlyCounts.getExample();
        OASMonthlyCounts monthlyCounts2 = OASMonthlyCounts.getExample();
        OASMonthlyCounts monthlyCounts3 = new OASMonthlyCounts();
        OASMonthlyCounts monthlyCounts4 = new OASMonthlyCounts();

        System.assert(monthlyCounts1.equals(monthlyCounts2));
        System.assert(monthlyCounts2.equals(monthlyCounts1));
        System.assert(monthlyCounts3.equals(monthlyCounts4));
        System.assert(monthlyCounts4.equals(monthlyCounts3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMonthlyCounts monthlyCounts1 = OASMonthlyCounts.getExample();
        OASMonthlyCounts monthlyCounts2 = new OASMonthlyCounts();

        System.assertEquals(false, monthlyCounts1.equals('foo'));
        System.assertEquals(false, monthlyCounts2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMonthlyCounts monthlyCounts1 = OASMonthlyCounts.getExample();
        OASMonthlyCounts monthlyCounts2 = new OASMonthlyCounts();
        OASMonthlyCounts monthlyCounts3;

        System.assertEquals(false, monthlyCounts1.equals(monthlyCounts3));
        System.assertEquals(false, monthlyCounts2.equals(monthlyCounts3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMonthlyCounts monthlyCounts1 = OASMonthlyCounts.getExample();
        OASMonthlyCounts monthlyCounts2 = new OASMonthlyCounts();

        System.assertEquals(monthlyCounts1.hashCode(), monthlyCounts1.hashCode());
        System.assertEquals(monthlyCounts2.hashCode(), monthlyCounts2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMonthlyCounts monthlyCounts1 = OASMonthlyCounts.getExample();
        OASMonthlyCounts monthlyCounts2 = OASMonthlyCounts.getExample();
        OASMonthlyCounts monthlyCounts3 = new OASMonthlyCounts();
        OASMonthlyCounts monthlyCounts4 = new OASMonthlyCounts();

        System.assert(monthlyCounts1.equals(monthlyCounts2));
        System.assert(monthlyCounts3.equals(monthlyCounts4));
        System.assertEquals(monthlyCounts1.hashCode(), monthlyCounts2.hashCode());
        System.assertEquals(monthlyCounts3.hashCode(), monthlyCounts4.hashCode());
    }
}
