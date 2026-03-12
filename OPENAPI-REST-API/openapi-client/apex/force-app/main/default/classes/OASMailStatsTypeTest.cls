@isTest
private class OASMailStatsTypeTest {
    @isTest
    private static void equalsSameInstance() {
        OASMailStatsType mailStatsType1 = OASMailStatsType.getExample();
        OASMailStatsType mailStatsType2 = mailStatsType1;
        OASMailStatsType mailStatsType3 = new OASMailStatsType();
        OASMailStatsType mailStatsType4 = mailStatsType3;

        System.assert(mailStatsType1.equals(mailStatsType2));
        System.assert(mailStatsType2.equals(mailStatsType1));
        System.assert(mailStatsType1.equals(mailStatsType1));
        System.assert(mailStatsType3.equals(mailStatsType4));
        System.assert(mailStatsType4.equals(mailStatsType3));
        System.assert(mailStatsType3.equals(mailStatsType3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMailStatsType mailStatsType1 = OASMailStatsType.getExample();
        OASMailStatsType mailStatsType2 = OASMailStatsType.getExample();
        OASMailStatsType mailStatsType3 = new OASMailStatsType();
        OASMailStatsType mailStatsType4 = new OASMailStatsType();

        System.assert(mailStatsType1.equals(mailStatsType2));
        System.assert(mailStatsType2.equals(mailStatsType1));
        System.assert(mailStatsType3.equals(mailStatsType4));
        System.assert(mailStatsType4.equals(mailStatsType3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMailStatsType mailStatsType1 = OASMailStatsType.getExample();
        OASMailStatsType mailStatsType2 = new OASMailStatsType();

        System.assertEquals(false, mailStatsType1.equals('foo'));
        System.assertEquals(false, mailStatsType2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMailStatsType mailStatsType1 = OASMailStatsType.getExample();
        OASMailStatsType mailStatsType2 = new OASMailStatsType();
        OASMailStatsType mailStatsType3;

        System.assertEquals(false, mailStatsType1.equals(mailStatsType3));
        System.assertEquals(false, mailStatsType2.equals(mailStatsType3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMailStatsType mailStatsType1 = OASMailStatsType.getExample();
        OASMailStatsType mailStatsType2 = new OASMailStatsType();

        System.assertEquals(mailStatsType1.hashCode(), mailStatsType1.hashCode());
        System.assertEquals(mailStatsType2.hashCode(), mailStatsType2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMailStatsType mailStatsType1 = OASMailStatsType.getExample();
        OASMailStatsType mailStatsType2 = OASMailStatsType.getExample();
        OASMailStatsType mailStatsType3 = new OASMailStatsType();
        OASMailStatsType mailStatsType4 = new OASMailStatsType();

        System.assert(mailStatsType1.equals(mailStatsType2));
        System.assert(mailStatsType3.equals(mailStatsType4));
        System.assertEquals(mailStatsType1.hashCode(), mailStatsType2.hashCode());
        System.assertEquals(mailStatsType3.hashCode(), mailStatsType4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASMailStatsType mailStatsType = new OASMailStatsType();
        Map<String, String> x-property-mappings = mailStatsType.getx-property-mappings();
        System.assertEquals('r_time', x-property-mappings.get('time'));
        System.assertEquals('r_currency', x-property-mappings.get('currency'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASMailStatsType mailStatsType = new OASMailStatsType();
        System.assertEquals(RTimeEnum._1H, mailStatsType.r_time);
        System.assertEquals(null, mailStatsType.usage);
        System.assertEquals(null, mailStatsType.r_currency);
        System.assertEquals(null, mailStatsType.currencySymbol);
        System.assertEquals(null, mailStatsType.cost);
        System.assertEquals(null, mailStatsType.received);
        System.assertEquals(null, mailStatsType.sent);
        System.assertEquals(null, mailStatsType.volume);
    }
}
