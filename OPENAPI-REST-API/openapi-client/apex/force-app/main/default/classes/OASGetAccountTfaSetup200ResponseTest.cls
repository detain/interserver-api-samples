@isTest
private class OASGetAccountTfaSetup200ResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASGetAccountTfaSetup200Response getAccountTfaSetup200Response1 = OASGetAccountTfaSetup200Response.getExample();
        OASGetAccountTfaSetup200Response getAccountTfaSetup200Response2 = getAccountTfaSetup200Response1;
        OASGetAccountTfaSetup200Response getAccountTfaSetup200Response3 = new OASGetAccountTfaSetup200Response();
        OASGetAccountTfaSetup200Response getAccountTfaSetup200Response4 = getAccountTfaSetup200Response3;

        System.assert(getAccountTfaSetup200Response1.equals(getAccountTfaSetup200Response2));
        System.assert(getAccountTfaSetup200Response2.equals(getAccountTfaSetup200Response1));
        System.assert(getAccountTfaSetup200Response1.equals(getAccountTfaSetup200Response1));
        System.assert(getAccountTfaSetup200Response3.equals(getAccountTfaSetup200Response4));
        System.assert(getAccountTfaSetup200Response4.equals(getAccountTfaSetup200Response3));
        System.assert(getAccountTfaSetup200Response3.equals(getAccountTfaSetup200Response3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASGetAccountTfaSetup200Response getAccountTfaSetup200Response1 = OASGetAccountTfaSetup200Response.getExample();
        OASGetAccountTfaSetup200Response getAccountTfaSetup200Response2 = OASGetAccountTfaSetup200Response.getExample();
        OASGetAccountTfaSetup200Response getAccountTfaSetup200Response3 = new OASGetAccountTfaSetup200Response();
        OASGetAccountTfaSetup200Response getAccountTfaSetup200Response4 = new OASGetAccountTfaSetup200Response();

        System.assert(getAccountTfaSetup200Response1.equals(getAccountTfaSetup200Response2));
        System.assert(getAccountTfaSetup200Response2.equals(getAccountTfaSetup200Response1));
        System.assert(getAccountTfaSetup200Response3.equals(getAccountTfaSetup200Response4));
        System.assert(getAccountTfaSetup200Response4.equals(getAccountTfaSetup200Response3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASGetAccountTfaSetup200Response getAccountTfaSetup200Response1 = OASGetAccountTfaSetup200Response.getExample();
        OASGetAccountTfaSetup200Response getAccountTfaSetup200Response2 = new OASGetAccountTfaSetup200Response();

        System.assertEquals(false, getAccountTfaSetup200Response1.equals('foo'));
        System.assertEquals(false, getAccountTfaSetup200Response2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASGetAccountTfaSetup200Response getAccountTfaSetup200Response1 = OASGetAccountTfaSetup200Response.getExample();
        OASGetAccountTfaSetup200Response getAccountTfaSetup200Response2 = new OASGetAccountTfaSetup200Response();
        OASGetAccountTfaSetup200Response getAccountTfaSetup200Response3;

        System.assertEquals(false, getAccountTfaSetup200Response1.equals(getAccountTfaSetup200Response3));
        System.assertEquals(false, getAccountTfaSetup200Response2.equals(getAccountTfaSetup200Response3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASGetAccountTfaSetup200Response getAccountTfaSetup200Response1 = OASGetAccountTfaSetup200Response.getExample();
        OASGetAccountTfaSetup200Response getAccountTfaSetup200Response2 = new OASGetAccountTfaSetup200Response();

        System.assertEquals(getAccountTfaSetup200Response1.hashCode(), getAccountTfaSetup200Response1.hashCode());
        System.assertEquals(getAccountTfaSetup200Response2.hashCode(), getAccountTfaSetup200Response2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASGetAccountTfaSetup200Response getAccountTfaSetup200Response1 = OASGetAccountTfaSetup200Response.getExample();
        OASGetAccountTfaSetup200Response getAccountTfaSetup200Response2 = OASGetAccountTfaSetup200Response.getExample();
        OASGetAccountTfaSetup200Response getAccountTfaSetup200Response3 = new OASGetAccountTfaSetup200Response();
        OASGetAccountTfaSetup200Response getAccountTfaSetup200Response4 = new OASGetAccountTfaSetup200Response();

        System.assert(getAccountTfaSetup200Response1.equals(getAccountTfaSetup200Response2));
        System.assert(getAccountTfaSetup200Response3.equals(getAccountTfaSetup200Response4));
        System.assertEquals(getAccountTfaSetup200Response1.hashCode(), getAccountTfaSetup200Response2.hashCode());
        System.assertEquals(getAccountTfaSetup200Response3.hashCode(), getAccountTfaSetup200Response4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASGetAccountTfaSetup200Response getAccountTfaSetup200Response = new OASGetAccountTfaSetup200Response();
        Map<String, String> x-property-mappings = getAccountTfaSetup200Response.getx-property-mappings();
        System.assertEquals('', x-property-mappings.get('2fa_google_key'));
        System.assertEquals('', x-property-mappings.get('2fa_google_split'));
    }
}
