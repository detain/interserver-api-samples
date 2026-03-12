@isTest
private class OASSendMailTest {
    @isTest
    private static void equalsSameInstance() {
        OASSendMail sendMail1 = OASSendMail.getExample();
        OASSendMail sendMail2 = sendMail1;
        OASSendMail sendMail3 = new OASSendMail();
        OASSendMail sendMail4 = sendMail3;

        System.assert(sendMail1.equals(sendMail2));
        System.assert(sendMail2.equals(sendMail1));
        System.assert(sendMail1.equals(sendMail1));
        System.assert(sendMail3.equals(sendMail4));
        System.assert(sendMail4.equals(sendMail3));
        System.assert(sendMail3.equals(sendMail3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASSendMail sendMail1 = OASSendMail.getExample();
        OASSendMail sendMail2 = OASSendMail.getExample();
        OASSendMail sendMail3 = new OASSendMail();
        OASSendMail sendMail4 = new OASSendMail();

        System.assert(sendMail1.equals(sendMail2));
        System.assert(sendMail2.equals(sendMail1));
        System.assert(sendMail3.equals(sendMail4));
        System.assert(sendMail4.equals(sendMail3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASSendMail sendMail1 = OASSendMail.getExample();
        OASSendMail sendMail2 = new OASSendMail();

        System.assertEquals(false, sendMail1.equals('foo'));
        System.assertEquals(false, sendMail2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASSendMail sendMail1 = OASSendMail.getExample();
        OASSendMail sendMail2 = new OASSendMail();
        OASSendMail sendMail3;

        System.assertEquals(false, sendMail1.equals(sendMail3));
        System.assertEquals(false, sendMail2.equals(sendMail3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASSendMail sendMail1 = OASSendMail.getExample();
        OASSendMail sendMail2 = new OASSendMail();

        System.assertEquals(sendMail1.hashCode(), sendMail1.hashCode());
        System.assertEquals(sendMail2.hashCode(), sendMail2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASSendMail sendMail1 = OASSendMail.getExample();
        OASSendMail sendMail2 = OASSendMail.getExample();
        OASSendMail sendMail3 = new OASSendMail();
        OASSendMail sendMail4 = new OASSendMail();

        System.assert(sendMail1.equals(sendMail2));
        System.assert(sendMail3.equals(sendMail4));
        System.assertEquals(sendMail1.hashCode(), sendMail2.hashCode());
        System.assertEquals(sendMail3.hashCode(), sendMail4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASSendMail sendMail = new OASSendMail();
        Map<String, String> x-property-mappings = sendMail.getx-property-mappings();
        System.assertEquals('r_from', x-property-mappings.get('from'));
    }
}
