@isTest
private class OASGenericResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASGenericResponse genericResponse1 = OASGenericResponse.getExample();
        OASGenericResponse genericResponse2 = genericResponse1;
        OASGenericResponse genericResponse3 = new OASGenericResponse();
        OASGenericResponse genericResponse4 = genericResponse3;

        System.assert(genericResponse1.equals(genericResponse2));
        System.assert(genericResponse2.equals(genericResponse1));
        System.assert(genericResponse1.equals(genericResponse1));
        System.assert(genericResponse3.equals(genericResponse4));
        System.assert(genericResponse4.equals(genericResponse3));
        System.assert(genericResponse3.equals(genericResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASGenericResponse genericResponse1 = OASGenericResponse.getExample();
        OASGenericResponse genericResponse2 = OASGenericResponse.getExample();
        OASGenericResponse genericResponse3 = new OASGenericResponse();
        OASGenericResponse genericResponse4 = new OASGenericResponse();

        System.assert(genericResponse1.equals(genericResponse2));
        System.assert(genericResponse2.equals(genericResponse1));
        System.assert(genericResponse3.equals(genericResponse4));
        System.assert(genericResponse4.equals(genericResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASGenericResponse genericResponse1 = OASGenericResponse.getExample();
        OASGenericResponse genericResponse2 = new OASGenericResponse();

        System.assertEquals(false, genericResponse1.equals('foo'));
        System.assertEquals(false, genericResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASGenericResponse genericResponse1 = OASGenericResponse.getExample();
        OASGenericResponse genericResponse2 = new OASGenericResponse();
        OASGenericResponse genericResponse3;

        System.assertEquals(false, genericResponse1.equals(genericResponse3));
        System.assertEquals(false, genericResponse2.equals(genericResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASGenericResponse genericResponse1 = OASGenericResponse.getExample();
        OASGenericResponse genericResponse2 = new OASGenericResponse();

        System.assertEquals(genericResponse1.hashCode(), genericResponse1.hashCode());
        System.assertEquals(genericResponse2.hashCode(), genericResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASGenericResponse genericResponse1 = OASGenericResponse.getExample();
        OASGenericResponse genericResponse2 = OASGenericResponse.getExample();
        OASGenericResponse genericResponse3 = new OASGenericResponse();
        OASGenericResponse genericResponse4 = new OASGenericResponse();

        System.assert(genericResponse1.equals(genericResponse2));
        System.assert(genericResponse3.equals(genericResponse4));
        System.assertEquals(genericResponse1.hashCode(), genericResponse2.hashCode());
        System.assertEquals(genericResponse3.hashCode(), genericResponse4.hashCode());
    }
}
