@isTest
private class OASDenyRuleNewTest {
    @isTest
    private static void equalsSameInstance() {
        OASDenyRuleNew denyRuleNew1 = OASDenyRuleNew.getExample();
        OASDenyRuleNew denyRuleNew2 = denyRuleNew1;
        OASDenyRuleNew denyRuleNew3 = new OASDenyRuleNew();
        OASDenyRuleNew denyRuleNew4 = denyRuleNew3;

        System.assert(denyRuleNew1.equals(denyRuleNew2));
        System.assert(denyRuleNew2.equals(denyRuleNew1));
        System.assert(denyRuleNew1.equals(denyRuleNew1));
        System.assert(denyRuleNew3.equals(denyRuleNew4));
        System.assert(denyRuleNew4.equals(denyRuleNew3));
        System.assert(denyRuleNew3.equals(denyRuleNew3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDenyRuleNew denyRuleNew1 = OASDenyRuleNew.getExample();
        OASDenyRuleNew denyRuleNew2 = OASDenyRuleNew.getExample();
        OASDenyRuleNew denyRuleNew3 = new OASDenyRuleNew();
        OASDenyRuleNew denyRuleNew4 = new OASDenyRuleNew();

        System.assert(denyRuleNew1.equals(denyRuleNew2));
        System.assert(denyRuleNew2.equals(denyRuleNew1));
        System.assert(denyRuleNew3.equals(denyRuleNew4));
        System.assert(denyRuleNew4.equals(denyRuleNew3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDenyRuleNew denyRuleNew1 = OASDenyRuleNew.getExample();
        OASDenyRuleNew denyRuleNew2 = new OASDenyRuleNew();

        System.assertEquals(false, denyRuleNew1.equals('foo'));
        System.assertEquals(false, denyRuleNew2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDenyRuleNew denyRuleNew1 = OASDenyRuleNew.getExample();
        OASDenyRuleNew denyRuleNew2 = new OASDenyRuleNew();
        OASDenyRuleNew denyRuleNew3;

        System.assertEquals(false, denyRuleNew1.equals(denyRuleNew3));
        System.assertEquals(false, denyRuleNew2.equals(denyRuleNew3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDenyRuleNew denyRuleNew1 = OASDenyRuleNew.getExample();
        OASDenyRuleNew denyRuleNew2 = new OASDenyRuleNew();

        System.assertEquals(denyRuleNew1.hashCode(), denyRuleNew1.hashCode());
        System.assertEquals(denyRuleNew2.hashCode(), denyRuleNew2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDenyRuleNew denyRuleNew1 = OASDenyRuleNew.getExample();
        OASDenyRuleNew denyRuleNew2 = OASDenyRuleNew.getExample();
        OASDenyRuleNew denyRuleNew3 = new OASDenyRuleNew();
        OASDenyRuleNew denyRuleNew4 = new OASDenyRuleNew();

        System.assert(denyRuleNew1.equals(denyRuleNew2));
        System.assert(denyRuleNew3.equals(denyRuleNew4));
        System.assertEquals(denyRuleNew1.hashCode(), denyRuleNew2.hashCode());
        System.assertEquals(denyRuleNew3.hashCode(), denyRuleNew4.hashCode());
    }
}
