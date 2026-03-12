@isTest
private class OASTicketsCountArrayTest {
    @isTest
    private static void equalsSameInstance() {
        OASTicketsCountArray ticketsCountArray1 = OASTicketsCountArray.getExample();
        OASTicketsCountArray ticketsCountArray2 = ticketsCountArray1;
        OASTicketsCountArray ticketsCountArray3 = new OASTicketsCountArray();
        OASTicketsCountArray ticketsCountArray4 = ticketsCountArray3;

        System.assert(ticketsCountArray1.equals(ticketsCountArray2));
        System.assert(ticketsCountArray2.equals(ticketsCountArray1));
        System.assert(ticketsCountArray1.equals(ticketsCountArray1));
        System.assert(ticketsCountArray3.equals(ticketsCountArray4));
        System.assert(ticketsCountArray4.equals(ticketsCountArray3));
        System.assert(ticketsCountArray3.equals(ticketsCountArray3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASTicketsCountArray ticketsCountArray1 = OASTicketsCountArray.getExample();
        OASTicketsCountArray ticketsCountArray2 = OASTicketsCountArray.getExample();
        OASTicketsCountArray ticketsCountArray3 = new OASTicketsCountArray();
        OASTicketsCountArray ticketsCountArray4 = new OASTicketsCountArray();

        System.assert(ticketsCountArray1.equals(ticketsCountArray2));
        System.assert(ticketsCountArray2.equals(ticketsCountArray1));
        System.assert(ticketsCountArray3.equals(ticketsCountArray4));
        System.assert(ticketsCountArray4.equals(ticketsCountArray3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASTicketsCountArray ticketsCountArray1 = OASTicketsCountArray.getExample();
        OASTicketsCountArray ticketsCountArray2 = new OASTicketsCountArray();

        System.assertEquals(false, ticketsCountArray1.equals('foo'));
        System.assertEquals(false, ticketsCountArray2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASTicketsCountArray ticketsCountArray1 = OASTicketsCountArray.getExample();
        OASTicketsCountArray ticketsCountArray2 = new OASTicketsCountArray();
        OASTicketsCountArray ticketsCountArray3;

        System.assertEquals(false, ticketsCountArray1.equals(ticketsCountArray3));
        System.assertEquals(false, ticketsCountArray2.equals(ticketsCountArray3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASTicketsCountArray ticketsCountArray1 = OASTicketsCountArray.getExample();
        OASTicketsCountArray ticketsCountArray2 = new OASTicketsCountArray();

        System.assertEquals(ticketsCountArray1.hashCode(), ticketsCountArray1.hashCode());
        System.assertEquals(ticketsCountArray2.hashCode(), ticketsCountArray2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASTicketsCountArray ticketsCountArray1 = OASTicketsCountArray.getExample();
        OASTicketsCountArray ticketsCountArray2 = OASTicketsCountArray.getExample();
        OASTicketsCountArray ticketsCountArray3 = new OASTicketsCountArray();
        OASTicketsCountArray ticketsCountArray4 = new OASTicketsCountArray();

        System.assert(ticketsCountArray1.equals(ticketsCountArray2));
        System.assert(ticketsCountArray3.equals(ticketsCountArray4));
        System.assertEquals(ticketsCountArray1.hashCode(), ticketsCountArray2.hashCode());
        System.assertEquals(ticketsCountArray3.hashCode(), ticketsCountArray4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASTicketsCountArray ticketsCountArray = new OASTicketsCountArray();
        Map<String, String> x-property-mappings = ticketsCountArray.getx-property-mappings();
        System.assertEquals('open', x-property-mappings.get('Open'));
        System.assertEquals('onHold', x-property-mappings.get('On Hold'));
        System.assertEquals('closed', x-property-mappings.get('Closed'));
    }
}
