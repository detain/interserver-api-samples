@isTest
private class OASUpdateTicketTest {
    @isTest
    private static void equalsSameInstance() {
        OASUpdateTicket updateTicket1 = OASUpdateTicket.getExample();
        OASUpdateTicket updateTicket2 = updateTicket1;
        OASUpdateTicket updateTicket3 = new OASUpdateTicket();
        OASUpdateTicket updateTicket4 = updateTicket3;

        System.assert(updateTicket1.equals(updateTicket2));
        System.assert(updateTicket2.equals(updateTicket1));
        System.assert(updateTicket1.equals(updateTicket1));
        System.assert(updateTicket3.equals(updateTicket4));
        System.assert(updateTicket4.equals(updateTicket3));
        System.assert(updateTicket3.equals(updateTicket3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASUpdateTicket updateTicket1 = OASUpdateTicket.getExample();
        OASUpdateTicket updateTicket2 = OASUpdateTicket.getExample();
        OASUpdateTicket updateTicket3 = new OASUpdateTicket();
        OASUpdateTicket updateTicket4 = new OASUpdateTicket();

        System.assert(updateTicket1.equals(updateTicket2));
        System.assert(updateTicket2.equals(updateTicket1));
        System.assert(updateTicket3.equals(updateTicket4));
        System.assert(updateTicket4.equals(updateTicket3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASUpdateTicket updateTicket1 = OASUpdateTicket.getExample();
        OASUpdateTicket updateTicket2 = new OASUpdateTicket();

        System.assertEquals(false, updateTicket1.equals('foo'));
        System.assertEquals(false, updateTicket2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASUpdateTicket updateTicket1 = OASUpdateTicket.getExample();
        OASUpdateTicket updateTicket2 = new OASUpdateTicket();
        OASUpdateTicket updateTicket3;

        System.assertEquals(false, updateTicket1.equals(updateTicket3));
        System.assertEquals(false, updateTicket2.equals(updateTicket3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASUpdateTicket updateTicket1 = OASUpdateTicket.getExample();
        OASUpdateTicket updateTicket2 = new OASUpdateTicket();

        System.assertEquals(updateTicket1.hashCode(), updateTicket1.hashCode());
        System.assertEquals(updateTicket2.hashCode(), updateTicket2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASUpdateTicket updateTicket1 = OASUpdateTicket.getExample();
        OASUpdateTicket updateTicket2 = OASUpdateTicket.getExample();
        OASUpdateTicket updateTicket3 = new OASUpdateTicket();
        OASUpdateTicket updateTicket4 = new OASUpdateTicket();

        System.assert(updateTicket1.equals(updateTicket2));
        System.assert(updateTicket3.equals(updateTicket4));
        System.assertEquals(updateTicket1.hashCode(), updateTicket2.hashCode());
        System.assertEquals(updateTicket3.hashCode(), updateTicket4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASUpdateTicket updateTicket = new OASUpdateTicket();
        Map<String, String> x-property-mappings = updateTicket.getx-property-mappings();
        System.assertEquals('ipAddress', x-property-mappings.get('ip_address'));
        System.assertEquals('customerServerAccess', x-property-mappings.get('customer_server_access'));
        System.assertEquals('rootPassword', x-property-mappings.get('root_password'));
        System.assertEquals('sudoUsername', x-property-mappings.get('sudo_username'));
        System.assertEquals('sudoPassword', x-property-mappings.get('sudo_password'));
    }
}
