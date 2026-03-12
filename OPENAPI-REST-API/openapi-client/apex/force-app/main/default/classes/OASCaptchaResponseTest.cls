@isTest
private class OASCaptchaResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASCaptchaResponse captchaResponse1 = OASCaptchaResponse.getExample();
        OASCaptchaResponse captchaResponse2 = captchaResponse1;
        OASCaptchaResponse captchaResponse3 = new OASCaptchaResponse();
        OASCaptchaResponse captchaResponse4 = captchaResponse3;

        System.assert(captchaResponse1.equals(captchaResponse2));
        System.assert(captchaResponse2.equals(captchaResponse1));
        System.assert(captchaResponse1.equals(captchaResponse1));
        System.assert(captchaResponse3.equals(captchaResponse4));
        System.assert(captchaResponse4.equals(captchaResponse3));
        System.assert(captchaResponse3.equals(captchaResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASCaptchaResponse captchaResponse1 = OASCaptchaResponse.getExample();
        OASCaptchaResponse captchaResponse2 = OASCaptchaResponse.getExample();
        OASCaptchaResponse captchaResponse3 = new OASCaptchaResponse();
        OASCaptchaResponse captchaResponse4 = new OASCaptchaResponse();

        System.assert(captchaResponse1.equals(captchaResponse2));
        System.assert(captchaResponse2.equals(captchaResponse1));
        System.assert(captchaResponse3.equals(captchaResponse4));
        System.assert(captchaResponse4.equals(captchaResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASCaptchaResponse captchaResponse1 = OASCaptchaResponse.getExample();
        OASCaptchaResponse captchaResponse2 = new OASCaptchaResponse();

        System.assertEquals(false, captchaResponse1.equals('foo'));
        System.assertEquals(false, captchaResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASCaptchaResponse captchaResponse1 = OASCaptchaResponse.getExample();
        OASCaptchaResponse captchaResponse2 = new OASCaptchaResponse();
        OASCaptchaResponse captchaResponse3;

        System.assertEquals(false, captchaResponse1.equals(captchaResponse3));
        System.assertEquals(false, captchaResponse2.equals(captchaResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASCaptchaResponse captchaResponse1 = OASCaptchaResponse.getExample();
        OASCaptchaResponse captchaResponse2 = new OASCaptchaResponse();

        System.assertEquals(captchaResponse1.hashCode(), captchaResponse1.hashCode());
        System.assertEquals(captchaResponse2.hashCode(), captchaResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASCaptchaResponse captchaResponse1 = OASCaptchaResponse.getExample();
        OASCaptchaResponse captchaResponse2 = OASCaptchaResponse.getExample();
        OASCaptchaResponse captchaResponse3 = new OASCaptchaResponse();
        OASCaptchaResponse captchaResponse4 = new OASCaptchaResponse();

        System.assert(captchaResponse1.equals(captchaResponse2));
        System.assert(captchaResponse3.equals(captchaResponse4));
        System.assertEquals(captchaResponse1.hashCode(), captchaResponse2.hashCode());
        System.assertEquals(captchaResponse3.hashCode(), captchaResponse4.hashCode());
    }
}
