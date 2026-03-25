@isTest
private class OASViewMailLogStartDateParameterTest {
    @isTest
    private static void equalsSameInstance() {
        OASViewMailLogStartDateParameter viewMailLogStartDateParameter1 = OASViewMailLogStartDateParameter.getExample();
        OASViewMailLogStartDateParameter viewMailLogStartDateParameter2 = viewMailLogStartDateParameter1;
        OASViewMailLogStartDateParameter viewMailLogStartDateParameter3 = new OASViewMailLogStartDateParameter();
        OASViewMailLogStartDateParameter viewMailLogStartDateParameter4 = viewMailLogStartDateParameter3;

        System.assert(viewMailLogStartDateParameter1.equals(viewMailLogStartDateParameter2));
        System.assert(viewMailLogStartDateParameter2.equals(viewMailLogStartDateParameter1));
        System.assert(viewMailLogStartDateParameter1.equals(viewMailLogStartDateParameter1));
        System.assert(viewMailLogStartDateParameter3.equals(viewMailLogStartDateParameter4));
        System.assert(viewMailLogStartDateParameter4.equals(viewMailLogStartDateParameter3));
        System.assert(viewMailLogStartDateParameter3.equals(viewMailLogStartDateParameter3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASViewMailLogStartDateParameter viewMailLogStartDateParameter1 = OASViewMailLogStartDateParameter.getExample();
        OASViewMailLogStartDateParameter viewMailLogStartDateParameter2 = OASViewMailLogStartDateParameter.getExample();
        OASViewMailLogStartDateParameter viewMailLogStartDateParameter3 = new OASViewMailLogStartDateParameter();
        OASViewMailLogStartDateParameter viewMailLogStartDateParameter4 = new OASViewMailLogStartDateParameter();

        System.assert(viewMailLogStartDateParameter1.equals(viewMailLogStartDateParameter2));
        System.assert(viewMailLogStartDateParameter2.equals(viewMailLogStartDateParameter1));
        System.assert(viewMailLogStartDateParameter3.equals(viewMailLogStartDateParameter4));
        System.assert(viewMailLogStartDateParameter4.equals(viewMailLogStartDateParameter3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASViewMailLogStartDateParameter viewMailLogStartDateParameter1 = OASViewMailLogStartDateParameter.getExample();
        OASViewMailLogStartDateParameter viewMailLogStartDateParameter2 = new OASViewMailLogStartDateParameter();

        System.assertEquals(false, viewMailLogStartDateParameter1.equals('foo'));
        System.assertEquals(false, viewMailLogStartDateParameter2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASViewMailLogStartDateParameter viewMailLogStartDateParameter1 = OASViewMailLogStartDateParameter.getExample();
        OASViewMailLogStartDateParameter viewMailLogStartDateParameter2 = new OASViewMailLogStartDateParameter();
        OASViewMailLogStartDateParameter viewMailLogStartDateParameter3;

        System.assertEquals(false, viewMailLogStartDateParameter1.equals(viewMailLogStartDateParameter3));
        System.assertEquals(false, viewMailLogStartDateParameter2.equals(viewMailLogStartDateParameter3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASViewMailLogStartDateParameter viewMailLogStartDateParameter1 = OASViewMailLogStartDateParameter.getExample();
        OASViewMailLogStartDateParameter viewMailLogStartDateParameter2 = new OASViewMailLogStartDateParameter();

        System.assertEquals(viewMailLogStartDateParameter1.hashCode(), viewMailLogStartDateParameter1.hashCode());
        System.assertEquals(viewMailLogStartDateParameter2.hashCode(), viewMailLogStartDateParameter2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASViewMailLogStartDateParameter viewMailLogStartDateParameter1 = OASViewMailLogStartDateParameter.getExample();
        OASViewMailLogStartDateParameter viewMailLogStartDateParameter2 = OASViewMailLogStartDateParameter.getExample();
        OASViewMailLogStartDateParameter viewMailLogStartDateParameter3 = new OASViewMailLogStartDateParameter();
        OASViewMailLogStartDateParameter viewMailLogStartDateParameter4 = new OASViewMailLogStartDateParameter();

        System.assert(viewMailLogStartDateParameter1.equals(viewMailLogStartDateParameter2));
        System.assert(viewMailLogStartDateParameter3.equals(viewMailLogStartDateParameter4));
        System.assertEquals(viewMailLogStartDateParameter1.hashCode(), viewMailLogStartDateParameter2.hashCode());
        System.assertEquals(viewMailLogStartDateParameter3.hashCode(), viewMailLogStartDateParameter4.hashCode());
    }
}
