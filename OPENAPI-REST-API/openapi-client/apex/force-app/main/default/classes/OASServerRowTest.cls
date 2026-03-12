@isTest
private class OASServerRowTest {
    @isTest
    private static void equalsSameInstance() {
        OASServerRow serverRow1 = OASServerRow.getExample();
        OASServerRow serverRow2 = serverRow1;
        OASServerRow serverRow3 = new OASServerRow();
        OASServerRow serverRow4 = serverRow3;

        System.assert(serverRow1.equals(serverRow2));
        System.assert(serverRow2.equals(serverRow1));
        System.assert(serverRow1.equals(serverRow1));
        System.assert(serverRow3.equals(serverRow4));
        System.assert(serverRow4.equals(serverRow3));
        System.assert(serverRow3.equals(serverRow3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServerRow serverRow1 = OASServerRow.getExample();
        OASServerRow serverRow2 = OASServerRow.getExample();
        OASServerRow serverRow3 = new OASServerRow();
        OASServerRow serverRow4 = new OASServerRow();

        System.assert(serverRow1.equals(serverRow2));
        System.assert(serverRow2.equals(serverRow1));
        System.assert(serverRow3.equals(serverRow4));
        System.assert(serverRow4.equals(serverRow3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServerRow serverRow1 = OASServerRow.getExample();
        OASServerRow serverRow2 = new OASServerRow();

        System.assertEquals(false, serverRow1.equals('foo'));
        System.assertEquals(false, serverRow2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServerRow serverRow1 = OASServerRow.getExample();
        OASServerRow serverRow2 = new OASServerRow();
        OASServerRow serverRow3;

        System.assertEquals(false, serverRow1.equals(serverRow3));
        System.assertEquals(false, serverRow2.equals(serverRow3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServerRow serverRow1 = OASServerRow.getExample();
        OASServerRow serverRow2 = new OASServerRow();

        System.assertEquals(serverRow1.hashCode(), serverRow1.hashCode());
        System.assertEquals(serverRow2.hashCode(), serverRow2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServerRow serverRow1 = OASServerRow.getExample();
        OASServerRow serverRow2 = OASServerRow.getExample();
        OASServerRow serverRow3 = new OASServerRow();
        OASServerRow serverRow4 = new OASServerRow();

        System.assert(serverRow1.equals(serverRow2));
        System.assert(serverRow3.equals(serverRow4));
        System.assertEquals(serverRow1.hashCode(), serverRow2.hashCode());
        System.assertEquals(serverRow3.hashCode(), serverRow4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASServerRow serverRow = new OASServerRow();
        Map<String, String> x-property-mappings = serverRow.getx-property-mappings();
        System.assertEquals('serverId', x-property-mappings.get('server_id'));
        System.assertEquals('accountLid', x-property-mappings.get('account_lid'));
        System.assertEquals('serverHostname', x-property-mappings.get('server_hostname'));
        System.assertEquals('serverStatus', x-property-mappings.get('server_status'));
    }
}
