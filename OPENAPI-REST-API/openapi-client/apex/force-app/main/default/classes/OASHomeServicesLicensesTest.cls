@isTest
private class OASHomeServicesLicensesTest {
    @isTest
    private static void equalsSameInstance() {
        OASHomeServicesLicenses homeServicesLicenses1 = OASHomeServicesLicenses.getExample();
        OASHomeServicesLicenses homeServicesLicenses2 = homeServicesLicenses1;
        OASHomeServicesLicenses homeServicesLicenses3 = new OASHomeServicesLicenses();
        OASHomeServicesLicenses homeServicesLicenses4 = homeServicesLicenses3;

        System.assert(homeServicesLicenses1.equals(homeServicesLicenses2));
        System.assert(homeServicesLicenses2.equals(homeServicesLicenses1));
        System.assert(homeServicesLicenses1.equals(homeServicesLicenses1));
        System.assert(homeServicesLicenses3.equals(homeServicesLicenses4));
        System.assert(homeServicesLicenses4.equals(homeServicesLicenses3));
        System.assert(homeServicesLicenses3.equals(homeServicesLicenses3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASHomeServicesLicenses homeServicesLicenses1 = OASHomeServicesLicenses.getExample();
        OASHomeServicesLicenses homeServicesLicenses2 = OASHomeServicesLicenses.getExample();
        OASHomeServicesLicenses homeServicesLicenses3 = new OASHomeServicesLicenses();
        OASHomeServicesLicenses homeServicesLicenses4 = new OASHomeServicesLicenses();

        System.assert(homeServicesLicenses1.equals(homeServicesLicenses2));
        System.assert(homeServicesLicenses2.equals(homeServicesLicenses1));
        System.assert(homeServicesLicenses3.equals(homeServicesLicenses4));
        System.assert(homeServicesLicenses4.equals(homeServicesLicenses3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASHomeServicesLicenses homeServicesLicenses1 = OASHomeServicesLicenses.getExample();
        OASHomeServicesLicenses homeServicesLicenses2 = new OASHomeServicesLicenses();

        System.assertEquals(false, homeServicesLicenses1.equals('foo'));
        System.assertEquals(false, homeServicesLicenses2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASHomeServicesLicenses homeServicesLicenses1 = OASHomeServicesLicenses.getExample();
        OASHomeServicesLicenses homeServicesLicenses2 = new OASHomeServicesLicenses();
        OASHomeServicesLicenses homeServicesLicenses3;

        System.assertEquals(false, homeServicesLicenses1.equals(homeServicesLicenses3));
        System.assertEquals(false, homeServicesLicenses2.equals(homeServicesLicenses3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASHomeServicesLicenses homeServicesLicenses1 = OASHomeServicesLicenses.getExample();
        OASHomeServicesLicenses homeServicesLicenses2 = new OASHomeServicesLicenses();

        System.assertEquals(homeServicesLicenses1.hashCode(), homeServicesLicenses1.hashCode());
        System.assertEquals(homeServicesLicenses2.hashCode(), homeServicesLicenses2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASHomeServicesLicenses homeServicesLicenses1 = OASHomeServicesLicenses.getExample();
        OASHomeServicesLicenses homeServicesLicenses2 = OASHomeServicesLicenses.getExample();
        OASHomeServicesLicenses homeServicesLicenses3 = new OASHomeServicesLicenses();
        OASHomeServicesLicenses homeServicesLicenses4 = new OASHomeServicesLicenses();

        System.assert(homeServicesLicenses1.equals(homeServicesLicenses2));
        System.assert(homeServicesLicenses3.equals(homeServicesLicenses4));
        System.assertEquals(homeServicesLicenses1.hashCode(), homeServicesLicenses2.hashCode());
        System.assertEquals(homeServicesLicenses3.hashCode(), homeServicesLicenses4.hashCode());
    }
}
