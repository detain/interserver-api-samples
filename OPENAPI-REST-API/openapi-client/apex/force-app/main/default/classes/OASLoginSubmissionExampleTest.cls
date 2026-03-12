@isTest
private class OASLoginSubmissionExampleTest {
    @isTest
    private static void equalsSameInstance() {
        OASLoginSubmissionExample loginSubmissionExample1 = OASLoginSubmissionExample.getExample();
        OASLoginSubmissionExample loginSubmissionExample2 = loginSubmissionExample1;
        OASLoginSubmissionExample loginSubmissionExample3 = new OASLoginSubmissionExample();
        OASLoginSubmissionExample loginSubmissionExample4 = loginSubmissionExample3;

        System.assert(loginSubmissionExample1.equals(loginSubmissionExample2));
        System.assert(loginSubmissionExample2.equals(loginSubmissionExample1));
        System.assert(loginSubmissionExample1.equals(loginSubmissionExample1));
        System.assert(loginSubmissionExample3.equals(loginSubmissionExample4));
        System.assert(loginSubmissionExample4.equals(loginSubmissionExample3));
        System.assert(loginSubmissionExample3.equals(loginSubmissionExample3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASLoginSubmissionExample loginSubmissionExample1 = OASLoginSubmissionExample.getExample();
        OASLoginSubmissionExample loginSubmissionExample2 = OASLoginSubmissionExample.getExample();
        OASLoginSubmissionExample loginSubmissionExample3 = new OASLoginSubmissionExample();
        OASLoginSubmissionExample loginSubmissionExample4 = new OASLoginSubmissionExample();

        System.assert(loginSubmissionExample1.equals(loginSubmissionExample2));
        System.assert(loginSubmissionExample2.equals(loginSubmissionExample1));
        System.assert(loginSubmissionExample3.equals(loginSubmissionExample4));
        System.assert(loginSubmissionExample4.equals(loginSubmissionExample3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASLoginSubmissionExample loginSubmissionExample1 = OASLoginSubmissionExample.getExample();
        OASLoginSubmissionExample loginSubmissionExample2 = new OASLoginSubmissionExample();

        System.assertEquals(false, loginSubmissionExample1.equals('foo'));
        System.assertEquals(false, loginSubmissionExample2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASLoginSubmissionExample loginSubmissionExample1 = OASLoginSubmissionExample.getExample();
        OASLoginSubmissionExample loginSubmissionExample2 = new OASLoginSubmissionExample();
        OASLoginSubmissionExample loginSubmissionExample3;

        System.assertEquals(false, loginSubmissionExample1.equals(loginSubmissionExample3));
        System.assertEquals(false, loginSubmissionExample2.equals(loginSubmissionExample3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASLoginSubmissionExample loginSubmissionExample1 = OASLoginSubmissionExample.getExample();
        OASLoginSubmissionExample loginSubmissionExample2 = new OASLoginSubmissionExample();

        System.assertEquals(loginSubmissionExample1.hashCode(), loginSubmissionExample1.hashCode());
        System.assertEquals(loginSubmissionExample2.hashCode(), loginSubmissionExample2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASLoginSubmissionExample loginSubmissionExample1 = OASLoginSubmissionExample.getExample();
        OASLoginSubmissionExample loginSubmissionExample2 = OASLoginSubmissionExample.getExample();
        OASLoginSubmissionExample loginSubmissionExample3 = new OASLoginSubmissionExample();
        OASLoginSubmissionExample loginSubmissionExample4 = new OASLoginSubmissionExample();

        System.assert(loginSubmissionExample1.equals(loginSubmissionExample2));
        System.assert(loginSubmissionExample3.equals(loginSubmissionExample4));
        System.assertEquals(loginSubmissionExample1.hashCode(), loginSubmissionExample2.hashCode());
        System.assertEquals(loginSubmissionExample3.hashCode(), loginSubmissionExample4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASLoginSubmissionExample loginSubmissionExample = new OASLoginSubmissionExample();
        Map<String, String> x-property-mappings = loginSubmissionExample.getx-property-mappings();
        System.assertEquals('gRecaptchaResponse', x-property-mappings.get('g-recaptcha-response'));
    }
}
