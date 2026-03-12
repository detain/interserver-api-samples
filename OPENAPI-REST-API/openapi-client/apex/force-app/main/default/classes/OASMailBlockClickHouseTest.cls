@isTest
private class OASMailBlockClickHouseTest {
    @isTest
    private static void equalsSameInstance() {
        OASMailBlockClickHouse mailBlockClickHouse1 = OASMailBlockClickHouse.getExample();
        OASMailBlockClickHouse mailBlockClickHouse2 = mailBlockClickHouse1;
        OASMailBlockClickHouse mailBlockClickHouse3 = new OASMailBlockClickHouse();
        OASMailBlockClickHouse mailBlockClickHouse4 = mailBlockClickHouse3;

        System.assert(mailBlockClickHouse1.equals(mailBlockClickHouse2));
        System.assert(mailBlockClickHouse2.equals(mailBlockClickHouse1));
        System.assert(mailBlockClickHouse1.equals(mailBlockClickHouse1));
        System.assert(mailBlockClickHouse3.equals(mailBlockClickHouse4));
        System.assert(mailBlockClickHouse4.equals(mailBlockClickHouse3));
        System.assert(mailBlockClickHouse3.equals(mailBlockClickHouse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMailBlockClickHouse mailBlockClickHouse1 = OASMailBlockClickHouse.getExample();
        OASMailBlockClickHouse mailBlockClickHouse2 = OASMailBlockClickHouse.getExample();
        OASMailBlockClickHouse mailBlockClickHouse3 = new OASMailBlockClickHouse();
        OASMailBlockClickHouse mailBlockClickHouse4 = new OASMailBlockClickHouse();

        System.assert(mailBlockClickHouse1.equals(mailBlockClickHouse2));
        System.assert(mailBlockClickHouse2.equals(mailBlockClickHouse1));
        System.assert(mailBlockClickHouse3.equals(mailBlockClickHouse4));
        System.assert(mailBlockClickHouse4.equals(mailBlockClickHouse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMailBlockClickHouse mailBlockClickHouse1 = OASMailBlockClickHouse.getExample();
        OASMailBlockClickHouse mailBlockClickHouse2 = new OASMailBlockClickHouse();

        System.assertEquals(false, mailBlockClickHouse1.equals('foo'));
        System.assertEquals(false, mailBlockClickHouse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMailBlockClickHouse mailBlockClickHouse1 = OASMailBlockClickHouse.getExample();
        OASMailBlockClickHouse mailBlockClickHouse2 = new OASMailBlockClickHouse();
        OASMailBlockClickHouse mailBlockClickHouse3;

        System.assertEquals(false, mailBlockClickHouse1.equals(mailBlockClickHouse3));
        System.assertEquals(false, mailBlockClickHouse2.equals(mailBlockClickHouse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMailBlockClickHouse mailBlockClickHouse1 = OASMailBlockClickHouse.getExample();
        OASMailBlockClickHouse mailBlockClickHouse2 = new OASMailBlockClickHouse();

        System.assertEquals(mailBlockClickHouse1.hashCode(), mailBlockClickHouse1.hashCode());
        System.assertEquals(mailBlockClickHouse2.hashCode(), mailBlockClickHouse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMailBlockClickHouse mailBlockClickHouse1 = OASMailBlockClickHouse.getExample();
        OASMailBlockClickHouse mailBlockClickHouse2 = OASMailBlockClickHouse.getExample();
        OASMailBlockClickHouse mailBlockClickHouse3 = new OASMailBlockClickHouse();
        OASMailBlockClickHouse mailBlockClickHouse4 = new OASMailBlockClickHouse();

        System.assert(mailBlockClickHouse1.equals(mailBlockClickHouse2));
        System.assert(mailBlockClickHouse3.equals(mailBlockClickHouse4));
        System.assertEquals(mailBlockClickHouse1.hashCode(), mailBlockClickHouse2.hashCode());
        System.assertEquals(mailBlockClickHouse3.hashCode(), mailBlockClickHouse4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASMailBlockClickHouse mailBlockClickHouse = new OASMailBlockClickHouse();
        Map<String, String> x-property-mappings = mailBlockClickHouse.getx-property-mappings();
        System.assertEquals('r_date', x-property-mappings.get('date'));
        System.assertEquals('r_from', x-property-mappings.get('from'));
    }
}
