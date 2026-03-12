@isTest
private class OASPatchOauthTwoFactor200ResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASPatchOauthTwoFactor200Response patchOauthTwoFactor200Response1 = OASPatchOauthTwoFactor200Response.getExample();
        OASPatchOauthTwoFactor200Response patchOauthTwoFactor200Response2 = patchOauthTwoFactor200Response1;
        OASPatchOauthTwoFactor200Response patchOauthTwoFactor200Response3 = new OASPatchOauthTwoFactor200Response();
        OASPatchOauthTwoFactor200Response patchOauthTwoFactor200Response4 = patchOauthTwoFactor200Response3;

        System.assert(patchOauthTwoFactor200Response1.equals(patchOauthTwoFactor200Response2));
        System.assert(patchOauthTwoFactor200Response2.equals(patchOauthTwoFactor200Response1));
        System.assert(patchOauthTwoFactor200Response1.equals(patchOauthTwoFactor200Response1));
        System.assert(patchOauthTwoFactor200Response3.equals(patchOauthTwoFactor200Response4));
        System.assert(patchOauthTwoFactor200Response4.equals(patchOauthTwoFactor200Response3));
        System.assert(patchOauthTwoFactor200Response3.equals(patchOauthTwoFactor200Response3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASPatchOauthTwoFactor200Response patchOauthTwoFactor200Response1 = OASPatchOauthTwoFactor200Response.getExample();
        OASPatchOauthTwoFactor200Response patchOauthTwoFactor200Response2 = OASPatchOauthTwoFactor200Response.getExample();
        OASPatchOauthTwoFactor200Response patchOauthTwoFactor200Response3 = new OASPatchOauthTwoFactor200Response();
        OASPatchOauthTwoFactor200Response patchOauthTwoFactor200Response4 = new OASPatchOauthTwoFactor200Response();

        System.assert(patchOauthTwoFactor200Response1.equals(patchOauthTwoFactor200Response2));
        System.assert(patchOauthTwoFactor200Response2.equals(patchOauthTwoFactor200Response1));
        System.assert(patchOauthTwoFactor200Response3.equals(patchOauthTwoFactor200Response4));
        System.assert(patchOauthTwoFactor200Response4.equals(patchOauthTwoFactor200Response3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASPatchOauthTwoFactor200Response patchOauthTwoFactor200Response1 = OASPatchOauthTwoFactor200Response.getExample();
        OASPatchOauthTwoFactor200Response patchOauthTwoFactor200Response2 = new OASPatchOauthTwoFactor200Response();

        System.assertEquals(false, patchOauthTwoFactor200Response1.equals('foo'));
        System.assertEquals(false, patchOauthTwoFactor200Response2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASPatchOauthTwoFactor200Response patchOauthTwoFactor200Response1 = OASPatchOauthTwoFactor200Response.getExample();
        OASPatchOauthTwoFactor200Response patchOauthTwoFactor200Response2 = new OASPatchOauthTwoFactor200Response();
        OASPatchOauthTwoFactor200Response patchOauthTwoFactor200Response3;

        System.assertEquals(false, patchOauthTwoFactor200Response1.equals(patchOauthTwoFactor200Response3));
        System.assertEquals(false, patchOauthTwoFactor200Response2.equals(patchOauthTwoFactor200Response3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASPatchOauthTwoFactor200Response patchOauthTwoFactor200Response1 = OASPatchOauthTwoFactor200Response.getExample();
        OASPatchOauthTwoFactor200Response patchOauthTwoFactor200Response2 = new OASPatchOauthTwoFactor200Response();

        System.assertEquals(patchOauthTwoFactor200Response1.hashCode(), patchOauthTwoFactor200Response1.hashCode());
        System.assertEquals(patchOauthTwoFactor200Response2.hashCode(), patchOauthTwoFactor200Response2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASPatchOauthTwoFactor200Response patchOauthTwoFactor200Response1 = OASPatchOauthTwoFactor200Response.getExample();
        OASPatchOauthTwoFactor200Response patchOauthTwoFactor200Response2 = OASPatchOauthTwoFactor200Response.getExample();
        OASPatchOauthTwoFactor200Response patchOauthTwoFactor200Response3 = new OASPatchOauthTwoFactor200Response();
        OASPatchOauthTwoFactor200Response patchOauthTwoFactor200Response4 = new OASPatchOauthTwoFactor200Response();

        System.assert(patchOauthTwoFactor200Response1.equals(patchOauthTwoFactor200Response2));
        System.assert(patchOauthTwoFactor200Response3.equals(patchOauthTwoFactor200Response4));
        System.assertEquals(patchOauthTwoFactor200Response1.hashCode(), patchOauthTwoFactor200Response2.hashCode());
        System.assertEquals(patchOauthTwoFactor200Response3.hashCode(), patchOauthTwoFactor200Response4.hashCode());
    }
}
