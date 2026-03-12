@isTest
private class OASMailBlocksTest {
    @isTest
    private static void equalsSameInstance() {
        OASMailBlocks mailBlocks1 = OASMailBlocks.getExample();
        OASMailBlocks mailBlocks2 = mailBlocks1;
        OASMailBlocks mailBlocks3 = new OASMailBlocks();
        OASMailBlocks mailBlocks4 = mailBlocks3;

        System.assert(mailBlocks1.equals(mailBlocks2));
        System.assert(mailBlocks2.equals(mailBlocks1));
        System.assert(mailBlocks1.equals(mailBlocks1));
        System.assert(mailBlocks3.equals(mailBlocks4));
        System.assert(mailBlocks4.equals(mailBlocks3));
        System.assert(mailBlocks3.equals(mailBlocks3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMailBlocks mailBlocks1 = OASMailBlocks.getExample();
        OASMailBlocks mailBlocks2 = OASMailBlocks.getExample();
        OASMailBlocks mailBlocks3 = new OASMailBlocks();
        OASMailBlocks mailBlocks4 = new OASMailBlocks();

        System.assert(mailBlocks1.equals(mailBlocks2));
        System.assert(mailBlocks2.equals(mailBlocks1));
        System.assert(mailBlocks3.equals(mailBlocks4));
        System.assert(mailBlocks4.equals(mailBlocks3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMailBlocks mailBlocks1 = OASMailBlocks.getExample();
        OASMailBlocks mailBlocks2 = new OASMailBlocks();

        System.assertEquals(false, mailBlocks1.equals('foo'));
        System.assertEquals(false, mailBlocks2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMailBlocks mailBlocks1 = OASMailBlocks.getExample();
        OASMailBlocks mailBlocks2 = new OASMailBlocks();
        OASMailBlocks mailBlocks3;

        System.assertEquals(false, mailBlocks1.equals(mailBlocks3));
        System.assertEquals(false, mailBlocks2.equals(mailBlocks3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMailBlocks mailBlocks1 = OASMailBlocks.getExample();
        OASMailBlocks mailBlocks2 = new OASMailBlocks();

        System.assertEquals(mailBlocks1.hashCode(), mailBlocks1.hashCode());
        System.assertEquals(mailBlocks2.hashCode(), mailBlocks2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMailBlocks mailBlocks1 = OASMailBlocks.getExample();
        OASMailBlocks mailBlocks2 = OASMailBlocks.getExample();
        OASMailBlocks mailBlocks3 = new OASMailBlocks();
        OASMailBlocks mailBlocks4 = new OASMailBlocks();

        System.assert(mailBlocks1.equals(mailBlocks2));
        System.assert(mailBlocks3.equals(mailBlocks4));
        System.assertEquals(mailBlocks1.hashCode(), mailBlocks2.hashCode());
        System.assertEquals(mailBlocks3.hashCode(), mailBlocks4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASMailBlocks mailBlocks = new OASMailBlocks();
        System.assertEquals(new List<OASMailBlockClickHouse>(), mailBlocks.local);
        System.assertEquals(new List<OASMailBlockClickHouse>(), mailBlocks.mbtrap);
        System.assertEquals(new List<OASMailBlockRspamd>(), mailBlocks.subject);
    }
}
