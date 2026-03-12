@isTest
private class OASPatchOauthTwoFactorRequestTest {
    @isTest
    private static void equalsSameInstance() {
        OASPatchOauthTwoFactorRequest patchOauthTwoFactorRequest1 = OASPatchOauthTwoFactorRequest.getExample();
        OASPatchOauthTwoFactorRequest patchOauthTwoFactorRequest2 = patchOauthTwoFactorRequest1;
        OASPatchOauthTwoFactorRequest patchOauthTwoFactorRequest3 = new OASPatchOauthTwoFactorRequest();
        OASPatchOauthTwoFactorRequest patchOauthTwoFactorRequest4 = patchOauthTwoFactorRequest3;

        System.assert(patchOauthTwoFactorRequest1.equals(patchOauthTwoFactorRequest2));
        System.assert(patchOauthTwoFactorRequest2.equals(patchOauthTwoFactorRequest1));
        System.assert(patchOauthTwoFactorRequest1.equals(patchOauthTwoFactorRequest1));
        System.assert(patchOauthTwoFactorRequest3.equals(patchOauthTwoFactorRequest4));
        System.assert(patchOauthTwoFactorRequest4.equals(patchOauthTwoFactorRequest3));
        System.assert(patchOauthTwoFactorRequest3.equals(patchOauthTwoFactorRequest3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASPatchOauthTwoFactorRequest patchOauthTwoFactorRequest1 = OASPatchOauthTwoFactorRequest.getExample();
        OASPatchOauthTwoFactorRequest patchOauthTwoFactorRequest2 = OASPatchOauthTwoFactorRequest.getExample();
        OASPatchOauthTwoFactorRequest patchOauthTwoFactorRequest3 = new OASPatchOauthTwoFactorRequest();
        OASPatchOauthTwoFactorRequest patchOauthTwoFactorRequest4 = new OASPatchOauthTwoFactorRequest();

        System.assert(patchOauthTwoFactorRequest1.equals(patchOauthTwoFactorRequest2));
        System.assert(patchOauthTwoFactorRequest2.equals(patchOauthTwoFactorRequest1));
        System.assert(patchOauthTwoFactorRequest3.equals(patchOauthTwoFactorRequest4));
        System.assert(patchOauthTwoFactorRequest4.equals(patchOauthTwoFactorRequest3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASPatchOauthTwoFactorRequest patchOauthTwoFactorRequest1 = OASPatchOauthTwoFactorRequest.getExample();
        OASPatchOauthTwoFactorRequest patchOauthTwoFactorRequest2 = new OASPatchOauthTwoFactorRequest();

        System.assertEquals(false, patchOauthTwoFactorRequest1.equals('foo'));
        System.assertEquals(false, patchOauthTwoFactorRequest2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASPatchOauthTwoFactorRequest patchOauthTwoFactorRequest1 = OASPatchOauthTwoFactorRequest.getExample();
        OASPatchOauthTwoFactorRequest patchOauthTwoFactorRequest2 = new OASPatchOauthTwoFactorRequest();
        OASPatchOauthTwoFactorRequest patchOauthTwoFactorRequest3;

        System.assertEquals(false, patchOauthTwoFactorRequest1.equals(patchOauthTwoFactorRequest3));
        System.assertEquals(false, patchOauthTwoFactorRequest2.equals(patchOauthTwoFactorRequest3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASPatchOauthTwoFactorRequest patchOauthTwoFactorRequest1 = OASPatchOauthTwoFactorRequest.getExample();
        OASPatchOauthTwoFactorRequest patchOauthTwoFactorRequest2 = new OASPatchOauthTwoFactorRequest();

        System.assertEquals(patchOauthTwoFactorRequest1.hashCode(), patchOauthTwoFactorRequest1.hashCode());
        System.assertEquals(patchOauthTwoFactorRequest2.hashCode(), patchOauthTwoFactorRequest2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASPatchOauthTwoFactorRequest patchOauthTwoFactorRequest1 = OASPatchOauthTwoFactorRequest.getExample();
        OASPatchOauthTwoFactorRequest patchOauthTwoFactorRequest2 = OASPatchOauthTwoFactorRequest.getExample();
        OASPatchOauthTwoFactorRequest patchOauthTwoFactorRequest3 = new OASPatchOauthTwoFactorRequest();
        OASPatchOauthTwoFactorRequest patchOauthTwoFactorRequest4 = new OASPatchOauthTwoFactorRequest();

        System.assert(patchOauthTwoFactorRequest1.equals(patchOauthTwoFactorRequest2));
        System.assert(patchOauthTwoFactorRequest3.equals(patchOauthTwoFactorRequest4));
        System.assertEquals(patchOauthTwoFactorRequest1.hashCode(), patchOauthTwoFactorRequest2.hashCode());
        System.assertEquals(patchOauthTwoFactorRequest3.hashCode(), patchOauthTwoFactorRequest4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASPatchOauthTwoFactorRequest patchOauthTwoFactorRequest = new OASPatchOauthTwoFactorRequest();
        Map<String, String> x-property-mappings = patchOauthTwoFactorRequest.getx-property-mappings();
        System.assertEquals('accountId', x-property-mappings.get('account_id'));
    }
}
