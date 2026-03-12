@isTest
private class OASTextResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASTextResponse textResponse1 = OASTextResponse.getExample();
        OASTextResponse textResponse2 = textResponse1;
        OASTextResponse textResponse3 = new OASTextResponse();
        OASTextResponse textResponse4 = textResponse3;

        System.assert(textResponse1.equals(textResponse2));
        System.assert(textResponse2.equals(textResponse1));
        System.assert(textResponse1.equals(textResponse1));
        System.assert(textResponse3.equals(textResponse4));
        System.assert(textResponse4.equals(textResponse3));
        System.assert(textResponse3.equals(textResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASTextResponse textResponse1 = OASTextResponse.getExample();
        OASTextResponse textResponse2 = OASTextResponse.getExample();
        OASTextResponse textResponse3 = new OASTextResponse();
        OASTextResponse textResponse4 = new OASTextResponse();

        System.assert(textResponse1.equals(textResponse2));
        System.assert(textResponse2.equals(textResponse1));
        System.assert(textResponse3.equals(textResponse4));
        System.assert(textResponse4.equals(textResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASTextResponse textResponse1 = OASTextResponse.getExample();
        OASTextResponse textResponse2 = new OASTextResponse();

        System.assertEquals(false, textResponse1.equals('foo'));
        System.assertEquals(false, textResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASTextResponse textResponse1 = OASTextResponse.getExample();
        OASTextResponse textResponse2 = new OASTextResponse();
        OASTextResponse textResponse3;

        System.assertEquals(false, textResponse1.equals(textResponse3));
        System.assertEquals(false, textResponse2.equals(textResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASTextResponse textResponse1 = OASTextResponse.getExample();
        OASTextResponse textResponse2 = new OASTextResponse();

        System.assertEquals(textResponse1.hashCode(), textResponse1.hashCode());
        System.assertEquals(textResponse2.hashCode(), textResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASTextResponse textResponse1 = OASTextResponse.getExample();
        OASTextResponse textResponse2 = OASTextResponse.getExample();
        OASTextResponse textResponse3 = new OASTextResponse();
        OASTextResponse textResponse4 = new OASTextResponse();

        System.assert(textResponse1.equals(textResponse2));
        System.assert(textResponse3.equals(textResponse4));
        System.assertEquals(textResponse1.hashCode(), textResponse2.hashCode());
        System.assertEquals(textResponse3.hashCode(), textResponse4.hashCode());
    }
}
