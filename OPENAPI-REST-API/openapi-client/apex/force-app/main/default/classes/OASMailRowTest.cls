@isTest
private class OASMailRowTest {
    @isTest
    private static void equalsSameInstance() {
        OASMailRow mailRow1 = OASMailRow.getExample();
        OASMailRow mailRow2 = mailRow1;
        OASMailRow mailRow3 = new OASMailRow();
        OASMailRow mailRow4 = mailRow3;

        System.assert(mailRow1.equals(mailRow2));
        System.assert(mailRow2.equals(mailRow1));
        System.assert(mailRow1.equals(mailRow1));
        System.assert(mailRow3.equals(mailRow4));
        System.assert(mailRow4.equals(mailRow3));
        System.assert(mailRow3.equals(mailRow3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMailRow mailRow1 = OASMailRow.getExample();
        OASMailRow mailRow2 = OASMailRow.getExample();
        OASMailRow mailRow3 = new OASMailRow();
        OASMailRow mailRow4 = new OASMailRow();

        System.assert(mailRow1.equals(mailRow2));
        System.assert(mailRow2.equals(mailRow1));
        System.assert(mailRow3.equals(mailRow4));
        System.assert(mailRow4.equals(mailRow3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMailRow mailRow1 = OASMailRow.getExample();
        OASMailRow mailRow2 = new OASMailRow();

        System.assertEquals(false, mailRow1.equals('foo'));
        System.assertEquals(false, mailRow2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMailRow mailRow1 = OASMailRow.getExample();
        OASMailRow mailRow2 = new OASMailRow();
        OASMailRow mailRow3;

        System.assertEquals(false, mailRow1.equals(mailRow3));
        System.assertEquals(false, mailRow2.equals(mailRow3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMailRow mailRow1 = OASMailRow.getExample();
        OASMailRow mailRow2 = new OASMailRow();

        System.assertEquals(mailRow1.hashCode(), mailRow1.hashCode());
        System.assertEquals(mailRow2.hashCode(), mailRow2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMailRow mailRow1 = OASMailRow.getExample();
        OASMailRow mailRow2 = OASMailRow.getExample();
        OASMailRow mailRow3 = new OASMailRow();
        OASMailRow mailRow4 = new OASMailRow();

        System.assert(mailRow1.equals(mailRow2));
        System.assert(mailRow3.equals(mailRow4));
        System.assertEquals(mailRow1.hashCode(), mailRow2.hashCode());
        System.assertEquals(mailRow3.hashCode(), mailRow4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASMailRow mailRow = new OASMailRow();
        Map<String, String> x-property-mappings = mailRow.getx-property-mappings();
        System.assertEquals('mailId', x-property-mappings.get('mail_id'));
        System.assertEquals('repeatInvoicesCost', x-property-mappings.get('repeat_invoices_cost'));
        System.assertEquals('mailUsername', x-property-mappings.get('mail_username'));
        System.assertEquals('mailStatus', x-property-mappings.get('mail_status'));
        System.assertEquals('servicesName', x-property-mappings.get('services_name'));
    }
}
