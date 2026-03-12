@isTest
private class OASLoginSubmissionExampleGRecaptchaRTest {
    @isTest
    private static void equalsSameInstance() {
        OASLoginSubmissionExampleGRecaptchaR loginSubmissionExampleGRecaptchaResponse1 = OASLoginSubmissionExampleGRecaptchaR.getExample();
        OASLoginSubmissionExampleGRecaptchaR loginSubmissionExampleGRecaptchaResponse2 = loginSubmissionExampleGRecaptchaResponse1;
        OASLoginSubmissionExampleGRecaptchaR loginSubmissionExampleGRecaptchaResponse3 = new OASLoginSubmissionExampleGRecaptchaR();
        OASLoginSubmissionExampleGRecaptchaR loginSubmissionExampleGRecaptchaResponse4 = loginSubmissionExampleGRecaptchaResponse3;

        System.assert(loginSubmissionExampleGRecaptchaResponse1.equals(loginSubmissionExampleGRecaptchaResponse2));
        System.assert(loginSubmissionExampleGRecaptchaResponse2.equals(loginSubmissionExampleGRecaptchaResponse1));
        System.assert(loginSubmissionExampleGRecaptchaResponse1.equals(loginSubmissionExampleGRecaptchaResponse1));
        System.assert(loginSubmissionExampleGRecaptchaResponse3.equals(loginSubmissionExampleGRecaptchaResponse4));
        System.assert(loginSubmissionExampleGRecaptchaResponse4.equals(loginSubmissionExampleGRecaptchaResponse3));
        System.assert(loginSubmissionExampleGRecaptchaResponse3.equals(loginSubmissionExampleGRecaptchaResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASLoginSubmissionExampleGRecaptchaR loginSubmissionExampleGRecaptchaResponse1 = OASLoginSubmissionExampleGRecaptchaR.getExample();
        OASLoginSubmissionExampleGRecaptchaR loginSubmissionExampleGRecaptchaResponse2 = OASLoginSubmissionExampleGRecaptchaR.getExample();
        OASLoginSubmissionExampleGRecaptchaR loginSubmissionExampleGRecaptchaResponse3 = new OASLoginSubmissionExampleGRecaptchaR();
        OASLoginSubmissionExampleGRecaptchaR loginSubmissionExampleGRecaptchaResponse4 = new OASLoginSubmissionExampleGRecaptchaR();

        System.assert(loginSubmissionExampleGRecaptchaResponse1.equals(loginSubmissionExampleGRecaptchaResponse2));
        System.assert(loginSubmissionExampleGRecaptchaResponse2.equals(loginSubmissionExampleGRecaptchaResponse1));
        System.assert(loginSubmissionExampleGRecaptchaResponse3.equals(loginSubmissionExampleGRecaptchaResponse4));
        System.assert(loginSubmissionExampleGRecaptchaResponse4.equals(loginSubmissionExampleGRecaptchaResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASLoginSubmissionExampleGRecaptchaR loginSubmissionExampleGRecaptchaResponse1 = OASLoginSubmissionExampleGRecaptchaR.getExample();
        OASLoginSubmissionExampleGRecaptchaR loginSubmissionExampleGRecaptchaResponse2 = new OASLoginSubmissionExampleGRecaptchaR();

        System.assertEquals(false, loginSubmissionExampleGRecaptchaResponse1.equals('foo'));
        System.assertEquals(false, loginSubmissionExampleGRecaptchaResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASLoginSubmissionExampleGRecaptchaR loginSubmissionExampleGRecaptchaResponse1 = OASLoginSubmissionExampleGRecaptchaR.getExample();
        OASLoginSubmissionExampleGRecaptchaR loginSubmissionExampleGRecaptchaResponse2 = new OASLoginSubmissionExampleGRecaptchaR();
        OASLoginSubmissionExampleGRecaptchaR loginSubmissionExampleGRecaptchaResponse3;

        System.assertEquals(false, loginSubmissionExampleGRecaptchaResponse1.equals(loginSubmissionExampleGRecaptchaResponse3));
        System.assertEquals(false, loginSubmissionExampleGRecaptchaResponse2.equals(loginSubmissionExampleGRecaptchaResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASLoginSubmissionExampleGRecaptchaR loginSubmissionExampleGRecaptchaResponse1 = OASLoginSubmissionExampleGRecaptchaR.getExample();
        OASLoginSubmissionExampleGRecaptchaR loginSubmissionExampleGRecaptchaResponse2 = new OASLoginSubmissionExampleGRecaptchaR();

        System.assertEquals(loginSubmissionExampleGRecaptchaResponse1.hashCode(), loginSubmissionExampleGRecaptchaResponse1.hashCode());
        System.assertEquals(loginSubmissionExampleGRecaptchaResponse2.hashCode(), loginSubmissionExampleGRecaptchaResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASLoginSubmissionExampleGRecaptchaR loginSubmissionExampleGRecaptchaResponse1 = OASLoginSubmissionExampleGRecaptchaR.getExample();
        OASLoginSubmissionExampleGRecaptchaR loginSubmissionExampleGRecaptchaResponse2 = OASLoginSubmissionExampleGRecaptchaR.getExample();
        OASLoginSubmissionExampleGRecaptchaR loginSubmissionExampleGRecaptchaResponse3 = new OASLoginSubmissionExampleGRecaptchaR();
        OASLoginSubmissionExampleGRecaptchaR loginSubmissionExampleGRecaptchaResponse4 = new OASLoginSubmissionExampleGRecaptchaR();

        System.assert(loginSubmissionExampleGRecaptchaResponse1.equals(loginSubmissionExampleGRecaptchaResponse2));
        System.assert(loginSubmissionExampleGRecaptchaResponse3.equals(loginSubmissionExampleGRecaptchaResponse4));
        System.assertEquals(loginSubmissionExampleGRecaptchaResponse1.hashCode(), loginSubmissionExampleGRecaptchaResponse2.hashCode());
        System.assertEquals(loginSubmissionExampleGRecaptchaResponse3.hashCode(), loginSubmissionExampleGRecaptchaResponse4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASLoginSubmissionExampleGRecaptchaR loginSubmissionExampleGRecaptchaResponse = new OASLoginSubmissionExampleGRecaptchaR();
        Map<String, String> x-property-mappings = loginSubmissionExampleGRecaptchaResponse.getx-property-mappings();
        System.assertEquals('vIsShallow', x-property-mappings.get('__v_isShallow'));
        System.assertEquals('vIsRef', x-property-mappings.get('__v_isRef'));
        System.assertEquals('rawValue', x-property-mappings.get('_rawValue'));
        System.assertEquals('value', x-property-mappings.get('_value'));
    }
}
