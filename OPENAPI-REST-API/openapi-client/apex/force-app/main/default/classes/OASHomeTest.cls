@isTest
private class OASHomeTest {
    @isTest
    private static void equalsSameInstance() {
        OASHome home1 = OASHome.getExample();
        OASHome home2 = home1;
        OASHome home3 = new OASHome();
        OASHome home4 = home3;

        System.assert(home1.equals(home2));
        System.assert(home2.equals(home1));
        System.assert(home1.equals(home1));
        System.assert(home3.equals(home4));
        System.assert(home4.equals(home3));
        System.assert(home3.equals(home3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASHome home1 = OASHome.getExample();
        OASHome home2 = OASHome.getExample();
        OASHome home3 = new OASHome();
        OASHome home4 = new OASHome();

        System.assert(home1.equals(home2));
        System.assert(home2.equals(home1));
        System.assert(home3.equals(home4));
        System.assert(home4.equals(home3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASHome home1 = OASHome.getExample();
        OASHome home2 = new OASHome();

        System.assertEquals(false, home1.equals('foo'));
        System.assertEquals(false, home2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASHome home1 = OASHome.getExample();
        OASHome home2 = new OASHome();
        OASHome home3;

        System.assertEquals(false, home1.equals(home3));
        System.assertEquals(false, home2.equals(home3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASHome home1 = OASHome.getExample();
        OASHome home2 = new OASHome();

        System.assertEquals(home1.hashCode(), home1.hashCode());
        System.assertEquals(home2.hashCode(), home2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASHome home1 = OASHome.getExample();
        OASHome home2 = OASHome.getExample();
        OASHome home3 = new OASHome();
        OASHome home4 = new OASHome();

        System.assert(home1.equals(home2));
        System.assert(home3.equals(home4));
        System.assertEquals(home1.hashCode(), home2.hashCode());
        System.assertEquals(home3.hashCode(), home4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASHome home = new OASHome();
        Map<String, String> x-property-mappings = home.getx-property-mappings();
        System.assertEquals('lastLoginIp', x-property-mappings.get('last_login_ip'));
        System.assertEquals('lastLogin', x-property-mappings.get('last_login'));
        System.assertEquals('r_currency', x-property-mappings.get('currency'));
        System.assertEquals('invoiceList', x-property-mappings.get('invoice_list'));
        System.assertEquals('fullName', x-property-mappings.get('full_name'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASHome home = new OASHome();
        System.assertEquals(new List<String>(), home.tickets);
        System.assertEquals(null, home.lastLoginIp);
        System.assertEquals(null, home.lastLogin);
        System.assertEquals(null, home.r_currency);
        System.assertEquals(null, home.amount);
        System.assertEquals(null, home.invoiceList);
        System.assertEquals(null, home.balance);
        System.assertEquals(null, home.fullName);
        System.assertEquals(null, home.email);
        System.assertEquals(null, home.ticketStatus);
        System.assertEquals(null, home.ticketStatusView);
        System.assertEquals(null, home.details);
        System.assertEquals(null, home.services);
        System.assertEquals(null, home.AFFILIATE_AMOUNT);
    }
}
