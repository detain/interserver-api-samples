@isTest
private class OASTicketCustomFieldDetailsTest {
    @isTest
    private static void equalsSameInstance() {
        OASTicketCustomFieldDetails ticketCustomFieldDetails1 = OASTicketCustomFieldDetails.getExample();
        OASTicketCustomFieldDetails ticketCustomFieldDetails2 = ticketCustomFieldDetails1;
        OASTicketCustomFieldDetails ticketCustomFieldDetails3 = new OASTicketCustomFieldDetails();
        OASTicketCustomFieldDetails ticketCustomFieldDetails4 = ticketCustomFieldDetails3;

        System.assert(ticketCustomFieldDetails1.equals(ticketCustomFieldDetails2));
        System.assert(ticketCustomFieldDetails2.equals(ticketCustomFieldDetails1));
        System.assert(ticketCustomFieldDetails1.equals(ticketCustomFieldDetails1));
        System.assert(ticketCustomFieldDetails3.equals(ticketCustomFieldDetails4));
        System.assert(ticketCustomFieldDetails4.equals(ticketCustomFieldDetails3));
        System.assert(ticketCustomFieldDetails3.equals(ticketCustomFieldDetails3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASTicketCustomFieldDetails ticketCustomFieldDetails1 = OASTicketCustomFieldDetails.getExample();
        OASTicketCustomFieldDetails ticketCustomFieldDetails2 = OASTicketCustomFieldDetails.getExample();
        OASTicketCustomFieldDetails ticketCustomFieldDetails3 = new OASTicketCustomFieldDetails();
        OASTicketCustomFieldDetails ticketCustomFieldDetails4 = new OASTicketCustomFieldDetails();

        System.assert(ticketCustomFieldDetails1.equals(ticketCustomFieldDetails2));
        System.assert(ticketCustomFieldDetails2.equals(ticketCustomFieldDetails1));
        System.assert(ticketCustomFieldDetails3.equals(ticketCustomFieldDetails4));
        System.assert(ticketCustomFieldDetails4.equals(ticketCustomFieldDetails3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASTicketCustomFieldDetails ticketCustomFieldDetails1 = OASTicketCustomFieldDetails.getExample();
        OASTicketCustomFieldDetails ticketCustomFieldDetails2 = new OASTicketCustomFieldDetails();

        System.assertEquals(false, ticketCustomFieldDetails1.equals('foo'));
        System.assertEquals(false, ticketCustomFieldDetails2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASTicketCustomFieldDetails ticketCustomFieldDetails1 = OASTicketCustomFieldDetails.getExample();
        OASTicketCustomFieldDetails ticketCustomFieldDetails2 = new OASTicketCustomFieldDetails();
        OASTicketCustomFieldDetails ticketCustomFieldDetails3;

        System.assertEquals(false, ticketCustomFieldDetails1.equals(ticketCustomFieldDetails3));
        System.assertEquals(false, ticketCustomFieldDetails2.equals(ticketCustomFieldDetails3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASTicketCustomFieldDetails ticketCustomFieldDetails1 = OASTicketCustomFieldDetails.getExample();
        OASTicketCustomFieldDetails ticketCustomFieldDetails2 = new OASTicketCustomFieldDetails();

        System.assertEquals(ticketCustomFieldDetails1.hashCode(), ticketCustomFieldDetails1.hashCode());
        System.assertEquals(ticketCustomFieldDetails2.hashCode(), ticketCustomFieldDetails2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASTicketCustomFieldDetails ticketCustomFieldDetails1 = OASTicketCustomFieldDetails.getExample();
        OASTicketCustomFieldDetails ticketCustomFieldDetails2 = OASTicketCustomFieldDetails.getExample();
        OASTicketCustomFieldDetails ticketCustomFieldDetails3 = new OASTicketCustomFieldDetails();
        OASTicketCustomFieldDetails ticketCustomFieldDetails4 = new OASTicketCustomFieldDetails();

        System.assert(ticketCustomFieldDetails1.equals(ticketCustomFieldDetails2));
        System.assert(ticketCustomFieldDetails3.equals(ticketCustomFieldDetails4));
        System.assertEquals(ticketCustomFieldDetails1.hashCode(), ticketCustomFieldDetails2.hashCode());
        System.assertEquals(ticketCustomFieldDetails3.hashCode(), ticketCustomFieldDetails4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASTicketCustomFieldDetails ticketCustomFieldDetails = new OASTicketCustomFieldDetails();
        Map<String, String> x-property-mappings = ticketCustomFieldDetails.getx-property-mappings();
        System.assertEquals('customerServerAccess', x-property-mappings.get('Customer Server Access'));
        System.assertEquals('ipAddress', x-property-mappings.get('Ip Address'));
        System.assertEquals('rootPassword', x-property-mappings.get('Root Password'));
        System.assertEquals('sudoUser', x-property-mappings.get('Sudo User'));
        System.assertEquals('sudoPassword', x-property-mappings.get('Sudo Password'));
        System.assertEquals('port', x-property-mappings.get('Port'));
    }
}
