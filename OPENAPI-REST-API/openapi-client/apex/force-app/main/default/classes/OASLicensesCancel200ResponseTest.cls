@isTest
private class OASLicensesCancel200ResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASLicensesCancel200Response licensesCancel200Response1 = OASLicensesCancel200Response.getExample();
        OASLicensesCancel200Response licensesCancel200Response2 = licensesCancel200Response1;
        OASLicensesCancel200Response licensesCancel200Response3 = new OASLicensesCancel200Response();
        OASLicensesCancel200Response licensesCancel200Response4 = licensesCancel200Response3;

        System.assert(licensesCancel200Response1.equals(licensesCancel200Response2));
        System.assert(licensesCancel200Response2.equals(licensesCancel200Response1));
        System.assert(licensesCancel200Response1.equals(licensesCancel200Response1));
        System.assert(licensesCancel200Response3.equals(licensesCancel200Response4));
        System.assert(licensesCancel200Response4.equals(licensesCancel200Response3));
        System.assert(licensesCancel200Response3.equals(licensesCancel200Response3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASLicensesCancel200Response licensesCancel200Response1 = OASLicensesCancel200Response.getExample();
        OASLicensesCancel200Response licensesCancel200Response2 = OASLicensesCancel200Response.getExample();
        OASLicensesCancel200Response licensesCancel200Response3 = new OASLicensesCancel200Response();
        OASLicensesCancel200Response licensesCancel200Response4 = new OASLicensesCancel200Response();

        System.assert(licensesCancel200Response1.equals(licensesCancel200Response2));
        System.assert(licensesCancel200Response2.equals(licensesCancel200Response1));
        System.assert(licensesCancel200Response3.equals(licensesCancel200Response4));
        System.assert(licensesCancel200Response4.equals(licensesCancel200Response3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASLicensesCancel200Response licensesCancel200Response1 = OASLicensesCancel200Response.getExample();
        OASLicensesCancel200Response licensesCancel200Response2 = new OASLicensesCancel200Response();

        System.assertEquals(false, licensesCancel200Response1.equals('foo'));
        System.assertEquals(false, licensesCancel200Response2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASLicensesCancel200Response licensesCancel200Response1 = OASLicensesCancel200Response.getExample();
        OASLicensesCancel200Response licensesCancel200Response2 = new OASLicensesCancel200Response();
        OASLicensesCancel200Response licensesCancel200Response3;

        System.assertEquals(false, licensesCancel200Response1.equals(licensesCancel200Response3));
        System.assertEquals(false, licensesCancel200Response2.equals(licensesCancel200Response3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASLicensesCancel200Response licensesCancel200Response1 = OASLicensesCancel200Response.getExample();
        OASLicensesCancel200Response licensesCancel200Response2 = new OASLicensesCancel200Response();

        System.assertEquals(licensesCancel200Response1.hashCode(), licensesCancel200Response1.hashCode());
        System.assertEquals(licensesCancel200Response2.hashCode(), licensesCancel200Response2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASLicensesCancel200Response licensesCancel200Response1 = OASLicensesCancel200Response.getExample();
        OASLicensesCancel200Response licensesCancel200Response2 = OASLicensesCancel200Response.getExample();
        OASLicensesCancel200Response licensesCancel200Response3 = new OASLicensesCancel200Response();
        OASLicensesCancel200Response licensesCancel200Response4 = new OASLicensesCancel200Response();

        System.assert(licensesCancel200Response1.equals(licensesCancel200Response2));
        System.assert(licensesCancel200Response3.equals(licensesCancel200Response4));
        System.assertEquals(licensesCancel200Response1.hashCode(), licensesCancel200Response2.hashCode());
        System.assertEquals(licensesCancel200Response3.hashCode(), licensesCancel200Response4.hashCode());
    }
}
