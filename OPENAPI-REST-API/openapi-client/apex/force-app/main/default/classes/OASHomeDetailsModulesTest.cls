@isTest
private class OASHomeDetailsModulesTest {
    @isTest
    private static void equalsSameInstance() {
        OASHomeDetailsModules homeDetailsModules1 = OASHomeDetailsModules.getExample();
        OASHomeDetailsModules homeDetailsModules2 = homeDetailsModules1;
        OASHomeDetailsModules homeDetailsModules3 = new OASHomeDetailsModules();
        OASHomeDetailsModules homeDetailsModules4 = homeDetailsModules3;

        System.assert(homeDetailsModules1.equals(homeDetailsModules2));
        System.assert(homeDetailsModules2.equals(homeDetailsModules1));
        System.assert(homeDetailsModules1.equals(homeDetailsModules1));
        System.assert(homeDetailsModules3.equals(homeDetailsModules4));
        System.assert(homeDetailsModules4.equals(homeDetailsModules3));
        System.assert(homeDetailsModules3.equals(homeDetailsModules3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASHomeDetailsModules homeDetailsModules1 = OASHomeDetailsModules.getExample();
        OASHomeDetailsModules homeDetailsModules2 = OASHomeDetailsModules.getExample();
        OASHomeDetailsModules homeDetailsModules3 = new OASHomeDetailsModules();
        OASHomeDetailsModules homeDetailsModules4 = new OASHomeDetailsModules();

        System.assert(homeDetailsModules1.equals(homeDetailsModules2));
        System.assert(homeDetailsModules2.equals(homeDetailsModules1));
        System.assert(homeDetailsModules3.equals(homeDetailsModules4));
        System.assert(homeDetailsModules4.equals(homeDetailsModules3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASHomeDetailsModules homeDetailsModules1 = OASHomeDetailsModules.getExample();
        OASHomeDetailsModules homeDetailsModules2 = new OASHomeDetailsModules();

        System.assertEquals(false, homeDetailsModules1.equals('foo'));
        System.assertEquals(false, homeDetailsModules2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASHomeDetailsModules homeDetailsModules1 = OASHomeDetailsModules.getExample();
        OASHomeDetailsModules homeDetailsModules2 = new OASHomeDetailsModules();
        OASHomeDetailsModules homeDetailsModules3;

        System.assertEquals(false, homeDetailsModules1.equals(homeDetailsModules3));
        System.assertEquals(false, homeDetailsModules2.equals(homeDetailsModules3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASHomeDetailsModules homeDetailsModules1 = OASHomeDetailsModules.getExample();
        OASHomeDetailsModules homeDetailsModules2 = new OASHomeDetailsModules();

        System.assertEquals(homeDetailsModules1.hashCode(), homeDetailsModules1.hashCode());
        System.assertEquals(homeDetailsModules2.hashCode(), homeDetailsModules2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASHomeDetailsModules homeDetailsModules1 = OASHomeDetailsModules.getExample();
        OASHomeDetailsModules homeDetailsModules2 = OASHomeDetailsModules.getExample();
        OASHomeDetailsModules homeDetailsModules3 = new OASHomeDetailsModules();
        OASHomeDetailsModules homeDetailsModules4 = new OASHomeDetailsModules();

        System.assert(homeDetailsModules1.equals(homeDetailsModules2));
        System.assert(homeDetailsModules3.equals(homeDetailsModules4));
        System.assertEquals(homeDetailsModules1.hashCode(), homeDetailsModules2.hashCode());
        System.assertEquals(homeDetailsModules3.hashCode(), homeDetailsModules4.hashCode());
    }
}
