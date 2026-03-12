@isTest
private class OASStatusMonthlyBreakdownTest {
    @isTest
    private static void equalsSameInstance() {
        OASStatusMonthlyBreakdown statusMonthlyBreakdown1 = OASStatusMonthlyBreakdown.getExample();
        OASStatusMonthlyBreakdown statusMonthlyBreakdown2 = statusMonthlyBreakdown1;
        OASStatusMonthlyBreakdown statusMonthlyBreakdown3 = new OASStatusMonthlyBreakdown();
        OASStatusMonthlyBreakdown statusMonthlyBreakdown4 = statusMonthlyBreakdown3;

        System.assert(statusMonthlyBreakdown1.equals(statusMonthlyBreakdown2));
        System.assert(statusMonthlyBreakdown2.equals(statusMonthlyBreakdown1));
        System.assert(statusMonthlyBreakdown1.equals(statusMonthlyBreakdown1));
        System.assert(statusMonthlyBreakdown3.equals(statusMonthlyBreakdown4));
        System.assert(statusMonthlyBreakdown4.equals(statusMonthlyBreakdown3));
        System.assert(statusMonthlyBreakdown3.equals(statusMonthlyBreakdown3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASStatusMonthlyBreakdown statusMonthlyBreakdown1 = OASStatusMonthlyBreakdown.getExample();
        OASStatusMonthlyBreakdown statusMonthlyBreakdown2 = OASStatusMonthlyBreakdown.getExample();
        OASStatusMonthlyBreakdown statusMonthlyBreakdown3 = new OASStatusMonthlyBreakdown();
        OASStatusMonthlyBreakdown statusMonthlyBreakdown4 = new OASStatusMonthlyBreakdown();

        System.assert(statusMonthlyBreakdown1.equals(statusMonthlyBreakdown2));
        System.assert(statusMonthlyBreakdown2.equals(statusMonthlyBreakdown1));
        System.assert(statusMonthlyBreakdown3.equals(statusMonthlyBreakdown4));
        System.assert(statusMonthlyBreakdown4.equals(statusMonthlyBreakdown3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASStatusMonthlyBreakdown statusMonthlyBreakdown1 = OASStatusMonthlyBreakdown.getExample();
        OASStatusMonthlyBreakdown statusMonthlyBreakdown2 = new OASStatusMonthlyBreakdown();

        System.assertEquals(false, statusMonthlyBreakdown1.equals('foo'));
        System.assertEquals(false, statusMonthlyBreakdown2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASStatusMonthlyBreakdown statusMonthlyBreakdown1 = OASStatusMonthlyBreakdown.getExample();
        OASStatusMonthlyBreakdown statusMonthlyBreakdown2 = new OASStatusMonthlyBreakdown();
        OASStatusMonthlyBreakdown statusMonthlyBreakdown3;

        System.assertEquals(false, statusMonthlyBreakdown1.equals(statusMonthlyBreakdown3));
        System.assertEquals(false, statusMonthlyBreakdown2.equals(statusMonthlyBreakdown3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASStatusMonthlyBreakdown statusMonthlyBreakdown1 = OASStatusMonthlyBreakdown.getExample();
        OASStatusMonthlyBreakdown statusMonthlyBreakdown2 = new OASStatusMonthlyBreakdown();

        System.assertEquals(statusMonthlyBreakdown1.hashCode(), statusMonthlyBreakdown1.hashCode());
        System.assertEquals(statusMonthlyBreakdown2.hashCode(), statusMonthlyBreakdown2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASStatusMonthlyBreakdown statusMonthlyBreakdown1 = OASStatusMonthlyBreakdown.getExample();
        OASStatusMonthlyBreakdown statusMonthlyBreakdown2 = OASStatusMonthlyBreakdown.getExample();
        OASStatusMonthlyBreakdown statusMonthlyBreakdown3 = new OASStatusMonthlyBreakdown();
        OASStatusMonthlyBreakdown statusMonthlyBreakdown4 = new OASStatusMonthlyBreakdown();

        System.assert(statusMonthlyBreakdown1.equals(statusMonthlyBreakdown2));
        System.assert(statusMonthlyBreakdown3.equals(statusMonthlyBreakdown4));
        System.assertEquals(statusMonthlyBreakdown1.hashCode(), statusMonthlyBreakdown2.hashCode());
        System.assertEquals(statusMonthlyBreakdown3.hashCode(), statusMonthlyBreakdown4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASStatusMonthlyBreakdown statusMonthlyBreakdown = new OASStatusMonthlyBreakdown();
        Map<String, String> x-property-mappings = statusMonthlyBreakdown.getx-property-mappings();
        System.assertEquals('r_default', x-property-mappings.get('default'));
    }
}
