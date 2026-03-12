@isTest
private class OASEmailAddressNameTest {
    @isTest
    private static void equalsSameInstance() {
        OASEmailAddressName emailAddressName1 = OASEmailAddressName.getExample();
        OASEmailAddressName emailAddressName2 = emailAddressName1;
        OASEmailAddressName emailAddressName3 = new OASEmailAddressName();
        OASEmailAddressName emailAddressName4 = emailAddressName3;

        System.assert(emailAddressName1.equals(emailAddressName2));
        System.assert(emailAddressName2.equals(emailAddressName1));
        System.assert(emailAddressName1.equals(emailAddressName1));
        System.assert(emailAddressName3.equals(emailAddressName4));
        System.assert(emailAddressName4.equals(emailAddressName3));
        System.assert(emailAddressName3.equals(emailAddressName3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASEmailAddressName emailAddressName1 = OASEmailAddressName.getExample();
        OASEmailAddressName emailAddressName2 = OASEmailAddressName.getExample();
        OASEmailAddressName emailAddressName3 = new OASEmailAddressName();
        OASEmailAddressName emailAddressName4 = new OASEmailAddressName();

        System.assert(emailAddressName1.equals(emailAddressName2));
        System.assert(emailAddressName2.equals(emailAddressName1));
        System.assert(emailAddressName3.equals(emailAddressName4));
        System.assert(emailAddressName4.equals(emailAddressName3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASEmailAddressName emailAddressName1 = OASEmailAddressName.getExample();
        OASEmailAddressName emailAddressName2 = new OASEmailAddressName();

        System.assertEquals(false, emailAddressName1.equals('foo'));
        System.assertEquals(false, emailAddressName2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASEmailAddressName emailAddressName1 = OASEmailAddressName.getExample();
        OASEmailAddressName emailAddressName2 = new OASEmailAddressName();
        OASEmailAddressName emailAddressName3;

        System.assertEquals(false, emailAddressName1.equals(emailAddressName3));
        System.assertEquals(false, emailAddressName2.equals(emailAddressName3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASEmailAddressName emailAddressName1 = OASEmailAddressName.getExample();
        OASEmailAddressName emailAddressName2 = new OASEmailAddressName();

        System.assertEquals(emailAddressName1.hashCode(), emailAddressName1.hashCode());
        System.assertEquals(emailAddressName2.hashCode(), emailAddressName2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASEmailAddressName emailAddressName1 = OASEmailAddressName.getExample();
        OASEmailAddressName emailAddressName2 = OASEmailAddressName.getExample();
        OASEmailAddressName emailAddressName3 = new OASEmailAddressName();
        OASEmailAddressName emailAddressName4 = new OASEmailAddressName();

        System.assert(emailAddressName1.equals(emailAddressName2));
        System.assert(emailAddressName3.equals(emailAddressName4));
        System.assertEquals(emailAddressName1.hashCode(), emailAddressName2.hashCode());
        System.assertEquals(emailAddressName3.hashCode(), emailAddressName4.hashCode());
    }
}
