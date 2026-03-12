@isTest
private class OASMailLogTest {
    @isTest
    private static void equalsSameInstance() {
        OASMailLog mailLog1 = OASMailLog.getExample();
        OASMailLog mailLog2 = mailLog1;
        OASMailLog mailLog3 = new OASMailLog();
        OASMailLog mailLog4 = mailLog3;

        System.assert(mailLog1.equals(mailLog2));
        System.assert(mailLog2.equals(mailLog1));
        System.assert(mailLog1.equals(mailLog1));
        System.assert(mailLog3.equals(mailLog4));
        System.assert(mailLog4.equals(mailLog3));
        System.assert(mailLog3.equals(mailLog3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMailLog mailLog1 = OASMailLog.getExample();
        OASMailLog mailLog2 = OASMailLog.getExample();
        OASMailLog mailLog3 = new OASMailLog();
        OASMailLog mailLog4 = new OASMailLog();

        System.assert(mailLog1.equals(mailLog2));
        System.assert(mailLog2.equals(mailLog1));
        System.assert(mailLog3.equals(mailLog4));
        System.assert(mailLog4.equals(mailLog3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMailLog mailLog1 = OASMailLog.getExample();
        OASMailLog mailLog2 = new OASMailLog();

        System.assertEquals(false, mailLog1.equals('foo'));
        System.assertEquals(false, mailLog2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMailLog mailLog1 = OASMailLog.getExample();
        OASMailLog mailLog2 = new OASMailLog();
        OASMailLog mailLog3;

        System.assertEquals(false, mailLog1.equals(mailLog3));
        System.assertEquals(false, mailLog2.equals(mailLog3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMailLog mailLog1 = OASMailLog.getExample();
        OASMailLog mailLog2 = new OASMailLog();

        System.assertEquals(mailLog1.hashCode(), mailLog1.hashCode());
        System.assertEquals(mailLog2.hashCode(), mailLog2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMailLog mailLog1 = OASMailLog.getExample();
        OASMailLog mailLog2 = OASMailLog.getExample();
        OASMailLog mailLog3 = new OASMailLog();
        OASMailLog mailLog4 = new OASMailLog();

        System.assert(mailLog1.equals(mailLog2));
        System.assert(mailLog3.equals(mailLog4));
        System.assertEquals(mailLog1.hashCode(), mailLog2.hashCode());
        System.assertEquals(mailLog3.hashCode(), mailLog4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASMailLog mailLog = new OASMailLog();
        Map<String, String> x-property-mappings = mailLog.getx-property-mappings();
        System.assertEquals('r_limit', x-property-mappings.get('limit'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASMailLog mailLog = new OASMailLog();
        System.assertEquals(new List<OASMailLogEntry>(), mailLog.emails);
        System.assertEquals(null, mailLog.total);
        System.assertEquals(null, mailLog.skip);
        System.assertEquals(null, mailLog.r_limit);
    }
}
