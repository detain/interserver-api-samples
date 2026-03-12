@isTest
private class OASEmailAddressTest {
    @isTest
    private static void equalsSameInstance() {
        OASEmailAddress emailAddress1 = OASEmailAddress.getExample();
        OASEmailAddress emailAddress2 = emailAddress1;
        OASEmailAddress emailAddress3 = new OASEmailAddress();
        OASEmailAddress emailAddress4 = emailAddress3;

        System.assert(emailAddress1.equals(emailAddress2));
        System.assert(emailAddress2.equals(emailAddress1));
        System.assert(emailAddress1.equals(emailAddress1));
        System.assert(emailAddress3.equals(emailAddress4));
        System.assert(emailAddress4.equals(emailAddress3));
        System.assert(emailAddress3.equals(emailAddress3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASEmailAddress emailAddress1 = OASEmailAddress.getExample();
        OASEmailAddress emailAddress2 = OASEmailAddress.getExample();
        OASEmailAddress emailAddress3 = new OASEmailAddress();
        OASEmailAddress emailAddress4 = new OASEmailAddress();

        System.assert(emailAddress1.equals(emailAddress2));
        System.assert(emailAddress2.equals(emailAddress1));
        System.assert(emailAddress3.equals(emailAddress4));
        System.assert(emailAddress4.equals(emailAddress3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASEmailAddress emailAddress1 = OASEmailAddress.getExample();
        OASEmailAddress emailAddress2 = new OASEmailAddress();

        System.assertEquals(false, emailAddress1.equals('foo'));
        System.assertEquals(false, emailAddress2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASEmailAddress emailAddress1 = OASEmailAddress.getExample();
        OASEmailAddress emailAddress2 = new OASEmailAddress();
        OASEmailAddress emailAddress3;

        System.assertEquals(false, emailAddress1.equals(emailAddress3));
        System.assertEquals(false, emailAddress2.equals(emailAddress3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASEmailAddress emailAddress1 = OASEmailAddress.getExample();
        OASEmailAddress emailAddress2 = new OASEmailAddress();

        System.assertEquals(emailAddress1.hashCode(), emailAddress1.hashCode());
        System.assertEquals(emailAddress2.hashCode(), emailAddress2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASEmailAddress emailAddress1 = OASEmailAddress.getExample();
        OASEmailAddress emailAddress2 = OASEmailAddress.getExample();
        OASEmailAddress emailAddress3 = new OASEmailAddress();
        OASEmailAddress emailAddress4 = new OASEmailAddress();

        System.assert(emailAddress1.equals(emailAddress2));
        System.assert(emailAddress3.equals(emailAddress4));
        System.assertEquals(emailAddress1.hashCode(), emailAddress2.hashCode());
        System.assertEquals(emailAddress3.hashCode(), emailAddress4.hashCode());
    }
}
