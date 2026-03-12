@isTest
private class OASMailBlockRspamdTest {
    @isTest
    private static void equalsSameInstance() {
        OASMailBlockRspamd mailBlockRspamd1 = OASMailBlockRspamd.getExample();
        OASMailBlockRspamd mailBlockRspamd2 = mailBlockRspamd1;
        OASMailBlockRspamd mailBlockRspamd3 = new OASMailBlockRspamd();
        OASMailBlockRspamd mailBlockRspamd4 = mailBlockRspamd3;

        System.assert(mailBlockRspamd1.equals(mailBlockRspamd2));
        System.assert(mailBlockRspamd2.equals(mailBlockRspamd1));
        System.assert(mailBlockRspamd1.equals(mailBlockRspamd1));
        System.assert(mailBlockRspamd3.equals(mailBlockRspamd4));
        System.assert(mailBlockRspamd4.equals(mailBlockRspamd3));
        System.assert(mailBlockRspamd3.equals(mailBlockRspamd3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMailBlockRspamd mailBlockRspamd1 = OASMailBlockRspamd.getExample();
        OASMailBlockRspamd mailBlockRspamd2 = OASMailBlockRspamd.getExample();
        OASMailBlockRspamd mailBlockRspamd3 = new OASMailBlockRspamd();
        OASMailBlockRspamd mailBlockRspamd4 = new OASMailBlockRspamd();

        System.assert(mailBlockRspamd1.equals(mailBlockRspamd2));
        System.assert(mailBlockRspamd2.equals(mailBlockRspamd1));
        System.assert(mailBlockRspamd3.equals(mailBlockRspamd4));
        System.assert(mailBlockRspamd4.equals(mailBlockRspamd3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMailBlockRspamd mailBlockRspamd1 = OASMailBlockRspamd.getExample();
        OASMailBlockRspamd mailBlockRspamd2 = new OASMailBlockRspamd();

        System.assertEquals(false, mailBlockRspamd1.equals('foo'));
        System.assertEquals(false, mailBlockRspamd2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMailBlockRspamd mailBlockRspamd1 = OASMailBlockRspamd.getExample();
        OASMailBlockRspamd mailBlockRspamd2 = new OASMailBlockRspamd();
        OASMailBlockRspamd mailBlockRspamd3;

        System.assertEquals(false, mailBlockRspamd1.equals(mailBlockRspamd3));
        System.assertEquals(false, mailBlockRspamd2.equals(mailBlockRspamd3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMailBlockRspamd mailBlockRspamd1 = OASMailBlockRspamd.getExample();
        OASMailBlockRspamd mailBlockRspamd2 = new OASMailBlockRspamd();

        System.assertEquals(mailBlockRspamd1.hashCode(), mailBlockRspamd1.hashCode());
        System.assertEquals(mailBlockRspamd2.hashCode(), mailBlockRspamd2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMailBlockRspamd mailBlockRspamd1 = OASMailBlockRspamd.getExample();
        OASMailBlockRspamd mailBlockRspamd2 = OASMailBlockRspamd.getExample();
        OASMailBlockRspamd mailBlockRspamd3 = new OASMailBlockRspamd();
        OASMailBlockRspamd mailBlockRspamd4 = new OASMailBlockRspamd();

        System.assert(mailBlockRspamd1.equals(mailBlockRspamd2));
        System.assert(mailBlockRspamd3.equals(mailBlockRspamd4));
        System.assertEquals(mailBlockRspamd1.hashCode(), mailBlockRspamd2.hashCode());
        System.assertEquals(mailBlockRspamd3.hashCode(), mailBlockRspamd4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASMailBlockRspamd mailBlockRspamd = new OASMailBlockRspamd();
        Map<String, String> x-property-mappings = mailBlockRspamd.getx-property-mappings();
        System.assertEquals('r_from', x-property-mappings.get('from'));
    }
}
