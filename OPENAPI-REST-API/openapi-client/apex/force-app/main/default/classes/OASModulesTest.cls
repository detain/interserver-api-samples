@isTest
private class OASModulesTest {
    @isTest
    private static void equalsSameInstance() {
        OASModules modules1 = OASModules.getExample();
        OASModules modules2 = modules1;
        OASModules modules3 = new OASModules();
        OASModules modules4 = modules3;

        System.assert(modules1.equals(modules2));
        System.assert(modules2.equals(modules1));
        System.assert(modules1.equals(modules1));
        System.assert(modules3.equals(modules4));
        System.assert(modules4.equals(modules3));
        System.assert(modules3.equals(modules3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASModules modules1 = OASModules.getExample();
        OASModules modules2 = OASModules.getExample();
        OASModules modules3 = new OASModules();
        OASModules modules4 = new OASModules();

        System.assert(modules1.equals(modules2));
        System.assert(modules2.equals(modules1));
        System.assert(modules3.equals(modules4));
        System.assert(modules4.equals(modules3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASModules modules1 = OASModules.getExample();
        OASModules modules2 = new OASModules();

        System.assertEquals(false, modules1.equals('foo'));
        System.assertEquals(false, modules2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASModules modules1 = OASModules.getExample();
        OASModules modules2 = new OASModules();
        OASModules modules3;

        System.assertEquals(false, modules1.equals(modules3));
        System.assertEquals(false, modules2.equals(modules3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASModules modules1 = OASModules.getExample();
        OASModules modules2 = new OASModules();

        System.assertEquals(modules1.hashCode(), modules1.hashCode());
        System.assertEquals(modules2.hashCode(), modules2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASModules modules1 = OASModules.getExample();
        OASModules modules2 = OASModules.getExample();
        OASModules modules3 = new OASModules();
        OASModules modules4 = new OASModules();

        System.assert(modules1.equals(modules2));
        System.assert(modules3.equals(modules4));
        System.assertEquals(modules1.hashCode(), modules2.hashCode());
        System.assertEquals(modules3.hashCode(), modules4.hashCode());
    }
}
