@isTest
private class OASHomeDetailsTest {
    @isTest
    private static void equalsSameInstance() {
        OASHomeDetails homeDetails1 = OASHomeDetails.getExample();
        OASHomeDetails homeDetails2 = homeDetails1;
        OASHomeDetails homeDetails3 = new OASHomeDetails();
        OASHomeDetails homeDetails4 = homeDetails3;

        System.assert(homeDetails1.equals(homeDetails2));
        System.assert(homeDetails2.equals(homeDetails1));
        System.assert(homeDetails1.equals(homeDetails1));
        System.assert(homeDetails3.equals(homeDetails4));
        System.assert(homeDetails4.equals(homeDetails3));
        System.assert(homeDetails3.equals(homeDetails3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASHomeDetails homeDetails1 = OASHomeDetails.getExample();
        OASHomeDetails homeDetails2 = OASHomeDetails.getExample();
        OASHomeDetails homeDetails3 = new OASHomeDetails();
        OASHomeDetails homeDetails4 = new OASHomeDetails();

        System.assert(homeDetails1.equals(homeDetails2));
        System.assert(homeDetails2.equals(homeDetails1));
        System.assert(homeDetails3.equals(homeDetails4));
        System.assert(homeDetails4.equals(homeDetails3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASHomeDetails homeDetails1 = OASHomeDetails.getExample();
        OASHomeDetails homeDetails2 = new OASHomeDetails();

        System.assertEquals(false, homeDetails1.equals('foo'));
        System.assertEquals(false, homeDetails2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASHomeDetails homeDetails1 = OASHomeDetails.getExample();
        OASHomeDetails homeDetails2 = new OASHomeDetails();
        OASHomeDetails homeDetails3;

        System.assertEquals(false, homeDetails1.equals(homeDetails3));
        System.assertEquals(false, homeDetails2.equals(homeDetails3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASHomeDetails homeDetails1 = OASHomeDetails.getExample();
        OASHomeDetails homeDetails2 = new OASHomeDetails();

        System.assertEquals(homeDetails1.hashCode(), homeDetails1.hashCode());
        System.assertEquals(homeDetails2.hashCode(), homeDetails2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASHomeDetails homeDetails1 = OASHomeDetails.getExample();
        OASHomeDetails homeDetails2 = OASHomeDetails.getExample();
        OASHomeDetails homeDetails3 = new OASHomeDetails();
        OASHomeDetails homeDetails4 = new OASHomeDetails();

        System.assert(homeDetails1.equals(homeDetails2));
        System.assert(homeDetails3.equals(homeDetails4));
        System.assertEquals(homeDetails1.hashCode(), homeDetails2.hashCode());
        System.assertEquals(homeDetails3.hashCode(), homeDetails4.hashCode());
    }
}
