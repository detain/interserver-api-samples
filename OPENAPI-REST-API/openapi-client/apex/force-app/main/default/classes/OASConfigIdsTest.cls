@isTest
private class OASConfigIdsTest {
    @isTest
    private static void equalsSameInstance() {
        OASConfigIds configIds1 = OASConfigIds.getExample();
        OASConfigIds configIds2 = configIds1;
        OASConfigIds configIds3 = new OASConfigIds();
        OASConfigIds configIds4 = configIds3;

        System.assert(configIds1.equals(configIds2));
        System.assert(configIds2.equals(configIds1));
        System.assert(configIds1.equals(configIds1));
        System.assert(configIds3.equals(configIds4));
        System.assert(configIds4.equals(configIds3));
        System.assert(configIds3.equals(configIds3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASConfigIds configIds1 = OASConfigIds.getExample();
        OASConfigIds configIds2 = OASConfigIds.getExample();
        OASConfigIds configIds3 = new OASConfigIds();
        OASConfigIds configIds4 = new OASConfigIds();

        System.assert(configIds1.equals(configIds2));
        System.assert(configIds2.equals(configIds1));
        System.assert(configIds3.equals(configIds4));
        System.assert(configIds4.equals(configIds3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASConfigIds configIds1 = OASConfigIds.getExample();
        OASConfigIds configIds2 = new OASConfigIds();

        System.assertEquals(false, configIds1.equals('foo'));
        System.assertEquals(false, configIds2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASConfigIds configIds1 = OASConfigIds.getExample();
        OASConfigIds configIds2 = new OASConfigIds();
        OASConfigIds configIds3;

        System.assertEquals(false, configIds1.equals(configIds3));
        System.assertEquals(false, configIds2.equals(configIds3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASConfigIds configIds1 = OASConfigIds.getExample();
        OASConfigIds configIds2 = new OASConfigIds();

        System.assertEquals(configIds1.hashCode(), configIds1.hashCode());
        System.assertEquals(configIds2.hashCode(), configIds2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASConfigIds configIds1 = OASConfigIds.getExample();
        OASConfigIds configIds2 = OASConfigIds.getExample();
        OASConfigIds configIds3 = new OASConfigIds();
        OASConfigIds configIds4 = new OASConfigIds();

        System.assert(configIds1.equals(configIds2));
        System.assert(configIds3.equals(configIds4));
        System.assertEquals(configIds1.hashCode(), configIds2.hashCode());
        System.assertEquals(configIds3.hashCode(), configIds4.hashCode());
    }
}
