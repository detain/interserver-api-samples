@isTest
private class OASSuccessTextResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASSuccessTextResponse successTextResponse1 = OASSuccessTextResponse.getExample();
        OASSuccessTextResponse successTextResponse2 = successTextResponse1;
        OASSuccessTextResponse successTextResponse3 = new OASSuccessTextResponse();
        OASSuccessTextResponse successTextResponse4 = successTextResponse3;

        System.assert(successTextResponse1.equals(successTextResponse2));
        System.assert(successTextResponse2.equals(successTextResponse1));
        System.assert(successTextResponse1.equals(successTextResponse1));
        System.assert(successTextResponse3.equals(successTextResponse4));
        System.assert(successTextResponse4.equals(successTextResponse3));
        System.assert(successTextResponse3.equals(successTextResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASSuccessTextResponse successTextResponse1 = OASSuccessTextResponse.getExample();
        OASSuccessTextResponse successTextResponse2 = OASSuccessTextResponse.getExample();
        OASSuccessTextResponse successTextResponse3 = new OASSuccessTextResponse();
        OASSuccessTextResponse successTextResponse4 = new OASSuccessTextResponse();

        System.assert(successTextResponse1.equals(successTextResponse2));
        System.assert(successTextResponse2.equals(successTextResponse1));
        System.assert(successTextResponse3.equals(successTextResponse4));
        System.assert(successTextResponse4.equals(successTextResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASSuccessTextResponse successTextResponse1 = OASSuccessTextResponse.getExample();
        OASSuccessTextResponse successTextResponse2 = new OASSuccessTextResponse();

        System.assertEquals(false, successTextResponse1.equals('foo'));
        System.assertEquals(false, successTextResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASSuccessTextResponse successTextResponse1 = OASSuccessTextResponse.getExample();
        OASSuccessTextResponse successTextResponse2 = new OASSuccessTextResponse();
        OASSuccessTextResponse successTextResponse3;

        System.assertEquals(false, successTextResponse1.equals(successTextResponse3));
        System.assertEquals(false, successTextResponse2.equals(successTextResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASSuccessTextResponse successTextResponse1 = OASSuccessTextResponse.getExample();
        OASSuccessTextResponse successTextResponse2 = new OASSuccessTextResponse();

        System.assertEquals(successTextResponse1.hashCode(), successTextResponse1.hashCode());
        System.assertEquals(successTextResponse2.hashCode(), successTextResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASSuccessTextResponse successTextResponse1 = OASSuccessTextResponse.getExample();
        OASSuccessTextResponse successTextResponse2 = OASSuccessTextResponse.getExample();
        OASSuccessTextResponse successTextResponse3 = new OASSuccessTextResponse();
        OASSuccessTextResponse successTextResponse4 = new OASSuccessTextResponse();

        System.assert(successTextResponse1.equals(successTextResponse2));
        System.assert(successTextResponse3.equals(successTextResponse4));
        System.assertEquals(successTextResponse1.hashCode(), successTextResponse2.hashCode());
        System.assertEquals(successTextResponse3.hashCode(), successTextResponse4.hashCode());
    }
}
