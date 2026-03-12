@isTest
private class OASHomeTicketStatusTest {
    @isTest
    private static void equalsSameInstance() {
        OASHomeTicketStatus homeTicketStatus1 = OASHomeTicketStatus.getExample();
        OASHomeTicketStatus homeTicketStatus2 = homeTicketStatus1;
        OASHomeTicketStatus homeTicketStatus3 = new OASHomeTicketStatus();
        OASHomeTicketStatus homeTicketStatus4 = homeTicketStatus3;

        System.assert(homeTicketStatus1.equals(homeTicketStatus2));
        System.assert(homeTicketStatus2.equals(homeTicketStatus1));
        System.assert(homeTicketStatus1.equals(homeTicketStatus1));
        System.assert(homeTicketStatus3.equals(homeTicketStatus4));
        System.assert(homeTicketStatus4.equals(homeTicketStatus3));
        System.assert(homeTicketStatus3.equals(homeTicketStatus3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASHomeTicketStatus homeTicketStatus1 = OASHomeTicketStatus.getExample();
        OASHomeTicketStatus homeTicketStatus2 = OASHomeTicketStatus.getExample();
        OASHomeTicketStatus homeTicketStatus3 = new OASHomeTicketStatus();
        OASHomeTicketStatus homeTicketStatus4 = new OASHomeTicketStatus();

        System.assert(homeTicketStatus1.equals(homeTicketStatus2));
        System.assert(homeTicketStatus2.equals(homeTicketStatus1));
        System.assert(homeTicketStatus3.equals(homeTicketStatus4));
        System.assert(homeTicketStatus4.equals(homeTicketStatus3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASHomeTicketStatus homeTicketStatus1 = OASHomeTicketStatus.getExample();
        OASHomeTicketStatus homeTicketStatus2 = new OASHomeTicketStatus();

        System.assertEquals(false, homeTicketStatus1.equals('foo'));
        System.assertEquals(false, homeTicketStatus2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASHomeTicketStatus homeTicketStatus1 = OASHomeTicketStatus.getExample();
        OASHomeTicketStatus homeTicketStatus2 = new OASHomeTicketStatus();
        OASHomeTicketStatus homeTicketStatus3;

        System.assertEquals(false, homeTicketStatus1.equals(homeTicketStatus3));
        System.assertEquals(false, homeTicketStatus2.equals(homeTicketStatus3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASHomeTicketStatus homeTicketStatus1 = OASHomeTicketStatus.getExample();
        OASHomeTicketStatus homeTicketStatus2 = new OASHomeTicketStatus();

        System.assertEquals(homeTicketStatus1.hashCode(), homeTicketStatus1.hashCode());
        System.assertEquals(homeTicketStatus2.hashCode(), homeTicketStatus2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASHomeTicketStatus homeTicketStatus1 = OASHomeTicketStatus.getExample();
        OASHomeTicketStatus homeTicketStatus2 = OASHomeTicketStatus.getExample();
        OASHomeTicketStatus homeTicketStatus3 = new OASHomeTicketStatus();
        OASHomeTicketStatus homeTicketStatus4 = new OASHomeTicketStatus();

        System.assert(homeTicketStatus1.equals(homeTicketStatus2));
        System.assert(homeTicketStatus3.equals(homeTicketStatus4));
        System.assertEquals(homeTicketStatus1.hashCode(), homeTicketStatus2.hashCode());
        System.assertEquals(homeTicketStatus3.hashCode(), homeTicketStatus4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASHomeTicketStatus homeTicketStatus = new OASHomeTicketStatus();
        Map<String, String> x-property-mappings = homeTicketStatus.getx-property-mappings();
        System.assertEquals('open', x-property-mappings.get('Open'));
        System.assertEquals('onHold', x-property-mappings.get('On Hold'));
    }
}
